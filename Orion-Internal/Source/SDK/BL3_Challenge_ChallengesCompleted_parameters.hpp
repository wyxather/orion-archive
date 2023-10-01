#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_ChallengesCompleted_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_ChallengesCompleted.Challenge_ChallengesCompleted_C.OnInitChallengeInstance
struct UChallenge_ChallengesCompleted_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_ChallengesCompleted.Challenge_ChallengesCompleted_C.ChallengeCompleted
struct UChallenge_ChallengesCompleted_C_ChallengeCompleted_Params
{
	class UChallengesComponent*                        ChallengeComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ChallengeClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_ChallengesCompleted.Challenge_ChallengesCompleted_C.ExecuteUbergraph_Challenge_ChallengesCompleted
struct UChallenge_ChallengesCompleted_C_ExecuteUbergraph_Challenge_ChallengesCompleted_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
