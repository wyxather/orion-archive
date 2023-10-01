#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Crew_DLC1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.PlayActivationAudio
struct UChallenge_Crew_DLC1_C_PlayActivationAudio_Params
{
};

// Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.ShowTutorialPopup
struct UChallenge_Crew_DLC1_C_ShowTutorialPopup_Params
{
	class UGameInstance*                               GameInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOakPlayerController*                        TargetPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.PlayCompletionAudio
struct UChallenge_Crew_DLC1_C_PlayCompletionAudio_Params
{
	class AGbxPlayerController*                        InputPin;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayedAudio;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.OnInitChallengeInstance
struct UChallenge_Crew_DLC1_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.OnChallengeActivated
struct UChallenge_Crew_DLC1_C_OnChallengeActivated_Params
{
};

// Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.CompletedChallenge
struct UChallenge_Crew_DLC1_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.ExecuteUbergraph_Challenge_Crew_DLC1
struct UChallenge_Crew_DLC1_C_ExecuteUbergraph_Challenge_Crew_DLC1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
