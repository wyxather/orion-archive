#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Drone_RocketDamageCalc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Drone_RocketDamageCalc.Init_Drone_RocketDamageCalc_C
// 0x0030 (0x0060 - 0x0030)
class UInit_Drone_RocketDamageCalc_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                       Scalar;                                                   // 0x0030(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       CryoScalar;                                               // 0x0048(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Drone_RocketDamageCalc.Init_Drone_RocketDamageCalc_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
