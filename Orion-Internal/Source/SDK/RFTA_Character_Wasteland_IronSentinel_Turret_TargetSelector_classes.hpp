#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Wasteland_IronSentinel_Turret_TargetSelector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Wasteland_IronSentinel_Turret_TargetSelector.Character_Wasteland_IronSentinel_Turret_TargetSelector_C
// 0x0000 (0x0038 - 0x0038)
class UCharacter_Wasteland_IronSentinel_Turret_TargetSelector_C : public UAIDefaultTargetSelector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Wasteland_IronSentinel_Turret_TargetSelector.Character_Wasteland_IronSentinel_Turret_TargetSelector_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
