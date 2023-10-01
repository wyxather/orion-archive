#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Torgue_BaseWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C
// 0x0025 (0x09F1 - 0x09CC)
class ABPWeap_Torgue_BaseWeapon_C : public ABPWeap_BaseWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D0(0x0008) (Transient, DuplicateTransient)
	float                                              DetonationDelay;                                          // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DetonationTime;                                           // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileType;                                           // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TOR_ProjectilePerShot;                                    // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileDamageScale;                                    // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverrideForcedDetonation;                                 // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      StickyDetonationMode;                                     // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C");
		return ptr;
	}


	void DetonateActiveProjectiles();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ModeSwitched();
	void Notify_ReloadEnded(bool* bCompleted);
	void DetonateProjectiles();
	void Weapon_NotifyPutDown(class AWeapon* EventWeapon);
	void ExecuteUbergraph_BPWeap_Torgue_BaseWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
