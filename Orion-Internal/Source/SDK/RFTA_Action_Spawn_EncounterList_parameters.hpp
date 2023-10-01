#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Spawn_EncounterList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.DestroyAllSpawns
struct UAction_Spawn_EncounterList_C_DestroyAllSpawns_Params
{
};

// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.SetCooldown
struct UAction_Spawn_EncounterList_C_SetCooldown_Params
{
};

// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.LockCooldown
struct UAction_Spawn_EncounterList_C_LockCooldown_Params
{
};

// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.SetAggroGroup
struct UAction_Spawn_EncounterList_C_SetAggroGroup_Params
{
};

// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.CanSpawn
struct UAction_Spawn_EncounterList_C_CanSpawn_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.GetEncounterManager
struct UAction_Spawn_EncounterList_C_GetEncounterManager_Params
{
	class UEncounterManager*                           EncounterMan;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.OnActionStart
struct UAction_Spawn_EncounterList_C_OnActionStart_Params
{
};

// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.OnActionStop
struct UAction_Spawn_EncounterList_C_OnActionStop_Params
{
};

// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.OnComplete_Event_1
struct UAction_Spawn_EncounterList_C_OnComplete_Event_1_Params
{
	class UEncounterInstance**                         Encounter;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Spawn_EncounterList.Action_Spawn_EncounterList_C.ExecuteUbergraph_Action_Spawn_EncounterList
struct UAction_Spawn_EncounterList_C_ExecuteUbergraph_Action_Spawn_EncounterList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
