#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DLC2_Challenge_Crew_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.ShowInvalidOwnerMessage
struct UDLC2_Challenge_Crew_C_ShowInvalidOwnerMessage_Params
{
};

// Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.PlayActivationAudio
struct UDLC2_Challenge_Crew_C_PlayActivationAudio_Params
{
};

// Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.ShowTutorialPopup
struct UDLC2_Challenge_Crew_C_ShowTutorialPopup_Params
{
	class UGameInstance*                               GameInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOakPlayerController*                        TargetPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.PlayCompletionAudio
struct UDLC2_Challenge_Crew_C_PlayCompletionAudio_Params
{
	class AGbxPlayerController*                        InputPin;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayedAudio;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.OnInitChallengeInstance
struct UDLC2_Challenge_Crew_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.OnChallengeActivated
struct UDLC2_Challenge_Crew_C_OnChallengeActivated_Params
{
};

// Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.CompletedChallenge
struct UDLC2_Challenge_Crew_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.ExecuteUbergraph_DLC2_Challenge_Crew
struct UDLC2_Challenge_Crew_C_ExecuteUbergraph_DLC2_Challenge_Crew_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
