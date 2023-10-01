#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Siren_CM_Raid1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Siren_CM_Raid1.Init_Siren_CM_Raid1_C
// 0x0090 (0x00C0 - 0x0030)
class UInit_Siren_CM_Raid1_C : public UAttributeInitializer
{
public:
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0030(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       Scalar;                                                   // 0x00A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Siren_CM_Raid1.Init_Siren_CM_Raid1_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
