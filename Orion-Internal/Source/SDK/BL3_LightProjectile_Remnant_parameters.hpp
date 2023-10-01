#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Remnant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_Remnant.LightProjectile_Remnant_C.OnLifetimeExpired
struct ULightProjectile_Remnant_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Remnant.LightProjectile_Remnant_C.TryEnableProjectileHoming
struct ULightProjectile_Remnant_C_TryEnableProjectileHoming_Params
{
	class UOakLightProjectile*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Remnant.LightProjectile_Remnant_C.EnableProjectileHoming
struct ULightProjectile_Remnant_C_EnableProjectileHoming_Params
{
	class UOakLightProjectile*                         LightProjectile;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
