#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_DLC2_Gifts_Camp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_DLC2_Gifts_Camp.Challenge_DLC2_Gifts_Camp_C
// 0x0000 (0x0348 - 0x0348)
class UChallenge_DLC2_Gifts_Camp_C : public UChallenge_DLC2_Gifts_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_DLC2_Gifts_Camp.Challenge_DLC2_Gifts_Camp_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
