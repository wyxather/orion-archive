#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_EnforcerUrist_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_EnforcerUrist.Mission_Async_EnforcerUrist_C.Obj_KillEnforcerUrist
struct UMission_Async_EnforcerUrist_C_Obj_KillEnforcerUrist_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_EnforcerUrist.Mission_Async_EnforcerUrist_C.Set_KillEnforcerUrist
struct UMission_Async_EnforcerUrist_C_Set_KillEnforcerUrist_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_EnforcerUrist.Mission_Async_EnforcerUrist_C.MCE_EnforcerUristKilled
struct UMission_Async_EnforcerUrist_C_MCE_EnforcerUristKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_EnforcerUrist.Mission_Async_EnforcerUrist_C.ExecuteUbergraph_Mission_Async_EnforcerUrist
struct UMission_Async_EnforcerUrist_C_ExecuteUbergraph_Mission_Async_EnforcerUrist_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
