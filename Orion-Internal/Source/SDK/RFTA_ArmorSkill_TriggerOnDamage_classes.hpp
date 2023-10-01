#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_TriggerOnDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C
// 0x0010 (0x0240 - 0x0230)
class UArmorSkill_TriggerOnDamage_C : public UArmorSkill_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      DamageClass;                                              // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C");
		return ptr;
	}


	void Trigger(struct FDamageInfo* Damage);
	void OnHitTarget(struct FDamageInfo* DamageInfo);
	void ExecuteUbergraph_ArmorSkill_TriggerOnDamage(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
