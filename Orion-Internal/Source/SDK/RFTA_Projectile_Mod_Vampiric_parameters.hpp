#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Projectile_Mod_Vampiric_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.MakeAbsorbDamageInfo
struct AProjectile_Mod_Vampiric_C_MakeAbsorbDamageInfo_Params
{
	struct FDamageInfo                                 Damage_info;                                              // (Parm, OutParm, ContainsInstancedReference)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnDamageDone
struct AProjectile_Mod_Vampiric_C_OnDamageDone_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.LerpScale
struct AProjectile_Mod_Vampiric_C_LerpScale_Params
{
	float*                                             Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.UpdateVariance
struct AProjectile_Mod_Vampiric_C_UpdateVariance_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.LerpToVarianceLocation
struct AProjectile_Mod_Vampiric_C_LerpToVarianceLocation_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ResetVarianceLocationTarget
struct AProjectile_Mod_Vampiric_C_ResetVarianceLocationTarget_Params
{
	bool*                                              ForceImmediate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.AddVarianceLocationTarget
struct AProjectile_Mod_Vampiric_C_AddVarianceLocationTarget_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.GetRegenAndDuration
struct AProjectile_Mod_Vampiric_C_GetRegenAndDuration_Params
{
	float                                              Regen;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.GiveHealthToPlayer
struct AProjectile_Mod_Vampiric_C_GiveHealthToPlayer_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.DetermineReachedPlayer
struct AProjectile_Mod_Vampiric_C_DetermineReachedPlayer_Params
{
	bool                                               ReachedPlayer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnAttachedActorDied
struct AProjectile_Mod_Vampiric_C_OnAttachedActorDied_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.AbsorbHealth
struct AProjectile_Mod_Vampiric_C_AbsorbHealth_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.StopAbsorbingAndReturnHome
struct AProjectile_Mod_Vampiric_C_StopAbsorbingAndReturnHome_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.BeginAbsorbTimer
struct AProjectile_Mod_Vampiric_C_BeginAbsorbTimer_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.SetAttachedActor
struct AProjectile_Mod_Vampiric_C_SetAttachedActor_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ValidateHit
struct AProjectile_Mod_Vampiric_C_ValidateHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool*                                              bSimulating;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.GoToHome
struct AProjectile_Mod_Vampiric_C_GoToHome_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.UpdateCollision
struct AProjectile_Mod_Vampiric_C_UpdateCollision_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnRep_ReturningHome
struct AProjectile_Mod_Vampiric_C_OnRep_ReturningHome_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.UpdateHome
struct AProjectile_Mod_Vampiric_C_UpdateHome_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.UpdateTarget
struct AProjectile_Mod_Vampiric_C_UpdateTarget_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ReceiveTick
struct AProjectile_Mod_Vampiric_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnProjectileStop
struct AProjectile_Mod_Vampiric_C_OnProjectileStop_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnProjectileHit
struct AProjectile_Mod_Vampiric_C_OnProjectileHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ReceiveBeginPlay
struct AProjectile_Mod_Vampiric_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.SetHomingTarget
struct AProjectile_Mod_Vampiric_C_SetHomingTarget_Params
{
	class AActor**                                     NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C. StopHoming
struct AProjectile_Mod_Vampiric_C__StopHoming_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.PlayHealthVFX
struct AProjectile_Mod_Vampiric_C_PlayHealthVFX_Params
{
	class ACharacter**                                 OwningCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.DetachAndReturnHome
struct AProjectile_Mod_Vampiric_C_DetachAndReturnHome_Params
{
	float*                                             DelayBeforeMoving;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.BugVanishes
struct AProjectile_Mod_Vampiric_C_BugVanishes_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.PlayLandingEffects
struct AProjectile_Mod_Vampiric_C_PlayLandingEffects_Params
{
	bool*                                              IsCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.PlayEatingVFX
struct AProjectile_Mod_Vampiric_C_PlayEatingVFX_Params
{
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.OnTargetTookDamage
struct AProjectile_Mod_Vampiric_C_OnTargetTookDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Projectile_Mod_Vampiric.Projectile_Mod_Vampiric_C.ExecuteUbergraph_Projectile_Mod_Vampiric
struct AProjectile_Mod_Vampiric_C_ExecuteUbergraph_Projectile_Mod_Vampiric_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
