#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_SparkyBoom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_SparkyBoom.Ability_SparkyBoom_v2_C
// 0x0088 (0x0180 - 0x00F8)
class UAbility_SparkyBoom_v2_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_Malevolent;// 0x0100(0x0028)
	class UOakDamageCauserComponent*                   OakDamageCauser;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Quickdraw;// 0x0130(0x0028)
	class AOakCharacter*                               OakChar;                                                  // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWeapon*                                     MyWeapon;                                                 // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FStatusEffectInstanceReference              FireStatus;                                               // 0x0168(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_SparkyBoom.Ability_SparkyBoom_v2_C");
		return ptr;
	}


	void OnDeactivated();
	void OnUnregistered();
	void OnPaused();
	void Event_ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
	void OnActivated();
	void Event_ReloadEnded(class AWeapon* EventWeapon, bool bCompleted);
	void Event_EnteredDownState();
	void ExecuteUbergraph_Ability_SparkyBoom_v2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
