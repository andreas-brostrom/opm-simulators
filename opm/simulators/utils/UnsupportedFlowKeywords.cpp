/*
  Copyright 2021 Equinor.

  This file is part of the Open Porous Media project (OPM).

  OPM is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  OPM is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with OPM.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <opm/simulators/utils/UnsupportedFlowKeywords.hpp>

namespace Opm::FlowKeywordValidation
{

const KeywordValidation::UnsupportedKeywords& unsupportedKeywords()
{
    static const KeywordValidation::UnsupportedKeywords unsupported_keywords = {
        {"ACTION", {false, std::nullopt}},
        {"ACTIONG", {false, std::nullopt}},
        {"ACTIONR", {false, std::nullopt}},
        {"ACTIONS", {false, std::nullopt}},
        {"ACTIONW", {false, std::nullopt}},
        {"ACTPARAM", {false, std::nullopt}},
        {"ADSALNOD", {false, std::nullopt}},
        {"ADDZCORN", {false, std::nullopt}},
        {"ADSORP", {false, std::nullopt}},
        {"AITS", {false, std::nullopt}},
        {"AITSOFF", {false, std::nullopt}},
        {"ALKADS", {false, std::nullopt}},
        {"ALKALINE", {false, std::nullopt}},
        {"ALKROCK", {false, std::nullopt}},
        {"API", {false, std::nullopt}},
        {"ALPOLADS", {false, std::nullopt}},
        {"ALSURFAD", {false, std::nullopt}},
        {"ALSURFST", {false, std::nullopt}},
        {"AMALGAM", {false, std::nullopt}},
        {"APIGROUP", {false, std::nullopt}},
        {"APILIM", {false, std::nullopt}},
        {"APIVD", {false, std::nullopt}},
        {"AQANCONL", {false, std::nullopt}},
        {"AQANNC", {false, std::nullopt}},
        {"AQANTRC", {false, std::nullopt}},
        {"AQUALIST", {false, std::nullopt}},
        {"AQUCHGAS", {false, std::nullopt}},
        {"AQUCHWAT", {false, std::nullopt}},
        {"AQUCWFAC", {false, std::nullopt}},
        {"AQUFET", {false, std::string{"Use the AQUFETP keyword instead"}}},
        {"AQUFLUX", {false, std::nullopt}},
        {"AQUNNC", {false, std::nullopt}},
        {"AUTOCOAR", {false, std::nullopt}},
        {"AUTOREF", {false, std::nullopt}},
        {"BIGMODEL", {false, std::nullopt}},
        {"BDENSITY", {false, std::nullopt}},
        {"BGGI", {false, std::nullopt}},
        {"BOGI", {false, std::nullopt}},
        {"BOUNDARY", {false, std::nullopt}},
        {"BPARA", {false, std::nullopt}},
        {"BPIDIMS", {false, std::nullopt}},
        {"BTOBALFA", {false, std::nullopt}},
        {"BTOBALFV", {false, std::nullopt}},
        {"CALTRAC", {false, std::nullopt}},
        {"CARFIN", {false, std::nullopt}},
        {"CART", {false, std::nullopt}},
        {"CBMOPTS", {false, std::nullopt}},
        {"CECON", {false, std::nullopt}},
        {"CECONT", {false, std::nullopt}},
        {"COAL", {false, std::nullopt}},
        {"COALADS", {false, std::nullopt}},
        {"COALNUM", {false, std::nullopt}},
        {"COALPP", {false, std::nullopt}},
        {"COARSEN", {false, std::nullopt}},
        {"COLLAPSE", {false, std::nullopt}},
        {"COLUMNS", {false, std::nullopt}},
        {"CBMOPTS", {false, std::nullopt}},
        {"COMPDATX", {false, std::nullopt}},
        {"COMPDATL", {false, std::nullopt}},
        {"COMPDATM", {false, std::nullopt}},
        {"COMPDATL", {false, std::nullopt}},
        {"COMPIMB", {false, std::nullopt}},
        {"COMPFLSH", {false, std::nullopt}},
        {"COMPINJK", {false, std::nullopt}},
        {"COMPLMPL", {false, std::nullopt}},
        {"COMPOFF", {false, std::nullopt}},
        {"COMPRIV", {false, std::nullopt}},
        {"COMPRP", {false, std::nullopt}},
        {"COMPRPL", {false, std::nullopt}},
        {"COMPSEGL", {false, std::nullopt}},
        {"COMPVE", {false, std::nullopt}},
        {"COMPVEL", {false, std::nullopt}},
        {"CPIFACT", {false, std::nullopt}},
        {"CPIFACTL", {false, std::nullopt}},
        {"CPR", {false, std::nullopt}},
        {"CSKIN", {false, std::nullopt}},
        {"CONNECTION", {false, std::nullopt}},
        {"CONNECTION_PROBE", {false, std::nullopt}},
        {"COORDSYS", {false, std::nullopt}},
        {"COPYBOX", {false, std::nullopt}},
        {"CRITPERM", {false, std::nullopt}},
        {"DATUMR", {false, std::nullopt}},
        {"DATUMRX", {false, std::nullopt}},
        {"DCQDEFN", {false, std::nullopt}},
        {"DEBUG", {false, std::nullopt}},
        {"DELAYACT", {false, std::nullopt}},
        {"DEPTHTAB", {false, std::nullopt}},
        {"DIAGDISP", {false, std::nullopt}},
        {"DIFF", {false, std::nullopt}},
        {"DIFFCOAL", {false, std::nullopt}},
        {"DIFFDP", {false, std::nullopt}},
        {"DIFFMMF", {false, std::nullopt}},
        {"DIFFMR", {false, std::nullopt}},
        {"DIFFMR-", {false, std::nullopt}},
        {"DIFFMTHT", {false, std::nullopt}},
        {"DIFFMTH-", {false, std::nullopt}},
        {"DIFFMX", {false, std::nullopt}},
        {"DIFFMX-", {false, std::nullopt}},
        {"DIFFMY", {false, std::nullopt}},
        {"DIFFMY-", {false, std::nullopt}},
        {"DIFFMZ", {false, std::nullopt}},
        {"DIFFMZ-", {false, std::nullopt}},
        {"DIFFR", {false, std::nullopt}},
        {"DIFFTHT", {false, std::nullopt}},
        {"DIFFX", {false, std::nullopt}},
        {"DIFFY", {false, std::nullopt}},
        {"DIFFZ", {false, std::nullopt}},
        {"DIMPES", {false, std::nullopt}},
        {"DIMPLICT", {false, std::nullopt}},
        {"DISPDIMS", {false, std::nullopt}},
        {"DISPERSE", {false, std::nullopt}},
        {"DOMAINS", {false, std::nullopt}},
        {"DPGRID", {false, std::nullopt}},
        {"DPKRMOD", {false, std::nullopt}},
        {"DPNUM", {false, std::nullopt}},
        {"DRILPRI", {false, std::nullopt}},
        {"DSPDEINT", {false, std::nullopt}},
        {"DUALPERM", {false, std::nullopt}},
        {"DUALPORO", {false, std::nullopt}},
        {"DUMPCUPL", {false, std::nullopt}},
        {"DUMPFLUX", {false, std::nullopt}},
        {"DYNAMICR", {false, std::nullopt}},
        {"DYNRDIMS", {false, std::nullopt}},
        {"DYNAMICR", {false, std::nullopt}},
        {"DZMATRIX", {false, std::nullopt}},
        {"DZMTRX", {false, std::nullopt}},
        {"DZMTRXV", {false, std::nullopt}},
        {"DZNET", {false, std::nullopt}},
        {"ECHO", {false, std::string{"Will continue"}}},
        {"ECLMC", {false, std::nullopt}},
        {"EDITNNCR", {false, std::nullopt}},
        {"EHYSTRR", {false, std::nullopt}},
        {"ENDDYN", {false, std::nullopt}},
        {"ENDFIN", {false, std::nullopt}},
        {"ENDNUM", {false, std::nullopt}},
        {"ENDSKIP", {false, std::nullopt}},
        {"ENKRVD", {false, std::nullopt}},
        {"ENKSRVD", {false, std::nullopt}},
        {"ENPCVD", {false, std::nullopt}},
        {"ENPTVD", {false, std::nullopt}},
        {"ENSPCVD", {false, std::nullopt}},
        {"EPSDBGS", {false, std::nullopt}},
        {"EPSDEBUG", {false, std::nullopt}},
        {"EQLZCORN", {false, std::nullopt}},
        {"EQUALREG", {false, std::nullopt}},
        {"ESSNODE", {false, std::nullopt}},
        {"EXCAVATE", {false, std::nullopt}},
        {"EXCEL", {false, std::nullopt}},
        {"EXTFIN", {false, std::nullopt}},
        {"EXTHOST", {false, std::nullopt}},
        {"EXTRAPMS", {false, std::nullopt}},
        {"EXTREPGL", {false, std::nullopt}},
        {"FBHPDEF", {false, std::nullopt}},
        {"FHERCHBL", {false, std::nullopt}},
        {"FRICTION", {false, std::nullopt}},
        {"FIPOWG", {false, std::string{"Report not available"}}},
        {"FIPSEP", {false, std::nullopt}},
        {"FLUXREG", {false, std::nullopt}},
        {"FLUXTYPE", {false, std::nullopt}},
        {"FMTHMD", {false, std::nullopt}},
        {"FOAMDCYO", {false, std::nullopt}},
        {"FOAMDCYW", {false, std::nullopt}},
        {"FOAMFCN", {false, std::nullopt}},
        {"FOAMFRM", {false, std::nullopt}},
        {"FOAMFSO", {false, std::nullopt}},
        {"FOAMFST", {false, std::nullopt}},
        {"FOAMFSW", {false, std::nullopt}},
        {"FOAMMOBP", {false, std::nullopt}},
        {"FOAMMOBS", {false, std::nullopt}},
        {"FORMFEED", {false, std::nullopt}},
        {"FULLIMP", {false, std::nullopt}},
        {"GEGONT", {false, std::nullopt}},
        {"GETDATA", {false, std::nullopt}},
        {"GASBEGIN", {false, std::nullopt}},
        {"GASCONC", {false, std::nullopt}},
        {"GASEND", {false, std::nullopt}},
        {"GASFCOMP", {false, std::nullopt}},
        {"GASFDECR", {false, std::nullopt}},
        {"GASFDELC", {false, std::nullopt}},
        {"GASFIELD", {false, std::nullopt}},
        {"GASFTARG", {false, std::nullopt}},
        {"GASMONTH", {false, std::nullopt}},
        {"GASPERIO", {false, std::nullopt}},
        {"GASSATC", {false, std::nullopt}},
        {"GASYEAR", {false, std::nullopt}},
        {"GCALECON", {false, std::nullopt}},
        {"GCONCAL", {false, std::nullopt}},
        {"GCONENG", {false, std::nullopt}},
        {"GCONPRI", {false, std::nullopt}},
        {"GCONTOL", {false, std::nullopt}},
        {"GCUTBACK", {false, std::nullopt}},
        {"GCUTBACT", {false, std::nullopt}},
        {"GCVD", {false, std::nullopt}},
        {"GDCQ", {false, std::nullopt}},
        {"GDCQECON", {false, std::nullopt}},
        {"GDIMS", {false, std::nullopt}},
        {"GDORIENT", {false, std::nullopt}},
        {"GDRILPOT", {false, std::nullopt}},
        {"GECON", {false, std::nullopt}},
        {"GECONT", {false, std::nullopt}},
        {"GETGLOB", {false, std::nullopt}},
        {"GI", {false, std::nullopt}},
        {"GIALL", {false, std::nullopt}},
        {"GIMODEL", {false, std::nullopt}},
        {"GINODE", {false, std::nullopt}},
        {"GLIFTLIM", {false, std::nullopt}},
        {"GNETDP", {false, std::nullopt}},
        {"GNETINJE", {false, std::nullopt}},
        {"GNETPUMP", {false, std::nullopt}},
        {"GRADGRUP", {false, std::nullopt}},
        {"GRADRESV", {false, std::nullopt}},
        {"GRADRFT", {false, std::nullopt}},
        {"GRADWELL", {false, std::nullopt}},
        {"GRAVCONS", {false, std::nullopt}},
        {"GRAVDR", {false, std::nullopt}},
        {"GRAVDRB", {false, std::nullopt}},
        {"GRAVDRM", {false, std::nullopt}},
        {"GRAVITY", {false, std::string{"Use the DENSITY keyword instead"}}},
        {"GRDREACH", {false, std::nullopt}},
        {"GRIDUNIT", {false, std::nullopt}},
        {"GRUPMAST", {false, std::nullopt}},
        {"GRUPNET", {false, std::nullopt}},
        {"GRUPRIG", {false, std::nullopt}},
        {"GRUPSLAV", {false, std::nullopt}},
        {"GRUPTARG", {false, std::nullopt}},
        {"GSATINJE", {false, std::nullopt}},
        {"GSEPCOND", {false, std::nullopt}},
        {"GSSCPTST", {false, std::nullopt}},
        {"GSWINGF", {false, std::nullopt}},
        {"GTADD", {false, std::nullopt}},
        {"GTMULT", {false, std::nullopt}},
        {"GUIDECAL", {false, std::nullopt}},
        {"GSATPROD", {false, std::nullopt}},
        {"GUPFREQ", {false, std::nullopt}},
        {"GWRTWCV", {false, std::nullopt}},
        {"HALFTRAN", {false, std::nullopt}},
        {"HAxxxxxx", {false, std::nullopt}},
        {"HBNUM", {false, std::nullopt}},
        {"HDISP", {false, std::nullopt}},
        {"HMAQUCT", {false, std::nullopt}},
        {"HMAQUFET", {false, std::nullopt}},
        {"HMAQUNUM", {false, std::nullopt}},
        {"HMDIMS", {false, std::nullopt}},
        {"HMFAULTS", {false, std::nullopt}},
        {"HMMLAQUN", {false, std::nullopt}},
        {"HMMLCTAQ", {false, std::nullopt}},
        {"HMMLFTAQ", {false, std::nullopt}},
        {"HMMLTWCN", {false, std::nullopt}},
        {"HMMULTxx", {false, std::nullopt}},
        {"HMMULTFT", {false, std::nullopt}},
        {"HMMULTSG", {false, std::nullopt}},
        {"HMPROPS", {false, std::nullopt}},
        {"HMROCK", {false, std::nullopt}},
        {"HMROCKT", {false, std::nullopt}},
        {"HMRREF", {false, std::nullopt}},
        {"HMWELCON", {false, std::nullopt}},
        {"HMWPIMLT", {false, std::nullopt}},
        {"HMxxxxxx", {false, std::nullopt}},
        {"HRFIN", {false, std::nullopt}},
        {"HWKRO", {false, std::nullopt}},
        {"HWKRORG", {false, std::nullopt}},
        {"HWKRORW", {false, std::nullopt}},
        {"HWKRW", {false, std::nullopt}},
        {"HWKRWR", {false, std::nullopt}},
        {"HWPCW", {false, std::nullopt}},
        {"HWSNUM", {false, std::nullopt}},
        {"HWSOGCR", {false, std::nullopt}},
        {"HWSOWCR", {false, std::nullopt}},
        {"HWSWCR", {false, std::nullopt}},
        {"HWSWL", {false, std::nullopt}},
        {"HWSWLPC", {false, std::nullopt}},
        {"HWSWU", {false, std::nullopt}},
        {"HXFIN", {false, std::nullopt}},
        {"HYDRHEAD", {false, std::nullopt}},
        {"HYFIN", {false, std::nullopt}},
        {"HYMOBGDR", {false, std::nullopt}},
        {"HYST", {false, std::nullopt}},
        {"HYSTCHCK", {false, std::nullopt}},
        {"HZFIN", {false, std::nullopt}},
        {"IHOST", {false, std::nullopt}},
        {"IMBNUMMF", {false, std::nullopt}},
        {"IMKRVD", {false, std::nullopt}},
        {"IMPCVD", {false, std::nullopt}},
        {"IMPES", {false, std::nullopt}},
        {"IMPLICIT", {false, std::nullopt}},
        {"IMPTVD", {false, std::nullopt}},
        {"IMSPCVD", {false, std::nullopt}},
        {"INSPEC", {false, std::nullopt}},
        {"INTPC", {false, std::nullopt}},
        {"IONROCK", {false, std::nullopt}},
        {"IONXROCK", {false, std::nullopt}},
        {"IONXSURF", {false, std::nullopt}},
        {"ISOLNUM", {false, std::nullopt}},
        {"JFUNCR", {false, std::nullopt}},
        {"KRNUM", {false, std::nullopt}},
        {"KRNUMMF", {false, std::nullopt}},
        {"LANGMPL", {false, std::nullopt}},
        {"LANGMUIR", {false, std::nullopt}},
        {"LANGSOLV", {false, std::nullopt}},
        {"LCUNIT", {false, std::nullopt}},
        {"LGR", {false, std::nullopt}},
        {"LGRCOPY", {false, std::nullopt}},
        {"LGRFREE", {false, std::nullopt}},
        {"LGRLOCK", {false, std::nullopt}},
        {"LGROFF", {false, std::nullopt}},
        {"LGRON", {false, std::nullopt}},
        {"LICENSES", {false, std::nullopt}},
        {"LINCOM", {false, std::nullopt}},
        {"LINKPERM", {false, std::nullopt}},
        {"LKRO", {false, std::nullopt}},
        {"LKRORG", {false, std::nullopt}},
        {"LKRORW", {false, std::nullopt}},
        {"LKRW", {false, std::nullopt}},
        {"LKRWR", {false, std::nullopt}},
        {"LOAD", {false, std::nullopt}},
        {"LOWSALT", {false, std::nullopt}},
        {"LPCW", {false, std::nullopt}},
        {"LSALTFNC", {false, std::nullopt}},
        {"LSLTWNUM", {false, std::nullopt}},
        {"LSNUM", {false, std::nullopt}},
        {"LSOGCR", {false, std::nullopt}},
        {"LSOWCR", {false, std::nullopt}},
        {"LSWCR", {false, std::nullopt}},
        {"LSWL", {false, std::nullopt}},
        {"LSWLPC", {false, std::nullopt}},
        {"LSWU", {false, std::nullopt}},
        {"LTOSIGMA", {false, std::nullopt}},
        {"LWKRO", {false, std::nullopt}},
        {"LWKRORG", {false, std::nullopt}},
        {"LWKRORW", {false, std::nullopt}},
        {"LWKRW", {false, std::nullopt}},
        {"LWKRWR", {false, std::nullopt}},
        {"LWPCW", {false, std::nullopt}},
        {"LWSLTNUM", {false, std::nullopt}},
        {"LWSNUM", {false, std::nullopt}},
        {"LWSOGCR", {false, std::nullopt}},
        {"LWSOWCR", {false, std::nullopt}},
        {"LWSWCR", {false, std::nullopt}},
        {"LWSWL", {false, std::nullopt}},
        {"LWSWLPC", {false, std::nullopt}},
        {"LWSWU", {false, std::nullopt}},
        {"LX", {false, std::nullopt}},
        {"LXFIN", {false, std::nullopt}},
        {"LY", {false, std::nullopt}},
        {"LYFIN", {false, std::nullopt}},
        {"LZ", {false, std::nullopt}},
        {"LZFIN", {false, std::nullopt}},
        {"MASSFLOW", {false, std::nullopt}},
        {"MATCORR", {false, std::nullopt}},
        {"MEMORY", {false, std::nullopt}},
        {"MESSAGE", {false, std::nullopt}},
        {"MESSOPTS", {false, std::nullopt}},
        {"MESSSRVC", {false, std::nullopt}},
        {"MINNNCT", {false, std::nullopt}},
        {"MINPORV", {false, std::nullopt}},
        {"MLANG", {false, std::nullopt}},
        {"MLANGSLV", {false, std::nullopt}},
        {"MONITOR", {false, std::nullopt}},
        {"MPFANUM", {false, std::nullopt}},
        {"MPFNNC", {false, std::nullopt}},
        {"MSGFILE", {false, std::nullopt}},
        {"MULSGGD", {false, std::nullopt}},
        {"MULSGGDV", {false, std::nullopt}},
        {"MULTOUTS", {false, std::nullopt}},
        {"MULTREAL", {false, std::nullopt}},
        {"MULTREGD", {false, std::nullopt}},
        {"MULTREGH", {false, std::nullopt}},
        {"MULTSIG", {false, std::nullopt}},
        {"MULTSIGV", {false, std::nullopt}},
        {"MULT_XYZ", {false, std::nullopt}},
        {"NARROW", {false, std::nullopt}},
        {"NCONSUMP", {false, std::nullopt}},
        {"NEFAC", {false, std::nullopt}},
        {"NETBALAN", {false, std::nullopt}},
        {"NETCOMPA", {false, std::nullopt}},
        {"NEXT", {false, std::nullopt}},
        {"NEXTSTEP", {false, std::nullopt}},
        {"NEXTSTPL", {false, std::nullopt}},
        {"NINENUM", {false, std::nullopt}},
        {"NINEPOIN", {false, std::nullopt}},
        {"NMATOPTS", {false, std::nullopt}},
        {"NMATRIX", {false, std::nullopt}},
        {"NODPPM", {false, std::nullopt}},
        {"NOECHO", {false, std::string{"Will continue"}}},
        {"NOHMD", {false, std::nullopt}},
        {"NOHMO", {false, std::nullopt}},
        {"NOHYST", {false, std::nullopt}},
        {"NOWARNEP", {false, std::nullopt}},
        {"NRSOUT", {false, std::nullopt}},
        {"NNEWTF", {false, std::nullopt}},
        {"NOCASC", {false, std::nullopt}},
        {"NOGGF", {false, std::nullopt}},
        {"NOINSPEC", {false, std::nullopt}},
        {"NLINEARS", {false, std::nullopt}},
        {"NOMONITO", {false, std::nullopt}},
        {"NONNC", {false, std::nullopt}},
        {"NORSSPEC", {false, std::nullopt}},
        {"NOWARN", {false, std::nullopt}},
        {"NSTACK", {false, std::nullopt}},
        {"NWATREM", {false, std::nullopt}},
        {"NXFIN", {false, std::nullopt}},
        {"NYFIN", {false, std::nullopt}},
        {"NZFIN", {false, std::nullopt}},
        {"OFM", {false, std::nullopt}},
        {"OILAPI", {false, std::nullopt}},
        {"OLDTRAN", {false, std::nullopt}},
        {"OLDTRANR", {false, std::nullopt}},
        {"OPTIONS", {false, std::nullopt}},
        {"OUTSOL", {false, std::nullopt}},
        {"PARAOPTS", {false, std::nullopt}},
        {"PCG32D", {false, std::nullopt}},
        {"PCW32D", {false, std::nullopt}},
        {"PERMJFUN", {false, std::nullopt}},
        {"PETOPTS", {false, std::nullopt}},
        {"PLYESAL", {false, std::nullopt}},
        {"PLYKRRF", {false, std::nullopt}},
        {"PLYOPTS", {false, std::nullopt}},
        {"PLYRMDEN", {false, std::nullopt}},
        {"PLYROCKM", {false, std::nullopt}},
        {"PLYTRRF", {false, std::nullopt}},
        {"PLYTRRFA", {false, std::nullopt}},
        {"PLYVISCS", {false, std::nullopt}},
        {"PLYVISCT", {false, std::nullopt}},
        {"PLYVSCST", {false, std::nullopt}},
        {"PVZG", {false, std::nullopt}},
        {"PMAX", {false, std::nullopt}},
        {"PRIORITY", {false, std::nullopt}},
        {"PSTEADY", {false, std::nullopt}},
        {"PSWRG", {false, std::nullopt}},
        {"PSWRO", {false, std::nullopt}},
        {"PVCO", {false, std::nullopt}},
        {"PVZG", {false, std::nullopt}},
        {"QDRILL", {false, std::nullopt}},
        {"QDRILL", {false, std::nullopt}},
        {"QHRATING", {false, std::nullopt}},
        {"QMOBIL", {false, std::nullopt}},
        {"PARALLEL", {false, std::nullopt}},
        {"PARTTRAC", {false, std::nullopt}},
        {"PBUB", {false, std::nullopt}},
        {"PCG", {false, std::nullopt}},
        {"PCW", {false, std::nullopt}},
        {"PDEW", {false, std::nullopt}},
        {"PEBI", {false, std::nullopt}},
        {"PECOEFS", {false, std::nullopt}},
        {"PEDIMS", {false, std::nullopt}},
        {"PEGTABX", {false, std::nullopt}},
        {"PEKTABX", {false, std::nullopt}},
        {"PENUM", {false, std::nullopt}},
        {"PERMAVE", {false, std::nullopt}},
        {"PERMFACT", {false, std::nullopt}},
        {"PERMXY", {false, std::nullopt}},
        {"PERMYZ", {false, std::nullopt}},
        {"PERMZX", {false, std::nullopt}},
        {"PETGRID", {false, std::nullopt}},
        {"PICOND", {false, std::nullopt}},
        {"PIMULTAB", {false, std::nullopt}},
        {"PINCHNUM", {false, std::nullopt}},
        {"PINCHOUT", {false, std::nullopt}},
        {"PINCHREG", {false, std::nullopt}},
        {"PINCHXY", {false, std::nullopt}},
        {"PLYADSS", {false, std::nullopt}},
        {"PLYATEMP", {false, std::nullopt}},
        {"PLYCAMAX", {false, std::nullopt}},
        {"PLYDHFLF", {false, std::nullopt}},
        {"PPCWMAX", {false, std::nullopt}},
        {"PRECSALT", {false, std::nullopt}},
        {"PRORDER", {false, std::nullopt}},
        {"PRVD", {false, std::nullopt}},
        {"PVTGW", {false, std::nullopt}},
        {"PVTGWO", {false, std::nullopt}},
        {"RAINFALL", {false, std::nullopt}},
        {"RBEDCONT", {false, std::nullopt}},
        {"RADFIN", {false, std::nullopt}},
        {"RADFIN4", {false, std::nullopt}},
        {"RCMASTS", {false, std::nullopt}},
        {"REACACT", {false, std::nullopt}},
        {"REACHES", {false, std::nullopt}},
        {"READDATA", {false, std::nullopt}},
        {"RESIDNUM", {false, std::nullopt}},
        {"RESVNUMS", {false, std::nullopt}},
        {"RIVDEBUG", {false, std::nullopt}},
        {"RIVRXSEC", {false, std::nullopt}},
        {"RIVERSYS", {false, std::nullopt}},
        {"RIVRDIMS", {false, std::nullopt}},
        {"RIVRPROP", {false, std::nullopt}},
        {"RIVRXSE", {false, std::nullopt}},
        {"RIVSALT", {false, std::nullopt}},
        {"RIVTRACE", {false, std::nullopt}},
        {"ROCKFRAC", {false, std::nullopt}},
        {"ROCKOPTS", {false, std::nullopt}},
        {"ROCKPAMA", {false, std::nullopt}},
        {"ROCKTAB", {false, std::nullopt}},
        {"ROCKTABH", {false, std::nullopt}},
        {"ROCKTABW", {false, std::nullopt}},
        {"ROCKTHSG", {false, std::nullopt}},
        {"ROCKTSIG", {false, std::nullopt}},
        {"ROCKV", {false, std::nullopt}},
        {"RPTCPL", {false, std::nullopt}},
        {"RPTGRIDL", {false, std::nullopt}},
        {"RPTHM", {false, std::nullopt}},
        {"RPTHMG", {false, std::nullopt}},
        {"RPTHMD", {false, std::nullopt}},
        {"RPTHMW", {false, std::nullopt}},
        {"RPTINIT", {false, std::nullopt}},
        {"RPTISOL", {false, std::nullopt}},
        {"RPTPROPS", {false, std::nullopt}},
        {"RPTREGS", {false, std::nullopt}},
        {"RPTSOL", {false, std::nullopt}},
        {"RSGI", {false, std::nullopt}},
        {"RSSPE", {false, std::nullopt}},
        {"RSSSPEC", {false, std::nullopt}},
        {"RVCONST", {false, std::nullopt}},
        {"RVCONSTT", {false, std::nullopt}},
        {"RVGI", {false, std::nullopt}},
        {"REFINE", {false, std::nullopt}},
        {"RADFIN4", {false, std::nullopt}},
        {"RHO", {false, std::nullopt}},
        {"RKTRMDIR", {false, std::nullopt}},
        {"ROCKOPTS", {false, std::nullopt}},
        {"ROCKTAB", {false, std::nullopt}},
        {"RPTGRID", {false, std::nullopt}},
        {"RPTPROS", {false, std::nullopt}},
        {"PRTRST", {false, std::nullopt}},
        {"RPTRUNSP", {false, std::nullopt}},
        {"RPTSMRY", {false, std::nullopt}},
        {"RSCONST", {false, std::nullopt}},
        {"RSCONSTT", {false, std::nullopt}},
        {"RSSPEC", {false, std::nullopt}},
        {"RTEMPA", {false, std::nullopt}},
        {"RWGSALT", {false, std::nullopt}},
        {"SALTPVD", {false, std::nullopt}},
        {"SALTSOL", {false, std::nullopt}},
        {"SAMG", {false, std::nullopt}},
        {"SAVE", {false, std::nullopt}},
        {"SKIP", {false, std::nullopt}},
        {"SKIP100", {false, std::nullopt}},
        {"SKIP300", {false, std::nullopt}},
        {"SALT", {false, std::nullopt}},
        {"SALTNODE", {false, std::nullopt}},
        {"SALTREST", {false, std::nullopt}},
        {"SCALELIM", {false, std::nullopt}},
        {"SCDATAB", {false, std::nullopt}},
        {"SCDETAB", {false, std::nullopt}},
        {"SCDPTAB", {false, std::nullopt}},
        {"SCDPTRAC", {false, std::nullopt}},
        {"SCDPDIMS", {false, std::nullopt}},
        {"SCVD", {false, std::nullopt}},
        {"SEPVALS", {false, std::nullopt}},
        {"SFOAM", {false, std::nullopt}},
        {"SGF32D", {false, std::nullopt}},
        {"SHRATE", {false, std::string{"See the PLYSHEAR keyword instead"}}},
        {"SIGMA", {false, std::nullopt}},
        {"SIGMAGD", {false, std::nullopt}},
        {"SIGMAGDV", {false, std::nullopt}},
        {"SIGMATH", {false, std::nullopt}},
        {"SIGMAV", {false, std::nullopt}},
        {"SIMULATE", {false, std::nullopt}},
        {"SKRO", {false, std::nullopt}},
        {"SKRORG", {false, std::nullopt}},
        {"SKRORW", {false, std::nullopt}},
        {"SKRW", {false, std::nullopt}},
        {"SKRWR", {false, std::nullopt}},
        {"SLAVES", {false, std::nullopt}},
        {"SMULTX", {false, std::nullopt}},
        {"SMULTY", {false, std::nullopt}},
        {"SMULTZ", {false, std::nullopt}},
        {"SOCRS", {false, std::nullopt}},
        {"SOF32D", {false, std::nullopt}},
        {"SOLVCONC", {false, std::nullopt}},
        {"SOLVDIMS", {false, std::nullopt}},
        {"SOLVDIRS", {false, std::nullopt}},
        {"SOLVFRAC", {false, std::nullopt}},
        {"SOLVNUM", {false, std::nullopt}},
        {"SOLWNUM", {false, std::nullopt}},
        {"SOMGAS", {false, std::nullopt}},
        {"SOMWAT", {false, std::nullopt}},
        {"SSGCR", {false, std::nullopt}},
        {"SSGL", {false, std::nullopt}},
        {"SSOGCR", {false, std::nullopt}},
        {"SSOWCR", {false, std::nullopt}},
        {"SSWCR", {false, std::nullopt}},
        {"SSWL", {false, std::nullopt}},
        {"SSWU", {false, std::nullopt}},
        {"STOG", {false, std::nullopt}},
        {"STOW", {false, std::nullopt}},
        {"STWG", {false, std::nullopt}},
        {"SURF", {false, std::nullopt}},
        {"SURFACT", {false, std::nullopt}},
        {"SURFACTW", {false, std::nullopt}},
        {"SURFADDW", {false, std::nullopt}},
        {"SURFADS", {false, std::nullopt}},
        {"SURFCAPD", {false, std::nullopt}},
        {"SURFESAL", {false, std::nullopt}},
        {"SURFNUM", {false, std::nullopt}},
        {"SURFOPTS", {false, std::nullopt}},
        {"SURFROCK", {false, std::nullopt}},
        {"SURFST", {false, std::nullopt}},
        {"SURFSTES", {false, std::nullopt}},
        {"SURFVISC", {false, std::nullopt}},
        {"SURFWNUM", {false, std::nullopt}},
        {"SWF32D", {false, std::nullopt}},
        {"SWINGFAC", {false, std::nullopt}},
        {"TEMP", {false, std::nullopt}},
        {"TEMPNODE", {false, std::nullopt}},
        {"TEMPTVD", {false, std::nullopt}},
        {"TEMPVD", {false, std::nullopt}},
        {"TIGHTEN", {false, std::nullopt}},
        {"TIGHTENP", {false, std::nullopt}},
        {"TIME", {false, std::nullopt}},
        {"TNUM", {false, std::nullopt}},
        {"TPAMEPS", {false, std::nullopt}},
        {"TPAMEPSS", {false, std::nullopt}},
        {"TRACERKM", {false, std::nullopt}},
        {"TRACERKP", {false, std::nullopt}},
        {"TRACITVD", {false, std::nullopt}},
        {"TRACTVD", {false, std::nullopt}},
        {"TRACITVD", {false, std::nullopt}},
        {"TRADS", {false, std::nullopt}},
        {"TRANGL", {false, std::nullopt}},
        {"TRANR", {false, std::nullopt}},
        {"TRANTHT", {false, std::nullopt}},
        {"TRDCY", {false, std::nullopt}},
        {"TRDIF", {false, std::nullopt}},
        {"TRDIS", {false, std::nullopt}},
        {"TRKPF", {false, std::nullopt}},
        {"TRNHD", {false, std::nullopt}},
        {"TRPLPORO", {false, std::nullopt}},
        {"TRROCK", {false, std::nullopt}},
        {"TUNINGDP", {false, std::nullopt}},
        {"TUNINGH", {false, std::nullopt}},
        {"TUNINGL", {false, std::nullopt}},
        {"TUNINGS", {false, std::nullopt}},
        {"TVDP", {false, std::nullopt}},
        {"TZONE", {false, std::nullopt}},
        {"UDT", {false, std::nullopt}},
        {"UDTDIMS", {false, std::nullopt}},
        {"UNCODHMD", {false, std::nullopt}},
        {"UNIFOUTS", {false, std::nullopt}},
        {"UNIFSAVE", {false, std::nullopt}},
        {"USECUPL", {false, std::nullopt}},
        {"USEFLUX", {false, std::nullopt}},
        {"USENOFLO", {false, std::nullopt}},
        {"VAPWAT", {false, std::nullopt}},
        {"VDFLOW", {false, std::nullopt}},
        {"VDFLOWR", {false, std::nullopt}},
        {"VE", {false, std::nullopt}},
        {"VEDEBUG", {false, std::nullopt}},
        {"VEFIN", {false, std::nullopt}},
        {"VEFRAC", {false, std::nullopt}},
        {"VEFRACP", {false, std::nullopt}},
        {"VEFRACPV", {false, std::nullopt}},
        {"VEFRACV", {false, std::nullopt}},
        {"VFPCHK", {false, std::nullopt}},
        {"VFPTABL", {false, std::nullopt}},
        {"VISAGE", {false, std::nullopt}},
        {"VISCD", {false, std::nullopt}},
        {"VISDATES", {false, std::nullopt}},
        {"VISOPTS", {false, std::nullopt}},
        {"WAGHYSTR", {false, std::nullopt}},
        {"WAITBAL", {false, std::nullopt}},
        {"WALKALIN", {false, std::nullopt}},
        {"WALQCALC", {false, std::nullopt}},
        {"WAPI", {false, std::nullopt}},
        {"WARN", {false, std::nullopt}},
        {"WBHGLR", {false, std::nullopt}},
        {"WBOREVOL", {false, std::nullopt}},
        {"WCALCVAL", {false, std::nullopt}},
        {"WBP", {false, std::nullopt}},
        {"WBP4", {false, std::nullopt}},
        {"WBP5", {false, std::nullopt}},
        {"WBP9", {false, std::nullopt}},
        {"WCONINJ", {false, std::nullopt}},
        {"WCONINJP", {false, std::nullopt}},
        {"WCUTBACK", {false, std::nullopt}},
        {"WCUTBACT", {false, std::nullopt}},
        {"WCYCLE", {false, std::nullopt}},
        {"WDFACCOR", {false, std::nullopt}},
        {"WDFAC", {false, std::nullopt}},
        {"WDRILTIM", {false, std::nullopt}},
        {"WDRILPRI", {false, std::nullopt}},
        {"WDRILRES", {false, std::nullopt}},
        {"WECONINJ", {false, std::nullopt}},
        {"WECONT", {false, std::nullopt}},
        {"WELCNTL", {false, std::nullopt}},
        {"WELDEBUG", {false, std::nullopt}},
        {"WELDRAW", {false, std::nullopt}},
        {"WELEVNT", {false, std::nullopt}},
        {"WELMOVEL", {false, std::nullopt}},
        {"WELOPENL", {false, std::nullopt}},
        {"WELPRI", {false, std::nullopt}},
        {"WELSOMIN", {false, std::nullopt}},
        {"WELSPECL", {false, std::nullopt}},
        {"WFRICSEG", {false, std::nullopt}},
        {"WFRICSGL", {false, std::nullopt}},
        {"WFRICTN", {false, std::nullopt}},
        {"WFRICTNL", {false, std::nullopt}},
        {"WGASPROD", {false, std::nullopt}},
        {"WGORPEN", {false, std::nullopt}},
        {"WH2NUM", {false, std::nullopt}},
        {"WH3NUM", {false, std::nullopt}},
        {"WHEDREFD", {false, std::nullopt}},
        {"WHTEMP", {false, std::nullopt}},
        {"WINJMULT", {false, std::nullopt}},
        {"WLIMTOL", {false, std::nullopt}},
        {"WLIFT", {false, std::nullopt}},
        {"WLISTARG", {false, std::nullopt}},
        {"WLISTNAM", {false, std::nullopt}},
        {"WLISTOPT", {false, std::nullopt}},
        {"WNETCTRL", {false, std::nullopt}},
        {"WNETDP", {false, std::nullopt}},
        {"WORKLIM", {false, std::nullopt}},
        {"WORKTHP", {false, std::nullopt}},
        {"WPAVE", {false, std::nullopt}},
        {"WPIMULTL", {false, std::nullopt}},
        {"WPITAB", {false, std::nullopt}},
        {"WPLUG", {false, std::nullopt}},
        {"WPOLYRED", {false, std::nullopt}},
        {"WPOTCALC", {false, std::nullopt}},
        {"WREGROUP", {false, std::nullopt}},
        {"WSCCLEAN", {false, std::nullopt}},
        {"WSCCLENL", {false, std::nullopt}},
        {"WSCTAB", {false, std::nullopt}},
        {"WSEGDFIN", {false, std::nullopt}},
        {"WSEGDFMD", {false, std::nullopt}},
        {"WSEGDFPA", {false, std::nullopt}},
        {"WSEGEXSS", {false, std::nullopt}},
        {"WSEGFLIM", {false, std::nullopt}},
        {"WSEGFMOD", {false, std::nullopt}},
        {"WSEGINIT", {false, std::nullopt}},
        {"WSEGITER", {false, std::nullopt}},
        {"WSEGLABY", {false, std::nullopt}},
        {"WSEGLINK", {false, std::nullopt}},
        {"WSEGMULT", {false, std::nullopt}},
        {"WSEGPROP", {false, std::nullopt}},
        {"WSEGPULL", {false, std::nullopt}},
        {"WSEGSEP", {false, std::nullopt}},
        {"WSEGSOLV", {false, std::nullopt}},
        {"WSEGTABL", {false, std::nullopt}},
        {"WSURFACT", {false, std::nullopt}},
        {"WTADD", {false, std::nullopt}},
        {"WTEMPQ", {false, std::nullopt}},
        {"WTHPMAX", {false, std::nullopt}},
        {"WTMULT", {false, std::nullopt}},
        {"WVFPDP", {false, std::nullopt}},
        {"WVFPEXP", {false, std::nullopt}},
        {"WWPAVE", {false, std::nullopt}},
        {"ZIPPY2", {false, std::nullopt}},
        {"ZIPP2OFF", {false, std::nullopt}},
    };

    return unsupported_keywords;
}

}
