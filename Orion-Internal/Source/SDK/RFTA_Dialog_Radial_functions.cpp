// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Radial_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_Radial.Dialog_Radial_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 EquipItemBP                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_Radial_C::Init(struct FName* Radial, class UClass** EquipItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Radial.Dialog_Radial_C.Init");

	ADialog_Radial_C_Init_Params params;
	params.Radial = Radial;
	params.EquipItemBP = EquipItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Radial.Dialog_Radial_C.SetContext
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_Radial_C::SetContext(class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Radial.Dialog_Radial_C.SetContext");

	ADialog_Radial_C_SetContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Radial.Dialog_Radial_C.InpActEvt_QuickSelect1_K2Node_InputActionEvent_4
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADialog_Radial_C::InpActEvt_QuickSelect1_K2Node_InputActionEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Radial.Dialog_Radial_C.InpActEvt_QuickSelect1_K2Node_InputActionEvent_4");

	ADialog_Radial_C_InpActEvt_QuickSelect1_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Radial.Dialog_Radial_C.InpActEvt_QuickSelect2_K2Node_InputActionEvent_3
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADialog_Radial_C::InpActEvt_QuickSelect2_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Radial.Dialog_Radial_C.InpActEvt_QuickSelect2_K2Node_InputActionEvent_3");

	ADialog_Radial_C_InpActEvt_QuickSelect2_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Radial.Dialog_Radial_C.InpActEvt_QuickSelect3_K2Node_InputActionEvent_2
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADialog_Radial_C::InpActEvt_QuickSelect3_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Radial.Dialog_Radial_C.InpActEvt_QuickSelect3_K2Node_InputActionEvent_2");

	ADialog_Radial_C_InpActEvt_QuickSelect3_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Radial.Dialog_Radial_C.InpActEvt_QuickSelect4_K2Node_InputActionEvent_1
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADialog_Radial_C::InpActEvt_QuickSelect4_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Radial.Dialog_Radial_C.InpActEvt_QuickSelect4_K2Node_InputActionEvent_1");

	ADialog_Radial_C_InpActEvt_QuickSelect4_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Radial.Dialog_Radial_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_Radial_C::InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Radial.Dialog_Radial_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1");

	ADialog_Radial_C_InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Radial.Dialog_Radial_C.InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_Radial_C::InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Radial.Dialog_Radial_C.InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2");

	ADialog_Radial_C_InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Radial.Dialog_Radial_C.ExecuteUbergraph_Dialog_Radial
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_Radial_C::ExecuteUbergraph_Dialog_Radial(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Radial.Dialog_Radial_C.ExecuteUbergraph_Dialog_Radial");

	ADialog_Radial_C_ExecuteUbergraph_Dialog_Radial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
