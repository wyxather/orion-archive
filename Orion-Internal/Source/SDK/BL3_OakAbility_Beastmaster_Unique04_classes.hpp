#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_Unique04_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C
// 0x0058 (0x0150 - 0x00F8)
class UOakAbility_Beastmaster_Unique04_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_OakAbility_Beastmaster_Unique04;// 0x0100(0x0028)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Beastmaster_Unique04;// 0x0128(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C");
		return ptr;
	}


	void OnActivated();
	void PetSpawned_ClassModUnique04(class AOakCharacter* Pet);
	void ApplyPetConditionalModifier(class AOakCharacter* NewPet);
	void RemovePetModifier(class AOakCharacter* NewPet);
	void ExecuteUbergraph_OakAbility_Beastmaster_Unique04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
