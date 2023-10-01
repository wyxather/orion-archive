#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Hollow_NavFilter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Root_Hollow_NavFilter.Character_Root_Hollow_NavFilter_C
// 0x0000 (0x0048 - 0x0048)
class UCharacter_Root_Hollow_NavFilter_C : public UCharacter_Base_NavFilter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Hollow_NavFilter.Character_Root_Hollow_NavFilter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
