// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_YesNoDialog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_YesNoDialog.Dialog_YesNoDialog_C.OnBeginDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_YesNoDialog_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_YesNoDialog.Dialog_YesNoDialog_C.OnBeginDialog");

	ADialog_YesNoDialog_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_YesNoDialog.Dialog_YesNoDialog_C.OnEndDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_YesNoDialog_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_YesNoDialog.Dialog_YesNoDialog_C.OnEndDialog");

	ADialog_YesNoDialog_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_YesNoDialog.Dialog_YesNoDialog_C.ExecuteUbergraph_Dialog_YesNoDialog
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_YesNoDialog_C::ExecuteUbergraph_Dialog_YesNoDialog(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_YesNoDialog.Dialog_YesNoDialog_C.ExecuteUbergraph_Dialog_YesNoDialog");

	ADialog_YesNoDialog_C_ExecuteUbergraph_Dialog_YesNoDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
