// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SG_Torgue_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_SG_Torgue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.UserConstructionScript");

	ABPWeap_SG_Torgue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_SG_Torgue_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.ReceiveBeginPlay");

	ABPWeap_SG_Torgue_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.HideSpeedLoader
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_SG_Torgue_C::HideSpeedLoader()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.HideSpeedLoader");

	ABPWeap_SG_Torgue_C_HideSpeedLoader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.ResetBoneVisibility
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_SG_Torgue_C::ResetBoneVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.ResetBoneVisibility");

	ABPWeap_SG_Torgue_C_ResetBoneVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SG_Torgue_C::Notify_ReloadEnded(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.Notify_ReloadEnded");

	ABPWeap_SG_Torgue_C_Notify_ReloadEnded_Params params;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.ExecuteUbergraph_BPWeap_SG_Torgue
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SG_Torgue_C::ExecuteUbergraph_BPWeap_SG_Torgue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.ExecuteUbergraph_BPWeap_SG_Torgue");

	ABPWeap_SG_Torgue_C_ExecuteUbergraph_BPWeap_SG_Torgue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
