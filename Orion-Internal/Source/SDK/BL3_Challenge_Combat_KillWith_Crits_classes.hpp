#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Combat_KillWith_Crits_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Combat_KillWith_Crits.Challenge_Combat_KillWith_Crits_C
// 0x0000 (0x0298 - 0x0298)
class UChallenge_Combat_KillWith_Crits_C : public UChallenge_WeaponKill_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Combat_KillWith_Crits.Challenge_Combat_KillWith_Crits_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
