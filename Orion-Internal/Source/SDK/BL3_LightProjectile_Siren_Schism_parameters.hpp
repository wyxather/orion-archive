#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Siren_Schism_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_Siren_Schism.LightProjectile_Siren_Schism_C.OnDamage
struct ULightProjectile_Siren_Schism_C_OnDamage_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bCritical;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Siren_Schism.LightProjectile_Siren_Schism_C.OnLifetimeExpired
struct ULightProjectile_Siren_Schism_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Siren_Schism.LightProjectile_Siren_Schism_C.TryEnableProjectileHoming
struct ULightProjectile_Siren_Schism_C_TryEnableProjectileHoming_Params
{
	class UOakLightProjectile*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Siren_Schism.LightProjectile_Siren_Schism_C.EnableProjectileHoming
struct ULightProjectile_Siren_Schism_C_EnableProjectileHoming_Params
{
	class UOakLightProjectile*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
