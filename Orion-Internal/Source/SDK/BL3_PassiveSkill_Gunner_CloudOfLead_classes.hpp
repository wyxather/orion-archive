#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_CloudOfLead_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C
// 0x0060 (0x0210 - 0x01B0)
class UPassiveSkill_Gunner_CloudOfLead_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter*                               OwnerCharacter;                                           // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_PassiveSkill_Gunner_CloudOfLead;// 0x01C0(0x0028)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Gunner_CloudOfLead;// 0x01E8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void OnPaused();
	void CustomEvent_1(class AOakCharacter_IronBear* IronBear);
	void ExecuteUbergraph_PassiveSkill_Gunner_CloudOfLead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
