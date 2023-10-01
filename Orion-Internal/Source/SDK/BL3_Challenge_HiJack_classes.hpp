#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_HiJack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_HiJack.Challenge_HiJack_C
// 0x0048 (0x0380 - 0x0338)
class UChallenge_HiJack_C : public UChallenge_Crew_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	struct FDialogTimeSlotReference                    HijackEnterVehicleDialog;                                 // 0x0340(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_HiJack.Challenge_HiJack_C");
		return ptr;
	}


	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void ExecuteUbergraph_Challenge_HiJack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
