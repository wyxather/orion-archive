#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_UnstableQuills_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayAbsorbedMaxVFX
struct AMod_UnstableQuills_Projectile_C_PlayAbsorbedMaxVFX_Params
{
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayBreakoffVFX
struct AMod_UnstableQuills_Projectile_C_PlayBreakoffVFX_Params
{
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.GetCurrentGatheredDamage
struct AMod_UnstableQuills_Projectile_C_GetCurrentGatheredDamage_Params
{
	float                                              CurrentGatheredDamage;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.LockDamageBonus
struct AMod_UnstableQuills_Projectile_C_LockDamageBonus_Params
{
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.OnAttachedTookDamage
struct AMod_UnstableQuills_Projectile_C_OnAttachedTookDamage_Params
{
	struct FDamageInfo*                                Damage_info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayDestroyVFX
struct AMod_UnstableQuills_Projectile_C_PlayDestroyVFX_Params
{
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.ShouldDoQuickDissolve
struct AMod_UnstableQuills_Projectile_C_ShouldDoQuickDissolve_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.ReceiveTick
struct AMod_UnstableQuills_Projectile_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.OnProjectileHit
struct AMod_UnstableQuills_Projectile_C_OnProjectileHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.OnProjectileStop
struct AMod_UnstableQuills_Projectile_C_OnProjectileStop_Params
{
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.DoDissolve
struct AMod_UnstableQuills_Projectile_C_DoDissolve_Params
{
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.ReceiveBeginPlay
struct AMod_UnstableQuills_Projectile_C_ReceiveBeginPlay_Params
{
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.Destroy
struct AMod_UnstableQuills_Projectile_C_Destroy_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayDestroyFVXMulti
struct AMod_UnstableQuills_Projectile_C_PlayDestroyFVXMulti_Params
{
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.OnNotifyTakeDamage_Event_1
struct AMod_UnstableQuills_Projectile_C_OnNotifyTakeDamage_Event_1_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayBreakOffVFXMulti
struct AMod_UnstableQuills_Projectile_C_PlayBreakOffVFXMulti_Params
{
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.PlayAbsorbedMaxVFXMulti
struct AMod_UnstableQuills_Projectile_C_PlayAbsorbedMaxVFXMulti_Params
{
};

// Function Mod_UnstableQuills_Projectile.Mod_UnstableQuills_Projectile_C.ExecuteUbergraph_Mod_UnstableQuills_Projectile
struct AMod_UnstableQuills_Projectile_C_ExecuteUbergraph_Mod_UnstableQuills_Projectile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
