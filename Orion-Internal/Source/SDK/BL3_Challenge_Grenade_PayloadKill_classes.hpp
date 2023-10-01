#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Grenade_PayloadKill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Grenade_PayloadKill.Challenge_Grenade_PayloadKill_C
// 0x0000 (0x0298 - 0x0298)
class UChallenge_Grenade_PayloadKill_C : public UOakKillBasedChallenge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Grenade_PayloadKill.Challenge_Grenade_PayloadKill_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
