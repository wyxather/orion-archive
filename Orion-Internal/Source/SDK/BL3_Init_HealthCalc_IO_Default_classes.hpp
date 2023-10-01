#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_HealthCalc_IO_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_HealthCalc_IO_Default.Init_HealthCalc_IO_Default_C
// 0x0000 (0x0048 - 0x0048)
class UInit_HealthCalc_IO_Default_C : public UInit_HealthCalc_IO_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_HealthCalc_IO_Default.Init_HealthCalc_IO_Default_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
