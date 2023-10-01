#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Wally_PlayerTargetSelector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Wally_PlayerTargetSelector.Character_Wally_PlayerTargetSelector_C
// 0x0000 (0x0040 - 0x0040)
class UCharacter_Wally_PlayerTargetSelector_C : public UAINearbyPlayerTargetSelector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Wally_PlayerTargetSelector.Character_Wally_PlayerTargetSelector_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
