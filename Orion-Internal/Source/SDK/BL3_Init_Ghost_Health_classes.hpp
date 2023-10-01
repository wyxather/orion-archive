#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Ghost_Health_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Ghost_Health.Init_Ghost_Health_C
// 0x0018 (0x0048 - 0x0030)
class UInit_Ghost_Health_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                       HealthMultiplier_Ghost;                                   // 0x0030(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Ghost_Health.Init_Ghost_Health_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
