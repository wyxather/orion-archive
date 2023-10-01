#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_30_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Challenge_Console_30.BP_Challenge_Console_29_C
// 0x0020 (0x0280 - 0x0260)
class UBP_Challenge_Console_29_C : public UBP_Challenge_Console_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter*                               Player;                                                   // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UInventorySlotData*>                  InvSlots;                                                 // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_Console_30.BP_Challenge_Console_29_C");
		return ptr;
	}


	void CheckAllSlots(class AActor* EquippedActor, class UInventorySlotData* SlotData);
	void CheckInvSlotRarity(class UInventorySlotData* InvSlot, bool* isRare);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void ExecuteUbergraph_BP_Challenge_Console_30(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
