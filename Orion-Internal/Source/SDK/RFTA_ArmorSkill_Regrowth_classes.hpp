#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Regrowth_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArmorSkill_Regrowth.ArmorSkill_Regrowth_C
// 0x0028 (0x0274 - 0x024C)
class UArmorSkill_Regrowth_C : public UArmorSkill_ModifySingleStat_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              HealthRegen;                                              // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AddStackFrequencyInSeconds;                               // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxStackCount;                                            // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StacksToRemoveOnTakingDamage;                             // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageScalarTier1;                                        // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageScalarTier2;                                        // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageScalarTier3;                                        // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Regrowth.ArmorSkill_Regrowth_C");
		return ptr;
	}


	void GetValue(int* Tier, float* Out);
	void GetDamageScalar(int* Tier, float* RangedDamageScalar, float* MeleeDamageScalar, float* ModDamageScalar, float* SummonedCreatureDamageScalar);
	void GetDescription(class AActor** Actor, struct FText* Out);
	void GetHealthRegenDisplay(float* InRegen, class AActor** Owner, float* Regen);
	void GetTierDescription(class AActor** Actor, int* Tier, struct FText* Out);
	void OnComputeStats();
	void OnActionStart();
	void AddStack();
	void OnActionStop();
	void ExecuteUbergraph_ArmorSkill_Regrowth(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
