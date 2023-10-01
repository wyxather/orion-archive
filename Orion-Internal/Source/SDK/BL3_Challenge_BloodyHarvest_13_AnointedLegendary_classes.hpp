#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_BloodyHarvest_13_AnointedLegendary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C
// 0x0020 (0x0280 - 0x0260)
class UChallenge_BloodyHarvest_13_AnointedLegendary_C : public UBP_Challenge_BloodyHarvest_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter*                               Player;                                                   // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UInventorySlotData*>                  InvSlots;                                                 // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C");
		return ptr;
	}


	void CheckAllSlots(class AActor* EquippedActor, class UInventorySlotData* SlotData);
	void CheckInvSlotIsFromLeague(class UInventorySlotData* InvSlot, bool* IsBHAnointedGear);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_BloodyHarvest_13_AnointedLegendary(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
