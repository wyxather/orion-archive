#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_AttackCmd_TerrorFireDMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnActivated
struct UAbility_Beast_AttackCmd_TerrorFireDMG_C_OnActivated_Params
{
};

// Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnDeactivated
struct UAbility_Beast_AttackCmd_TerrorFireDMG_C_OnDeactivated_Params
{
};

// Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.AttackCommandGiven
struct UAbility_Beast_AttackCmd_TerrorFireDMG_C_AttackCommandGiven_Params
{
	EOakActionAbilityPetEvolutionType                  PetEvolution;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakActionAbilityPetType                           PetType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnAbilityTimerEnded
struct UAbility_Beast_AttackCmd_TerrorFireDMG_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.ExecuteUbergraph_Ability_Beast_AttackCmd_TerrorFireDMG
struct UAbility_Beast_AttackCmd_TerrorFireDMG_C_ExecuteUbergraph_Ability_Beast_AttackCmd_TerrorFireDMG_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
