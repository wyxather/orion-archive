#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Sabotage_MoxxiGunReward_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_Sabotage_MoxxiGunReward.Challenge_Sabotage_MoxxiGunReward_C.CompletedChallenge
struct UChallenge_Sabotage_MoxxiGunReward_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Sabotage_MoxxiGunReward.Challenge_Sabotage_MoxxiGunReward_C.ExecuteUbergraph_Challenge_Sabotage_MoxxiGunReward
struct UChallenge_Sabotage_MoxxiGunReward_C_ExecuteUbergraph_Challenge_Sabotage_MoxxiGunReward_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
