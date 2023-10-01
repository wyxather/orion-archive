#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Faction_Enemy_Hostile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Faction_Enemy_Hostile.Faction_Enemy_Hostile_C
// 0x0000 (0x0038 - 0x0038)
class UFaction_Enemy_Hostile_C : public UFaction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Faction_Enemy_Hostile.Faction_Enemy_Hostile_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
