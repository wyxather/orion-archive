// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_WaitDialog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_WaitDialog.Dialog_WaitDialog_C.UpdateWidgetCaption
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewCaption                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ADialog_WaitDialog_C::UpdateWidgetCaption(struct FText* NewCaption)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WaitDialog.Dialog_WaitDialog_C.UpdateWidgetCaption");

	ADialog_WaitDialog_C_UpdateWidgetCaption_Params params;
	params.NewCaption = NewCaption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_WaitDialog.Dialog_WaitDialog_C.EndDialogWithFade
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ADialog_WaitDialog_C::EndDialogWithFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WaitDialog.Dialog_WaitDialog_C.EndDialogWithFade");

	ADialog_WaitDialog_C_EndDialogWithFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_WaitDialog.Dialog_WaitDialog_C.EndDialog
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ADialog_WaitDialog_C::EndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WaitDialog.Dialog_WaitDialog_C.EndDialog");

	ADialog_WaitDialog_C_EndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_WaitDialog.Dialog_WaitDialog_C.OnBeginDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_WaitDialog_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WaitDialog.Dialog_WaitDialog_C.OnBeginDialog");

	ADialog_WaitDialog_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_WaitDialog.Dialog_WaitDialog_C.ExecuteUbergraph_Dialog_WaitDialog
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_WaitDialog_C::ExecuteUbergraph_Dialog_WaitDialog(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WaitDialog.Dialog_WaitDialog_C.ExecuteUbergraph_Dialog_WaitDialog");

	ADialog_WaitDialog_C_ExecuteUbergraph_Dialog_WaitDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
