#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Radiodead_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnActivated
struct UAbility_Artifact_Radiodead_C_OnActivated_Params
{
};

// Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.StopSliding
struct UAbility_Artifact_Radiodead_C_StopSliding_Params
{
	struct FSlideEndedDetails                          Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnAbilityTimerStarted
struct UAbility_Artifact_Radiodead_C_OnAbilityTimerStarted_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.OnAbilityTimerEnded
struct UAbility_Artifact_Radiodead_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_Radiodead.Ability_Artifact_Radiodead_C.ExecuteUbergraph_Ability_Artifact_Radiodead
struct UAbility_Artifact_Radiodead_C_ExecuteUbergraph_Ability_Artifact_Radiodead_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
