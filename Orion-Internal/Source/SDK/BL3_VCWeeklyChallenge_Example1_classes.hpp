#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_VCWeeklyChallenge_Example1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VCWeeklyChallenge_Example1.VCWeeklyChallenge_Example1_C
// 0x0000 (0x0260 - 0x0260)
class UVCWeeklyChallenge_Example1_C : public UOakChallenge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VCWeeklyChallenge_Example1.VCWeeklyChallenge_Example1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
