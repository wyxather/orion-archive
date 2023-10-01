#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_Jakobs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C
// 0x0008 (0x0A08 - 0x0A00)
class ABPWeap_PS_Jakobs_C : public ABPWeap_Jakobs_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A00(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C");
		return ptr;
	}


	void UserConstructionScript();
	void HideSpeedLoader();
	void ReceiveBeginPlay();
	void HideAmmo();
	void Notify_ReloadEnded(bool* bCompleted);
	void ResetCylinder();
	void Weapon_NotifyPutDown(class AWeapon* EventWeapon);
	void ExecuteUbergraph_BPWeap_PS_Jakobs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
