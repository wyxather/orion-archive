#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_PowerTroopers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_PowerTroopers.Mission_Async_PowerTroopers_C.Obj_KillPowerTroopers
struct UMission_Async_PowerTroopers_C_Obj_KillPowerTroopers_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_PowerTroopers.Mission_Async_PowerTroopers_C.Set_KillPowerTroopers
struct UMission_Async_PowerTroopers_C_Set_KillPowerTroopers_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_PowerTroopers.Mission_Async_PowerTroopers_C.MCE_PowerTroopersKilled
struct UMission_Async_PowerTroopers_C_MCE_PowerTroopersKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_PowerTroopers.Mission_Async_PowerTroopers_C.ExecuteUbergraph_Mission_Async_PowerTroopers
struct UMission_Async_PowerTroopers_C_ExecuteUbergraph_Mission_Async_PowerTroopers_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
