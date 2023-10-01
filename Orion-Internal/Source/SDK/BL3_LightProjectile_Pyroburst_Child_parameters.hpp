#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Pyroburst_Child_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_Pyroburst_Child.LightProjectile_Pyroburst_Child_C.OnBegin
struct ULightProjectile_Pyroburst_Child_C_OnBegin_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Pyroburst_Child.LightProjectile_Pyroburst_Child_C.OnExplode
struct ULightProjectile_Pyroburst_Child_C_OnExplode_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Pyroburst_Child.LightProjectile_Pyroburst_Child_C.OnLifetimeExpired
struct ULightProjectile_Pyroburst_Child_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Pyroburst_Child.LightProjectile_Pyroburst_Child_C.OnImpact
struct ULightProjectile_Pyroburst_Child_C_OnImpact_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
