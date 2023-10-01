#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Mission_Side_Main_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_Mission_Side_Main.Challenge_Mission_Side_Main_C.CompletedChallenge
struct UChallenge_Mission_Side_Main_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Mission_Side_Main.Challenge_Mission_Side_Main_C.ExecuteUbergraph_Challenge_Mission_Side_Main
struct UChallenge_Mission_Side_Main_C_ExecuteUbergraph_Challenge_Mission_Side_Main_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
