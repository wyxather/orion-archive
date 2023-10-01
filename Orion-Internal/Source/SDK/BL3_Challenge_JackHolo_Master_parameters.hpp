#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_JackHolo_Master_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_JackHolo_Master.Challenge_JackHolo_Master_C.CompletedChallenge
struct UChallenge_JackHolo_Master_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_JackHolo_Master.Challenge_JackHolo_Master_C.ExecuteUbergraph_Challenge_JackHolo_Master
struct UChallenge_JackHolo_Master_C_ExecuteUbergraph_Challenge_JackHolo_Master_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
