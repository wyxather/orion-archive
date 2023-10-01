#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Archetype_Cultist_UI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Archetype_Cultist_UI.Archetype_Cultist_UI_C
// 0x0000 (0x00A8 - 0x00A8)
class UArchetype_Cultist_UI_C : public URemnantArchetype
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Archetype_Cultist_UI.Archetype_Cultist_UI_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
