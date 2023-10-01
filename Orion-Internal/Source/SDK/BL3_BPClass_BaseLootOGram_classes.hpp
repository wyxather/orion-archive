#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPClass_BaseLootOGram_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPClass_BaseLootOGram.BPClass_BaseLootOGram_C
// 0x0000 (0x04A8 - 0x04A8)
class ABPClass_BaseLootOGram_C : public AOakInventoryConsumableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPClass_BaseLootOGram.BPClass_BaseLootOGram_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
