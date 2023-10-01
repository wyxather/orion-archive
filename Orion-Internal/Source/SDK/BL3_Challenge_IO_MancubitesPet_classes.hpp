#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_IO_MancubitesPet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_IO_MancubitesPet.Challenge_IO_MancubitesPet_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_IO_MancubitesPet_C : public UChallenge_Enemy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_IO_MancubitesPet.Challenge_IO_MancubitesPet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
