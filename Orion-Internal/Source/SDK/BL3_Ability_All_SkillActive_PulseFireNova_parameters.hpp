#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillActive_PulseFireNova_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.IsChargeBasedSkill
struct UAbility_All_SkillActive_PulseFireNova_C_IsChargeBasedSkill_Params
{
	class UObject*                                     ActionSkill;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointOnActionSkillActivated
struct UAbility_All_SkillActive_PulseFireNova_C_AnointOnActionSkillActivated_Params
{
	class UOakActionAbility**                          ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointTriggerEffect
struct UAbility_All_SkillActive_PulseFireNova_C_AnointTriggerEffect_Params
{
	bool*                                              TriggerEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.TriggerNova
struct UAbility_All_SkillActive_PulseFireNova_C_TriggerNova_Params
{
};

// Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointRemoveEffect
struct UAbility_All_SkillActive_PulseFireNova_C_AnointRemoveEffect_Params
{
};

// Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.ExecuteUbergraph_Ability_All_SkillActive_PulseFireNova
struct UAbility_All_SkillActive_PulseFireNova_C_ExecuteUbergraph_Ability_All_SkillActive_PulseFireNova_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
