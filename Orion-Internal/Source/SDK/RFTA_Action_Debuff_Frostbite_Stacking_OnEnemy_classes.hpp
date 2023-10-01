#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Debuff_Frostbite_Stacking_OnEnemy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C
// 0x002D (0x02F0 - 0x02C3)
class UAction_Debuff_Frostbite_Stacking_OnEnemy_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x02C3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TimeDilationBoss;                                         // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              TimeDilationBossInc;                                      // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeDilationEnemy;                                        // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              TimeDilationEnemyInc;                                     // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UActionBase*>                         CachedArray;                                              // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C");
		return ptr;
	}


	bool AllowAction(class UClass** ActionBP, struct FDamageInfo* InDamageInfo);
	void OnActionStart();
	void OnActionStop();
	void OnReapplyBuff();
	void SFX_Frost_Bite_Stack();
	void ExecuteUbergraph_Action_Debuff_Frostbite_Stacking_OnEnemy(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
