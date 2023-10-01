#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Fire_Beam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Fire_Beam.Action_Fire_Beam_C.SpawnLocation
struct UAction_Fire_Beam_C_SpawnLocation_Params
{
	bool*                                              UseCustomSpawnLocation;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform*                                 CustomSpawnLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Action_Fire_Beam.Action_Fire_Beam_C.SetTarget
struct UAction_Fire_Beam_C_SetTarget_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Lock;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Fire_Beam.Action_Fire_Beam_C.StartBeam
struct UAction_Fire_Beam_C_StartBeam_Params
{
};

// Function Action_Fire_Beam.Action_Fire_Beam_C.SpawnBeam
struct UAction_Fire_Beam_C_SpawnBeam_Params
{
	class UClass**                                     ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     BeamTarget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Fire_Beam.Action_Fire_Beam_C.SpawnTarget
struct UAction_Fire_Beam_C_SpawnTarget_Params
{
	class UClass**                                     SpawnCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESpawnActorCollisionHandlingMethod*                CollisionHandling;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              SetTargetLock;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              SpawnTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              UseCustomSpawnLocation;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform*                                 CustomSpawnLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class ACharacterGunfire*                           CharacterGunfire;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Fire_Beam.Action_Fire_Beam_C.Get Character
struct UAction_Fire_Beam_C_Get_Character_Params
{
	class ACharacterGunfire*                           CharacterGunfire;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Fire_Beam.Action_Fire_Beam_C.StopBeam
struct UAction_Fire_Beam_C_StopBeam_Params
{
};

// Function Action_Fire_Beam.Action_Fire_Beam_C.OnActionStop
struct UAction_Fire_Beam_C_OnActionStop_Params
{
};

// Function Action_Fire_Beam.Action_Fire_Beam_C.OnActionStart
struct UAction_Fire_Beam_C_OnActionStart_Params
{
};

// Function Action_Fire_Beam.Action_Fire_Beam_C.ExecuteUbergraph_Action_Fire_Beam
struct UAction_Fire_Beam_C_ExecuteUbergraph_Action_Fire_Beam_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
