#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_IronCubActiveDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C
// 0x0030 (0x0128 - 0x00F8)
class UAbility_Gunner_IronCubActiveDamage_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame;// 0x0100(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void ChangedSkill(class UOakPlayerAbilitySlotData* SlotData);
	void IronCubStarted(class UOakActionAbility* ActionAbility);
	void IronCubEnded(class UOakActionAbility* ActionAbility);
	void ExecuteUbergraph_Ability_Gunner_IronCubActiveDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
