#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Item_SM_VendingMachineRepair_SkagSpine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_SM_VendingMachineRepair_SkagSpine.Item_SM_VendingMachineRepair_SkagSpine_C
// 0x0008 (0x05C0 - 0x05B8)
class AItem_SM_VendingMachineRepair_SkagSpine_C : public ABP_OakMissionItem_C
{
public:
	class UStaticMeshComponent*                        SM_SkagSpine;                                             // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_SM_VendingMachineRepair_SkagSpine.Item_SM_VendingMachineRepair_SkagSpine_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
