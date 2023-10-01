#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SM_Hyperion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C
// 0x0018 (0x09E4 - 0x09CC)
class ABPWeap_SM_Hyperion_C : public ABPWeap_BaseWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D0(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      Projectile_ThrownWeapon;                                  // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CachedLoadedAmmo;                                         // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C");
		return ptr;
	}


	void Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int* NumMirvProjectiles, float* FireRate, float* LoadedAmmo, int* ThrowType);
	void HideWeapon();
	void ShowWeapon();
	void ThrowWeapon();
	void UserConstructionScript();
	void WeaponAttached();
	void Notify_ReloadStarted(bool* bAutoReload);
	void ExecuteUbergraph_BPWeap_SM_Hyperion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
