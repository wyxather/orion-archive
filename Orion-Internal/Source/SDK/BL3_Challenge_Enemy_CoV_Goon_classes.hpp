#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Enemy_CoV_Goon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Enemy_CoV_Goon.Challenge_Enemy_CoV_Goon_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Enemy_CoV_Goon_C : public UChallenge_Enemy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Enemy_CoV_Goon.Challenge_Enemy_CoV_Goon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
