// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SG_JAK_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_SG_JAK_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.UserConstructionScript");

	ABPWeap_SG_JAK_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SG_JAK_C::Notify_ReloadEnded(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.Notify_ReloadEnded");

	ABPWeap_SG_JAK_C_Notify_ReloadEnded_Params params;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.ResetVisibleAmmo
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_SG_JAK_C::ResetVisibleAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.ResetVisibleAmmo");

	ABPWeap_SG_JAK_C_ResetVisibleAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.ExecuteUbergraph_BPWeap_SG_JAK
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SG_JAK_C::ExecuteUbergraph_BPWeap_SG_JAK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.ExecuteUbergraph_BPWeap_SG_JAK");

	ABPWeap_SG_JAK_C_ExecuteUbergraph_BPWeap_SG_JAK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
