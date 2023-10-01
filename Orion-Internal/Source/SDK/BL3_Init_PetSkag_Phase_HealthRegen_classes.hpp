#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_PetSkag_Phase_HealthRegen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_PetSkag_Phase_HealthRegen.Init_PetSkag_Phase_HealthRegen_C
// 0x0000 (0x0030 - 0x0030)
class UInit_PetSkag_Phase_HealthRegen_C : public UAttributeInitializer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_PetSkag_Phase_HealthRegen.Init_PetSkag_Phase_HealthRegen_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
