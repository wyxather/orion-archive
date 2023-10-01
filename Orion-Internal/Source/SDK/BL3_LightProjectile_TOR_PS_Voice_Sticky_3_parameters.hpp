#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_PS_Voice_Sticky_3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_TOR_PS_Voice_Sticky_3.LightProjectile_TOR_PS_Voice_Sticky_2_C.OnExplode
struct ULightProjectile_TOR_PS_Voice_Sticky_2_C_OnExplode_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_TOR_PS_Voice_Sticky_3.LightProjectile_TOR_PS_Voice_Sticky_2_C.OnAttached
struct ULightProjectile_TOR_PS_Voice_Sticky_2_C_OnAttached_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     AttachedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_TOR_PS_Voice_Sticky_3.LightProjectile_TOR_PS_Voice_Sticky_2_C.OnLifetimeExpired
struct ULightProjectile_TOR_PS_Voice_Sticky_2_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
