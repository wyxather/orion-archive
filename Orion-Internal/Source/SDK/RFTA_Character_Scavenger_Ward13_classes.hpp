#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Scavenger_Ward13_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Scavenger_Ward13.Character_Scavenger_Ward13_C
// 0x0000 (0x0D09 - 0x0D09)
class ACharacter_Scavenger_Ward13_C : public ACharacter_Merchant_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Scavenger_Ward13.Character_Scavenger_Ward13_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
