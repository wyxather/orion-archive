#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Salamander_CoreStrengthCoeff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Salamander_CoreStrengthCoeff.Init_Salamander_CoreStrengthCoeff_C
// 0x0000 (0x0030 - 0x0030)
class UInit_Salamander_CoreStrengthCoeff_C : public UAttributeInitializer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Salamander_CoreStrengthCoeff.Init_Salamander_CoreStrengthCoeff_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
