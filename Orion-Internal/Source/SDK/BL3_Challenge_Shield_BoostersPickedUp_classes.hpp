#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Shield_BoostersPickedUp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Shield_BoostersPickedUp.Challenge_Shield_BoostersPickedUp_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Shield_BoostersPickedUp_C : public UOakChallenge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Shield_BoostersPickedUp.Challenge_Shield_BoostersPickedUp_C");
		return ptr;
	}


	void CheckItemPickup(class AActor* PickedUpActor, int Quantity);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
