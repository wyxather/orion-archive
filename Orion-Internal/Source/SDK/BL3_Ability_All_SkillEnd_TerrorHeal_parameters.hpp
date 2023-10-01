#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillEnd_TerrorHeal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.AnointTriggerEffect
struct UAbility_All_SkillEnd_TerrorHeal_C_AnointTriggerEffect_Params
{
	bool*                                              TriggerEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.OnActivated
struct UAbility_All_SkillEnd_TerrorHeal_C_OnActivated_Params
{
};

// Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.SkillCoolingDown
struct UAbility_All_SkillEnd_TerrorHeal_C_SkillCoolingDown_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_SkillEnd_TerrorHeal.Ability_All_SkillEnd_TerrorHeal_C.ExecuteUbergraph_Ability_All_SkillEnd_TerrorHeal
struct UAbility_All_SkillEnd_TerrorHeal_C_ExecuteUbergraph_Ability_All_SkillEnd_TerrorHeal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
