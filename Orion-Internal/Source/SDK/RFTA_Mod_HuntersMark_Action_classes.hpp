#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_HuntersMark_Action_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mod_HuntersMark_Action.Mod_HuntersMark_Action_C
// 0x0009 (0x02CC - 0x02C3)
class UMod_HuntersMark_Action_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x02C3(0x0001) MISSED OFFSET
	float                                              CritChanceMod;                                            // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BonusCritChance;                                          // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_HuntersMark_Action.Mod_HuntersMark_Action_C");
		return ptr;
	}


	void FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
