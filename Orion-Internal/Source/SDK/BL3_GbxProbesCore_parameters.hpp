#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxProbesCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxProbesCore.GbxProbeInterface.GetGbxProbeId
struct UGbxProbeInterface_GetGbxProbeId_Params
{
	struct FGbxProbeId                                 OutId;                                                    // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
