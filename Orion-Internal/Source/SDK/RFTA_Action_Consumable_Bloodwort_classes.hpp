#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Consumable_Bloodwort_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Consumable_Bloodwort.Action_Consumable_Bloodwort_C
// 0x0008 (0x02F0 - 0x02E8)
class UAction_Consumable_Bloodwort_C : public UAction_HealOverTime_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Consumable_Bloodwort.Action_Consumable_Bloodwort_C");
		return ptr;
	}


	void PlayFX();
	void OnActionStart();
	void OnReapplyBuff();
	void OnPostComputeStats();
	void OnComputeStats();
	void ExecuteUbergraph_Action_Consumable_Bloodwort(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
