#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_DLC2_Hunt_Stat_AllDone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_DLC2_Hunt_Stat_AllDone.Challenge_DLC2_Hunt_Stat_AllDone_C
// 0x0000 (0x02B8 - 0x02B8)
class UChallenge_DLC2_Hunt_Stat_AllDone_C : public UChallenge_DLC2_Hunt_Stat_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_DLC2_Hunt_Stat_AllDone.Challenge_DLC2_Hunt_Stat_AllDone_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
