#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Sabotage_RewardStat_DLC1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_Sabotage_RewardStat_DLC1.Challenge_Sabotage_RewardStat_DLC1_C.PlayCompletionVO
struct UChallenge_Sabotage_RewardStat_DLC1_C_PlayCompletionVO_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Played;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Sabotage_RewardStat_DLC1.Challenge_Sabotage_RewardStat_DLC1_C.OnInitChallengeInstance
struct UChallenge_Sabotage_RewardStat_DLC1_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Sabotage_RewardStat_DLC1.Challenge_Sabotage_RewardStat_DLC1_C.CompletedChallenge
struct UChallenge_Sabotage_RewardStat_DLC1_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Sabotage_RewardStat_DLC1.Challenge_Sabotage_RewardStat_DLC1_C.ExecuteUbergraph_Challenge_Sabotage_RewardStat_DLC1
struct UChallenge_Sabotage_RewardStat_DLC1_C_ExecuteUbergraph_Challenge_Sabotage_RewardStat_DLC1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
