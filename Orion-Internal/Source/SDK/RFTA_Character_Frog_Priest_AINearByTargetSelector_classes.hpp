#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Frog_Priest_AINearByTargetSelector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Frog_Priest_AINearByTargetSelector.Character_Frog_Priest_AINearByTargetSelector_C
// 0x0000 (0x0040 - 0x0040)
class UCharacter_Frog_Priest_AINearByTargetSelector_C : public UAICharacterNearbyTargetSelector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Frog_Priest_AINearByTargetSelector.Character_Frog_Priest_AINearByTargetSelector_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
