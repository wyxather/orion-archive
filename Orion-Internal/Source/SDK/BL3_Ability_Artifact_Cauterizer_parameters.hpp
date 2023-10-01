#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Cauterizer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_Cauterizer.Ability_Artifact_Cauterizer_C.OnActivated
struct UAbility_Artifact_Cauterizer_C_OnActivated_Params
{
};

// Function Ability_Artifact_Cauterizer.Ability_Artifact_Cauterizer_C.StopSlide
struct UAbility_Artifact_Cauterizer_C_StopSlide_Params
{
	struct FSlideEndedDetails                          Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_Cauterizer.Ability_Artifact_Cauterizer_C.OnAbilityTimerStarted
struct UAbility_Artifact_Cauterizer_C_OnAbilityTimerStarted_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_Cauterizer.Ability_Artifact_Cauterizer_C.OnAbilityTimerEnded
struct UAbility_Artifact_Cauterizer_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_Cauterizer.Ability_Artifact_Cauterizer_C.ExecuteUbergraph_Ability_Artifact_Cauterizer
struct UAbility_Artifact_Cauterizer_C_ExecuteUbergraph_Ability_Artifact_Cauterizer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
