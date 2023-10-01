// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_WidgetPingWheel_Emote_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WidgetPingWheel_Emote.WidgetPingWheel_Emote_C.UpdateFromContext
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPingSubContext**        Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidgetPingWheel_Emote_C::UpdateFromContext(class UPingSubContext** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheel_Emote.WidgetPingWheel_Emote_C.UpdateFromContext");

	UWidgetPingWheel_Emote_C_UpdateFromContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetPingWheel_Emote.WidgetPingWheel_Emote_C.OnIconLoaded
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D**             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidgetPingWheel_Emote_C::OnIconLoaded(class UClass** Emote, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheel_Emote.WidgetPingWheel_Emote_C.OnIconLoaded");

	UWidgetPingWheel_Emote_C_OnIconLoaded_Params params;
	params.Emote = Emote;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetPingWheel_Emote.WidgetPingWheel_Emote_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidgetPingWheel_Emote_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheel_Emote.WidgetPingWheel_Emote_C.Tick");

	UWidgetPingWheel_Emote_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetPingWheel_Emote.WidgetPingWheel_Emote_C.ExecuteUbergraph_WidgetPingWheel_Emote
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidgetPingWheel_Emote_C::ExecuteUbergraph_WidgetPingWheel_Emote(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheel_Emote.WidgetPingWheel_Emote_C.ExecuteUbergraph_WidgetPingWheel_Emote");

	UWidgetPingWheel_Emote_C_ExecuteUbergraph_WidgetPingWheel_Emote_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
