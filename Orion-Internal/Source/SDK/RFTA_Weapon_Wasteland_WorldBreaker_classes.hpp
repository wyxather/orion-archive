#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Wasteland_WorldBreaker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C
// 0x0015 (0x065E - 0x0649)
class AWeapon_Wasteland_WorldBreaker_C : public AWeapon_Hammer_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0649(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0650(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ForceImpulseProcChanceChargeHit;                          // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               as;                                                       // 0x065C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ProcFired;                                                // 0x065D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnHitTarget(struct FDamageInfo* DamageInfo);
	void MeleeChargeAttack();
	void OnEquipped();
	void OnUnequipped();
	void OnStateChange(struct FName* StateName, struct FName* PreviousStateName);
	void ExecuteUbergraph_Weapon_Wasteland_WorldBreaker(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
