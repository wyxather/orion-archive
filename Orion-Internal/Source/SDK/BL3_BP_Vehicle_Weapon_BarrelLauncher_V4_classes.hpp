#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Vehicle_Weapon_BarrelLauncher_V4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C
// 0x0050 (0x09E0 - 0x0990)
class ABP_Vehicle_Weapon_BarrelLauncher_V4_C : public ABPWeap_Vehicle_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0990(0x0008) (Transient, DuplicateTransient)
	class UWeaponHeatComponent*                        WeaponHeat;                                               // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponGenericUseComponent*                  WeaponGenericUse;                                         // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakWeaponAudioProviderComponent*            OakWeaponAudioProvider;                                   // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakVehicleWeaponFireProjectileComponent*    OakVehicleWeaponFireProjectile;                           // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakDamageComponent*                         OakDamage;                                                // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        BarrelLauncher_AudioComponent;                            // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BarrelRespawnTimer;                                       // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDetonate;                                               // 0x09D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__OakVehicleWeaponFireProjectile_K2Node_ComponentBoundEvent_1_WeaponUsedEvent__DelegateSignature_BP_Vehicle_Weapon_PropelledBombsLauncher();
	void OnZoomingIn(unsigned char Level);
	void BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_2_WeaponReloadStartedEvent__DelegateSignature_BP_Vehicle_Weapon_BarrelLauncher_V4(bool bAutoReload);
	void ExecuteUbergraph_BP_Vehicle_Weapon_BarrelLauncher_V4(int EntryPoint);
	void OnDetonate__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
