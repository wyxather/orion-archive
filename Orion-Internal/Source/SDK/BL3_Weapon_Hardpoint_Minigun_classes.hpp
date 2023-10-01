#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_Hardpoint_Minigun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C
// 0x0178 (0x0C00 - 0x0A88)
class AWeapon_Hardpoint_Minigun_C : public AWeaponType_Hardpoints_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A88(0x0008) (Transient, DuplicateTransient)
	class UOakDamageModifierComponent*                 OakDamageModifier;                                        // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffectManagerComponent*               StatusEffectManager;                                      // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakWeaponAudioProviderComponent*            OakWeaponAudioProvider;                                   // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponFireProjectileComponent*              WeaponFireProjectile_Minigun;                             // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponRecoilPatternComponent*               WeaponRecoilPattern;                                      // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHeatComponent_Gunner_Minigun_C*             HeatComponent_Gunner_Minigun;                             // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAttributeEffectData                        AttEffect_UseHeatImpulse_Mod1;                            // 0x0AC0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAttributeEffectData                        AttEffect_Mod3_CryoMultiplier;                            // 0x0B08(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAttributeEffectData                        AttEffect_Mod3_UseHeatImpulse;                            // 0x0B50(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAttributeEffectData                        AttEffect_Mod3_MaxAccuracy;                               // 0x0B98(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                                 OverHeatAudioLoop;                                        // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWwisePlaybackInstance                      OverheatAudioLoopInstance;                                // 0x0BE8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C");
		return ptr;
	}


	void StopOverheatAudio();
	void InitAudio();
	void SetupMod2();
	void SetupMod1();
	void SetupMod3();
	void GetShellCasingEjectEffect(class UParticleSystem** FX);
	void InitializeBarrelMaterials();
	void UserConstructionScript();
	void BndEvt__HeatComponent_Gunner_Minigun_K2Node_ComponentBoundEvent_0_HeatChangedDelegate__DelegateSignature_Weapon_Hardpoint_Minigun();
	void K2_InitializeMod();
	void K2_Initialize();
	void InitializeHardPointIronCub();
	void ExecuteUbergraph_Weapon_Hardpoint_Minigun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
