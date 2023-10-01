#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_FrostbiteDragon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.Obj_KillFrostbiteDragon
struct UMission_Async_FrostbiteDragon_C_Obj_KillFrostbiteDragon_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.Set_KillFrostbiteDragon
struct UMission_Async_FrostbiteDragon_C_Set_KillFrostbiteDragon_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.MCE_FrostbiteDragonKilled
struct UMission_Async_FrostbiteDragon_C_MCE_FrostbiteDragonKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_FrostbiteDragon.Mission_Async_FrostbiteDragon_C.ExecuteUbergraph_Mission_Async_FrostbiteDragon
struct UMission_Async_FrostbiteDragon_C_ExecuteUbergraph_Mission_Async_FrostbiteDragon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
