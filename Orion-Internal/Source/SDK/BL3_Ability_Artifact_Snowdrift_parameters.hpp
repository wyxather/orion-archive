#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Snowdrift_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.GbxAsyncRequest_Spawned_BCEC033A4A0EE0839916EBA8DE9C87B1
struct UAbility_Artifact_Snowdrift_C_GbxAsyncRequest_Spawned_BCEC033A4A0EE0839916EBA8DE9C87B1_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.OnActivated
struct UAbility_Artifact_Snowdrift_C_OnActivated_Params
{
};

// Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.StopSliding
struct UAbility_Artifact_Snowdrift_C_StopSliding_Params
{
	struct FSlideEndedDetails                          Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.OnAbilityTimerStarted
struct UAbility_Artifact_Snowdrift_C_OnAbilityTimerStarted_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.OnAbilityTimerEnded
struct UAbility_Artifact_Snowdrift_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.ExecuteUbergraph_Ability_Artifact_Snowdrift
struct UAbility_Artifact_Snowdrift_C_ExecuteUbergraph_Ability_Artifact_Snowdrift_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
