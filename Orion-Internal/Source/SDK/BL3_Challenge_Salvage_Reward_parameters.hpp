#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Salvage_Reward_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_Salvage_Reward.Challenge_Salvage_Reward_C.CompletedChallenge
struct UChallenge_Salvage_Reward_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Salvage_Reward.Challenge_Salvage_Reward_C.ExecuteUbergraph_Challenge_Salvage_Reward
struct UChallenge_Salvage_Reward_C_ExecuteUbergraph_Challenge_Salvage_Reward_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
