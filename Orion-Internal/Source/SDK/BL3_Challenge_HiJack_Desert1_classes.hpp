#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_HiJack_Desert1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_HiJack_Desert1.Challenge_HiJack_Desert1_C
// 0x0000 (0x0380 - 0x0380)
class UChallenge_HiJack_Desert1_C : public UChallenge_HiJack_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_HiJack_Desert1.Challenge_HiJack_Desert1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
