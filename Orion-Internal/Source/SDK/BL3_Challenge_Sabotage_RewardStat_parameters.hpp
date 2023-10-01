#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Sabotage_RewardStat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_Sabotage_RewardStat.Challenge_Sabotage_RewardStat_C.CompletedChallenge
struct UChallenge_Sabotage_RewardStat_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Sabotage_RewardStat.Challenge_Sabotage_RewardStat_C.ExecuteUbergraph_Challenge_Sabotage_RewardStat
struct UChallenge_Sabotage_RewardStat_C_ExecuteUbergraph_Challenge_Sabotage_RewardStat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
