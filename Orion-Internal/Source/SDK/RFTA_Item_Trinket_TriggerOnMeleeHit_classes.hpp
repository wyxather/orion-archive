#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Item_Trinket_TriggerOnMeleeHit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C
// 0x0018 (0x05E8 - 0x05D0)
class AItem_Trinket_TriggerOnMeleeHit_C : public AItem_Trinket_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      Action;                                                   // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ActionOnTarget;                                           // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C");
		return ptr;
	}


	void Trigger(struct FDamageInfo* Damage);
	void OnHitTarget(struct FDamageInfo* DamageInfo);
	void ExecuteUbergraph_Item_Trinket_TriggerOnMeleeHit(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
