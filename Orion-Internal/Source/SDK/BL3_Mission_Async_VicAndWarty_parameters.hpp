#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_VicAndWarty_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_VicAndWarty.Mission_Async_VicAndWarty_C.Obj_KillVicAndWarty
struct UMission_Async_VicAndWarty_C_Obj_KillVicAndWarty_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_VicAndWarty.Mission_Async_VicAndWarty_C.Set_KillVicAndWarty
struct UMission_Async_VicAndWarty_C_Set_KillVicAndWarty_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_VicAndWarty.Mission_Async_VicAndWarty_C.MCE_VicAndWartyKilled
struct UMission_Async_VicAndWarty_C_MCE_VicAndWartyKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_VicAndWarty.Mission_Async_VicAndWarty_C.ExecuteUbergraph_Mission_Async_VicAndWarty
struct UMission_Async_VicAndWarty_C_ExecuteUbergraph_Mission_Async_VicAndWarty_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
