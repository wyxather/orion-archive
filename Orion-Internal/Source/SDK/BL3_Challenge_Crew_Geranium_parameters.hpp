#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Crew_Geranium_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_Crew_Geranium.Challenge_Crew_Geranium_C.PlayActivationAudio
struct UChallenge_Crew_Geranium_C_PlayActivationAudio_Params
{
};

// Function Challenge_Crew_Geranium.Challenge_Crew_Geranium_C.ShowTutorialPopup
struct UChallenge_Crew_Geranium_C_ShowTutorialPopup_Params
{
	class UGameInstance*                               GameInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOakPlayerController*                        TargetPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Crew_Geranium.Challenge_Crew_Geranium_C.PlayCompletionAudio
struct UChallenge_Crew_Geranium_C_PlayCompletionAudio_Params
{
	class AGbxPlayerController*                        CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayedAudio;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Crew_Geranium.Challenge_Crew_Geranium_C.OnInitChallengeInstance
struct UChallenge_Crew_Geranium_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Crew_Geranium.Challenge_Crew_Geranium_C.OnChallengeActivated
struct UChallenge_Crew_Geranium_C_OnChallengeActivated_Params
{
};

// Function Challenge_Crew_Geranium.Challenge_Crew_Geranium_C.CompletedChallenge
struct UChallenge_Crew_Geranium_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Crew_Geranium.Challenge_Crew_Geranium_C.ExecuteUbergraph_Challenge_Crew_Geranium
struct UChallenge_Crew_Geranium_C_ExecuteUbergraph_Challenge_Crew_Geranium_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
