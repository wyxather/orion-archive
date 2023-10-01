#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_Passive_TerrorProjectilesPerShot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C
// 0x0090 (0x0188 - 0x00F8)
class UAbility_All_Passive_TerrorProjectilesPerShot_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class ABPChar_Player_C*                            Player;                                                   // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_Passive_TerrorProjectilesPerShot;// 0x0108(0x0028)
	struct FAttributeEffectData                        AttEffect_AddedProjectilesPerShot;                        // 0x0130(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeModifierHandle                 AttEffectHandle_AddedProjPerShot;                         // 0x0178(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_Passive_TerrorProjectilesPerShot.Ability_All_Passive_TerrorProjectilesPerShot_C");
		return ptr;
	}


	void GetFiringComponent(class AWeapon* InWeapon, class UWeaponFireProjectileComponent** FireComponent);
	void WeaponUsed(class AWeapon* EventWeapon);
	void WeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon);
	void AddProjectilePerShot(class AWeapon* InWeapon);
	void OnActivated();
	void ExecuteUbergraph_Ability_All_Passive_TerrorProjectilesPerShot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
