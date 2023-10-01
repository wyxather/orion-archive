#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_TheSeventhSense_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C
// 0x0008 (0x0988 - 0x0980)
class UBPWeaponFireProjectile_TheSeventhSense_C : public UBPWeaponFireProjectileComponent_JAK_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void NotifyReloadStart_Event(class AWeapon* EventWeapon, bool bCompleted);
	void HomeOnReload(class ULightProjectile* Projectile);
	void ExecuteUbergraph_BPWeaponFireProjectile_TheSeventhSense(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
