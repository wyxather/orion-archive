#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Conflux_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.RemoveElement
struct UPassiveSkill_Siren_Conflux_C_RemoveElement_Params
{
	class UObject*                                     StatusEffect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.OnActivated
struct UPassiveSkill_Siren_Conflux_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.DamageConfettiOnCausedElementalEffect
struct UPassiveSkill_Siren_Conflux_C_DamageConfettiOnCausedElementalEffect_Params
{
	class AActor*                                      Causer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectSpec                           Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.DamageConfettiOnCausedMaxResourceEffect
struct UPassiveSkill_Siren_Conflux_C_DamageConfettiOnCausedMaxResourceEffect_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakStatusEffectResourceEffectType                 ResourceEffectType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.ReopenGate
struct UPassiveSkill_Siren_Conflux_C_ReopenGate_Params
{
};

// Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.ExecuteUbergraph_PassiveSkill_Siren_Conflux
struct UPassiveSkill_Siren_Conflux_C_ExecuteUbergraph_PassiveSkill_Siren_Conflux_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
