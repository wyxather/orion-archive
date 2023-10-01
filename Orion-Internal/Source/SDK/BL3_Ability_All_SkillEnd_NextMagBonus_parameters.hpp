#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillEnd_NextMagBonus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.AnointTriggerEffect
struct UAbility_All_SkillEnd_NextMagBonus_C_AnointTriggerEffect_Params
{
	bool*                                              TriggerEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.OnActivated
struct UAbility_All_SkillEnd_NextMagBonus_C_OnActivated_Params
{
};

// Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.BindReloadEvent
struct UAbility_All_SkillEnd_NextMagBonus_C_BindReloadEvent_Params
{
};

// Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.UnbindReloadEvent
struct UAbility_All_SkillEnd_NextMagBonus_C_UnbindReloadEvent_Params
{
};

// Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.AnointRemoveEffect
struct UAbility_All_SkillEnd_NextMagBonus_C_AnointRemoveEffect_Params
{
};

// Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.ReloadedWeapon
struct UAbility_All_SkillEnd_NextMagBonus_C_ReloadedWeapon_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.ExecuteUbergraph_Ability_All_SkillEnd_NextMagBonus
struct UAbility_All_SkillEnd_NextMagBonus_C_ExecuteUbergraph_Ability_All_SkillEnd_NextMagBonus_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
