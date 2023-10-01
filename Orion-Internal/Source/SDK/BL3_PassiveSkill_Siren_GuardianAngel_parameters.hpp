#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_GuardianAngel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.GetNovaDamage
struct UPassiveSkill_Siren_GuardianAngel_C_GetNovaDamage_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.OnDownStateStart
struct UPassiveSkill_Siren_GuardianAngel_C_OnDownStateStart_Params
{
};

// Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.OnAbilityTimerEnded
struct UPassiveSkill_Siren_GuardianAngel_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.ActiveGuardianAngel
struct UPassiveSkill_Siren_GuardianAngel_C_ActiveGuardianAngel_Params
{
};

// Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.GuardianAngel_OnKilledEnemy
struct UPassiveSkill_Siren_GuardianAngel_C_GuardianAngel_OnKilledEnemy_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.OnActivated
struct UPassiveSkill_Siren_GuardianAngel_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.ExecuteUbergraph_PassiveSkill_Siren_GuardianAngel
struct UPassiveSkill_Siren_GuardianAngel_C_ExecuteUbergraph_PassiveSkill_Siren_GuardianAngel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
