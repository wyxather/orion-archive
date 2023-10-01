#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Manufacturer_Tediore_ComboKills_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Manufacturer_Tediore_ComboKills.Challenge_Manufacturer_Tediore_ComboKills_C
// 0x0018 (0x0278 - 0x0260)
class UChallenge_Manufacturer_Tediore_ComboKills_C : public UOakChallenge
{
public:
	class AOakCharacter_Player*                        ChallengeCharacter;                                       // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       DamagingActor;                                            // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Manufacturer_Tediore_ComboKills.Challenge_Manufacturer_Tediore_ComboKills_C");
		return ptr;
	}


	void CheckKillCondition(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* DeathDetails);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
