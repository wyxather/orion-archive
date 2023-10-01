#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Character_Root_Wraith_Screamer_Summon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Character_Root_Wraith_Screamer_Summon.Action_Character_Root_Wraith_Screamer_Summon_C
// 0x0000 (0x0270 - 0x0270)
class UAction_Character_Root_Wraith_Screamer_Summon_C : public UAction_Spawn_EncounterList_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Character_Root_Wraith_Screamer_Summon.Action_Character_Root_Wraith_Screamer_Summon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
