#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_LootGameStage_MinorVariance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_LootGameStage_MinorVariance.Init_LootGameStage_MinorVariance_C
// 0x0010 (0x0040 - 0x0030)
class UInit_LootGameStage_MinorVariance_C : public UAttributeInitializer
{
public:
	struct FDataTableRowHandle                         Range;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_LootGameStage_MinorVariance.Init_LootGameStage_MinorVariance_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
