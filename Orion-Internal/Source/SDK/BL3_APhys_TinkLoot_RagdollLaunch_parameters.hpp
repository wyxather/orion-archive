#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhys_TinkLoot_RagdollLaunch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function APhys_TinkLoot_RagdollLaunch.APhys_TinkLoot_RagdollLaunch_C.OnBegin
struct UAPhys_TinkLoot_RagdollLaunch_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function APhys_TinkLoot_RagdollLaunch.APhys_TinkLoot_RagdollLaunch_C.OnEnd
struct UAPhys_TinkLoot_RagdollLaunch_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function APhys_TinkLoot_RagdollLaunch.APhys_TinkLoot_RagdollLaunch_C.ExecuteUbergraph_APhys_TinkLoot_RagdollLaunch
struct UAPhys_TinkLoot_RagdollLaunch_C_ExecuteUbergraph_APhys_TinkLoot_RagdollLaunch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
