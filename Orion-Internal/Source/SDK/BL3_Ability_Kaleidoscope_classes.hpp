#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Kaleidoscope_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Kaleidoscope.Ability_Kaleidoscope_C
// 0x0070 (0x0168 - 0x00F8)
class UAbility_Kaleidoscope_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Omniloader;// 0x0100(0x0028)
	class UOakDamageCauserComponent*                   OakDamageCauser;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_PrivateEye;// 0x0130(0x0028)
	class AOakCharacter*                               Oak_Character;                                            // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWeaponShotModifier*                         ActiveShotMod;                                            // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Kaleidoscope.Ability_Kaleidoscope_C");
		return ptr;
	}


	void RefillOtherWeapon(class AOakCharacter* Character, class UInventorySlotData* InventorySlot, class AWeapon* EquippedWeapon);
	void OnActivated();
	void OnDeactivated();
	void OnUnregistered();
	void OnPaused();
	void NotifyZoomedIn_Event(unsigned char Level);
	void NotifyZoomedOut_Event();
	void NotifySwitchedMode_Event();
	void ExecuteUbergraph_Ability_Kaleidoscope(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
