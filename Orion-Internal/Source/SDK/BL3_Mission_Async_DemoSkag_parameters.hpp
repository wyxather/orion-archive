#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_DemoSkag_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_DemoSkag.Mission_Async_DemoSkag_C.Obj_KillDemoSkag
struct UMission_Async_DemoSkag_C_Obj_KillDemoSkag_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_DemoSkag.Mission_Async_DemoSkag_C.Set_KillDemoSkag
struct UMission_Async_DemoSkag_C_Set_KillDemoSkag_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_DemoSkag.Mission_Async_DemoSkag_C.MCE_DemoSkagKilled
struct UMission_Async_DemoSkag_C_MCE_DemoSkagKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_DemoSkag.Mission_Async_DemoSkag_C.ExecuteUbergraph_Mission_Async_DemoSkag
struct UMission_Async_DemoSkag_C_ExecuteUbergraph_Mission_Async_DemoSkag_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
