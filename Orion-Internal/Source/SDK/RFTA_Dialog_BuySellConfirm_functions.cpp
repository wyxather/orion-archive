// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_BuySellConfirm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_BuySellConfirm.Dialog_BuySellConfirm_C.GetQuantity
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Quantity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_BuySellConfirm_C::GetQuantity(int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_BuySellConfirm.Dialog_BuySellConfirm_C.GetQuantity");

	ADialog_BuySellConfirm_C_GetQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quantity != nullptr)
		*Quantity = params.Quantity;
}


// Function Dialog_BuySellConfirm.Dialog_BuySellConfirm_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Sell                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_BuySellConfirm_C::Init(bool* Sell, int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_BuySellConfirm.Dialog_BuySellConfirm_C.Init");

	ADialog_BuySellConfirm_C_Init_Params params;
	params.Sell = Sell;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
