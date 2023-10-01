#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Swamp_ButchersFlail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C
// 0x0018 (0x0658 - 0x0640)
class AWeapon_Swamp_ButchersFlail_C : public AWeapon_Flail_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0640(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Duration;                                                 // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CorrosiveProcChanceChargeHit;                             // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EnemyDefenseReduction;                                    // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ChargeAttackNumCorrodedStacks;                            // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnHitTarget(struct FDamageInfo* DamageInfo);
	void ExecuteUbergraph_Weapon_Swamp_ButchersFlail(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
