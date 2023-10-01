// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_PartyStatus_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_PartyStatus.Widget_PartyStatus_C.PlayerLeft
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState**           Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PartyStatus_C::PlayerLeft(class APlayerState** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyStatus.Widget_PartyStatus_C.PlayerLeft");

	UWidget_PartyStatus_C_PlayerLeft_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyStatus.Widget_PartyStatus_C.PlayerJoined
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState**           Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PartyStatus_C::PlayerJoined(class APlayerState** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyStatus.Widget_PartyStatus_C.PlayerJoined");

	UWidget_PartyStatus_C_PlayerJoined_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyStatus.Widget_PartyStatus_C.OnPlayerJoined_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState**           Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PartyStatus_C::OnPlayerJoined_Event_1(class APlayerState** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyStatus.Widget_PartyStatus_C.OnPlayerJoined_Event_1");

	UWidget_PartyStatus_C_OnPlayerJoined_Event_1_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyStatus.Widget_PartyStatus_C.OnPlayerLeft_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState**           Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PartyStatus_C::OnPlayerLeft_Event_1(class APlayerState** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyStatus.Widget_PartyStatus_C.OnPlayerLeft_Event_1");

	UWidget_PartyStatus_C_OnPlayerLeft_Event_1_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyStatus.Widget_PartyStatus_C.RebuildList
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PartyStatus_C::RebuildList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyStatus.Widget_PartyStatus_C.RebuildList");

	UWidget_PartyStatus_C_RebuildList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyStatus.Widget_PartyStatus_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PartyStatus_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyStatus.Widget_PartyStatus_C.Tick");

	UWidget_PartyStatus_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyStatus.Widget_PartyStatus_C.Init
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PartyStatus_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyStatus.Widget_PartyStatus_C.Init");

	UWidget_PartyStatus_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyStatus.Widget_PartyStatus_C.TryInit
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_PartyStatus_C::TryInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyStatus.Widget_PartyStatus_C.TryInit");

	UWidget_PartyStatus_C_TryInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyStatus.Widget_PartyStatus_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_PartyStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyStatus.Widget_PartyStatus_C.Construct");

	UWidget_PartyStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PartyStatus.Widget_PartyStatus_C.ExecuteUbergraph_Widget_PartyStatus
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_PartyStatus_C::ExecuteUbergraph_Widget_PartyStatus(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PartyStatus.Widget_PartyStatus_C.ExecuteUbergraph_Widget_PartyStatus");

	UWidget_PartyStatus_C_ExecuteUbergraph_Widget_PartyStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
