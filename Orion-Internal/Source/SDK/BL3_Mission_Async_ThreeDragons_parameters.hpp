#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_ThreeDragons_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_ThreeDragons.Mission_Async_ThreeDragons_C.Obj_KillThreeDragons
struct UMission_Async_ThreeDragons_C_Obj_KillThreeDragons_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_ThreeDragons.Mission_Async_ThreeDragons_C.Set_KillThreeDragons
struct UMission_Async_ThreeDragons_C_Set_KillThreeDragons_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_ThreeDragons.Mission_Async_ThreeDragons_C.MCE_ThreeDragonsKilled
struct UMission_Async_ThreeDragons_C_MCE_ThreeDragonsKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_ThreeDragons.Mission_Async_ThreeDragons_C.ExecuteUbergraph_Mission_Async_ThreeDragons
struct UMission_Async_ThreeDragons_C_ExecuteUbergraph_Mission_Async_ThreeDragons_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
