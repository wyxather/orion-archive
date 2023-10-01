#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Devastator_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.IsSprayHit
struct AWeapon_Devastator_Projectile_C_IsSprayHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.ReceiveBeginPlay
struct AWeapon_Devastator_Projectile_C_ReceiveBeginPlay_Params
{
};

// Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.ExecuteUbergraph_Weapon_Devastator_Projectile
struct AWeapon_Devastator_Projectile_C_ExecuteUbergraph_Weapon_Devastator_Projectile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
