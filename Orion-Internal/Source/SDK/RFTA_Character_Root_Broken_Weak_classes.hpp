#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Broken_Weak_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Root_Broken_Weak.Character_Root_Broken_Weak_C
// 0x0000 (0x0CF0 - 0x0CF0)
class ACharacter_Root_Broken_Weak_C : public ACharacter_Root_Broken_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Broken_Weak.Character_Root_Broken_Weak_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
