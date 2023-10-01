#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HW_COV_SawBlade_AI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_HW_COV_SawBlade_AI.LightProjectile_HW_COV_SawBlade_AI_C.OnImpact
struct ULightProjectile_HW_COV_SawBlade_AI_C_OnImpact_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function LightProjectile_HW_COV_SawBlade_AI.LightProjectile_HW_COV_SawBlade_AI_C.OnLifetimeExpired
struct ULightProjectile_HW_COV_SawBlade_AI_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
