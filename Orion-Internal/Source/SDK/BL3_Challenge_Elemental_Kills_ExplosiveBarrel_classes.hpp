#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Elemental_Kills_ExplosiveBarrel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Elemental_Kills_ExplosiveBarrel.Challenge_Elemental_Kills_ExplosiveBarrel_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Elemental_Kills_ExplosiveBarrel_C : public UChallenge_Elemental_Kills_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Elemental_Kills_ExplosiveBarrel.Challenge_Elemental_Kills_ExplosiveBarrel_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
