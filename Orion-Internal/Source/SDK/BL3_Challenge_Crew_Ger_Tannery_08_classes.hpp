#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Crew_Ger_Tannery_08_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Crew_Ger_Tannery_08.Challenge_Crew_Ger_Tannery_08_C
// 0x0000 (0x033C - 0x033C)
class UChallenge_Crew_Ger_Tannery_08_C : public UChallenge_Crew_Geranium_Tannery_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Crew_Ger_Tannery_08.Challenge_Crew_Ger_Tannery_08_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
