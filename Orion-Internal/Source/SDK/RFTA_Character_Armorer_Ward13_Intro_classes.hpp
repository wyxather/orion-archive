#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Armorer_Ward13_Intro_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Armorer_Ward13_Intro.Character_Armorer_Ward13_Intro_C
// 0x0000 (0x0D00 - 0x0D00)
class ACharacter_Armorer_Ward13_Intro_C : public ACharacter_Crafter_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Armorer_Ward13_Intro.Character_Armorer_Ward13_Intro_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
