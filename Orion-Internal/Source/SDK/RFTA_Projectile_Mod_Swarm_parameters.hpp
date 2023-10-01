#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Projectile_Mod_Swarm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.OnRep_IsHome
struct AProjectile_Mod_Swarm_C_OnRep_IsHome_Params
{
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.EnableVFX
struct AProjectile_Mod_Swarm_C_EnableVFX_Params
{
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.DisableVFX
struct AProjectile_Mod_Swarm_C_DisableVFX_Params
{
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.UpdateHomeStatus
struct AProjectile_Mod_Swarm_C_UpdateHomeStatus_Params
{
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.UpdateCollision
struct AProjectile_Mod_Swarm_C_UpdateCollision_Params
{
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.OnRep_ReturningHome
struct AProjectile_Mod_Swarm_C_OnRep_ReturningHome_Params
{
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.UpdateHome
struct AProjectile_Mod_Swarm_C_UpdateHome_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.GoToHome
struct AProjectile_Mod_Swarm_C_GoToHome_Params
{
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.UpdateTarget
struct AProjectile_Mod_Swarm_C_UpdateTarget_Params
{
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.ValidateHit
struct AProjectile_Mod_Swarm_C_ValidateHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool*                                              bSimulating;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.OnProjectileHit
struct AProjectile_Mod_Swarm_C_OnProjectileHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.ReceiveTick
struct AProjectile_Mod_Swarm_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.HandleTargetAcceleration
struct AProjectile_Mod_Swarm_C_HandleTargetAcceleration_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.SetHomingTarget
struct AProjectile_Mod_Swarm_C_SetHomingTarget_Params
{
	class AActor**                                     NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C. StopHoming
struct AProjectile_Mod_Swarm_C__StopHoming_Params
{
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.InitDumbFire
struct AProjectile_Mod_Swarm_C_InitDumbFire_Params
{
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.ReceiveBeginPlay
struct AProjectile_Mod_Swarm_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.ExecuteUbergraph_Projectile_Mod_Swarm
struct AProjectile_Mod_Swarm_C_ExecuteUbergraph_Projectile_Mod_Swarm_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.OnHomeStatusChanged__DelegateSignature
struct AProjectile_Mod_Swarm_C_OnHomeStatusChanged__DelegateSignature_Params
{
	class AActor**                                     CurrentProjectile;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              IsHome;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
