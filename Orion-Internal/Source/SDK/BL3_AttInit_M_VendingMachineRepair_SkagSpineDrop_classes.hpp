#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AttInit_M_VendingMachineRepair_SkagSpineDrop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AttInit_M_VendingMachineRepair_SkagSpineDrop.AttInit_M_VendingMachineRepair_SkagSpineDrop_C
// 0x0008 (0x0038 - 0x0030)
class UAttInit_M_VendingMachineRepair_SkagSpineDrop_C : public UAttributeInitializer
{
public:
	class UGbxCondition*                               IsSkagSpineObjectiveActive;                               // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AttInit_M_VendingMachineRepair_SkagSpineDrop.AttInit_M_VendingMachineRepair_SkagSpineDrop_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
