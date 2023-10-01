#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Enemy_Ger_SlagtoothBadass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Enemy_Ger_SlagtoothBadass.Challenge_Enemy_Ger_SlagtoothBadass_C
// 0x0020 (0x0280 - 0x0260)
class UChallenge_Enemy_Ger_SlagtoothBadass_C : public UChallenge_Enemy_Ger_C
{
public:
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0260(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Enemy_Ger_SlagtoothBadass.Challenge_Enemy_Ger_SlagtoothBadass_C");
		return ptr;
	}


	void CheckKillCondition(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* DeathDetails);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
