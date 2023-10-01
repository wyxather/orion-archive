#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_TheUnstoppable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_TheUnstoppable.Mission_Async_TheUnstoppable_C.Obj_KillTheUnstoppable
struct UMission_Async_TheUnstoppable_C_Obj_KillTheUnstoppable_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_TheUnstoppable.Mission_Async_TheUnstoppable_C.Set_KillTheUnstoppable
struct UMission_Async_TheUnstoppable_C_Set_KillTheUnstoppable_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_TheUnstoppable.Mission_Async_TheUnstoppable_C.MCE_TheUnstoppableKilled
struct UMission_Async_TheUnstoppable_C_MCE_TheUnstoppableKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_TheUnstoppable.Mission_Async_TheUnstoppable_C.ExecuteUbergraph_Mission_Async_TheUnstoppable
struct UMission_Async_TheUnstoppable_C_ExecuteUbergraph_Mission_Async_TheUnstoppable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
