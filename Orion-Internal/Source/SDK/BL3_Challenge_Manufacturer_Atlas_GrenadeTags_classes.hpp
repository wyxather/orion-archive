#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Manufacturer_Atlas_GrenadeTags_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Manufacturer_Atlas_GrenadeTags.Challenge_Manufacturer_Atlas_GrenadeTags_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Manufacturer_Atlas_GrenadeTags_C : public UOakChallenge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Manufacturer_Atlas_GrenadeTags.Challenge_Manufacturer_Atlas_GrenadeTags_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
