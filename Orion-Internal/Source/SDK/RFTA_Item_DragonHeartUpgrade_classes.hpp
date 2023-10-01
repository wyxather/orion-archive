#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Item_DragonHeartUpgrade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_DragonHeartUpgrade.Item_DragonHeartUpgrade_C
// 0x0008 (0x04B8 - 0x04B0)
class AItem_DragonHeartUpgrade_C : public AItem
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_DragonHeartUpgrade.Item_DragonHeartUpgrade_C");
		return ptr;
	}


	int GetMaxQuantity();
	bool PreAdd(class UInventoryComponent** Inventory, int* Quantity);
	void ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
