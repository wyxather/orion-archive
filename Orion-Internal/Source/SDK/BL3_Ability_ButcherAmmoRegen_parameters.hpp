#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_ButcherAmmoRegen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.OnActivated
struct UAbility_ButcherAmmoRegen_C_OnActivated_Params
{
};

// Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.WeaponFired
struct UAbility_ButcherAmmoRegen_C_WeaponFired_Params
{
};

// Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.ExecuteUbergraph_Ability_ButcherAmmoRegen
struct UAbility_ButcherAmmoRegen_C_ExecuteUbergraph_Ability_ButcherAmmoRegen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
