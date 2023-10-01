#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_InventoryCondition_RarityMultiple_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InventoryCondition_RarityMultiple.InventoryCondition_RarityMultiple_C
// 0x0010 (0x0098 - 0x0088)
class UInventoryCondition_RarityMultiple_C : public UGbxCondition_Blueprint
{
public:
	TArray<class UOakInventoryRarityData*>             Rarity;                                                   // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryCondition_RarityMultiple.InventoryCondition_RarityMultiple_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
