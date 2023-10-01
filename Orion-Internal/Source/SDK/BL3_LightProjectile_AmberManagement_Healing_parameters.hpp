#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_AmberManagement_Healing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_AmberManagement_Healing.LightProjectile_AmberManagement_Healing_C.TryEnableHoming
struct ULightProjectile_AmberManagement_Healing_C_TryEnableHoming_Params
{
	class UOakLightProjectile*                         LightProjectile;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_AmberManagement_Healing.LightProjectile_AmberManagement_Healing_C.EnableProjectileHoming
struct ULightProjectile_AmberManagement_Healing_C_EnableProjectileHoming_Params
{
	class UOakLightProjectile*                         LightProjectile;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_AmberManagement_Healing.LightProjectile_AmberManagement_Healing_C.OnLifetimeExpired
struct ULightProjectile_AmberManagement_Healing_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
