#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_DrowningInBrass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C
// 0x0030 (0x01E0 - 0x01B0)
class UPassiveSkill_Gunner_DrowningInBrass_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Gunner_DrowningInBrass;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C");
		return ptr;
	}


	void OnActivated();
	void CausedDeath_DrowningInBrass(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_PassiveSkill_Gunner_DrowningInBrass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
