#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Elemental_Damage_Cryo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Elemental_Damage_Cryo.Challenge_Elemental_Damage_Cryo_C
// 0x0000 (0x0288 - 0x0288)
class UChallenge_Elemental_Damage_Cryo_C : public UChallenge_Elemental_Damage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Elemental_Damage_Cryo.Challenge_Elemental_Damage_Cryo_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
