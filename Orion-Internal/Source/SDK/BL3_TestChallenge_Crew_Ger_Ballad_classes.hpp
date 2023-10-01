#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TestChallenge_Crew_Ger_Ballad_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TestChallenge_Crew_Ger_Ballad.TestChallenge_Crew_Ger_Ballad_C
// 0x0000 (0x033C - 0x033C)
class UTestChallenge_Crew_Ger_Ballad_C : public UChallenge_Crew_Geranium_Ballad_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TestChallenge_Crew_Ger_Ballad.TestChallenge_Crew_Ger_Ballad_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
