#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_GrenadeCrit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Gunner_GrenadeCrit.PassiveSkill_Gunner_GrenadeCrit_C
// 0x0030 (0x01E0 - 0x01B0)
class UPassiveSkill_Gunner_GrenadeCrit_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_PassiveSkill_Gunner_GrenadeCrit;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Gunner_GrenadeCrit.PassiveSkill_Gunner_GrenadeCrit_C");
		return ptr;
	}


	void OnActivated();
	void ExecuteUbergraph_PassiveSkill_Gunner_GrenadeCrit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
