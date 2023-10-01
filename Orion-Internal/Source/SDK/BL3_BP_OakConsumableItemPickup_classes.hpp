#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_OakConsumableItemPickup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C
// 0x0008 (0x0738 - 0x0730)
class ABP_OakConsumableItemPickup_C : public ABP_OakInventoryItemPickup_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnPickedUpEvent(class AActor** WasPickedUpBy);
	void ExecuteUbergraph_BP_OakConsumableItemPickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
