#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon.Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C
// 0x0008 (0x0268 - 0x0260)
class UChallenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C : public UBP_Challenge_BloodyHarvest_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon.Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C");
		return ptr;
	}


	void CheckBossKill(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void ExecuteUbergraph_Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
