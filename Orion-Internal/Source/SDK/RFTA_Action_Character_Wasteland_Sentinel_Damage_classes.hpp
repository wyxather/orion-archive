#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Character_Wasteland_Sentinel_Damage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Character_Wasteland_Sentinel_Damage.Action_Character_Wasteland_Sentinel_Damage_C
// 0x0000 (0x0258 - 0x0258)
class UAction_Character_Wasteland_Sentinel_Damage_C : public UAction_Character_Root_Screamer_Damage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Character_Wasteland_Sentinel_Damage.Action_Character_Wasteland_Sentinel_Damage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
