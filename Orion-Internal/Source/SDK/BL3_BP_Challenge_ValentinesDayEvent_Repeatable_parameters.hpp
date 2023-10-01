#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_ValentinesDayEvent_Repeatable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.OnInitChallengeInstance
struct UBP_Challenge_ValentinesDayEvent_Repeatable_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.OnChallengeActivated
struct UBP_Challenge_ValentinesDayEvent_Repeatable_C_OnChallengeActivated_Params
{
};

// Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.CompletedChallenge
struct UBP_Challenge_ValentinesDayEvent_Repeatable_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Repeatable
struct UBP_Challenge_ValentinesDayEvent_Repeatable_C_ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Repeatable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
