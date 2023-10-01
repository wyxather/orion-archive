#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Manufacturer_Hyperion_AmpKills_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Manufacturer_Hyperion_AmpKills.Challenge_Manufacturer_Hyperion_AmpKills_C
// 0x0018 (0x0278 - 0x0260)
class UChallenge_Manufacturer_Hyperion_AmpKills_C : public UOakChallenge
{
public:
	struct FStatusEffectQuery                          StatusToFind;                                             // 0x0260(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Manufacturer_Hyperion_AmpKills.Challenge_Manufacturer_Hyperion_AmpKills_C");
		return ptr;
	}


	void CheckKillCondition(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* DeathDetails);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
