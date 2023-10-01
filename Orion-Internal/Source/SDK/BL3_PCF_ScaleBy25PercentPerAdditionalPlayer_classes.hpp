#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PCF_ScaleBy25PercentPerAdditionalPlayer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PCF_ScaleBy25PercentPerAdditionalPlayer.PCF_ScaleBy25PercentPerAdditionalPlayer_C
// 0x0018 (0x0048 - 0x0030)
class UPCF_ScaleBy25PercentPerAdditionalPlayer_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                       DataTable_PlayerCountValue;                               // 0x0030(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PCF_ScaleBy25PercentPerAdditionalPlayer.PCF_ScaleBy25PercentPerAdditionalPlayer_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
