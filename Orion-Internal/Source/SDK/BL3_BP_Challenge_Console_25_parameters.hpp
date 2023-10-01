#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_25_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Challenge_Console_25.BP_Challenge_Console_24_C.CompletedChallenge
struct UBP_Challenge_Console_24_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_Console_25.BP_Challenge_Console_24_C.ExecuteUbergraph_BP_Challenge_Console_25
struct UBP_Challenge_Console_24_C_ExecuteUbergraph_BP_Challenge_Console_25_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
