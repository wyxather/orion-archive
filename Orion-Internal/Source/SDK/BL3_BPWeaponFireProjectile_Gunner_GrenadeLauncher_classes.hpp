#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Gunner_GrenadeLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C
// 0x0011 (0x0969 - 0x0958)
class UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	class AOakWeapon_IronBearHardPoint*                OwnerHardpoint;                                           // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReadyForSingularityGrenade;                              // 0x0968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C");
		return ptr;
	}


	class UClass* GetShotLightProjectileData();
	void SetNewGrenadeType(bool bReadyForSingularityGrenade);
	class UClass* GetShotProjectileData();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPWeaponFireProjectile_Gunner_GrenadeLauncher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
