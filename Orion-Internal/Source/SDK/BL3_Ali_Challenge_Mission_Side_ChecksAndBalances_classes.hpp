#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ali_Challenge_Mission_Side_ChecksAndBalances_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ali_Challenge_Mission_Side_ChecksAndBalances.Ali_Challenge_Mission_Side_ChecksAndBalances_C
// 0x0000 (0x0268 - 0x0268)
class UAli_Challenge_Mission_Side_ChecksAndBalances_C : public UChallenge_Mission_Side_Main_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ali_Challenge_Mission_Side_ChecksAndBalances.Ali_Challenge_Mission_Side_ChecksAndBalances_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
