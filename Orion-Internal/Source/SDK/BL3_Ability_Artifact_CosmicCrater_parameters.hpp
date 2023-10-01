#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_CosmicCrater_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.Ammo Return
struct UAbility_Artifact_CosmicCrater_C_Ammo_Return_Params
{
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.OnActivated
struct UAbility_Artifact_CosmicCrater_C_OnActivated_Params
{
};

// Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.SlamEnd
struct UAbility_Artifact_CosmicCrater_C_SlamEnd_Params
{
	struct FGroundSlamEndedDetails                     Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.ExecuteUbergraph_Ability_Artifact_CosmicCrater
struct UAbility_Artifact_CosmicCrater_C_ExecuteUbergraph_Ability_Artifact_CosmicCrater_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
