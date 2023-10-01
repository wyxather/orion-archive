#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_BloodyHarvest_01_HauntedBadass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_BloodyHarvest_01_HauntedBadass.Challenge_BloodyHarvest_01_HauntedBadass_C
// 0x0008 (0x0268 - 0x0260)
class UChallenge_BloodyHarvest_01_HauntedBadass_C : public UBP_Challenge_BloodyHarvest_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_BloodyHarvest_01_HauntedBadass.Challenge_BloodyHarvest_01_HauntedBadass_C");
		return ptr;
	}


	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void CheckBadassKill(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Challenge_BloodyHarvest_01_HauntedBadass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
