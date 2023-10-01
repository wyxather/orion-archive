// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VendingMachine_BlackMarket_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VendingMachine_BlackMarket.BP_VendingMachine_BlackMarket_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_BlackMarket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine_BlackMarket.BP_VendingMachine_BlackMarket_C.UserConstructionScript");

	ABP_VendingMachine_BlackMarket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
