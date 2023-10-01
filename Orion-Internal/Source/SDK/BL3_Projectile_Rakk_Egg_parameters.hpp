#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Rakk_Egg_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.UserConstructionScript
struct AProjectile_Rakk_Egg_C_UserConstructionScript_Params
{
};

// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.EggGrow__FinishedFunc
struct AProjectile_Rakk_Egg_C_EggGrow__FinishedFunc_Params
{
};

// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.EggGrow__UpdateFunc
struct AProjectile_Rakk_Egg_C_EggGrow__UpdateFunc_Params
{
};

// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.GbxAsyncRequest_Failed_3BCF79D24632D514162059875F138F2C
struct AProjectile_Rakk_Egg_C_GbxAsyncRequest_Failed_3BCF79D24632D514162059875F138F2C_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.GbxAsyncRequest_Spawned_3BCF79D24632D514162059875F138F2C
struct AProjectile_Rakk_Egg_C_GbxAsyncRequest_Spawned_3BCF79D24632D514162059875F138F2C_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.ReceiveBeginPlay
struct AProjectile_Rakk_Egg_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.OnHitEnemy
struct AProjectile_Rakk_Egg_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.SpawnRakklesnake
struct AProjectile_Rakk_Egg_C_SpawnRakklesnake_Params
{
};

// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Projectile_Rakk_Egg
struct AProjectile_Rakk_Egg_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Projectile_Rakk_Egg_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.ExecuteUbergraph_Projectile_Rakk_Egg
struct AProjectile_Rakk_Egg_C_ExecuteUbergraph_Projectile_Rakk_Egg_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
