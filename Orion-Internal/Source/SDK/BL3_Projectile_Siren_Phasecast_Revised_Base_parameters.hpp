#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_Phasecast_Revised_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.TryToAllure
struct AProjectile_Siren_Phasecast_Revised_Base_C_TryToAllure_Params
{
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.HandleWorldHit
struct AProjectile_Siren_Phasecast_Revised_Base_C_HandleWorldHit_Params
{
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.DoDamageToWorld
struct AProjectile_Siren_Phasecast_Revised_Base_C_DoDamageToWorld_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetOverlapComponent
struct AProjectile_Siren_Phasecast_Revised_Base_C_GetOverlapComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetTargetedHitDirectionForDamage
struct AProjectile_Siren_Phasecast_Revised_Base_C_GetTargetedHitDirectionForDamage_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     res;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.CalculateDamage
struct AProjectile_Siren_Phasecast_Revised_Base_C_CalculateDamage_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.DoDamageToEnemy
struct AProjectile_Siren_Phasecast_Revised_Base_C_DoDamageToEnemy_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.HandleEnemyHit
struct AProjectile_Siren_Phasecast_Revised_Base_C_HandleEnemyHit_Params
{
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetImpactEffect
struct AProjectile_Siren_Phasecast_Revised_Base_C_GetImpactEffect_Params
{
	class UImpactData*                                 res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.PlayImpactEffect
struct AProjectile_Siren_Phasecast_Revised_Base_C_PlayImpactEffect_Params
{
	struct FHitResult                                  InHitInfo;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ConfigureSkeletalMesh
struct AProjectile_Siren_Phasecast_Revised_Base_C_ConfigureSkeletalMesh_Params
{
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.UserConstructionScript
struct AProjectile_Siren_Phasecast_Revised_Base_C_UserConstructionScript_Params
{
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ReceiveBeginPlay
struct AProjectile_Siren_Phasecast_Revised_Base_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnHitWorld
struct AProjectile_Siren_Phasecast_Revised_Base_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnHitEnemy
struct AProjectile_Siren_Phasecast_Revised_Base_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnOverlappedEnemy
struct AProjectile_Siren_Phasecast_Revised_Base_C_OnOverlappedEnemy_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnOverlappedNeutral
struct AProjectile_Siren_Phasecast_Revised_Base_C_OnOverlappedNeutral_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ReceiveEndPlay
struct AProjectile_Siren_Phasecast_Revised_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Base
struct AProjectile_Siren_Phasecast_Revised_Base_C_ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
