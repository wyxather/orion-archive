#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_Rakkman_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.Obj_KillRakkman
struct UMission_Async_Rakkman_C_Obj_KillRakkman_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.Set_KillRakkman
struct UMission_Async_Rakkman_C_Set_KillRakkman_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.MCE_RakkmanKilled
struct UMission_Async_Rakkman_C_MCE_RakkmanKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.ExecuteUbergraph_Mission_Async_Rakkman
struct UMission_Async_Rakkman_C_ExecuteUbergraph_Mission_Async_Rakkman_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
