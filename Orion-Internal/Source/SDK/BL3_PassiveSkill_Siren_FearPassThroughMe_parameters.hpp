#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_FearPassThroughMe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.GetNovaDamage
struct UPassiveSkill_Siren_FearPassThroughMe_C_GetNovaDamage_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.GetPhaseTranceElementalInfo
struct UPassiveSkill_Siren_FearPassThroughMe_C_GetPhaseTranceElementalInfo_Params
{
	class UClass*                                      OutClass;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EPhaseTranceElementalType                          OutType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.OnActivated
struct UPassiveSkill_Siren_FearPassThroughMe_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.OnAbilityTimerEnded
struct UPassiveSkill_Siren_FearPassThroughMe_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.FearPassThroughMe_OnCausedElementalEffect
struct UPassiveSkill_Siren_FearPassThroughMe_C_FearPassThroughMe_OnCausedElementalEffect_Params
{
	class AActor*                                      Causer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectSpec                           Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.FearPassThroughMe_OnCuasedMaxResourceEffect
struct UPassiveSkill_Siren_FearPassThroughMe_C_FearPassThroughMe_OnCuasedMaxResourceEffect_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakStatusEffectResourceEffectType                 ResourceEffectType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.FearPassThroughMe_OnDeath
struct UPassiveSkill_Siren_FearPassThroughMe_C_FearPassThroughMe_OnDeath_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.DoFearPassThroughMeNova
struct UPassiveSkill_Siren_FearPassThroughMe_C_DoFearPassThroughMeNova_Params
{
};

// Function PassiveSkill_Siren_FearPassThroughMe.PassiveSkill_Siren_FearPassThroughMe_C.ExecuteUbergraph_PassiveSkill_Siren_FearPassThroughMe
struct UPassiveSkill_Siren_FearPassThroughMe_C_ExecuteUbergraph_PassiveSkill_Siren_FearPassThroughMe_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
