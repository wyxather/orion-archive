#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Sanc3_FiringRange_PerfectScore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Sanc3_FiringRange_PerfectScore.Challenge_Sanc3_FiringRange_PerfectScore_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Sanc3_FiringRange_PerfectScore_C : public UOakChallenge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Sanc3_FiringRange_PerfectScore.Challenge_Sanc3_FiringRange_PerfectScore_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
