#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_InventoryCondition_Rarity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InventoryCondition_Rarity.InventoryCondition_Rarity_C
// 0x0008 (0x0090 - 0x0088)
class UInventoryCondition_Rarity_C : public UGbxCondition_Blueprint
{
public:
	class UOakInventoryRarityData*                     Rarity;                                                   // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryCondition_Rarity.InventoryCondition_Rarity_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
