#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_MAL_Flipper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C
// 0x000C (0x0964 - 0x0958)
class UBPWeaponFireProjectile_MAL_Flipper_C : public UBPWeaponFireProjectile_MAL_SMG_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	int                                                ShotCount;                                                // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void NotifyUsedStarted_Event();
	void NotifyUsedFinished_Event();
	void NotifyUsed_Event();
	void NotifyReloadStarted_Event(class AWeapon* EventWeapon, bool bAutoReload);
	void ExecuteUbergraph_BPWeaponFireProjectile_MAL_Flipper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
