#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Quickdraw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C
// 0x0018 (0x0998 - 0x0980)
class UBPWeaponFireProjectile_Quickdraw_C : public UBPWeaponFireProjectileComponent_JAK_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                TimerHandle;                                              // 0x0988(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UOakDamageCauserComponent*                   OakDamageCauser;                                          // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C");
		return ptr;
	}


	void ReloadTime(class AWeapon* EventWeapon, bool bAutoReload);
	void ApplyShotModAndReload();
	void ReloadTimer();
	void K2_OnActivated();
	void K2_OnDeactivated();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BPWeaponFireProjectile_Quickdraw(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
