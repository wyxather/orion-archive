// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeapFireProjComponent_Fbolt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeapFireProjComponent_Fbolt_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C.ReceiveBeginPlay");

	UBPWeapFireProjComponent_Fbolt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C.EvaluateShot
// (BlueprintCallable, BlueprintEvent)

void UBPWeapFireProjComponent_Fbolt_C::EvaluateShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C.EvaluateShot");

	UBPWeapFireProjComponent_Fbolt_C_EvaluateShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C.ExecuteUbergraph_BPWeapFireProjComponent_Fbolt
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeapFireProjComponent_Fbolt_C::ExecuteUbergraph_BPWeapFireProjComponent_Fbolt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C.ExecuteUbergraph_BPWeapFireProjComponent_Fbolt");

	UBPWeapFireProjComponent_Fbolt_C_ExecuteUbergraph_BPWeapFireProjComponent_Fbolt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
