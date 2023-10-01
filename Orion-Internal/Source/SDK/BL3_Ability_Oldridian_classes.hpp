#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Oldridian_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Oldridian.Ability_Oldridian_C
// 0x0064 (0x015C - 0x00F8)
class UAbility_Oldridian_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class UOakDamageCauserComponent*                   OakDamageCauser;                                          // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_Frostbite;// 0x0108(0x0028)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Frostbite;// 0x0130(0x0028)
	int                                                ElementSelection;                                         // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Oldridian.Ability_Oldridian_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void OnUnregistered();
	void OnPaused();
	void Reload_ShotMod(class AWeapon* EventWeapon, bool bAutoReload);
	void RemoveShotModifiers();
	void ExecuteUbergraph_Ability_Oldridian(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
