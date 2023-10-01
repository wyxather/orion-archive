#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_FireInSkagDen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C
// 0x0058 (0x0208 - 0x01B0)
class UPassiveSkill_Gunner_FireInSkagDen_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_PassiveSkill_Gunner_FireInSkagDen;// 0x01B8(0x0028)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Gunner_FireInSkagDen;// 0x01E0(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Gunner_FireInSkagDen.PassiveSkill_Gunner_FireInSkagDen_C");
		return ptr;
	}


	void OnActivated();
	void OnEnteredIronBear_FireSkagDen(class AOakCharacter_IronBear* IronBear);
	void ExecuteUbergraph_PassiveSkill_Gunner_FireInSkagDen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
