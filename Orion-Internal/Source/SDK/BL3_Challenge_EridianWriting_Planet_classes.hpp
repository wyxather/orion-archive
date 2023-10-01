#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_EridianWriting_Planet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C
// 0x0088 (0x02E8 - 0x0260)
class UChallenge_EridianWriting_Planet_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	struct FDialogTimeSlotReference                    SlabDialogActivation;                                     // 0x0268(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDialogTimeSlotReference                    SlabDialogComplete;                                       // 0x02A8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C");
		return ptr;
	}


	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void OnChallengeActivated();
	void ExecuteUbergraph_Challenge_EridianWriting_Planet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
