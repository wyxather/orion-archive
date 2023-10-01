#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Redeye_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Redeye.Ability_Redeye_C.OnActivated
struct UAbility_Redeye_C_OnActivated_Params
{
};

// Function Ability_Redeye.Ability_Redeye_C.WeaponFired
struct UAbility_Redeye_C_WeaponFired_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Redeye.Ability_Redeye_C.OnCausedDeath
struct UAbility_Redeye_C_OnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Redeye.Ability_Redeye_C.UpdateWeapon
struct UAbility_Redeye_C_UpdateWeapon_Params
{
};

// Function Ability_Redeye.Ability_Redeye_C.ExecuteUbergraph_Ability_Redeye
struct UAbility_Redeye_C_ExecuteUbergraph_Ability_Redeye_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
