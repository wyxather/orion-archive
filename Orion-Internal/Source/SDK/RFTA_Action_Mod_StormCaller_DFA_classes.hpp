#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_StormCaller_DFA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C
// 0x0044 (0x034C - 0x0308)
class UAction_Mod_StormCaller_DFA_C : public UAction_DFA_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0308(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              AoE_Damage_Frequency;                                     // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0314(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x0318(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              Caster_AoE_Range;                                         // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AoE_ImpactScalar;                                         // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ClearStatusEffect_Frequency;                              // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	struct FTimerHandle                                StatusEffectClear_Handle;                                 // 0x0330(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              FilteredClasses;                                          // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AoE_DamageScalar;                                         // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C");
		return ptr;
	}


	void OnActionAdded(class UActionBase** Action);
	void FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void OnActionStart();
	void OnDOT();
	void OnActionStop();
	void OnOwnerEnteredInteractive(struct FName* StateName, class AActor** Other);
	void ExecuteUbergraph_Action_Mod_StormCaller_DFA(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
