#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_GravityCoreShot_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.FilterIncomingDamage
struct AMod_GravityCoreShot_Projectile_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.OnProjectileHit
struct AMod_GravityCoreShot_Projectile_C_OnProjectileHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.ReceiveBeginPlay
struct AMod_GravityCoreShot_Projectile_C_ReceiveBeginPlay_Params
{
};

// Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.OnProjectileShot
struct AMod_GravityCoreShot_Projectile_C_OnProjectileShot_Params
{
};

// Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.ExecuteUbergraph_Mod_GravityCoreShot_Projectile
struct AMod_GravityCoreShot_Projectile_C_ExecuteUbergraph_Mod_GravityCoreShot_Projectile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
