#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_RedChests_Lodge_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_RedChests_Lodge_03.Challenge_RedChests_Lodge_03_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_RedChests_Lodge_03_C : public UChallenge_RedChests_Geranium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_RedChests_Lodge_03.Challenge_RedChests_Lodge_03_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
