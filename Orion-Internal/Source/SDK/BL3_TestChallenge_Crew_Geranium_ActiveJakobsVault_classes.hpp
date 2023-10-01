#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TestChallenge_Crew_Geranium_ActiveJakobsVault_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TestChallenge_Crew_Geranium_ActiveJakobsVault.TestChallenge_Crew_Geranium_ActiveJakobsVault_C
// 0x0000 (0x0260 - 0x0260)
class UTestChallenge_Crew_Geranium_ActiveJakobsVault_C : public UChallenge_Crew_Geranium_UnlockJakobsVault_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TestChallenge_Crew_Geranium_ActiveJakobsVault.TestChallenge_Crew_Geranium_ActiveJakobsVault_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
