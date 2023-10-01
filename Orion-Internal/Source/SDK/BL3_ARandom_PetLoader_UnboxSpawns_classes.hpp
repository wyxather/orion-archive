#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_PetLoader_UnboxSpawns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARandom_PetLoader_UnboxSpawns.ARandom_PetLoader_UnboxSpawns_C
// 0x0000 (0x0070 - 0x0070)
class UARandom_PetLoader_UnboxSpawns_C : public UGbxAction_RandomContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARandom_PetLoader_UnboxSpawns.ARandom_PetLoader_UnboxSpawns_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
