#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_RoadDog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_RoadDog.Mission_Async_RoadDog_C.Obj_KillRoadDog
struct UMission_Async_RoadDog_C_Obj_KillRoadDog_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_RoadDog.Mission_Async_RoadDog_C.Set_KillRoadDog
struct UMission_Async_RoadDog_C_Set_KillRoadDog_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_RoadDog.Mission_Async_RoadDog_C.MCE_RoadDogKilled
struct UMission_Async_RoadDog_C_MCE_RoadDogKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_RoadDog.Mission_Async_RoadDog_C.ExecuteUbergraph_Mission_Async_RoadDog
struct UMission_Async_RoadDog_C_ExecuteUbergraph_Mission_Async_RoadDog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
