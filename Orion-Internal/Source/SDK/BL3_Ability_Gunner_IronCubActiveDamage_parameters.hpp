#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_IronCubActiveDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.OnActivated
struct UAbility_Gunner_IronCubActiveDamage_C_OnActivated_Params
{
};

// Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.OnDeactivated
struct UAbility_Gunner_IronCubActiveDamage_C_OnDeactivated_Params
{
};

// Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.ChangedSkill
struct UAbility_Gunner_IronCubActiveDamage_C_ChangedSkill_Params
{
	class UOakPlayerAbilitySlotData*                   SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.IronCubStarted
struct UAbility_Gunner_IronCubActiveDamage_C_IronCubStarted_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.IronCubEnded
struct UAbility_Gunner_IronCubActiveDamage_C_IronCubEnded_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C.ExecuteUbergraph_Ability_Gunner_IronCubActiveDamage
struct UAbility_Gunner_IronCubActiveDamage_C_ExecuteUbergraph_Ability_Gunner_IronCubActiveDamage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
