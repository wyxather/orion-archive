#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_RocketBoots_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.OnActivated
struct UAbility_Artifact_RocketBoots_C_OnActivated_Params
{
};

// Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.StartSlide
struct UAbility_Artifact_RocketBoots_C_StartSlide_Params
{
};

// Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.FireRocket
struct UAbility_Artifact_RocketBoots_C_FireRocket_Params
{
};

// Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.StoppedSliding
struct UAbility_Artifact_RocketBoots_C_StoppedSliding_Params
{
	struct FSlideEndedDetails                          Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.OnDeactivated
struct UAbility_Artifact_RocketBoots_C_OnDeactivated_Params
{
};

// Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.ExecuteQuery
struct UAbility_Artifact_RocketBoots_C_ExecuteQuery_Params
{
};

// Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.ExecuteUbergraph_Ability_Artifact_RocketBoots
struct UAbility_Artifact_RocketBoots_C_ExecuteUbergraph_Ability_Artifact_RocketBoots_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
