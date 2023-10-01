#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Kill_RewardStat_DLC1_Done_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Kill_RewardStat_DLC1_Done.Challenge_Kill_RewardStat_DLC1_Done_C
// 0x0000 (0x02B8 - 0x02B8)
class UChallenge_Kill_RewardStat_DLC1_Done_C : public UChallenge_Kill_RewardStat_DLC1_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Kill_RewardStat_DLC1_Done.Challenge_Kill_RewardStat_DLC1_Done_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
