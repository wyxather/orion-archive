#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Collect_RewardStat_DLC1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Collect_RewardStat_DLC1.Challenge_Collect_RewardStat_DLC1_C
// 0x0058 (0x02B8 - 0x0260)
class UChallenge_Collect_RewardStat_DLC1_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	struct FDataTableRowHandle                         NPCMailRow;                                               // 0x0268(0x0010) (Edit, BlueprintVisible)
	struct FDialogTimeSlotReference                    CrewCompletionDialog;                                     // 0x0278(0x0040) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Collect_RewardStat_DLC1.Challenge_Collect_RewardStat_DLC1_C");
		return ptr;
	}


	void PlayCompletionVO(class AGbxPlayerController* PlayerController, bool* Played);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_Collect_RewardStat_DLC1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
