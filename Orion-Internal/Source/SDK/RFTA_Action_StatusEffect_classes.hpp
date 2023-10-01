#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_StatusEffect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_StatusEffect.Action_StatusEffect_C
// 0x002D (0x0255 - 0x0228)
class UAction_StatusEffect_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Value;                                                    // 0x0230(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              ValueMax;                                                 // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ValueDecay;                                               // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ValueDecayDelay;                                          // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                    // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LastEffectTime;                                           // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               StatsComputed;                                            // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_StatusEffect.Action_StatusEffect_C");
		return ptr;
	}


	void GetRemainingTime(float* Seconds);
	void Remove_Status_Effect(class UClass** StatusEffect, float* DeltaTime);
	void ApplyStatusDamage(struct FDamageInfo* DamageInfo);
	void UpdateDecay(float* DeltaTime);
	void GetValuePct(float* Out);
	bool AllowAction(class UClass** ActionBP, struct FDamageInfo* InDamageInfo);
	void OnTick(float* DeltaSeconds);
	void OnActionStart();
	void OnPostComputeStats();
	void OnValueChanged(float* OldValue, float* NewValue);
	void OnWorldReset();
	void ExecuteUbergraph_Action_StatusEffect(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
