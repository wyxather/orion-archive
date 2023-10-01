#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Gunner_PetHealth_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Gunner_PetHealth.Init_Gunner_PetHealth_C
// 0x0000 (0x0038 - 0x0038)
class UInit_Gunner_PetHealth_C : public UInit_SharedPlayer_PetHealth_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Gunner_PetHealth.Init_Gunner_PetHealth_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
