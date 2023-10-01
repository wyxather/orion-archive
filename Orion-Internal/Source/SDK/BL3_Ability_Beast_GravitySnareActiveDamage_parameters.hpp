#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_GravitySnareActiveDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.OnActivated
struct UAbility_Beast_GravitySnareActiveDamage_C_OnActivated_Params
{
};

// Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.OnDeactivated
struct UAbility_Beast_GravitySnareActiveDamage_C_OnDeactivated_Params
{
};

// Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.GravitySnareStarted
struct UAbility_Beast_GravitySnareActiveDamage_C_GravitySnareStarted_Params
{
	TEnumAsByte<Enum_BeastmasterActionSkill>           ActionSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.GravitySnareEnded
struct UAbility_Beast_GravitySnareActiveDamage_C_GravitySnareEnded_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.ChangedSkill
struct UAbility_Beast_GravitySnareActiveDamage_C_ChangedSkill_Params
{
	class UOakPlayerAbilitySlotData*                   SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C.ExecuteUbergraph_Ability_Beast_GravitySnareActiveDamage
struct UAbility_Beast_GravitySnareActiveDamage_C_ExecuteUbergraph_Ability_Beast_GravitySnareActiveDamage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
