#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_BloodPact_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArmorSkill_BloodPact.ArmorSkill_BloodPact_C
// 0x001C (0x025C - 0x0240)
class UArmorSkill_BloodPact_C : public UArmorSkill_TriggerOnDamage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ModDurationModTier1;                                      // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ModDurationModTier2;                                      // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ModDurationModTier3;                                      // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ModPowerPerSecond;                                        // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ModPowerFrequency;                                        // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_BloodPact.ArmorSkill_BloodPact_C");
		return ptr;
	}


	void IncrementModPower();
	void GetTierDescription(class AActor** Actor, int* Tier, struct FText* Out);
	void GetDescription(class AActor** Actor, struct FText* Out);
	void GetModDurationMod(int* Tier, float* Out);
	void Trigger(struct FDamageInfo* Damage);
	void OnActionStart();
	void OnActionStop();
	void OnComputeStats();
	void ExecuteUbergraph_ArmorSkill_BloodPact(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
