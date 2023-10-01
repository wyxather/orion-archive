#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Reciprocity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C
// 0x0020 (0x0258 - 0x0238)
class UArmorSkill_Reciprocity_C : public UArmorSkill_TriggerOnHit_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DamageScalarTier1;                                        // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageScalarTier2;                                        // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageScalarTier3;                                        // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                 // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxStacks;                                                // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimMoveSpeedMod;                                          // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C");
		return ptr;
	}


	bool AllowAction(class UClass** ActionBP, struct FDamageInfo* InDamageInfo);
	void OnTimerExpired();
	void ResetTimer();
	void GetDamageReductionMod(int* Level, float* Out);
	void RemoveLevel(class UClass** Action);
	void GetTierDescription(class AActor** Actor, int* Tier, struct FText* Out);
	void GetDescription(class AActor** Actor, struct FText* Out);
	void GetDamageScalar(int* Tier, float* RangedDamageScalar, float* MeleeDamageScalar, float* ModDamageScalar, float* SummonedCreatureDamageScalar);
	void Trigger(int* Power);
	void OnLevelChanged();
	void OnActionStop();
	void OnActionStart();
	void OnComputeStats();
	void OnTierChanged();
	void ReleaseLevel();
	void ExecuteUbergraph_ArmorSkill_Reciprocity(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
