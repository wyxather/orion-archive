#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_DLC2_Statues_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_DLC2_Statues.Challenge_DLC2_Statues_C.CompletedChallenge
struct UChallenge_DLC2_Statues_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_DLC2_Statues.Challenge_DLC2_Statues_C.ExecuteUbergraph_Challenge_DLC2_Statues
struct UChallenge_DLC2_Statues_C_ExecuteUbergraph_Challenge_DLC2_Statues_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
