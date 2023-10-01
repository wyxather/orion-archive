#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Omniloader_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Omniloader.Ability_Omniloader_C
// 0x0030 (0x0128 - 0x00F8)
class UAbility_Omniloader_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Omniloader;// 0x0100(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Omniloader.Ability_Omniloader_C");
		return ptr;
	}


	void RefillOtherWeapon(class AOakCharacter* Character, class UInventorySlotData* InventorySlot, class AWeapon* EquippedWeapon);
	void OnActivated();
	void CustomEvent_1(class AWeapon* EventWeapon, bool bCompleted);
	void ExecuteUbergraph_Ability_Omniloader(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
