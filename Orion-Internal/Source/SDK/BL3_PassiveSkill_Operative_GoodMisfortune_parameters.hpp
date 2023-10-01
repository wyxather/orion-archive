#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_GoodMisfortune_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.GetDurationReturn
struct UPassiveSkill_Operative_GoodMisfortune_C_GetDurationReturn_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDuration;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.OnActivated
struct UPassiveSkill_Operative_GoodMisfortune_C_OnActivated_Params
{
};

// Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.GoodMisfortuneSNTRYActivated
struct UPassiveSkill_Operative_GoodMisfortune_C_GoodMisfortuneSNTRYActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.OperativeTriggerKillSkillEffect
struct UPassiveSkill_Operative_GoodMisfortune_C_OperativeTriggerKillSkillEffect_Params
{
	struct FVector*                                    KillLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor**                                     KilledEnemy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.ExecuteUbergraph_PassiveSkill_Operative_GoodMisfortune
struct UPassiveSkill_Operative_GoodMisfortune_C_ExecuteUbergraph_PassiveSkill_Operative_GoodMisfortune_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
