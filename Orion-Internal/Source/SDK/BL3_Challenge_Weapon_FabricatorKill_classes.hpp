#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Weapon_FabricatorKill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C
// 0x0010 (0x0270 - 0x0260)
class UChallenge_Weapon_FabricatorKill_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class UObject*                                     FabricatorDmgSource;                                      // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C");
		return ptr;
	}


	void CheckKillCondition(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void ExecuteUbergraph_Challenge_Weapon_FabricatorKill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
