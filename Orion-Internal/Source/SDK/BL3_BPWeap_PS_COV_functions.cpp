// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_COV_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_PS_COV.BPWeap_PS_COV_C.DisablePlug
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_COV_C::DisablePlug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_COV.BPWeap_PS_COV_C.DisablePlug");

	ABPWeap_PS_COV_C_DisablePlug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_COV.BPWeap_PS_COV_C.EnablePlug
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_COV_C::EnablePlug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_COV.BPWeap_PS_COV_C.EnablePlug");

	ABPWeap_PS_COV_C_EnablePlug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_COV.BPWeap_PS_COV_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_COV_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_COV.BPWeap_PS_COV_C.UserConstructionScript");

	ABPWeap_PS_COV_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_COV.BPWeap_PS_COV_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_PS_COV_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_COV.BPWeap_PS_COV_C.ReceiveBeginPlay");

	ABPWeap_PS_COV_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_COV.BPWeap_PS_COV_C.FirstPersonCreated
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_COV_C::FirstPersonCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_COV.BPWeap_PS_COV_C.FirstPersonCreated");

	ABPWeap_PS_COV_C_FirstPersonCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_COV.BPWeap_PS_COV_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_PS_COV_C::Notify_ReloadEnded(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_COV.BPWeap_PS_COV_C.Notify_ReloadEnded");

	ABPWeap_PS_COV_C_Notify_ReloadEnded_Params params;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_COV.BPWeap_PS_COV_C.ExecuteUbergraph_BPWeap_PS_COV
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_PS_COV_C::ExecuteUbergraph_BPWeap_PS_COV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_COV.BPWeap_PS_COV_C.ExecuteUbergraph_BPWeap_PS_COV");

	ABPWeap_PS_COV_C_ExecuteUbergraph_BPWeap_PS_COV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
