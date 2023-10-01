#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TheSeventhSense_Implosion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_TheSeventhSense_Implosion.LightProjectile_TheSeventhSense_Implosion_C.OnAttached
struct ULightProjectile_TheSeventhSense_Implosion_C_OnAttached_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     AttachedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_TheSeventhSense_Implosion.LightProjectile_TheSeventhSense_Implosion_C.EnableHoming
struct ULightProjectile_TheSeventhSense_Implosion_C_EnableHoming_Params
{
	class ULightProjectile*                            Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_TheSeventhSense_Implosion.LightProjectile_TheSeventhSense_Implosion_C.OnLifetimeExpired
struct ULightProjectile_TheSeventhSense_Implosion_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
