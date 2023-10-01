#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_PrideOfTheIskal_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_PrideOfTheIskal_Projectile.Weapon_PrideOfTheIskal_Projectile_C.OnProjectileHit
struct AWeapon_PrideOfTheIskal_Projectile_C_OnProjectileHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Weapon_PrideOfTheIskal_Projectile.Weapon_PrideOfTheIskal_Projectile_C.ExecuteUbergraph_Weapon_PrideOfTheIskal_Projectile
struct AWeapon_PrideOfTheIskal_Projectile_C_ExecuteUbergraph_Weapon_PrideOfTheIskal_Projectile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
