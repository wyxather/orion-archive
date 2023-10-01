#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_TrickOfTheLight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_TrickOfTheLight.PassiveSkill_Operative_TrickOfTheLight_C
// 0x0030 (0x01E0 - 0x01B0)
class UPassiveSkill_Operative_TrickOfTheLight_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_PassiveSkill_Operative_TeamworkMakesTheDreamwork;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_TrickOfTheLight.PassiveSkill_Operative_TrickOfTheLight_C");
		return ptr;
	}


	void OnActivated();
	void ExecuteUbergraph_PassiveSkill_Operative_TrickOfTheLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
