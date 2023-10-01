#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillEnd_HealingPool_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C
// 0x001F (0x01E0 - 0x01C1)
class UAbility_All_SkillEnd_HealingPool_C : public UAbility_AnointParent_SkillEnd_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0008) (Transient, DuplicateTransient)
	bool                                               PhasetranceWorked;                                        // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isSiren;                                                  // 0x01D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isBeastMaster;                                            // 0x01D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x01D3(0x0005) MISSED OFFSET
	class UOakPlayerAbilityManagerComponent*           AbilityManager;                                           // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C");
		return ptr;
	}


	void AnointTriggerEffect(bool* TriggerEffect, bool* res);
	void SpawnSplat();
	void ExecuteUbergraph_Ability_All_SkillEnd_HealingPool(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
