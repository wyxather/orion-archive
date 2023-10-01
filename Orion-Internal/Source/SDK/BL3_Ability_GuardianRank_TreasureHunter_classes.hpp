#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_TreasureHunter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_GuardianRank_TreasureHunter.Ability_GuardianRank_TreasureHunter_C
// 0x0030 (0x01E0 - 0x01B0)
class UAbility_GuardianRank_TreasureHunter_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_GuardianRank_TreasureHunter;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_GuardianRank_TreasureHunter.Ability_GuardianRank_TreasureHunter_C");
		return ptr;
	}


	void CausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnActivated();
	void ExecuteUbergraph_Ability_GuardianRank_TreasureHunter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
