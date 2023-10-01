#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TestChallenge_Crew_Ger_JakobsJournal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TestChallenge_Crew_Ger_JakobsJournal.TestChallenge_Crew_Ger_JakobsJournal_C
// 0x0000 (0x0348 - 0x0348)
class UTestChallenge_Crew_Ger_JakobsJournal_C : public UChallenge_Crew_Geranium_JakobsJournal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TestChallenge_Crew_Ger_JakobsJournal.TestChallenge_Crew_Ger_JakobsJournal_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
