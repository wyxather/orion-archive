#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Multispawn_Waypoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.ClearSpawnPositionStatus
struct ABP_Multispawn_Waypoint_C_ClearSpawnPositionStatus_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.GetAvailableSpawnTransform
struct ABP_Multispawn_Waypoint_C_GetAvailableSpawnTransform_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.UserConstructionScript
struct ABP_Multispawn_Waypoint_C_UserConstructionScript_Params
{
};

// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.Finished
struct ABP_Multispawn_Waypoint_C_Finished_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.ClientShowCharacterSwap
struct ABP_Multispawn_Waypoint_C_ClientShowCharacterSwap_Params
{
	class APlayerController**                          PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.EvemtClosedCharacterSelect
struct ABP_Multispawn_Waypoint_C_EvemtClosedCharacterSelect_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.EventPossessedBy_Event_1
struct ABP_Multispawn_Waypoint_C_EventPossessedBy_Event_1_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.ReceiveBeginPlay
struct ABP_Multispawn_Waypoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C.ExecuteUbergraph_BP_Multispawn_Waypoint
struct ABP_Multispawn_Waypoint_C_ExecuteUbergraph_BP_Multispawn_Waypoint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
