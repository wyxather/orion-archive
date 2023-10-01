#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_PhaseTrance_FunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.CanPerformPassiveGhostArmAction
struct UActionSkill_PhaseTrance_FunctionLibrary_C_CanPerformPassiveGhostArmAction_Params
{
	class AOakCharacter_Player*                        Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.TriggerPhaseTrancePassives
struct UActionSkill_PhaseTrance_FunctionLibrary_C_TriggerPhaseTrancePassives_Params
{
	class AOakCharacter_Player*                        Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.IsImmuneToPhaseLock
struct UActionSkill_PhaseTrance_FunctionLibrary_C_IsImmuneToPhaseLock_Params
{
	class AActor*                                      GraspTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.CalculatePhaseTranceDamage
struct UActionSkill_PhaseTrance_FunctionLibrary_C_CalculatePhaseTranceDamage_Params
{
	class AOakCharacter_Player*                        ContextSource;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPhaseTranceActivationComboData             ComboData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_PhaseTrance_FunctionLibrary.ActionSkill_PhaseTrance_FunctionLibrary_C.GetSirenStatusEffectInfo
struct UActionSkill_PhaseTrance_FunctionLibrary_C_GetSirenStatusEffectInfo_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageStatusEffectOverrides           StatusEffectOverride;                                     // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
