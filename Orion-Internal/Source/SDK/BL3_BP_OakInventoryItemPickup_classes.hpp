#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_OakInventoryItemPickup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OakInventoryItemPickup.BP_OakInventoryItemPickup_C
// 0x0008 (0x0730 - 0x0728)
class ABP_OakInventoryItemPickup_C : public AOakInventoryItemPickup
{
public:
	class UBP_PickupUsableComponent_C*                 BP_PickupUsableComponent;                                 // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OakInventoryItemPickup.BP_OakInventoryItemPickup_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
