#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Swamp_HiveCannon_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Swamp_HiveCannon_Projectile.Weapon_Swamp_HiveCannon_Projectile_C.OnProjectileHit
struct AWeapon_Swamp_HiveCannon_Projectile_C_OnProjectileHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Weapon_Swamp_HiveCannon_Projectile.Weapon_Swamp_HiveCannon_Projectile_C.ExecuteUbergraph_Weapon_Swamp_HiveCannon_Projectile
struct AWeapon_Swamp_HiveCannon_Projectile_C_ExecuteUbergraph_Weapon_Swamp_HiveCannon_Projectile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
