#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectileDetonate
struct ATEDProjectile_Base_C_AIProjectileDetonate_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.DialogueTargetSearch
struct ATEDProjectile_Base_C_DialogueTargetSearch_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.DialogueThrown
struct ATEDProjectile_Base_C_DialogueThrown_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.SetExplosionRadius
struct ATEDProjectile_Base_C_SetExplosionRadius_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectile_CanBeStolen
struct ATEDProjectile_Base_C_AIProjectile_CanBeStolen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectileArm
struct ATEDProjectile_Base_C_AIProjectileArm_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectileDisarm
struct ATEDProjectile_Base_C_AIProjectileDisarm_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.CalculateExplosionDamage
struct ATEDProjectile_Base_C_CalculateExplosionDamage_Params
{
	float*                                             DamagePerShot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               BulletsPerShot;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.RemoveAmmo
struct ATEDProjectile_Base_C_RemoveAmmo_Params
{
	int                                                ThrowType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.SpawnRotationandOffset
struct ATEDProjectile_Base_C_SpawnRotationandOffset_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.InitCombo
struct ATEDProjectile_Base_C_InitCombo_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.StabilizerFXandAudio
struct ATEDProjectile_Base_C_StabilizerFXandAudio_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.StabilizerBoostBouncy
struct ATEDProjectile_Base_C_StabilizerBoostBouncy_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.StabilizerBoost
struct ATEDProjectile_Base_C_StabilizerBoost_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.InitHoming
struct ATEDProjectile_Base_C_InitHoming_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.InitRotation
struct ATEDProjectile_Base_C_InitRotation_Params
{
	int                                                ThrowStyle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.InitStabilizer
struct ATEDProjectile_Base_C_InitStabilizer_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.FuelOut
struct ATEDProjectile_Base_C_FuelOut_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.UserConstructionScript
struct ATEDProjectile_Base_C_UserConstructionScript_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.ReceiveBeginPlay
struct ATEDProjectile_Base_C_ReceiveBeginPlay_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base
struct ATEDProjectile_Base_C_BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.OnBehaviorInitialized
struct ATEDProjectile_Base_C_OnBehaviorInitialized_Params
{
	class UClass**                                     BehaviorClass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.ReceiveHit
struct ATEDProjectile_Base_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.HomingThrust
struct ATEDProjectile_Base_C_HomingThrust_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectile_Arm
struct ATEDProjectile_Base_C_AIProjectile_Arm_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.EnableDrunk
struct ATEDProjectile_Base_C_EnableDrunk_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectile_Disarm
struct ATEDProjectile_Base_C_AIProjectile_Disarm_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.FuseExpired
struct ATEDProjectile_Base_C_FuseExpired_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.OnHitWorld
struct ATEDProjectile_Base_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.OnBeginExplode
struct ATEDProjectile_Base_C_OnBeginExplode_Params
{
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Base
struct ATEDProjectile_Base_C_BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Base_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TEDProjectile_Base.TEDProjectile_Base_C.ExecuteUbergraph_TEDProjectile_Base
struct ATEDProjectile_Base_C_ExecuteUbergraph_TEDProjectile_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
