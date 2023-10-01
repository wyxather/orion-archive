#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Handsome_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.SetExplosionRadius
struct ATEDProjectile_Handsome_C_SetExplosionRadius_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_CanBeStolen
struct ATEDProjectile_Handsome_C_AIProjectile_CanBeStolen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectileArm
struct ATEDProjectile_Handsome_C_AIProjectileArm_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectileDisarm
struct ATEDProjectile_Handsome_C_AIProjectileDisarm_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.CalculateExplosionDamage
struct ATEDProjectile_Handsome_C_CalculateExplosionDamage_Params
{
	float*                                             DamagePerShot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               BulletsPerShot;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.RemoveAmmo
struct ATEDProjectile_Handsome_C_RemoveAmmo_Params
{
	int                                                ThrowType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.SpawnRotationandOffset
struct ATEDProjectile_Handsome_C_SpawnRotationandOffset_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitCombo
struct ATEDProjectile_Handsome_C_InitCombo_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerFXandAudio
struct ATEDProjectile_Handsome_C_StabilizerFXandAudio_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerBoostBouncy
struct ATEDProjectile_Handsome_C_StabilizerBoostBouncy_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerBoost
struct ATEDProjectile_Handsome_C_StabilizerBoost_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitHoming
struct ATEDProjectile_Handsome_C_InitHoming_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitRotation
struct ATEDProjectile_Handsome_C_InitRotation_Params
{
	int                                                ThrowStyle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitStabilizer
struct ATEDProjectile_Handsome_C_InitStabilizer_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.UserConstructionScript
struct ATEDProjectile_Handsome_C_UserConstructionScript_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.OnBehaviorInitialized
struct ATEDProjectile_Handsome_C_OnBehaviorInitialized_Params
{
	class UClass**                                     BehaviorClass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.HomingThrust
struct ATEDProjectile_Handsome_C_HomingThrust_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base
struct ATEDProjectile_Handsome_C_BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_Arm
struct ATEDProjectile_Handsome_C_AIProjectile_Arm_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.ReceiveBeginPlay
struct ATEDProjectile_Handsome_C_ReceiveBeginPlay_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.EnableDrunk
struct ATEDProjectile_Handsome_C_EnableDrunk_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_Disarm
struct ATEDProjectile_Handsome_C_AIProjectile_Disarm_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.FuseExpired
struct ATEDProjectile_Handsome_C_FuseExpired_Params
{
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.OnHitWorld
struct ATEDProjectile_Handsome_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Handsome
struct ATEDProjectile_Handsome_C_BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Handsome_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.ExecuteUbergraph_TEDProjectile_Handsome
struct ATEDProjectile_Handsome_C_ExecuteUbergraph_TEDProjectile_Handsome_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
