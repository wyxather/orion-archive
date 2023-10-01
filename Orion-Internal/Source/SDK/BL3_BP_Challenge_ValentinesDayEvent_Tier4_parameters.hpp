#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_ValentinesDayEvent_Tier4_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Challenge_ValentinesDayEvent_Tier4.BP_Challenge_ValentinesDayEvent_Tier4_C.PlayCompletionAudio
struct UBP_Challenge_ValentinesDayEvent_Tier4_C_PlayCompletionAudio_Params
{
	class AGbxPlayerController*                        InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayedAudio;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_ValentinesDayEvent_Tier4.BP_Challenge_ValentinesDayEvent_Tier4_C.OnInitChallengeInstance
struct UBP_Challenge_ValentinesDayEvent_Tier4_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_ValentinesDayEvent_Tier4.BP_Challenge_ValentinesDayEvent_Tier4_C.CompletedChallenge
struct UBP_Challenge_ValentinesDayEvent_Tier4_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_ValentinesDayEvent_Tier4.BP_Challenge_ValentinesDayEvent_Tier4_C.ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Tier4
struct UBP_Challenge_ValentinesDayEvent_Tier4_C_ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Tier4_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
