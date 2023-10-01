#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_CalledShot_DurationReturn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C.OnExplode
struct ULightProjectile_CalledShot_DurationReturn_C_OnExplode_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C.TryEnableProjectileHoming
struct ULightProjectile_CalledShot_DurationReturn_C_TryEnableProjectileHoming_Params
{
	class UOakLightProjectile*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C.EnableProjectileHoming
struct ULightProjectile_CalledShot_DurationReturn_C_EnableProjectileHoming_Params
{
	class UOakLightProjectile*                         LightProjectile;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
