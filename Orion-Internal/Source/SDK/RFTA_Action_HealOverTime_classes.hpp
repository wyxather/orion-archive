#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_HealOverTime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_HealOverTime.Action_HealOverTime_C
// 0x0014 (0x02E8 - 0x02D4)
class UAction_HealOverTime_C : public UAction_Buff_DurationMod_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              HealthPercent;                                            // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              HealthRegen;                                              // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_HealOverTime.Action_HealOverTime_C");
		return ptr;
	}


	void OnActionStart();
	void OnComputeStats();
	void ExecuteUbergraph_Action_HealOverTime(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
