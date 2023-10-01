#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_CalmCoolCollected_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.OnActivated
struct UPassiveSkill_Operative_CalmCoolCollected_C_OnActivated_Params
{
};

// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_OnCausedMaxResourceEffect
struct UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_OnCausedMaxResourceEffect_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakStatusEffectResourceEffectType                 ResourceEffectType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_ShieldEffect
struct UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_ShieldEffect_Params
{
};

// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_RegenEffect
struct UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_RegenEffect_Params
{
};

// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_ActionSkillEffect
struct UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_ActionSkillEffect_Params
{
};

// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.Clone_OnFreezeEnemy
struct UPassiveSkill_Operative_CalmCoolCollected_C_Clone_OnFreezeEnemy_Params
{
};

// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.CCC_OnActionSkillActivated
struct UPassiveSkill_Operative_CalmCoolCollected_C_CCC_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.CCC_Clone_OnCausedMaxResourceEffect
struct UPassiveSkill_Operative_CalmCoolCollected_C_CCC_Clone_OnCausedMaxResourceEffect_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakStatusEffectResourceEffectType                 ResourceEffectType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.ExecuteUbergraph_PassiveSkill_Operative_CalmCoolCollected
struct UPassiveSkill_Operative_CalmCoolCollected_C_ExecuteUbergraph_PassiveSkill_Operative_CalmCoolCollected_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
