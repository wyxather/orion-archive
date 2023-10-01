// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Ping_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Ping.Widget_Ping_C.SetNavigating
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsNavigating                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          Rightward                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Ping_C::SetNavigating(bool* IsNavigating, bool* Rightward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ping.Widget_Ping_C.SetNavigating");

	UWidget_Ping_C_SetNavigating_Params params;
	params.IsNavigating = IsNavigating;
	params.Rightward = Rightward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Ping.Widget_Ping_C.FireEmote
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Ping_C::FireEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ping.Widget_Ping_C.FireEmote");

	UWidget_Ping_C_FireEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Ping.Widget_Ping_C.SlotEmote
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Ping_C::SlotEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ping.Widget_Ping_C.SlotEmote");

	UWidget_Ping_C_SlotEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Ping.Widget_Ping_C.ShowEmoteScreen
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Ping_C::ShowEmoteScreen(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ping.Widget_Ping_C.ShowEmoteScreen");

	UWidget_Ping_C_ShowEmoteScreen_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Ping.Widget_Ping_C.MakeSelection
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Ping_C::MakeSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ping.Widget_Ping_C.MakeSelection");

	UWidget_Ping_C_MakeSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Ping.Widget_Ping_C.SetPingContext
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionPing*            PingContext                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWidget_Ping_C::SetPingContext(struct FActionPing* PingContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ping.Widget_Ping_C.SetPingContext");

	UWidget_Ping_C_SetPingContext_Params params;
	params.PingContext = PingContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Ping.Widget_Ping_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Ping_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ping.Widget_Ping_C.Tick");

	UWidget_Ping_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Ping.Widget_Ping_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Ping_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ping.Widget_Ping_C.Construct");

	UWidget_Ping_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Ping.Widget_Ping_C.ExecuteUbergraph_Widget_Ping
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Ping_C::ExecuteUbergraph_Widget_Ping(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ping.Widget_Ping_C.ExecuteUbergraph_Widget_Ping");

	UWidget_Ping_C_ExecuteUbergraph_Widget_Ping_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
