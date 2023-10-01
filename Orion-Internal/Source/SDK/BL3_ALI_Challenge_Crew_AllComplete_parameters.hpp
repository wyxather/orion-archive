#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_Challenge_Crew_AllComplete_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ALI_Challenge_Crew_AllComplete.ALI_Challenge_Crew_AllComplete_C.CompletedChallenge
struct UALI_Challenge_Crew_AllComplete_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_Challenge_Crew_AllComplete.ALI_Challenge_Crew_AllComplete_C.ExecuteUbergraph_ALI_Challenge_Crew_AllComplete
struct UALI_Challenge_Crew_AllComplete_C_ExecuteUbergraph_ALI_Challenge_Crew_AllComplete_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
