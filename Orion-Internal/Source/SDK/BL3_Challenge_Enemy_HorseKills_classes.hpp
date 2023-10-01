#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Enemy_HorseKills_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Enemy_HorseKills.Challenge_Enemy_HorseKills_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Enemy_HorseKills_C : public UChallenge_Enemy_Ger_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Enemy_HorseKills.Challenge_Enemy_HorseKills_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
