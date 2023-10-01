#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HYP_IceBurger_Child2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_HYP_IceBurger_Child2.LightProjectile_HYP_IceBurger_Child2_C.OnDamage
struct ULightProjectile_HYP_IceBurger_Child2_C_OnDamage_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bCritical;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_HYP_IceBurger_Child2.LightProjectile_HYP_IceBurger_Child2_C.OnExplode
struct ULightProjectile_HYP_IceBurger_Child2_C_OnExplode_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_HYP_IceBurger_Child2.LightProjectile_HYP_IceBurger_Child2_C.OnLifetimeExpired
struct ULightProjectile_HYP_IceBurger_Child2_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_HYP_IceBurger_Child2.LightProjectile_HYP_IceBurger_Child2_C.OnRicochet
struct ULightProjectile_HYP_IceBurger_Child2_C_OnRicochet_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
