#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Beastmaster_TrapSpawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.GetBarrierPlacementTransform
struct AProjectile_Beastmaster_TrapSpawner_C_GetBarrierPlacementTransform_Params
{
	struct FTransform                                  res;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.UserConstructionScript
struct AProjectile_Beastmaster_TrapSpawner_C_UserConstructionScript_Params
{
};

// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner
struct AProjectile_Beastmaster_TrapSpawner_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.SpawnBarrier
struct AProjectile_Beastmaster_TrapSpawner_C_SpawnBarrier_Params
{
};

// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OnExplode
struct AProjectile_Beastmaster_TrapSpawner_C_OnExplode_Params
{
};

// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OnHitWorld
struct AProjectile_Beastmaster_TrapSpawner_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OpenHitWorldGate
struct AProjectile_Beastmaster_TrapSpawner_C_OpenHitWorldGate_Params
{
};

// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ReceiveBeginPlay
struct AProjectile_Beastmaster_TrapSpawner_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.StartWobble
struct AProjectile_Beastmaster_TrapSpawner_C_StartWobble_Params
{
};

// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.DidTrapSpawn
struct AProjectile_Beastmaster_TrapSpawner_C_DidTrapSpawn_Params
{
};

// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ReceiveDestroyed
struct AProjectile_Beastmaster_TrapSpawner_C_ReceiveDestroyed_Params
{
};

// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner
struct AProjectile_Beastmaster_TrapSpawner_C_ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
