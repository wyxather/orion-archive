// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_PingWheelContext_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_PingWheelContext.Widget_PingWheelContext_C.SetPing
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionPing*            Ping                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWidget_PingWheelContext_C::SetPing(struct FActionPing* Ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheelContext.Widget_PingWheelContext_C.SetPing");

	UWidget_PingWheelContext_C_SetPing_Params params;
	params.Ping = Ping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PingWheelContext.Widget_PingWheelContext_C.OnActivate
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_PingWheelContext_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheelContext.Widget_PingWheelContext_C.OnActivate");

	UWidget_PingWheelContext_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PingWheelContext.Widget_PingWheelContext_C.NotifySelectedChanged
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_PingWheelContext_C::NotifySelectedChanged(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheelContext.Widget_PingWheelContext_C.NotifySelectedChanged");

	UWidget_PingWheelContext_C_NotifySelectedChanged_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PingWheelContext.Widget_PingWheelContext_C.UpdateFromContext
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPingSubContext**        Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PingWheelContext_C::UpdateFromContext(class UPingSubContext** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheelContext.Widget_PingWheelContext_C.UpdateFromContext");

	UWidget_PingWheelContext_C_UpdateFromContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PingWheelContext.Widget_PingWheelContext_C.SetContext
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPingSubContext**        NewContext                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionPing*            InitialPing                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWidget_PingWheelContext_C::SetContext(class UPingSubContext** NewContext, struct FActionPing* InitialPing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheelContext.Widget_PingWheelContext_C.SetContext");

	UWidget_PingWheelContext_C_SetContext_Params params;
	params.NewContext = NewContext;
	params.InitialPing = InitialPing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
