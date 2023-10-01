#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_TED_SG_Sludge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.UserConstructionScript
struct AProjectile_TED_SG_Sludge_C_UserConstructionScript_Params
{
};

// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.OnHitWorld
struct AProjectile_TED_SG_Sludge_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.ReceiveHit
struct AProjectile_TED_SG_Sludge_C_ReceiveHit_Params
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

// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.GoToTarget
struct AProjectile_TED_SG_Sludge_C_GoToTarget_Params
{
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.ReceiveBeginPlay
struct AProjectile_TED_SG_Sludge_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.OnExplode
struct AProjectile_TED_SG_Sludge_C_OnExplode_Params
{
};

// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge
struct AProjectile_TED_SG_Sludge_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge_Params
{
};

// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_1_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge
struct AProjectile_TED_SG_Sludge_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_1_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge_Params
{
};

// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.OnHitEnemy
struct AProjectile_TED_SG_Sludge_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.ExecuteUbergraph_Projectile_TED_SG_Sludge
struct AProjectile_TED_SG_Sludge_C_ExecuteUbergraph_Projectile_TED_SG_Sludge_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
