#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Elite_ComputedStats_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Elite_ComputedStats.Character_Elite_ComputedStats_C
// 0x0000 (0x0060 - 0x0060)
class UCharacter_Elite_ComputedStats_C : public UCharacter_Base_ComputedStats_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Elite_ComputedStats.Character_Elite_ComputedStats_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
