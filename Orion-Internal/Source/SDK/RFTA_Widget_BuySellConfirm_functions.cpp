// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_BuySellConfirm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetMaxBuyQuantity
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellConfirm_C::GetMaxBuyQuantity(int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetMaxBuyQuantity");

	UWidget_BuySellConfirm_C_GetMaxBuyQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetScrap
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryComponent**    InventoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Scrap                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellConfirm_C::GetScrap(class UInventoryComponent** InventoryComponent, int* Scrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetScrap");

	UWidget_BuySellConfirm_C_GetScrap_Params params;
	params.InventoryComponent = InventoryComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scrap != nullptr)
		*Scrap = params.Scrap;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.HasScrap
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Scrap                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Cost                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_BuySellConfirm_C::HasScrap(int* Scrap, int* Cost, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.HasScrap");

	UWidget_BuySellConfirm_C_HasScrap_Params params;
	params.Scrap = Scrap;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.SellItem
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_BuySellConfirm_C::SellItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.SellItem");

	UWidget_BuySellConfirm_C_SellItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BuyItem
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_BuySellConfirm_C::BuyItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BuyItem");

	UWidget_BuySellConfirm_C_BuyItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetQuantity
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellConfirm_C::GetQuantity(int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetQuantity");

	UWidget_BuySellConfirm_C_GetQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_QuantityLabel_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_BuySellConfirm_C::Get_QuantityLabel_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_QuantityLabel_Visibility_1");

	UWidget_BuySellConfirm_C_Get_QuantityLabel_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Cost_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_BuySellConfirm_C::Get_Cost_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Cost_Visibility_1");

	UWidget_BuySellConfirm_C_Get_Cost_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Title_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_BuySellConfirm_C::Get_Title_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Title_Text_1");

	UWidget_BuySellConfirm_C_Get_Title_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Cost_ColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_BuySellConfirm_C::Get_Cost_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Cost_ColorAndOpacity_1");

	UWidget_BuySellConfirm_C_Get_Cost_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_QuantityLabel_ColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_BuySellConfirm_C::Get_QuantityLabel_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_QuantityLabel_ColorAndOpacity_1");

	UWidget_BuySellConfirm_C_Get_QuantityLabel_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Yes_bIsEnabled_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWidget_BuySellConfirm_C::Get_Yes_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Yes_bIsEnabled_1");

	UWidget_BuySellConfirm_C_Get_Yes_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetCost
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellConfirm_C::GetCost(int* Quantity, int* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetCost");

	UWidget_BuySellConfirm_C_GetCost_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.CanAfford
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_BuySellConfirm_C::CanAfford(int* Quantity, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.CanAfford");

	UWidget_BuySellConfirm_C_CanAfford_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Cost_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_BuySellConfirm_C::Get_Cost_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Cost_Text_1");

	UWidget_BuySellConfirm_C_Get_Cost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_QuantityAvailable_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_BuySellConfirm_C::Get_QuantityAvailable_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_QuantityAvailable_Text_1");

	UWidget_BuySellConfirm_C_Get_QuantityAvailable_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_QuantityLabel_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_BuySellConfirm_C::Get_QuantityLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_QuantityLabel_Text_1");

	UWidget_BuySellConfirm_C_Get_QuantityLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Label_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_BuySellConfirm_C::Get_Label_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Label_Text_1");

	UWidget_BuySellConfirm_C_Get_Label_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Icon_Brush_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_BuySellConfirm_C::Get_Icon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Icon_Brush_1");

	UWidget_BuySellConfirm_C_Get_Icon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Init
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Sell                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellConfirm_C::Init(bool* Sell, int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Init");

	UWidget_BuySellConfirm_C_Init_Params params;
	params.Sell = Sell;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetInventoryItem
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_BuySellConfirm_C::GetInventoryItem(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetInventoryItem");

	UWidget_BuySellConfirm_C_GetInventoryItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellConfirm_C::BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_BuySellConfirm_C_BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellConfirm_C::BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_BuySellConfirm_C_BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__FocusButtonWidget_90_K2Node_ComponentBoundEvent_484_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellConfirm_C::BndEvt__FocusButtonWidget_90_K2Node_ComponentBoundEvent_484_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__FocusButtonWidget_90_K2Node_ComponentBoundEvent_484_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_BuySellConfirm_C_BndEvt__FocusButtonWidget_90_K2Node_ComponentBoundEvent_484_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__FocusButtonWidget_134_K2Node_ComponentBoundEvent_634_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellConfirm_C::BndEvt__FocusButtonWidget_134_K2Node_ComponentBoundEvent_634_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__FocusButtonWidget_134_K2Node_ComponentBoundEvent_634_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_BuySellConfirm_C_BndEvt__FocusButtonWidget_134_K2Node_ComponentBoundEvent_634_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_1017_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellConfirm_C::BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_1017_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_1017_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_BuySellConfirm_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_1017_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_BuySellConfirm_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Construct");

	UWidget_BuySellConfirm_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.ExecuteUbergraph_Widget_BuySellConfirm
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellConfirm_C::ExecuteUbergraph_Widget_BuySellConfirm(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.ExecuteUbergraph_Widget_BuySellConfirm");

	UWidget_BuySellConfirm_C_ExecuteUbergraph_Widget_BuySellConfirm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
