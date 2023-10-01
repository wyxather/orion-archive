#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Vehicle_SwarmerMissile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_Vehicle_SwarmerMissile.LightProjectile_Vehicle_SwarmerMissile_C.OnLifetimeExpired
struct ULightProjectile_Vehicle_SwarmerMissile_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Vehicle_SwarmerMissile.LightProjectile_Vehicle_SwarmerMissile_C.OnBegin
struct ULightProjectile_Vehicle_SwarmerMissile_C_OnBegin_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
