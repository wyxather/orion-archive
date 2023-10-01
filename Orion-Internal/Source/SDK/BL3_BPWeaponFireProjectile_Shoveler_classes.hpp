#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Shoveler_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C
// 0x0008 (0x0960 - 0x0958)
class UBPWeaponFireProjectile_Shoveler_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void NotifyReloadStart_Event(class AWeapon* EventWeapon, bool bCompleted);
	void K2_OnDeactivated();
	void ExecuteUbergraph_BPWeaponFireProjectile_Shoveler(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
