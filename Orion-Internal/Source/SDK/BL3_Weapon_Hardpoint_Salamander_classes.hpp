#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_Hardpoint_Salamander_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C
// 0x00F0 (0x0B78 - 0x0A88)
class AWeapon_Hardpoint_Salamander_C : public AWeaponType_Hardpoints_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A88(0x0008) (Transient, DuplicateTransient)
	class UOakDamageModifierComponent*                 OakDamageModifier;                                        // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakWeaponAudioProviderComponent*            OakWeaponAudioProvider;                                   // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAttributeEffectData                        AttEffect_Default_EffectChance;                           // 0x0AA0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAttributeEffectData                        AttEffect_Default_EffectDamage;                           // 0x0AE8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAttributeEffectData                        AttEffect_Mod3_EffectDamage;                              // 0x0B30(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C");
		return ptr;
	}


	void SetupMod3();
	void SetupNoMod();
	void SetupMod2();
	void ApplySalamanderMod2(class UObject* DamageSource, class AActor* Hardpoint);
	void ToggleBlockEnabled(bool Toggle);
	void UserConstructionScript();
	void CausedDamage_Salamander(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_0_WeaponReloadStartedEvent__DelegateSignature_Weapon_Hardpoint_Salamander(bool bAutoReload);
	void K2_Initialize();
	void K2_Initialize1P();
	void ExecuteUbergraph_Weapon_Hardpoint_Salamander(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
