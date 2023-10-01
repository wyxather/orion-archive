#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_VLA_PS_Firefly_Child_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_VLA_PS_Firefly_Child.LightProjectile_VLA_PS_Firefly_Child_C.OnRicochet
struct ULightProjectile_VLA_PS_Firefly_Child_C_OnRicochet_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function LightProjectile_VLA_PS_Firefly_Child.LightProjectile_VLA_PS_Firefly_Child_C.HomeIn
struct ULightProjectile_VLA_PS_Firefly_Child_C_HomeIn_Params
{
	class UOakLightProjectile*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
