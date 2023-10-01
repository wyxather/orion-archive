#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_FadeActiveDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C
// 0x0030 (0x0128 - 0x00F8)
class UAbility_Beast_FadeActiveDamage_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame;// 0x0100(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Beast_FadeActiveDamage.Ability_Beast_FadeActiveDamage_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void FadeAwayStarted(TEnumAsByte<Enum_BeastmasterActionSkill> ActionSkill);
	void FadeAwayEnded();
	void ChangedSkill(class UOakPlayerAbilitySlotData* SlotData);
	void ExecuteUbergraph_Ability_Beast_FadeActiveDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
