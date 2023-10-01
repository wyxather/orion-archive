#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Crew_Geranium_Tannery_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Crew_Geranium_Tannery.Challenge_Crew_Geranium_Tannery_C
// 0x0000 (0x033C - 0x033C)
class UChallenge_Crew_Geranium_Tannery_C : public UChallenge_Crew_Geranium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Crew_Geranium_Tannery.Challenge_Crew_Geranium_Tannery_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
