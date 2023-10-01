#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trinket_AbrasiveAmulet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Trinket_AbrasiveAmulet.Trinket_AbrasiveAmulet_C
// 0x0008 (0x05F0 - 0x05E8)
class ATrinket_AbrasiveAmulet_C : public AItem_Trinket_TriggerOnMeleeHit_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trinket_AbrasiveAmulet.Trinket_AbrasiveAmulet_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void Trigger(struct FDamageInfo* Damage);
	void OnEquipped();
	void OnUnequipped();
	void ExecuteUbergraph_Trinket_AbrasiveAmulet(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
