// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Item.BP_Item_C.OnPickupFailed
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ABP_Item_C::OnPickupFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item.BP_Item_C.OnPickupFailed");

	ABP_Item_C_OnPickupFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Item.BP_Item_C.OnPickedUp
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ABP_Item_C::OnPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item.BP_Item_C.OnPickedUp");

	ABP_Item_C_OnPickedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Item.BP_Item_C.ExecuteUbergraph_BP_Item
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_C::ExecuteUbergraph_BP_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item.BP_Item_C.ExecuteUbergraph_BP_Item");

	ABP_Item_C_ExecuteUbergraph_BP_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
