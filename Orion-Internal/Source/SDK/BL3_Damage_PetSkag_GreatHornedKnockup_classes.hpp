#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Damage_PetSkag_GreatHornedKnockup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Damage_PetSkag_GreatHornedKnockup.Damage_PetSkag_GreatHornedKnockup_C
// 0x0020 (0x0330 - 0x0310)
class UDamage_PetSkag_GreatHornedKnockup_C : public UOakDamageData
{
public:
	struct FGameplayTagContainer                       UnDesiredTags;                                            // 0x0310(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Damage_PetSkag_GreatHornedKnockup.Damage_PetSkag_GreatHornedKnockup_C");
		return ptr;
	}


	void OnHitEnemy(class AActor** DamageInstigator, class AActor** DamageCauser, class AActor** DamageTarget, struct FDamageDataEventDetails* Details);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
