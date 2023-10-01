#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_ZealotPilfer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_ZealotPilfer.Mission_Async_ZealotPilfer_C.Obj_KillZealotPilfer
struct UMission_Async_ZealotPilfer_C_Obj_KillZealotPilfer_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_ZealotPilfer.Mission_Async_ZealotPilfer_C.Set_KillZealotPilfer
struct UMission_Async_ZealotPilfer_C_Set_KillZealotPilfer_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_ZealotPilfer.Mission_Async_ZealotPilfer_C.MCE_ZealotPilferKilled
struct UMission_Async_ZealotPilfer_C_MCE_ZealotPilferKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_ZealotPilfer.Mission_Async_ZealotPilfer_C.ExecuteUbergraph_Mission_Async_ZealotPilfer
struct UMission_Async_ZealotPilfer_C_ExecuteUbergraph_Mission_Async_ZealotPilfer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
