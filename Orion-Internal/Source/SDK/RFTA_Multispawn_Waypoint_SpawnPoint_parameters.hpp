#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Multispawn_Waypoint_SpawnPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.ReceiveBeginPlay
struct AMultispawn_Waypoint_SpawnPoint_C_ReceiveBeginPlay_Params
{
};

// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.OnPostSpawn
struct AMultispawn_Waypoint_SpawnPoint_C_OnPostSpawn_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.PossessedBy
struct AMultispawn_Waypoint_SpawnPoint_C_PossessedBy_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.StartPreSpawn
struct AMultispawn_Waypoint_SpawnPoint_C_StartPreSpawn_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.ExecuteUbergraph_Multispawn_Waypoint_SpawnPoint
struct AMultispawn_Waypoint_SpawnPoint_C_ExecuteUbergraph_Multispawn_Waypoint_SpawnPoint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.EventPossessedBy__DelegateSignature
struct AMultispawn_Waypoint_SpawnPoint_C_EventPossessedBy__DelegateSignature_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
