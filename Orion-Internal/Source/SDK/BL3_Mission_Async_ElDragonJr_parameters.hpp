#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_ElDragonJr_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_ElDragonJr.Mission_Async_ElDragonJr_C.Obj_KillElDragonJr
struct UMission_Async_ElDragonJr_C_Obj_KillElDragonJr_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_ElDragonJr.Mission_Async_ElDragonJr_C.Set_KillElDragonJr
struct UMission_Async_ElDragonJr_C_Set_KillElDragonJr_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_ElDragonJr.Mission_Async_ElDragonJr_C.MCE_ElDragonJrKilled
struct UMission_Async_ElDragonJr_C_MCE_ElDragonJrKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_ElDragonJr.Mission_Async_ElDragonJr_C.ExecuteUbergraph_Mission_Async_ElDragonJr
struct UMission_Async_ElDragonJr_C_ExecuteUbergraph_Mission_Async_ElDragonJr_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
