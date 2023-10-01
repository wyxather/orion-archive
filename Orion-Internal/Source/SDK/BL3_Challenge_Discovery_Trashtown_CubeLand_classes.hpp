#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Discovery_Trashtown_CubeLand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Discovery_Trashtown_CubeLand.Challenge_Discovery_Trashtown_CubeLand_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Discovery_Trashtown_CubeLand_C : public UChallenge_Discovery_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Discovery_Trashtown_CubeLand.Challenge_Discovery_Trashtown_CubeLand_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
