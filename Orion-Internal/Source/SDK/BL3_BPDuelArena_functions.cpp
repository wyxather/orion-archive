// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPDuelArena_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPDuelArena.BPDuelArena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPDuelArena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelArena.BPDuelArena_C.UserConstructionScript");

	ABPDuelArena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDuelArena.BPDuelArena_C.K2_InitDuelArena
// (Event, Protected, BlueprintEvent)

void ABPDuelArena_C::K2_InitDuelArena()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelArena.BPDuelArena_C.K2_InitDuelArena");

	ABPDuelArena_C_K2_InitDuelArena_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDuelArena.BPDuelArena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPDuelArena_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelArena.BPDuelArena_C.ReceiveTick");

	ABPDuelArena_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDuelArena.BPDuelArena_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPDuelArena_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelArena.BPDuelArena_C.ReceiveEndPlay");

	ABPDuelArena_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDuelArena.BPDuelArena_C.ExecuteUbergraph_BPDuelArena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPDuelArena_C::ExecuteUbergraph_BPDuelArena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelArena.BPDuelArena_C.ExecuteUbergraph_BPDuelArena");

	ABPDuelArena_C_ExecuteUbergraph_BPDuelArena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
