#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_ValentinesDayEvent_Tier1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Challenge_ValentinesDayEvent_Tier1.BP_Challenge_ValentinesDayEvent_Tier1_C
// 0x0048 (0x02A8 - 0x0260)
class UBP_Challenge_ValentinesDayEvent_Tier1_C : public UBP_Challenge_ValentinesDayEvent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	struct FDialogTimeSlotReference                    ChallengeCompleteDialog;                                  // 0x0268(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_ValentinesDayEvent_Tier1.BP_Challenge_ValentinesDayEvent_Tier1_C");
		return ptr;
	}


	void PlayCompletionAudio(class AGbxPlayerController* InputPin, bool* PlayedAudio);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Tier1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
