// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Item_SM_VendingMachineRepair_SkagSpine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Item_SM_VendingMachineRepair_SkagSpine.Item_SM_VendingMachineRepair_SkagSpine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AItem_SM_VendingMachineRepair_SkagSpine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_SM_VendingMachineRepair_SkagSpine.Item_SM_VendingMachineRepair_SkagSpine_C.UserConstructionScript");

	AItem_SM_VendingMachineRepair_SkagSpine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
