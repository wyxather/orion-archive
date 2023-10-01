#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_SharedPlayer_PetHealth_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_SharedPlayer_PetHealth.Init_SharedPlayer_PetHealth_C
// 0x0008 (0x0038 - 0x0030)
class UInit_SharedPlayer_PetHealth_C : public UAttributeInitializer
{
public:
	float                                              HealthMultiplier;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdditionalHealthPerLevel_Scale;                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_SharedPlayer_PetHealth.Init_SharedPlayer_PetHealth_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
