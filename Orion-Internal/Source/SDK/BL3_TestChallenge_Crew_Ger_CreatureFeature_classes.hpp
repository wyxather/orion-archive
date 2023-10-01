#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TestChallenge_Crew_Ger_CreatureFeature_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TestChallenge_Crew_Ger_CreatureFeature.TestChallenge_Crew_Ger_CreatureFeature_C
// 0x0000 (0x033C - 0x033C)
class UTestChallenge_Crew_Ger_CreatureFeature_C : public UChallenge_Crew_Geranium_CreatureFeature_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TestChallenge_Crew_Ger_CreatureFeature.TestChallenge_Crew_Ger_CreatureFeature_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
