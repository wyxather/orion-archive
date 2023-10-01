#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_ViolentTapestry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.CalculateAbilityState
struct UPassiveSkill_Siren_ViolentTapestry_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.OnActivated
struct UPassiveSkill_Siren_ViolentTapestry_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestry_OnCausedElementalEffect
struct UPassiveSkill_Siren_ViolentTapestry_C_ViolentTapestry_OnCausedElementalEffect_Params
{
	class AActor*                                      Causer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectSpec                           Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestry_OnCausedMaxResourceEffect
struct UPassiveSkill_Siren_ViolentTapestry_C_ViolentTapestry_OnCausedMaxResourceEffect_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakStatusEffectResourceEffectType                 ResourceEffectType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestryTriggerRushStacks
struct UPassiveSkill_Siren_ViolentTapestry_C_ViolentTapestryTriggerRushStacks_Params
{
	int                                                RushStacks;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ExecuteUbergraph_PassiveSkill_Siren_ViolentTapestry
struct UPassiveSkill_Siren_ViolentTapestry_C_ExecuteUbergraph_PassiveSkill_Siren_ViolentTapestry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
