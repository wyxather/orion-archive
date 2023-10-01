#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_GraspActiveDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.OnActivated
struct UAbility_Siren_GraspActiveDamage_C_OnActivated_Params
{
};

// Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.OnDeactivated
struct UAbility_Siren_GraspActiveDamage_C_OnDeactivated_Params
{
};

// Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.ChangedSkill
struct UAbility_Siren_GraspActiveDamage_C_ChangedSkill_Params
{
	class UOakPlayerAbilitySlotData*                   SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.PhasegraspStarted
struct UAbility_Siren_GraspActiveDamage_C_PhasegraspStarted_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPhaseTranceElementalType                          Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.PhasegraspEnded
struct UAbility_Siren_GraspActiveDamage_C_PhasegraspEnded_Params
{
	bool                                               Killed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Siren_GraspActiveDamage.Ability_Siren_GraspActiveDamage_C.ExecuteUbergraph_Ability_Siren_GraspActiveDamage
struct UAbility_Siren_GraspActiveDamage_C_ExecuteUbergraph_Ability_Siren_GraspActiveDamage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
