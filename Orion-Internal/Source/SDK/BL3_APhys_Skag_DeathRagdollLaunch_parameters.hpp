#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhys_Skag_DeathRagdollLaunch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function APhys_Skag_DeathRagdollLaunch.APhys_Skag_DeathRagdollLaunch_C.OnBegin
struct UAPhys_Skag_DeathRagdollLaunch_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function APhys_Skag_DeathRagdollLaunch.APhys_Skag_DeathRagdollLaunch_C.ExecuteUbergraph_APhys_Skag_DeathRagdollLaunch
struct UAPhys_Skag_DeathRagdollLaunch_C_ExecuteUbergraph_APhys_Skag_DeathRagdollLaunch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
