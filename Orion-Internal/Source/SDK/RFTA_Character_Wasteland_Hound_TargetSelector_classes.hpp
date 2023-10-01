#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Wasteland_Hound_TargetSelector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Wasteland_Hound_TargetSelector.Character_Wasteland_Hound_TargetSelector_C
// 0x0000 (0x0040 - 0x0040)
class UCharacter_Wasteland_Hound_TargetSelector_C : public UCharacter_Wasteland_Annointed_TargetSelector_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Wasteland_Hound_TargetSelector.Character_Wasteland_Hound_TargetSelector_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
