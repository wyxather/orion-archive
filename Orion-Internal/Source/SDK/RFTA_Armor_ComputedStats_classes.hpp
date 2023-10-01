#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Armor_ComputedStats_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Armor_ComputedStats.Armor_ComputedStats_C
// 0x0010 (0x0040 - 0x0030)
class UArmor_ComputedStats_C : public UComputedStats
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ArmorScalarInc;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Temp;                                                     // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Armor_ComputedStats.Armor_ComputedStats_C");
		return ptr;
	}


	void OnComputeDerivedStats();
	void ExecuteUbergraph_Armor_ComputedStats(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
