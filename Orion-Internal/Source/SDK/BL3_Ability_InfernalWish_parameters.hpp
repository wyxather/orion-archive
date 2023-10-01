#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_InfernalWish_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_InfernalWish.Ability_InfernalWish_C.OnActivated
struct UAbility_InfernalWish_C_OnActivated_Params
{
};

// Function Ability_InfernalWish.Ability_InfernalWish_C.OnDeactivated
struct UAbility_InfernalWish_C_OnDeactivated_Params
{
};

// Function Ability_InfernalWish.Ability_InfernalWish_C.WeaponFired
struct UAbility_InfernalWish_C_WeaponFired_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_InfernalWish.Ability_InfernalWish_C.ExecuteUbergraph_Ability_InfernalWish
struct UAbility_InfernalWish_C_ExecuteUbergraph_Ability_InfernalWish_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
