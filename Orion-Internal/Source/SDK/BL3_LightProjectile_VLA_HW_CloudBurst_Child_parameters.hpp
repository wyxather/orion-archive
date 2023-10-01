#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_VLA_HW_CloudBurst_Child_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_VLA_HW_CloudBurst_Child.LightProjectile_VLA_HW_CloudBurst_Child_C.OnExplode
struct ULightProjectile_VLA_HW_CloudBurst_Child_C_OnExplode_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_VLA_HW_CloudBurst_Child.LightProjectile_VLA_HW_CloudBurst_Child_C.Split
struct ULightProjectile_VLA_HW_CloudBurst_Child_C_Split_Params
{
	class UOakLightProjectile*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_VLA_HW_CloudBurst_Child.LightProjectile_VLA_HW_CloudBurst_Child_C.OnLifetimeExpired
struct ULightProjectile_VLA_HW_CloudBurst_Child_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
