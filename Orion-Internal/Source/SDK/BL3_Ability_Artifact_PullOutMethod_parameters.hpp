#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_PullOutMethod_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.Ammo Return
struct UAbility_Artifact_PullOutMethod_C_Ammo_Return_Params
{
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.OnActivated
struct UAbility_Artifact_PullOutMethod_C_OnActivated_Params
{
};

// Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.SlamEnd
struct UAbility_Artifact_PullOutMethod_C_SlamEnd_Params
{
	struct FGroundSlamEndedDetails                     Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.OnAbilityTimerStarted
struct UAbility_Artifact_PullOutMethod_C_OnAbilityTimerStarted_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.OnAbilityTimerEnded
struct UAbility_Artifact_PullOutMethod_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_PullOutMethod.Ability_Artifact_PullOutMethod_C.ExecuteUbergraph_Ability_Artifact_PullOutMethod
struct UAbility_Artifact_PullOutMethod_C_ExecuteUbergraph_Ability_Artifact_PullOutMethod_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
