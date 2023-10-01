#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Malevolent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Malevolent.Ability_Malevolent_C
// 0x0060 (0x0158 - 0x00F8)
class UAbility_Malevolent_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Malevolent;// 0x0100(0x0028)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_Malevolent;// 0x0128(0x0028)
	class UOakDamageCauserComponent*                   OakDamageCauser;                                          // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Malevolent.Ability_Malevolent_C");
		return ptr;
	}


	void OnActivated();
	void ReloadEndedDelegate(class AWeapon* EventWeapon, bool bCompleted);
	void OnDeactivated();
	void OnUnregistered();
	void OnPaused();
	void ExecuteUbergraph_Ability_Malevolent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
