#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_ElectricSlide_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.OnActivated
struct UAbility_Artifact_ElectricSlide_C_OnActivated_Params
{
};

// Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.StartSlide
struct UAbility_Artifact_ElectricSlide_C_StartSlide_Params
{
};

// Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.StopSlide
struct UAbility_Artifact_ElectricSlide_C_StopSlide_Params
{
	struct FSlideEndedDetails                          Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.QueryEnemies
struct UAbility_Artifact_ElectricSlide_C_QueryEnemies_Params
{
};

// Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.ExecuteUbergraph_Ability_Artifact_ElectricSlide
struct UAbility_Artifact_ElectricSlide_C_ExecuteUbergraph_Ability_Artifact_ElectricSlide_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
