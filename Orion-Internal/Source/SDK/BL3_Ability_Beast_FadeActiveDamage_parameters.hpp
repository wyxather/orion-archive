#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_FadeActiveDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.OnActivated
struct UAbility_Beast_FadeActiveDamage_C_OnActivated_Params
{
};

// Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.OnDeactivated
struct UAbility_Beast_FadeActiveDamage_C_OnDeactivated_Params
{
};

// Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.FadeAwayStarted
struct UAbility_Beast_FadeActiveDamage_C_FadeAwayStarted_Params
{
	TEnumAsByte<Enum_BeastmasterActionSkill>           ActionSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.FadeAwayEnded
struct UAbility_Beast_FadeActiveDamage_C_FadeAwayEnded_Params
{
};

// Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.ChangedSkill
struct UAbility_Beast_FadeActiveDamage_C_ChangedSkill_Params
{
	class UOakPlayerAbilitySlotData*                   SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C.ExecuteUbergraph_Ability_Beast_FadeActiveDamage
struct UAbility_Beast_FadeActiveDamage_C_ExecuteUbergraph_Ability_Beast_FadeActiveDamage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
