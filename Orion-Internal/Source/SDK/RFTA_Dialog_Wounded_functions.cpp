// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Wounded_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_Wounded.Dialog_Wounded_C.OnBeginDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_Wounded_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Wounded.Dialog_Wounded_C.OnBeginDialog");

	ADialog_Wounded_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Wounded.Dialog_Wounded_C.OnWoundedState_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWoundedComponent**      WoundedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EWoundedState*                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_Wounded_C::OnWoundedState_Event_1(class UWoundedComponent** WoundedComponent, EWoundedState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Wounded.Dialog_Wounded_C.OnWoundedState_Event_1");

	ADialog_Wounded_C_OnWoundedState_Event_1_Params params;
	params.WoundedComponent = WoundedComponent;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Wounded.Dialog_Wounded_C.OnEndDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_Wounded_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Wounded.Dialog_Wounded_C.OnEndDialog");

	ADialog_Wounded_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Wounded.Dialog_Wounded_C.ExecuteUbergraph_Dialog_Wounded
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_Wounded_C::ExecuteUbergraph_Dialog_Wounded(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Wounded.Dialog_Wounded_C.ExecuteUbergraph_Dialog_Wounded");

	ADialog_Wounded_C_ExecuteUbergraph_Dialog_Wounded_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
