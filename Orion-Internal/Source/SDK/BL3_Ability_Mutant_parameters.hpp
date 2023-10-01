#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Mutant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Mutant.Ability_Mutant_C.OnResumed
struct UAbility_Mutant_C_OnResumed_Params
{
};

// Function Ability_Mutant.Ability_Mutant_C.OnActivated
struct UAbility_Mutant_C_OnActivated_Params
{
};

// Function Ability_Mutant.Ability_Mutant_C.OnRegistered
struct UAbility_Mutant_C_OnRegistered_Params
{
};

// Function Ability_Mutant.Ability_Mutant_C.CausedDamage
struct UAbility_Mutant_C_CausedDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_Mutant.Ability_Mutant_C.OnAbilityTimerStarted
struct UAbility_Mutant_C_OnAbilityTimerStarted_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Mutant.Ability_Mutant_C.OnAbilityTimerEnded
struct UAbility_Mutant_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Mutant.Ability_Mutant_C.ExecuteUbergraph_Ability_Mutant
struct UAbility_Mutant_C_ExecuteUbergraph_Ability_Mutant_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
