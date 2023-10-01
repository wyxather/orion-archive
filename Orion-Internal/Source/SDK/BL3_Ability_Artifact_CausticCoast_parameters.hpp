#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_CausticCoast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.OnActivated
struct UAbility_Artifact_CausticCoast_C_OnActivated_Params
{
};

// Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.StartSlide
struct UAbility_Artifact_CausticCoast_C_StartSlide_Params
{
};

// Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.FireCorrosiveProjectile
struct UAbility_Artifact_CausticCoast_C_FireCorrosiveProjectile_Params
{
};

// Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.StoppedSliding
struct UAbility_Artifact_CausticCoast_C_StoppedSliding_Params
{
	struct FSlideEndedDetails                          Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.ExecuteUbergraph_Ability_Artifact_CausticCoast
struct UAbility_Artifact_CausticCoast_C_ExecuteUbergraph_Ability_Artifact_CausticCoast_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
