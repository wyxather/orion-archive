#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_Challenge_Crew_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALI_Challenge_Crew.ALI_Challenge_Crew_C
// 0x0108 (0x0368 - 0x0260)
class UALI_Challenge_Crew_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	struct FDialogTimeSlotReference                    Dialog_KriegCompletion;                                   // 0x0268(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDialogTimeSlotReference                    Dialog_TannisCompletion;                                  // 0x02A8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDialogTimeSlotReference                    Dialog_TargetHit;                                         // 0x02E8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDialogTimeSlotReference                    Dialog_KriegDuplicate;                                    // 0x0328(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALI_Challenge_Crew.ALI_Challenge_Crew_C");
		return ptr;
	}


	void PlayVO(const struct FDialogTimeSlotReference& Dialog, class AActor* CompletedPlayer, struct FDialogConversation* Conversation);
	void ShowTutorialPopup(class UGameInstance* GameInstance, class AOakPlayerController* TargetPlayer);
	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_ALI_Challenge_Crew(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
