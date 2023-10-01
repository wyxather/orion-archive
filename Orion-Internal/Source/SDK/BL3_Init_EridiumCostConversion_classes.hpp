#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_EridiumCostConversion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_EridiumCostConversion.Init_EridiumCostConversion_C
// 0x0000 (0x0030 - 0x0030)
class UInit_EridiumCostConversion_C : public UAttributeInitializer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_EridiumCostConversion.Init_EridiumCostConversion_C");
		return ptr;
	}


	void MoneyMultiplier(class AActor* GearItem, float GearTypeMult, float* GearMoneyMult);
	void GearTypeMultiplier(class AActor* GearItem, float* GearTypeMult);
	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
