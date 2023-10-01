#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_InventoryCondition_AffectedByElement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InventoryCondition_AffectedByElement.InventoryCondition_AffectedByElement_C
// 0x0001 (0x0089 - 0x0088)
class UInventoryCondition_AffectedByElement_C : public UGbxCondition_Blueprint
{
public:
	EOakElementalType                                  ElementalType;                                            // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryCondition_AffectedByElement.InventoryCondition_AffectedByElement_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
