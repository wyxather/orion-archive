#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AttInit_M_VendingMachineRepair_SpineDrop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AttInit_M_VendingMachineRepair_SpineDrop.AttInit_M_VendingMachineRepair_SpineDrop_C
// 0x0008 (0x0038 - 0x0030)
class UAttInit_M_VendingMachineRepair_SpineDrop_C : public UAttributeInitializer
{
public:
	class UGbxCondition*                               IsHumanSpineObjectiveActive;                              // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AttInit_M_VendingMachineRepair_SpineDrop.AttInit_M_VendingMachineRepair_SpineDrop_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
