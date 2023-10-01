#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponChargeComponent_BanditLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponChargeComponent_BanditLauncher.BPWeaponChargeComponent_BanditLauncher_C
// 0x0010 (0x0310 - 0x0300)
class UBPWeaponChargeComponent_BanditLauncher_C : public UBPWeaponChargeComponent_MAL_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (Transient, DuplicateTransient)
	int                                                BaseAmmoCost;                                             // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoCostIncrease;                                         // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponChargeComponent_BanditLauncher.BPWeaponChargeComponent_BanditLauncher_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void Event_Discharge();
	void Event_Charge1();
	void Event_Charge2();
	void Event_Charge3();
	void Event_Charge4();
	void Event_Charge5();
	void ExecuteUbergraph_BPWeaponChargeComponent_BanditLauncher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
