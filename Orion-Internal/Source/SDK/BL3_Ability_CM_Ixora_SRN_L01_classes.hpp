#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CM_Ixora_SRN_L01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C
// 0x0058 (0x0150 - 0x00F8)
class UAbility_CM_Ixora_SRN_L01_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Siren_IxoraCM_L01;// 0x0100(0x0028)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_Siren_IxoraCM_L01;// 0x0128(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CM_Ixora_SRN_L01.Ability_CM_Ixora_SRN_L01_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void OnActivated();
	void SirenIxoraClassMod_OnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void OnDeactivated();
	void ExecuteUbergraph_Ability_CM_Ixora_SRN_L01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
