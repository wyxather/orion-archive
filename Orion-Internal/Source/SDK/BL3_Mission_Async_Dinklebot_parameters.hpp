#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_Dinklebot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_Dinklebot.Mission_Async_Dinklebot_C.Obj_KillDinklebot
struct UMission_Async_Dinklebot_C_Obj_KillDinklebot_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Dinklebot.Mission_Async_Dinklebot_C.Set_KillDinklebot
struct UMission_Async_Dinklebot_C_Set_KillDinklebot_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Dinklebot.Mission_Async_Dinklebot_C.MCE_DinklebotKilled
struct UMission_Async_Dinklebot_C_MCE_DinklebotKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Dinklebot.Mission_Async_Dinklebot_C.ExecuteUbergraph_Mission_Async_Dinklebot
struct UMission_Async_Dinklebot_C_ExecuteUbergraph_Mission_Async_Dinklebot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
