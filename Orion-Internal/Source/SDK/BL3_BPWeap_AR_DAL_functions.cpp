// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_AR_DAL_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_AR_DAL_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.UserConstructionScript");

	ABPWeap_AR_DAL_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.ShowChainFeed
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_AR_DAL_C::ShowChainFeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.ShowChainFeed");

	ABPWeap_AR_DAL_C_ShowChainFeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_AR_DAL_C::Notify_ReloadEnded(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.Notify_ReloadEnded");

	ABPWeap_AR_DAL_C_Notify_ReloadEnded_Params params;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.HideChain
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_AR_DAL_C::HideChain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.HideChain");

	ABPWeap_AR_DAL_C_HideChain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.ExecuteUbergraph_BPWeap_AR_DAL
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_AR_DAL_C::ExecuteUbergraph_BPWeap_AR_DAL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.ExecuteUbergraph_BPWeap_AR_DAL");

	ABPWeap_AR_DAL_C_ExecuteUbergraph_BPWeap_AR_DAL_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
