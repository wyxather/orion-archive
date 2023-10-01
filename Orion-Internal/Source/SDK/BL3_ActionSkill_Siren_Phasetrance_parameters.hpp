#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Siren_Phasetrance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetDLCSkillOrb
struct UActionSkill_Siren_Phasetrance_C_GetDLCSkillOrb_Params
{
	class AProj_Siren_DLCSkill_WalkingPotato_Base_C*   res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.RegisterDLCSkillOrb
struct UActionSkill_Siren_Phasetrance_C_RegisterDLCSkillOrb_Params
{
	class AProj_Siren_DLCSkill_WalkingPotato_Base_C*   Orb;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Quicken
struct UActionSkill_Siren_Phasetrance_C_DoEffect_Quicken_Params
{
	struct FOakPhaseTranceEffectSpec                   Spec;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.CalculateAbilityState
struct UActionSkill_Siren_Phasetrance_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetSingularityRadius
struct UActionSkill_Siren_Phasetrance_C_GetSingularityRadius_Params
{
	struct FPhaseTranceActivationComboData             ComboData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetEssenceDurationAdjust
struct UActionSkill_Siren_Phasetrance_C_GetEssenceDurationAdjust_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.TryFindNewEssenceGraspTarget
struct UActionSkill_Siren_Phasetrance_C_TryFindNewEssenceGraspTarget_Params
{
	class AActor*                                      LastGraspTarget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnWebGraspMissed
struct UActionSkill_Siren_Phasetrance_C_OnWebGraspMissed_Params
{
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnKilledGraspedEnemy
struct UActionSkill_Siren_Phasetrance_C_OnKilledGraspedEnemy_Params
{
	class AActor*                                      Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.AdjustLeechDamage
struct UActionSkill_Siren_Phasetrance_C_AdjustLeechDamage_Params
{
	float                                              StartingDamage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FinalDamage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.FindLeechTarget
struct UActionSkill_Siren_Phasetrance_C_FindLeechTarget_Params
{
	class AActor*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetLeechTarget
struct UActionSkill_Siren_Phasetrance_C_GetLeechTarget_Params
{
	class AActor*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_SoulSap
struct UActionSkill_Siren_Phasetrance_C_DoEffect_SoulSap_Params
{
	struct FOakPhaseTranceEffectSpec                   Spec;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bRes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Allure
struct UActionSkill_Siren_Phasetrance_C_DoEffect_Allure_Params
{
	struct FOakPhaseTranceEffectSpec                   Spec;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bRes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_StillnessOfMind
struct UActionSkill_Siren_Phasetrance_C_DoEffect_StillnessOfMind_Params
{
	struct FOakPhaseTranceEffectSpec                   Spec;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bRes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_BrightStar
struct UActionSkill_Siren_Phasetrance_C_DoEffect_BrightStar_Params
{
	struct FOakPhaseTranceEffectSpec                   Spec;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bRes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect_Glamour
struct UActionSkill_Siren_Phasetrance_C_DoEffect_Glamour_Params
{
	struct FOakPhaseTranceEffectSpec                   Spec;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bRes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.DoEffect
struct UActionSkill_Siren_Phasetrance_C_DoEffect_Params
{
	struct FOakPhaseTranceEffectSpec*                  Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.CreateAttackActionRegisters
struct UActionSkill_Siren_Phasetrance_C_CreateAttackActionRegisters_Params
{
	TArray<struct FGbxActionRegister>                  res;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ShouldAbortActivation
struct UActionSkill_Siren_Phasetrance_C_ShouldAbortActivation_Params
{
	unsigned char                                      OutAbortCode;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetActionSkillWidgetKeyframe
struct UActionSkill_Siren_Phasetrance_C_GetActionSkillWidgetKeyframe_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ResetCounters
struct UActionSkill_Siren_Phasetrance_C_ResetCounters_Params
{
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetMaxCooldownModifier
struct UActionSkill_Siren_Phasetrance_C_GetMaxCooldownModifier_Params
{
	EGbxAttributeModifierType                          ModifierType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.FindSpreadTarget
struct UActionSkill_Siren_Phasetrance_C_FindSpreadTarget_Params
{
	class AActor*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.StartAttack
struct UActionSkill_Siren_Phasetrance_C_StartAttack_Params
{
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.Calculate Leech Heal Amount
struct UActionSkill_Siren_Phasetrance_C_Calculate_Leech_Heal_Amount_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Don_t_Adjust;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.GetCooldownRestartPercent
struct UActionSkill_Siren_Phasetrance_C_GetCooldownRestartPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnStartActionAbility
struct UActionSkill_Siren_Phasetrance_C_OnStartActionAbility_Params
{
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.OnActivated
struct UActionSkill_Siren_Phasetrance_C_OnActivated_Params
{
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.RecallOrb
struct UActionSkill_Siren_Phasetrance_C_RecallOrb_Params
{
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.ExecuteUbergraph_ActionSkill_Siren_Phasetrance
struct UActionSkill_Siren_Phasetrance_C_ExecuteUbergraph_ActionSkill_Siren_Phasetrance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C.Phasetrance_RecallOrb__DelegateSignature
struct UActionSkill_Siren_Phasetrance_C_Phasetrance_RecallOrb__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
