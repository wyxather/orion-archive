#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_RandomLootCount_Normal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_RandomLootCount_Normal.Init_RandomLootCount_Normal_C
// 0x0000 (0x0040 - 0x0040)
class UInit_RandomLootCount_Normal_C : public UInit_RandomLootCount_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_RandomLootCount_Normal.Init_RandomLootCount_Normal_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
