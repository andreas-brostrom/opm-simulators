// -*- mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
// vi: set et ts=4 sw=4 sts=4:
/*
  This file is part of the Open Porous Media project (OPM).

  OPM is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  OPM is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with OPM.  If not, see <http://www.gnu.org/licenses/>.

  Consult the COPYING file in the top-level source directory of this
  module for the precise wording of the license and the list of
  copyright holders.
*/
/*!
 * \file
 * \copydoc Opm::VtkBlackOilPolymerModule
 */
#ifndef EWOMS_VTK_BLACK_OIL_POLYMER_MODULE_HH
#define EWOMS_VTK_BLACK_OIL_POLYMER_MODULE_HH

#include <dune/common/fvector.hh>

#include <opm/material/densead/Math.hpp>

#include <opm/models/blackoil/blackoilproperties.hh>

#include <opm/models/discretization/common/fvbaseparameters.hh>

#include <opm/models/io/baseoutputmodule.hh>
#include <opm/models/io/vtkmultiwriter.hh>

#include <opm/models/utils/parametersystem.hpp>
#include <opm/models/utils/propertysystem.hh>

namespace Opm::Properties::TTag {

// create new type tag for the VTK multi-phase output
struct VtkBlackOilPolymer {};

} // namespace Opm::Properties::TTag

namespace Opm::Parameters {

// set default values for what quantities to output
struct VtkWritePolymerConcentration { static constexpr bool value = true; };
struct VtkWritePolymerDeadPoreVolume { static constexpr bool value = true; };
struct VtkWritePolymerViscosityCorrection { static constexpr bool value = true; };
struct VtkWriteWaterViscosityCorrection { static constexpr bool value = true; };
struct VtkWritePolymerRockDensity { static constexpr bool value = true; };
struct VtkWritePolymerAdsorption { static constexpr bool value = true; };

} // namespace Opm::Parameters

namespace Opm {
/*!
 * \ingroup Vtk
 *
 * \brief VTK output module for the black oil model's polymer related quantities.
 */
template <class TypeTag>
class VtkBlackOilPolymerModule : public BaseOutputModule<TypeTag>
{
    using ParentType = BaseOutputModule<TypeTag>;

    using Simulator = GetPropType<TypeTag, Properties::Simulator>;
    using GridView = GetPropType<TypeTag, Properties::GridView>;
    using Scalar = GetPropType<TypeTag, Properties::Scalar>;
    using Evaluation = GetPropType<TypeTag, Properties::Evaluation>;
    using ElementContext = GetPropType<TypeTag, Properties::ElementContext>;

    static const int vtkFormat = getPropValue<TypeTag, Properties::VtkOutputFormat>();
    using VtkMultiWriter = ::Opm::VtkMultiWriter<GridView, vtkFormat>;

    enum { enablePolymer = getPropValue<TypeTag, Properties::EnablePolymer>() };

    using ScalarBuffer = typename ParentType::ScalarBuffer;

public:
    VtkBlackOilPolymerModule(const Simulator& simulator)
        : ParentType(simulator)
    { }

    /*!
     * \brief Register all run-time parameters for the multi-phase VTK output
     * module.
     */
    static void registerParameters()
    {
        if (!enablePolymer)
            return;

        Parameters::Register<Parameters::VtkWritePolymerConcentration>
            ("Include the concentration of the polymer component in the water phase "
             "in the VTK output files");
        Parameters::Register<Parameters::VtkWritePolymerDeadPoreVolume>
            ("Include the fraction of the \"dead\" pore volume "
             "in the VTK output files");
        Parameters::Register<Parameters::VtkWritePolymerRockDensity>
            ("Include the amount of already adsorbed polymer component"
             "in the VTK output files");
        Parameters::Register<Parameters::VtkWritePolymerAdsorption>
            ("Include the adsorption rate of the polymer component"
             "in the VTK output files");
        Parameters::Register<Parameters::VtkWritePolymerViscosityCorrection>
            ("Include the viscosity correction of the polymer component "
             "in the VTK output files");
        Parameters::Register<Parameters::VtkWriteWaterViscosityCorrection>
            ("Include the viscosity correction of the water component "
             "due to polymers in the VTK output files");
    }

    /*!
     * \brief Allocate memory for the scalar fields we would like to
     *        write to the VTK file.
     */
    void allocBuffers()
    {
        if (!Parameters::Get<Parameters::EnableVtkOutput>()) {
            return;
        }

        if (!enablePolymer)
            return;

        if (polymerConcentrationOutput_())
            this->resizeScalarBuffer_(polymerConcentration_);
        if (polymerDeadPoreVolumeOutput_())
            this->resizeScalarBuffer_(polymerDeadPoreVolume_);
        if (polymerRockDensityOutput_())
            this->resizeScalarBuffer_(polymerRockDensity_);
        if (polymerAdsorptionOutput_())
            this->resizeScalarBuffer_(polymerAdsorption_);
        if (polymerViscosityCorrectionOutput_())
            this->resizeScalarBuffer_(polymerViscosityCorrection_);
        if (waterViscosityCorrectionOutput_())
            this->resizeScalarBuffer_(waterViscosityCorrection_);
    }

