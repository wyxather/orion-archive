#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_JAK_Lucky7_v2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C
// 0x0030 (0x09B0 - 0x0980)
class UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C : public UWeaponJAKFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Slot_Reel_FX;                                             // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UOakDamageCauserComponent*                   OakDamageCauser;                                          // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               AutoCrit;                                                 // 0x0998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FullAuto;                                                 // 0x0999(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Elemental;                                                // 0x099A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Explosive;                                                // 0x099B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ExtraProjectiles;                                         // 0x099C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x099D(0x0003) MISSED OFFSET
	TArray<bool>                                       ReelsBools;                                               // 0x09A0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C");
		return ptr;
	}


	void OnRep_ReelsBools();
	void NotifyReloadEnded_Event(class AWeapon* EventWeapon, bool bAutoReload);
	void NotifyReloadStarted_Event(class AWeapon* EventWeapon, bool bCompleted);
	void K2_OnDeactivated();
	void K2_OnActivated();
	void SetReelsFX();
	void SetReelsBonuses();
	void SpinReels();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Lucky7_v2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
