#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_ManufacturerReward_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_ManufacturerReward.Challenge_ManufacturerReward_C.CompletedChallenge
struct UChallenge_ManufacturerReward_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_ManufacturerReward.Challenge_ManufacturerReward_C.ExecuteUbergraph_Challenge_ManufacturerReward
struct UChallenge_ManufacturerReward_C_ExecuteUbergraph_Challenge_ManufacturerReward_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
