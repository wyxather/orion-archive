#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_SkillActive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointOnActionSkillCoolingDown
struct UAbility_AnointParent_SkillActive_C_AnointOnActionSkillCoolingDown_Params
{
	class UOakActionAbility**                          ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointOnActionSkillActivated
struct UAbility_AnointParent_SkillActive_C_AnointOnActionSkillActivated_Params
{
	class UOakActionAbility**                          ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.OnActivated
struct UAbility_AnointParent_SkillActive_C_OnActivated_Params
{
};

// Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointRemoveEffect
struct UAbility_AnointParent_SkillActive_C_AnointRemoveEffect_Params
{
};

// Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.OnDeactivated
struct UAbility_AnointParent_SkillActive_C_OnDeactivated_Params
{
};

// Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.ExecuteUbergraph_Ability_AnointParent_SkillActive
struct UAbility_AnointParent_SkillActive_C_ExecuteUbergraph_Ability_AnointParent_SkillActive_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
