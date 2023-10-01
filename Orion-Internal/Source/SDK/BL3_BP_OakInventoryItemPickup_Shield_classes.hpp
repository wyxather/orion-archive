#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_OakInventoryItemPickup_Shield_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OakInventoryItemPickup_Shield.BP_OakInventoryItemPickup_Shield_C
// 0x0000 (0x0730 - 0x0730)
class ABP_OakInventoryItemPickup_Shield_C : public ABP_OakInventoryItemPickup_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OakInventoryItemPickup_Shield.BP_OakInventoryItemPickup_Shield_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
