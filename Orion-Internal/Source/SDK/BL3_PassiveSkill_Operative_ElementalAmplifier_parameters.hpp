#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_ElementalAmplifier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_ElementalAmplifier.PassiveSkill_Operative_ElementalAmplifier_C.OperativeTriggerKillSkillEffect
struct UPassiveSkill_Operative_ElementalAmplifier_C_OperativeTriggerKillSkillEffect_Params
{
	struct FVector*                                    KillLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     KilledEnemy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_ElementalAmplifier.PassiveSkill_Operative_ElementalAmplifier_C.ExecuteUbergraph_PassiveSkill_Operative_ElementalAmplifier
struct UPassiveSkill_Operative_ElementalAmplifier_C_ExecuteUbergraph_PassiveSkill_Operative_ElementalAmplifier_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
