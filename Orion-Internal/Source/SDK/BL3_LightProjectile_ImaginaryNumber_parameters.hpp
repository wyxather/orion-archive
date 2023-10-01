#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_ImaginaryNumber_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_ImaginaryNumber.LightProjectile_ImaginaryNumber_C.SpawnOffshoots2
struct ULightProjectile_ImaginaryNumber_C_SpawnOffshoots2_Params
{
	class ULightProjectile*                            Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_ImaginaryNumber.LightProjectile_ImaginaryNumber_C.SpawnOffshoots
struct ULightProjectile_ImaginaryNumber_C_SpawnOffshoots_Params
{
	class ULightProjectile*                            Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_ImaginaryNumber.LightProjectile_ImaginaryNumber_C.OnDamage
struct ULightProjectile_ImaginaryNumber_C_OnDamage_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bCritical;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
