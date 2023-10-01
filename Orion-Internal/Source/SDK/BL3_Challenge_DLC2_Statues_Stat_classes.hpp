#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_DLC2_Statues_Stat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_DLC2_Statues_Stat.Challenge_DLC2_Statues_Stat_C
// 0x0080 (0x02E0 - 0x0260)
class UChallenge_DLC2_Statues_Stat_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	struct FDataTableRowHandle                         StatuesMailRow;                                           // 0x0268(0x0010) (Edit, BlueprintVisible)
	struct FDialogTimeSlotReference                    CompletionVO;                                             // 0x0278(0x0040) (Edit, BlueprintVisible)
	TSoftObjectPtr<class UInventoryPartData>           VehiclePartToUnlock;                                      // 0x02B8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_DLC2_Statues_Stat.Challenge_DLC2_Statues_Stat_C");
		return ptr;
	}


	void PlayCompletionVO(class AGbxPlayerController* Player_Controller, const struct FDialogTimeSlotReference& TimeSlot, bool* Played_);
	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void ExecuteUbergraph_Challenge_DLC2_Statues_Stat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
