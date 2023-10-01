#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_Multitasker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C
// 0x0040 (0x01F0 - 0x01B0)
class UPassiveSkill_Operative_Multitasker_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_Multitasker;// 0x01B8(0x0028)
	TArray<struct FStatusEffectInstanceReference>      StatusEffectInstances;                                    // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C");
		return ptr;
	}


	void OnActivated();
	void Multitasker_OnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void Multitasker_OnActionSkillCoolingDown(class UOakActionAbility* ActionAbility);
	void ExecuteUbergraph_PassiveSkill_Operative_Multitasker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
