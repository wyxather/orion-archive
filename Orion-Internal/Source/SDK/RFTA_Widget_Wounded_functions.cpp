// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Wounded_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Wounded.Widget_Wounded_C.Get_ReviveRoot_ContentColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWidget_Wounded_C::Get_ReviveRoot_ContentColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Wounded.Widget_Wounded_C.Get_ReviveRoot_ContentColorAndOpacity_1");

	UWidget_Wounded_C_Get_ReviveRoot_ContentColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Wounded.Widget_Wounded_C.Get_KillYourselfBar_Percent_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWidget_Wounded_C::Get_KillYourselfBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Wounded.Widget_Wounded_C.Get_KillYourselfBar_Percent_1");

	UWidget_Wounded_C_Get_KillYourselfBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Wounded.Widget_Wounded_C.Get_WoundedHealthBar_Percent_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWidget_Wounded_C::Get_WoundedHealthBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Wounded.Widget_Wounded_C.Get_WoundedHealthBar_Percent_1");

	UWidget_Wounded_C_Get_WoundedHealthBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Wounded.Widget_Wounded_C.GetPercent_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWidget_Wounded_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Wounded.Widget_Wounded_C.GetPercent_1");

	UWidget_Wounded_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Wounded.Widget_Wounded_C.OnWoundedState_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWoundedComponent**      WoundedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EWoundedState*                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Wounded_C::OnWoundedState_Event_1(class UWoundedComponent** WoundedComponent, EWoundedState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Wounded.Widget_Wounded_C.OnWoundedState_Event_1");

	UWidget_Wounded_C_OnWoundedState_Event_1_Params params;
	params.WoundedComponent = WoundedComponent;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Wounded.Widget_Wounded_C.BndEvt__Suicide_K2Node_ComponentBoundEvent_1_OnAction__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_Wounded_C::BndEvt__Suicide_K2Node_ComponentBoundEvent_1_OnAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Wounded.Widget_Wounded_C.BndEvt__Suicide_K2Node_ComponentBoundEvent_1_OnAction__DelegateSignature");

	UWidget_Wounded_C_BndEvt__Suicide_K2Node_ComponentBoundEvent_1_OnAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Wounded.Widget_Wounded_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Wounded_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Wounded.Widget_Wounded_C.Construct");

	UWidget_Wounded_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Wounded.Widget_Wounded_C.Destruct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Wounded_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Wounded.Widget_Wounded_C.Destruct");

	UWidget_Wounded_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Wounded.Widget_Wounded_C.ExecuteUbergraph_Widget_Wounded
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Wounded_C::ExecuteUbergraph_Widget_Wounded(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Wounded.Widget_Wounded_C.ExecuteUbergraph_Widget_Wounded");

	UWidget_Wounded_C_ExecuteUbergraph_Widget_Wounded_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
