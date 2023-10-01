#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_ElementalNullifier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_ElementalNullifier.PassiveSkill_Operative_ElementalNullifier_C.OperativeTriggerKillSkillEffect
struct UPassiveSkill_Operative_ElementalNullifier_C_OperativeTriggerKillSkillEffect_Params
{
	struct FVector*                                    KillLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     KilledEnemy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_ElementalNullifier.PassiveSkill_Operative_ElementalNullifier_C.OnAbilityTimerEnded
struct UPassiveSkill_Operative_ElementalNullifier_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Operative_ElementalNullifier.PassiveSkill_Operative_ElementalNullifier_C.ExecuteUbergraph_PassiveSkill_Operative_ElementalNullifier
struct UPassiveSkill_Operative_ElementalNullifier_C_ExecuteUbergraph_PassiveSkill_Operative_ElementalNullifier_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
