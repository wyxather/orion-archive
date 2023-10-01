// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_WaitDialog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_WaitDialog.Widget_WaitDialog_C.UpdateCaption
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewCaption                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_WaitDialog_C::UpdateCaption(struct FText* NewCaption)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WaitDialog.Widget_WaitDialog_C.UpdateCaption");

	UWidget_WaitDialog_C_UpdateCaption_Params params;
	params.NewCaption = NewCaption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WaitDialog.Widget_WaitDialog_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_WaitDialog_C::Init(struct FText* Title, struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WaitDialog.Widget_WaitDialog_C.Init");

	UWidget_WaitDialog_C_Init_Params params;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WaitDialog.Widget_WaitDialog_C.Close
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_WaitDialog_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WaitDialog.Widget_WaitDialog_C.Close");

	UWidget_WaitDialog_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WaitDialog.Widget_WaitDialog_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_WaitDialog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WaitDialog.Widget_WaitDialog_C.Construct");

	UWidget_WaitDialog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WaitDialog.Widget_WaitDialog_C.CloseImmediate
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_WaitDialog_C::CloseImmediate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WaitDialog.Widget_WaitDialog_C.CloseImmediate");

	UWidget_WaitDialog_C_CloseImmediate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WaitDialog.Widget_WaitDialog_C.ExecuteUbergraph_Widget_WaitDialog
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WaitDialog_C::ExecuteUbergraph_Widget_WaitDialog(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WaitDialog.Widget_WaitDialog_C.ExecuteUbergraph_Widget_WaitDialog");

	UWidget_WaitDialog_C_ExecuteUbergraph_Widget_WaitDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
