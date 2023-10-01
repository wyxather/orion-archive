#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_HiJack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_HiJack.Challenge_HiJack_C.OnInitChallengeInstance
struct UChallenge_HiJack_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_HiJack.Challenge_HiJack_C.ExecuteUbergraph_Challenge_HiJack
struct UChallenge_HiJack_C_ExecuteUbergraph_Challenge_HiJack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
