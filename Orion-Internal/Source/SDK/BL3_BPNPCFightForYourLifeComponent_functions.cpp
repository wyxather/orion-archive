// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPNPCFightForYourLifeComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.Reviving_Stopped_Host
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHealed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPNPCFightForYourLifeComponent_C::Reviving_Stopped_Host(bool IsHealed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.Reviving_Stopped_Host");

	UBPNPCFightForYourLifeComponent_C_Reviving_Stopped_Host_Params params;
	params.IsHealed = IsHealed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.Reviving_Started_Host
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorBeingRevived              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPNPCFightForYourLifeComponent_C::Reviving_Started_Host(class AActor* ActorBeingRevived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.Reviving_Started_Host");

	UBPNPCFightForYourLifeComponent_C_Reviving_Started_Host_Params params;
	params.ActorBeingRevived = ActorBeingRevived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ReplenishHealthAndShields
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HealthPercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ShieldPercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPNPCFightForYourLifeComponent_C::ReplenishHealthAndShields(float HealthPercent, float ShieldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ReplenishHealthAndShields");

	UBPNPCFightForYourLifeComponent_C_ReplenishHealthAndShields_Params params;
	params.HealthPercent = HealthPercent;
	params.ShieldPercent = ShieldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.InjuredStop
// (Public, BlueprintCallable, BlueprintEvent)

void UBPNPCFightForYourLifeComponent_C::InjuredStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.InjuredStop");

	UBPNPCFightForYourLifeComponent_C_InjuredStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.InjuredLive
// (Public, BlueprintCallable, BlueprintEvent)

void UBPNPCFightForYourLifeComponent_C::InjuredLive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.InjuredLive");

	UBPNPCFightForYourLifeComponent_C_InjuredLive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.BeingRevived_Stopped_Host
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPNPCFightForYourLifeComponent_C::BeingRevived_Stopped_Host()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.BeingRevived_Stopped_Host");

	UBPNPCFightForYourLifeComponent_C_BeingRevived_Stopped_Host_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.BeingRevived_Started_Host
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPNPCFightForYourLifeComponent_C::BeingRevived_Started_Host()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.BeingRevived_Started_Host");

	UBPNPCFightForYourLifeComponent_C_BeingRevived_Started_Host_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Finished_Host
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPNPCFightForYourLifeComponent_C::DownState_Finished_Host()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Finished_Host");

	UBPNPCFightForYourLifeComponent_C_DownState_Finished_Host_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Stopped_Host
// (Public, BlueprintCallable, BlueprintEvent)

void UBPNPCFightForYourLifeComponent_C::DownState_Stopped_Host()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Stopped_Host");

	UBPNPCFightForYourLifeComponent_C_DownState_Stopped_Host_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Started_Host
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPNPCFightForYourLifeComponent_C::DownState_Started_Host()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Started_Host");

	UBPNPCFightForYourLifeComponent_C_DownState_Started_Host_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPNPCFightForYourLifeComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ReceiveBeginPlay");

	UBPNPCFightForYourLifeComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.OnRevivingState_StartHost_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorBeingRevived              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPNPCFightForYourLifeComponent_C::OnRevivingState_StartHost_Event_1(class AActor* ActorBeingRevived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.OnRevivingState_StartHost_Event_1");

	UBPNPCFightForYourLifeComponent_C_OnRevivingState_StartHost_Event_1_Params params;
	params.ActorBeingRevived = ActorBeingRevived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ExecuteUbergraph_BPNPCFightForYourLifeComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPNPCFightForYourLifeComponent_C::ExecuteUbergraph_BPNPCFightForYourLifeComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ExecuteUbergraph_BPNPCFightForYourLifeComponent");

	UBPNPCFightForYourLifeComponent_C_ExecuteUbergraph_BPNPCFightForYourLifeComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
