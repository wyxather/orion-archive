#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HW_VLA_Shells_Barrel_CloudBurst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_HW_VLA_Shells_Barrel_CloudBurst.LightProjectile_HW_VLA_Shells_Barrel_CloudBurst_C.OnLifetimeExpired
struct ULightProjectile_HW_VLA_Shells_Barrel_CloudBurst_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_HW_VLA_Shells_Barrel_CloudBurst.LightProjectile_HW_VLA_Shells_Barrel_CloudBurst_C.OnImpact
struct ULightProjectile_HW_VLA_Shells_Barrel_CloudBurst_C_OnImpact_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
