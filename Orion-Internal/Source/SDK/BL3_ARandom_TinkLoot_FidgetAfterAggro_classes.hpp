#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_TinkLoot_FidgetAfterAggro_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARandom_TinkLoot_FidgetAfterAggro.ARandom_TinkLoot_FidgetAfterAggro_C
// 0x0000 (0x0070 - 0x0070)
class UARandom_TinkLoot_FidgetAfterAggro_C : public UGbxAction_RandomContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARandom_TinkLoot_FidgetAfterAggro.ARandom_TinkLoot_FidgetAfterAggro_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
