#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_VendingMachinePrice_Heal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_VendingMachinePrice_Heal.Init_VendingMachinePrice_Heal_C
// 0x0000 (0x0030 - 0x0030)
class UInit_VendingMachinePrice_Heal_C : public UAttributeInitializer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_VendingMachinePrice_Heal.Init_VendingMachinePrice_Heal_C");
		return ptr;
	}


	float CalcAmmoCost(class UObject* CharContext, class UGbxAttributeData* AmmoMax, class UGbxAttributeData* AmmoCurrent, class UGbxAttributeData* AmmoStackCount, class UGbxAttributeData* AmmoStackCost);
	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
