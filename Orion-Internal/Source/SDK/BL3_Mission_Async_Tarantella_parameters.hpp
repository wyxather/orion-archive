#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_Tarantella_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_Tarantella.Mission_Async_Tarantella_C.Obj_KillTarantella
struct UMission_Async_Tarantella_C_Obj_KillTarantella_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Tarantella.Mission_Async_Tarantella_C.Set_KillTarantella
struct UMission_Async_Tarantella_C_Set_KillTarantella_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Tarantella.Mission_Async_Tarantella_C.MCE_TarantellaKilled
struct UMission_Async_Tarantella_C_MCE_TarantellaKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Tarantella.Mission_Async_Tarantella_C.ExecuteUbergraph_Mission_Async_Tarantella
struct UMission_Async_Tarantella_C_ExecuteUbergraph_Mission_Async_Tarantella_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
