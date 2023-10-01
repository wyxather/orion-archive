#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAmmoItem_AllAmmo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C
// 0x0008 (0x04B0 - 0x04A8)
class ABPAmmoItem_AllAmmo_C : public AOakInventoryAmmoItem
{
public:
	class UGbxCondition*                               AllAmmoFullCondition;                                     // 0x04A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void FillAmmo(class AOakCharacter* PickupInstigator, class UGbxAttributeData* CurrentValue, class UGbxAttributeData* MaxValue);
	void PickedUp(class AOakCharacter* PickupInstigator);
	bool CanBePickedUp(class AOakCharacter** PickupInstigator, int* Quantity, bool* UsedByInstigator, class AInventoryItemPickup** WorldPickupActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
