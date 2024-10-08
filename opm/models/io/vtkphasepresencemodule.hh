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
 * \copydoc Opm::VtkPhasePresenceModule
 */
#ifndef EWOMS_VTK_PHASE_PRESENCE_MODULE_HH
#define EWOMS_VTK_PHASE_PRESENCE_MODULE_HH

#include <opm/models/discretization/common/fvbaseparameters.hh>

#include <opm/models/io/baseoutputmodule.hh>
#include <opm/models/io/vtkmultiwriter.hh>

#include <opm/models/utils/parametersystem.hpp>
#include <opm/models/utils/propertysystem.hh>

namespace Opm::Parameters {

struct VtkWritePhasePresence { static constexpr bool value = false; };

} // namespace Opm::Parameters

namespace Opm {
/*!
 * \ingroup Vtk
 *
 * \brief VTK output module for the fluid composition
 */
template<class TypeTag>
class VtkPhasePresenceModule : public BaseOutputModule<TypeTag>
{
    using ParentType = BaseOutputModule<TypeTag>;

    using Simulator = GetPropType<TypeTag, Properties::Simulator>;
    using Scalar = GetPropType<TypeTag, Properties::Scalar>;
    using ElementContext = GetPropType<TypeTag, Properties::ElementContext>;
    using GridView = GetPropType<TypeTag, Properties::GridView>;

    static const int vtkFormat = getPropValue<TypeTag, Properties::VtkOutputFormat>();
    using VtkMultiWriter = Opm::VtkMultiWriter<GridView, vtkFormat>;

    using ScalarBuffer = typename ParentType::ScalarBuffer;


public:
    VtkPhasePresenceModule(const Simulator& simulator)
        : ParentType(simulator)
    { }

    /*!
     * \brief Register all run-time parameters for the Vtk output module.
     */
    static void registerParameters()
    {
        Parameters::Register<Parameters::VtkWritePhasePresence>
            ("Include the phase presence pseudo primary "
             "variable in the VTK output files");
    }

    /*!
     * \brief Allocate memory for the scalar fields we would like to
     *        write to the VTK file.
     */
    void allocBuffers()
    {
        if (phasePresenceOutput_()) this->resizeScalarBuffer_(phasePresence_);
    }

    /*!
     * \brief Modify the internal buffers according to the intensive quanties relevant
     *        for an element
     */
    void processElement(const ElementContext& elemCtx)
    {
        if (!Parameters::Get<Parameters::EnableVtkOutput>()) {
            return;
        }

        for (unsigned i = 0; i < elemCtx.numPrimaryDof(/*timeIdx=*/0); ++i) {
            // calculate the phase presence
            int phasePresence = elemCtx.primaryVars(i, /*timeIdx=*/0).phasePresence();
            unsigned I = elemCtx.globalSpaceIndex(i, /*timeIdx=*/0);

            if (phasePresenceOutput_())
                phasePresence_[I] = phasePresence;
        }
    }

    /*!
     * \brief Add all buffers to the output writer.
     */
    void commitBuffers(BaseOutputWriter& baseWriter)
    {
        VtkMultiWriter *vtkWriter = dynamic_cast<VtkMultiWriter*>(&baseWriter);
        if (!vtkWriter) {
            return;
        }

        if (phasePresenceOutput_())
            this->commitScalarBuffer_(baseWriter, "phase presence", phasePresence_);
    }

private:
    static bool phasePresenceOutput_()
    {
        static bool val = Parameters::Get<Parameters::VtkWritePhasePresence>();
        return val;
    }

    ScalarBuffer phasePresence_;
};

} // namespace Opm

#endif
