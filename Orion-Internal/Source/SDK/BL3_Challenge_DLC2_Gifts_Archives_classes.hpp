#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_DLC2_Gifts_Archives_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_DLC2_Gifts_Archives.Challenge_DLC2_Gifts_Archives_C
// 0x0000 (0x0348 - 0x0348)
class UChallenge_DLC2_Gifts_Archives_C : public UChallenge_DLC2_Gifts_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_DLC2_Gifts_Archives.Challenge_DLC2_Gifts_Archives_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