    /*!
     * \brief Modify the internal buffers according to the intensive quantities relevant for
     *        an element
     */
    void processElement(const ElementContext& elemCtx)
    {
        if (!Parameters::Get<Parameters::EnableVtkOutput>()) {
            return;
        }

        if (!enablePolymer)
            return;

        for (unsigned dofIdx = 0; dofIdx < elemCtx.numPrimaryDof(/*timeIdx=*/0); ++dofIdx) {
            const auto& intQuants = elemCtx.intensiveQuantities(dofIdx, /*timeIdx=*/0);
            unsigned globalDofIdx = elemCtx.globalSpaceIndex(dofIdx, /*timeIdx=*/0);

            if (polymerConcentrationOutput_())
                polymerConcentration_[globalDofIdx] =
                    scalarValue(intQuants.polymerConcentration());

            if (polymerDeadPoreVolumeOutput_())
                polymerDeadPoreVolume_[globalDofIdx] =
                    scalarValue(intQuants.polymerDeadPoreVolume());

            if (polymerRockDensityOutput_())
                polymerRockDensity_[globalDofIdx] =
                    scalarValue(intQuants.polymerRockDensity());

            if (polymerAdsorptionOutput_())
                polymerAdsorption_[globalDofIdx] =
                    scalarValue(intQuants.polymerAdsorption());

            if (polymerViscosityCorrectionOutput_())
                polymerViscosityCorrection_[globalDofIdx] =
                    scalarValue(intQuants.polymerViscosityCorrection());

            if (waterViscosityCorrectionOutput_())
                waterViscosityCorrection_[globalDofIdx] =
                    scalarValue(intQuants.waterViscosityCorrection());
        }
    }

    /*!
     * \brief Add all buffers to the VTK output writer.
     */
    void commitBuffers(BaseOutputWriter& baseWriter)
    {
        VtkMultiWriter *vtkWriter = dynamic_cast<VtkMultiWriter*>(&baseWriter);
        if (!vtkWriter)
            return;

        if (!enablePolymer)
            return;

        if (polymerConcentrationOutput_())
            this->commitScalarBuffer_(baseWriter, "polymer concentration", polymerConcentration_);

        if (polymerDeadPoreVolumeOutput_())
            this->commitScalarBuffer_(baseWriter, "dead pore volume fraction", polymerDeadPoreVolume_);

        if (polymerRockDensityOutput_())
            this->commitScalarBuffer_(baseWriter, "polymer rock density", polymerRockDensity_);

        if (polymerAdsorptionOutput_())
            this->commitScalarBuffer_(baseWriter, "polymer adsorption", polymerAdsorption_);

        if (polymerViscosityCorrectionOutput_())
            this->commitScalarBuffer_(baseWriter, "polymer viscosity correction", polymerViscosityCorrection_);

        if (waterViscosityCorrectionOutput_())
            this->commitScalarBuffer_(baseWriter, "water viscosity correction", waterViscosityCorrection_);
    }

private:
    static bool polymerConcentrationOutput_()
    {
        static bool val = Parameters::Get<Parameters::VtkWritePolymerConcentration>();
        return val;
    }

    static bool polymerDeadPoreVolumeOutput_()
    {
        static bool val = Parameters::Get<Parameters::VtkWritePolymerDeadPoreVolume>();
        return val;
    }

    static bool polymerRockDensityOutput_()
    {
        static bool val = Parameters::Get<Parameters::VtkWritePolymerRockDensity>();
        return val;
    }

    static bool polymerAdsorptionOutput_()
    {
        static bool val = Parameters::Get<Parameters::VtkWritePolymerAdsorption>();
        return val;
    }

    static bool polymerViscosityCorrectionOutput_()
    {
        static bool val = Parameters::Get<Parameters::VtkWritePolymerViscosityCorrection>();
        return val;
    }

    static bool waterViscosityCorrectionOutput_()
    {
        static bool val = Parameters::Get<Parameters::VtkWritePolymerViscosityCorrection>();
        return val;
    }

    ScalarBuffer polymerConcentration_;
    ScalarBuffer polymerDeadPoreVolume_;
    ScalarBuffer polymerRockDensity_;
    ScalarBuffer polymerAdsorption_;
    ScalarBuffer polymerViscosityCorrection_;
    ScalarBuffer waterViscosityCorrection_;
};
} // namespace Opm

#endif
