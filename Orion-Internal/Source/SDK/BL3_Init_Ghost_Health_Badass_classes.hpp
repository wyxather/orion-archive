#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Ghost_Health_Badass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Ghost_Health_Badass.Init_Ghost_Health_Badass_C
// 0x0000 (0x0048 - 0x0048)
class UInit_Ghost_Health_Badass_C : public UInit_Ghost_Health_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Ghost_Health_Badass.Init_Ghost_Health_Badass_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
