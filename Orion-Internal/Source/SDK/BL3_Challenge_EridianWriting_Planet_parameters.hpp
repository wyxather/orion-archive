#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_EridianWriting_Planet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.OnInitChallengeInstance
struct UChallenge_EridianWriting_Planet_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.CompletedChallenge
struct UChallenge_EridianWriting_Planet_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.OnChallengeActivated
struct UChallenge_EridianWriting_Planet_C_OnChallengeActivated_Params
{
};

// Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.ExecuteUbergraph_Challenge_EridianWriting_Planet
struct UChallenge_EridianWriting_Planet_C_ExecuteUbergraph_Challenge_EridianWriting_Planet_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
