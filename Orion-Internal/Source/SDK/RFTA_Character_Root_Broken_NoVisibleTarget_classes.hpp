#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Broken_NoVisibleTarget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Root_Broken_NoVisibleTarget.Character_Root_Broken_NoVisibleTarget_C
// 0x0000 (0x0038 - 0x0038)
class UCharacter_Root_Broken_NoVisibleTarget_C : public UAIDefaultTargetSelector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Broken_NoVisibleTarget.Character_Root_Broken_NoVisibleTarget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
