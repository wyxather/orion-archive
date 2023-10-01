#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_GrenadeLauncher_Singularity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.DoGrenadeSingularityMovement
struct AProjectile_GrenadeLauncher_Singularity_C_DoGrenadeSingularityMovement_Params
{
};

// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.AttemptGrenadeSingularity
struct AProjectile_GrenadeLauncher_Singularity_C_AttemptGrenadeSingularity_Params
{
};

// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.InitGrenadeLauncher
struct AProjectile_GrenadeLauncher_Singularity_C_InitGrenadeLauncher_Params
{
};

// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.UserConstructionScript
struct AProjectile_GrenadeLauncher_Singularity_C_UserConstructionScript_Params
{
};

// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.ReceiveBeginPlay
struct AProjectile_GrenadeLauncher_Singularity_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnExplode
struct AProjectile_GrenadeLauncher_Singularity_C_OnExplode_Params
{
};

// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnHitDamagableObject
struct AProjectile_GrenadeLauncher_Singularity_C_OnHitDamagableObject_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnHitWorld
struct AProjectile_GrenadeLauncher_Singularity_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.ExecuteUbergraph_Projectile_GrenadeLauncher_Singularity
struct AProjectile_GrenadeLauncher_Singularity_C_ExecuteUbergraph_Projectile_GrenadeLauncher_Singularity_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
