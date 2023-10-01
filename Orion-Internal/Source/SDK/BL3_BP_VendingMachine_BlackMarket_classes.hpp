#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VendingMachine_BlackMarket_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VendingMachine_BlackMarket.BP_VendingMachine_BlackMarket_C
// 0x0008 (0x0710 - 0x0708)
class ABP_VendingMachine_BlackMarket_C : public ABP_VendingMachineBase_C
{
public:
	class UBoxComponent*                               DynamicNavBox;                                            // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VendingMachine_BlackMarket.BP_VendingMachine_BlackMarket_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
