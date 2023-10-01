#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_PersonalSpace_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_PersonalSpace.PassiveSkill_Siren_PersonalSpace_C
// 0x0030 (0x01E0 - 0x01B0)
class UPassiveSkill_Siren_PersonalSpace_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_PassiveSkill_Siren_PersonalSpace;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_PersonalSpace.PassiveSkill_Siren_PersonalSpace_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void OnActivated();
	void ExecuteUbergraph_PassiveSkill_Siren_PersonalSpace(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
