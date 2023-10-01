#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillEnd_HealingPool_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.AnointTriggerEffect
struct UAbility_All_SkillEnd_HealingPool_C_AnointTriggerEffect_Params
{
	bool*                                              TriggerEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.SpawnSplat
struct UAbility_All_SkillEnd_HealingPool_C_SpawnSplat_Params
{
};

// Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.ExecuteUbergraph_Ability_All_SkillEnd_HealingPool
struct UAbility_All_SkillEnd_HealingPool_C_ExecuteUbergraph_Ability_All_SkillEnd_HealingPool_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
