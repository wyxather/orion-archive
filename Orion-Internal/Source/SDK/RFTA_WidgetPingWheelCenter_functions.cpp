// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_WidgetPingWheelCenter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Update_Cooldown_Timer
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidgetPingWheelCenter_C::Update_Cooldown_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Update_Cooldown_Timer");

	UWidgetPingWheelCenter_C_Update_Cooldown_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Update_Cooldown_Visibility
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPingSubContext**        SubContext                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidgetPingWheelCenter_C::Update_Cooldown_Visibility(class UPingSubContext** SubContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Update_Cooldown_Visibility");

	UWidgetPingWheelCenter_C_Update_Cooldown_Visibility_Params params;
	params.SubContext = SubContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Get_Cancel_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidgetPingWheelCenter_C::Get_Cancel_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Get_Cancel_Visibility_1");

	UWidgetPingWheelCenter_C_Get_Cancel_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.OnActivate
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidgetPingWheelCenter_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.OnActivate");

	UWidgetPingWheelCenter_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.UpdateFromContext
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPingSubContext**        Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidgetPingWheelCenter_C::UpdateFromContext(class UPingSubContext** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.UpdateFromContext");

	UWidgetPingWheelCenter_C_UpdateFromContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidgetPingWheelCenter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Construct");

	UWidgetPingWheelCenter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Destruct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidgetPingWheelCenter_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Destruct");

	UWidgetPingWheelCenter_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.ExecuteUbergraph_WidgetPingWheelCenter
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidgetPingWheelCenter_C::ExecuteUbergraph_WidgetPingWheelCenter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.ExecuteUbergraph_WidgetPingWheelCenter");

	UWidgetPingWheelCenter_C_ExecuteUbergraph_WidgetPingWheelCenter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
