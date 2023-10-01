// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_InputConflictDialog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_InputConflictDialog.Dialog_InputConflictDialog_C.OnBeginDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_InputConflictDialog_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_InputConflictDialog.Dialog_InputConflictDialog_C.OnBeginDialog");

	ADialog_InputConflictDialog_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_InputConflictDialog.Dialog_InputConflictDialog_C.OnEndDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_InputConflictDialog_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_InputConflictDialog.Dialog_InputConflictDialog_C.OnEndDialog");

	ADialog_InputConflictDialog_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_InputConflictDialog.Dialog_InputConflictDialog_C.ExecuteUbergraph_Dialog_InputConflictDialog
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_InputConflictDialog_C::ExecuteUbergraph_Dialog_InputConflictDialog(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_InputConflictDialog.Dialog_InputConflictDialog_C.ExecuteUbergraph_Dialog_InputConflictDialog");

	ADialog_InputConflictDialog_C_ExecuteUbergraph_Dialog_InputConflictDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
