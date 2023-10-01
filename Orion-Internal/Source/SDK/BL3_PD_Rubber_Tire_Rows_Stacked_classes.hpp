#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Rubber_Tire_Rows_Stacked_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PD_Rubber_Tire_Rows_Stacked.PD_Rubber_Tire_Rows_Stacked_C
// 0x0000 (0x0540 - 0x0540)
class APD_Rubber_Tire_Rows_Stacked_C : public ABP_DestructibleGameplayAndNetworkRelevant_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PD_Rubber_Tire_Rows_Stacked.PD_Rubber_Tire_Rows_Stacked_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
