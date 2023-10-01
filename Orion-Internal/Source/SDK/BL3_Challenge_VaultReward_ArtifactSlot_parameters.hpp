#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_VaultReward_ArtifactSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_VaultReward_ArtifactSlot.Challenge_VaultReward_ArtifactSlot_C.CompletedChallenge
struct UChallenge_VaultReward_ArtifactSlot_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_VaultReward_ArtifactSlot.Challenge_VaultReward_ArtifactSlot_C.ExecuteUbergraph_Challenge_VaultReward_ArtifactSlot
struct UChallenge_VaultReward_ArtifactSlot_C_ExecuteUbergraph_Challenge_VaultReward_ArtifactSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
