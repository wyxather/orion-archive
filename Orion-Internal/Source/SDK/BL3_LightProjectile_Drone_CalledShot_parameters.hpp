#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Drone_CalledShot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.ShouldSimulateTriggerRelease
struct ULightProjectile_Drone_CalledShot_C_ShouldSimulateTriggerRelease_Params
{
	class AActor*                                      ProjectileOwner;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.OnBegin
struct ULightProjectile_Drone_CalledShot_C_OnBegin_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.StartHoming
struct ULightProjectile_Drone_CalledShot_C_StartHoming_Params
{
	class UOakLightProjectile*                         LightProjectile;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.TryEnableHoming
struct ULightProjectile_Drone_CalledShot_C_TryEnableHoming_Params
{
	class UOakLightProjectile*                         LightProjectile;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.OnLifetimeExpired
struct ULightProjectile_Drone_CalledShot_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
