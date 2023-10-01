#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Regrowth_Action_StatsStacking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArmorSkill_Regrowth_Action_StatsStacking.ArmorSkill_Regrowth_Action_StatsStacking_C
// 0x001D (0x02E0 - 0x02C3)
class UArmorSkill_Regrowth_Action_StatsStacking_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x02C3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                StacksRemovedOnDamage;                                    // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                MaxStacks;                                                // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UArmorSkill_Regrowth_C*                      ArmorSkill;                                               // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Regrowth_Action_StatsStacking.ArmorSkill_Regrowth_Action_StatsStacking_C");
		return ptr;
	}


	void OnTakeDamage(struct FDamageInfo* DamageInfo);
	void OnComputeStats();
	void OnLevelChanged();
	void OnActionStart();
	void ExecuteUbergraph_ArmorSkill_Regrowth_Action_StatsStacking(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
