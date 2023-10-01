#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_CM_Ixora2_SRN_L01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_CM_Ixora2_SRN_L01.LightProjectile_CM_Ixora2_SRN_L01_C.OnExplode
struct ULightProjectile_CM_Ixora2_SRN_L01_C_OnExplode_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_CM_Ixora2_SRN_L01.LightProjectile_CM_Ixora2_SRN_L01_C.OnImpact
struct ULightProjectile_CM_Ixora2_SRN_L01_C_OnImpact_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function LightProjectile_CM_Ixora2_SRN_L01.LightProjectile_CM_Ixora2_SRN_L01_C.OnLifetimeExpired
struct ULightProjectile_CM_Ixora2_SRN_L01_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_CM_Ixora2_SRN_L01.LightProjectile_CM_Ixora2_SRN_L01_C.TryEnableProjectileHoming
struct ULightProjectile_CM_Ixora2_SRN_L01_C_TryEnableProjectileHoming_Params
{
	class UOakLightProjectile*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_CM_Ixora2_SRN_L01.LightProjectile_CM_Ixora2_SRN_L01_C.EnableProjectileHoming
struct ULightProjectile_CM_Ixora2_SRN_L01_C_EnableProjectileHoming_Params
{
	class UOakLightProjectile*                         LightProjectile;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
