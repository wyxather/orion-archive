#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Operative_BarrierSpawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.GetBarrierPlacementTransform
struct AProjectile_Operative_BarrierSpawner_C_GetBarrierPlacementTransform_Params
{
	struct FTransform                                  res;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.UserConstructionScript
struct AProjectile_Operative_BarrierSpawner_C_UserConstructionScript_Params
{
};

// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner
struct AProjectile_Operative_BarrierSpawner_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.SpawnBarrier
struct AProjectile_Operative_BarrierSpawner_C_SpawnBarrier_Params
{
};

// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OnExplode
struct AProjectile_Operative_BarrierSpawner_C_OnExplode_Params
{
};

// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OnHitWorld
struct AProjectile_Operative_BarrierSpawner_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OpenHitWorldGate
struct AProjectile_Operative_BarrierSpawner_C_OpenHitWorldGate_Params
{
};

// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.ExecuteUbergraph_Projectile_Operative_BarrierSpawner
struct AProjectile_Operative_BarrierSpawner_C_ExecuteUbergraph_Projectile_Operative_BarrierSpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
