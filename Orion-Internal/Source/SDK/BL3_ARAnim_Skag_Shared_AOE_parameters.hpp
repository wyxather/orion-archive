#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Skag_Shared_AOE_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ARAnim_Skag_Shared_AOE.ARAnim_Skag_Shared_AOE_C.OnBegin
struct UARAnim_Skag_Shared_AOE_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARAnim_Skag_Shared_AOE.ARAnim_Skag_Shared_AOE_C.Notify_AOE
struct UARAnim_Skag_Shared_AOE_C_Notify_AOE_Params
{
};

// Function ARAnim_Skag_Shared_AOE.ARAnim_Skag_Shared_AOE_C.ExecuteUbergraph_ARAnim_Skag_Shared_AOE
struct UARAnim_Skag_Shared_AOE_C_ExecuteUbergraph_ARAnim_Skag_Shared_AOE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
