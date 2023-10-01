#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_Shocker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_Shocker.Mission_Async_Shocker_C.Obj_KillShocker
struct UMission_Async_Shocker_C_Obj_KillShocker_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Shocker.Mission_Async_Shocker_C.Set_KillShocker
struct UMission_Async_Shocker_C_Set_KillShocker_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Shocker.Mission_Async_Shocker_C.MCE_ShockerKilled
struct UMission_Async_Shocker_C_MCE_ShockerKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Shocker.Mission_Async_Shocker_C.ExecuteUbergraph_Mission_Async_Shocker
struct UMission_Async_Shocker_C_ExecuteUbergraph_Mission_Async_Shocker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
