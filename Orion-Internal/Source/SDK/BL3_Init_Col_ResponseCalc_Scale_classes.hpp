#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Col_ResponseCalc_Scale_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Col_ResponseCalc_Scale.Init_Col_ResponseCalc_Scale_C
// 0x0000 (0x0030 - 0x0030)
class UInit_Col_ResponseCalc_Scale_C : public UAttributeInitializer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Col_ResponseCalc_Scale.Init_Col_ResponseCalc_Scale_C");
		return ptr;
	}


	float GetValueFromArchetype(const struct FName& Archetype, const struct FStruct_VehicleColResponse& VehicleColResponse);
	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
