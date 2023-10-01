#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARand_PetJabbermon_MeleeMix_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARand_PetJabbermon_MeleeMix.ARand_PetJabbermon_MeleeMix_C
// 0x0000 (0x0240 - 0x0240)
class UARand_PetJabbermon_MeleeMix_C : public UARand_PetSkag_MeleeMix_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARand_PetJabbermon_MeleeMix.ARand_PetJabbermon_MeleeMix_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
