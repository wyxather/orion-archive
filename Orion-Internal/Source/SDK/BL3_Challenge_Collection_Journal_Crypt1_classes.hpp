#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Collection_Journal_Crypt1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Collection_Journal_Crypt1.Challenge_Collection_Journal_Crypt1_C
// 0x0000 (0x0340 - 0x0340)
class UChallenge_Collection_Journal_Crypt1_C : public UChallenge_Collection_Journal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Collection_Journal_Crypt1.Challenge_Collection_Journal_Crypt1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
