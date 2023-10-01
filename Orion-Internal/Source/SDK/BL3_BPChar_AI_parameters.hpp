#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_AI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptDetonate
struct ABPChar_AI_C_AIStolenProj_AttemptDetonate_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIStolenProj_GetElementalTypeFromStolenProjectile
struct ABPChar_AI_C_AIStolenProj_GetElementalTypeFromStolenProjectile_Params
{
	EOakElementalType                                  StolenProjectileElement;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptDisarm
struct ABPChar_AI_C_AIStolenProj_AttemptDisarm_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptDestroy
struct ABPChar_AI_C_AIStolenProj_AttemptDestroy_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptAttach
struct ABPChar_AI_C_AIStolenProj_AttemptAttach_Params
{
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptReturnTo
struct ABPChar_AI_C_AIStolenProj_AttemptReturnTo_Params
{
	TEnumAsByte<Enum_AIThrowAtStyle>                   ReturnTo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnglePercent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DirectionOffset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      SpecifiedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptLerpToSocket
struct ABPChar_AI_C_AIStolenProj_AttemptLerpToSocket_Params
{
	struct FName                                       SocketToLerpTo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LerpDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIMelee_GetElementalTypeFromMeleeWeapon
struct ABPChar_AI_C_AIMelee_GetElementalTypeFromMeleeWeapon_Params
{
	EOakElementalType                                  MeleeWeaponElement;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.UserConstructionScript
struct ABPChar_AI_C_UserConstructionScript_Params
{
};

// Function BPChar_AI.BPChar_AI_C.AIMelee_Drop
struct ABPChar_AI_C_AIMelee_Drop_Params
{
	bool                                               RequestNewMeleeWeapon;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIMelee_Spawn
struct ABPChar_AI_C_AIMelee_Spawn_Params
{
};

// Function BPChar_AI.BPChar_AI_C.AIMelee_ThrowAtTarget
struct ABPChar_AI_C_AIMelee_ThrowAtTarget_Params
{
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ThrowAngleOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewMeleeWeapon;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIExplosive_Spawn
struct ABPChar_AI_C_AIExplosive_Spawn_Params
{
};

// Function BPChar_AI.BPChar_AI_C.AIExplosive_Prime
struct ABPChar_AI_C_AIExplosive_Prime_Params
{
};

// Function BPChar_AI.BPChar_AI_C.AIExplosive_ThrowAtTarget
struct ABPChar_AI_C_AIExplosive_ThrowAtTarget_Params
{
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ThrowAngleOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewExplosive;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesn_tExist;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIExplosive_Detonate
struct ABPChar_AI_C_AIExplosive_Detonate_Params
{
	bool                                               KillSelfOnDetonate;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewExplosive;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InstigatorOverride;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIExplosive_Drop
struct ABPChar_AI_C_AIExplosive_Drop_Params
{
	bool                                               RequestNewExplosive;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InstigatorOverride;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIExplosive_ThrowAtActor
struct ABPChar_AI_C_AIExplosive_ThrowAtActor_Params
{
	class AActor*                                      ActorToThrowAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActorSocket;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorOffset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ThrowAngleOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewExplosive;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIExplosive_ThrowAtLocation
struct ABPChar_AI_C_AIExplosive_ThrowAtLocation_Params
{
	struct FVector                                     LocationToThrowAt;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewExplosive;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIMelee_ThrowAtActor
struct ABPChar_AI_C_AIMelee_ThrowAtActor_Params
{
	class AActor*                                      ActorToThrowAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActorSocket;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorOffset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ThrowAngleOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewMeleeWeapon;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIMelee_ThrowAtLocation
struct ABPChar_AI_C_AIMelee_ThrowAtLocation_Params
{
	struct FVector                                     LocationToThrowAt;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewMeleeWeapon;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIMelee_SetNewMeleeWeaponClass
struct ABPChar_AI_C_AIMelee_SetNewMeleeWeaponClass_Params
{
	class UClass*                                      NewMeleeWeaponClass;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIExplosive_SetNewExplosiveClass
struct ABPChar_AI_C_AIExplosive_SetNewExplosiveClass_Params
{
	class UClass*                                      NewExplosiveClass;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIShield_SetNewShieldClass
struct ABPChar_AI_C_AIShield_SetNewShieldClass_Params
{
	class UClass*                                      NewShieldClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIShield_Spawn
struct ABPChar_AI_C_AIShield_Spawn_Params
{
};

// Function BPChar_AI.BPChar_AI_C.AIShield_ThrowAtTarget
struct ABPChar_AI_C_AIShield_ThrowAtTarget_Params
{
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocket;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ThrowAngleOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewShield;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIShield_ThrowAtActor
struct ABPChar_AI_C_AIShield_ThrowAtActor_Params
{
	class AActor*                                      ActorToThrowAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActorSocket;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorOffset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ThrowAngleOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MaxPrediction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewShield;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIShield_ThrowAtLocation
struct ABPChar_AI_C_AIShield_ThrowAtLocation_Params
{
	struct FVector                                     LocationToThrowAt;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ThrowSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThrowAnglePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNewShield;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnIfDoesntExist;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.AIShield_Drop
struct ABPChar_AI_C_AIShield_Drop_Params
{
	bool                                               RequestNewShield;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_AI.BPChar_AI_C.ReceiveBeginPlay
struct ABPChar_AI_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_AI.BPChar_AI_C.ExecuteUbergraph_BPChar_AI
struct ABPChar_AI_C_ExecuteUbergraph_BPChar_AI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
