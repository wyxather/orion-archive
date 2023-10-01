#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_BormanNates_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_BormanNates.Mission_Async_BormanNates_C.Obj_KillBormanNates
struct UMission_Async_BormanNates_C_Obj_KillBormanNates_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_BormanNates.Mission_Async_BormanNates_C.Set_KillBormanNates
struct UMission_Async_BormanNates_C_Set_KillBormanNates_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_BormanNates.Mission_Async_BormanNates_C.MCE_BormanNatesKilled
struct UMission_Async_BormanNates_C_MCE_BormanNatesKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_BormanNates.Mission_Async_BormanNates_C.ExecuteUbergraph_Mission_Async_BormanNates
struct UMission_Async_BormanNates_C_ExecuteUbergraph_Mission_Async_BormanNates_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
