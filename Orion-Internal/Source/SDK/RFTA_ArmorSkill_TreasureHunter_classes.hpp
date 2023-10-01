#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_TreasureHunter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C
// 0x0010 (0x025C - 0x024C)
class UArmorSkill_TreasureHunter_C : public UArmorSkill_ModifySingleStat_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CurrencyMod;                                              // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C");
		return ptr;
	}


	void GetDescription(class AActor** Actor, struct FText* Out);
	void GetTierDescription(class AActor** Actor, int* Tier, struct FText* Out);
	void OnComputeStats();
	void ExecuteUbergraph_ArmorSkill_TreasureHunter(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
