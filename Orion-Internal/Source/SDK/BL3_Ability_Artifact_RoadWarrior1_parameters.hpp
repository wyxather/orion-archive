#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_RoadWarrior1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.OnActivated
struct UAbility_Artifact_RoadWarrior1_C_OnActivated_Params
{
};

// Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.StartSlide
struct UAbility_Artifact_RoadWarrior1_C_StartSlide_Params
{
};

// Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.FireProjectile
struct UAbility_Artifact_RoadWarrior1_C_FireProjectile_Params
{
};

// Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.StoppedSliding
struct UAbility_Artifact_RoadWarrior1_C_StoppedSliding_Params
{
	struct FSlideEndedDetails                          Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.OnDeactivated
struct UAbility_Artifact_RoadWarrior1_C_OnDeactivated_Params
{
};

// Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.ExecuteUbergraph_Ability_Artifact_RoadWarrior1
struct UAbility_Artifact_RoadWarrior1_C_ExecuteUbergraph_Ability_Artifact_RoadWarrior1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
