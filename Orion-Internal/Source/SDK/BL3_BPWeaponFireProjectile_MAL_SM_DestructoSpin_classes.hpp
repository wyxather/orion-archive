#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_MAL_SM_DestructoSpin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C
// 0x0020 (0x0978 - 0x0958)
class UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	class AWeapon*                                     MyWeapon;                                                 // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Mode_0_DmgType;                                           // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Mode_1_DmgType;                                           // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void K2_OnActivated();
	void EvaluateShot();
	void ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_DestructoSpin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
