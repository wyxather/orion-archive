#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_RandomLootCount_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_RandomLootCount.Init_RandomLootCount_C
// 0x0010 (0x0040 - 0x0030)
class UInit_RandomLootCount_C : public UAttributeInitializer
{
public:
	struct FDataTableRowHandle                         LootTableEntry;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_RandomLootCount.Init_RandomLootCount_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
