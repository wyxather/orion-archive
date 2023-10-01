#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WeaponType_Hardpoint_Railgun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponType_Hardpoint_Railgun.WeaponType_Hardpoint_Railgun_C
// 0x0078 (0x0B00 - 0x0A88)
class AWeaponType_Hardpoint_Railgun_C : public AWeaponType_Hardpoints_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A88(0x0008) (Transient, DuplicateTransient)
	class UOakWeaponAudioProviderComponent*            OakWeaponAudioProvider;                                   // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakDamageModifierComponent*                 OakDamageModifier;                                        // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponFireProjectileComponent*              WeaponFireProjectile;                                     // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeshComponent*                              WeaponMesh_3rd;                                           // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMeshComponent*                              WeaponMesh_1st;                                           // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FAttributeEffectData                        AttEffect_Default_EffectChance;                           // 0x0AB8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponType_Hardpoint_Railgun.WeaponType_Hardpoint_Railgun_C");
		return ptr;
	}


	void SetupMod2();
	void SetupMod1();
	void ConfigureFX();
	void UserConstructionScript();
	void K2_InitializeMod();
	void K2_Initialize();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WeaponType_Hardpoint_Railgun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
