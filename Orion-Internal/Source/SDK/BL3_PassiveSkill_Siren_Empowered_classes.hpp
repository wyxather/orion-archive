#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Empowered_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C
// 0x0038 (0x0220 - 0x01E8)
class UPassiveSkill_Siren_Empowered_C : public UOakPassiveAbility_Siren
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_PassiveSkill_Siren_Empowered;// 0x01F0(0x0028)
	class UConditionalDamageTypeModifier*              CurrentModifier;                                          // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_Empowered.PassiveSkill_Siren_Empowered_C");
		return ptr;
	}


	void GetModifier(class UConditionalDamageTypeModifier** res);
	void OnActivated();
	void OnAttunedElementChanged();
	void RemoveModifier();
	void AddModifier();
	void ExecuteUbergraph_PassiveSkill_Siren_Empowered(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
