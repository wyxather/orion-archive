#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_PetJabbermon_Melee_Run_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARandom_PetJabbermon_Melee_Run.ARandom_PetJabbermon_Melee_Run_C
// 0x0000 (0x0240 - 0x0240)
class UARandom_PetJabbermon_Melee_Run_C : public UARandom_PetSkag_Melee_Run_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARandom_PetJabbermon_Melee_Run.ARandom_PetJabbermon_Melee_Run_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
