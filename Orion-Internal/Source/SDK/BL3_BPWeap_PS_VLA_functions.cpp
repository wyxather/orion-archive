// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_VLA_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_VLA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.UserConstructionScript");

	ABPWeap_PS_VLA_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.ModeSwitchStarted
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_VLA_C::ModeSwitchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.ModeSwitchStarted");

	ABPWeap_PS_VLA_C_ModeSwitchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_PS_VLA_C::Notify_ReloadStarted(bool* bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.Notify_ReloadStarted");

	ABPWeap_PS_VLA_C_Notify_ReloadStarted_Params params;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.ExecuteUbergraph_BPWeap_PS_VLA
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_PS_VLA_C::ExecuteUbergraph_BPWeap_PS_VLA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.ExecuteUbergraph_BPWeap_PS_VLA");

	ABPWeap_PS_VLA_C_ExecuteUbergraph_BPWeap_PS_VLA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
