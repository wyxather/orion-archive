// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_OkDialogAlt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_OkDialogAlt.Dialog_OkDialogAlt_C.OnBeginDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_OkDialogAlt_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_OkDialogAlt.Dialog_OkDialogAlt_C.OnBeginDialog");

	ADialog_OkDialogAlt_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_OkDialogAlt.Dialog_OkDialogAlt_C.OnEndDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_OkDialogAlt_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_OkDialogAlt.Dialog_OkDialogAlt_C.OnEndDialog");

	ADialog_OkDialogAlt_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_OkDialogAlt.Dialog_OkDialogAlt_C.ExecuteUbergraph_Dialog_OkDialogAlt
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_OkDialogAlt_C::ExecuteUbergraph_Dialog_OkDialogAlt(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_OkDialogAlt.Dialog_OkDialogAlt_C.ExecuteUbergraph_Dialog_OkDialogAlt");

	ADialog_OkDialogAlt_C_ExecuteUbergraph_Dialog_OkDialogAlt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
