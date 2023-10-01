// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAction_Analyzer_Use_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAction_Analyzer_Use.BPAction_Analyzer_Use_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAction_Analyzer_Use_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAction_Analyzer_Use.BPAction_Analyzer_Use_C.OnEnd");

	UBPAction_Analyzer_Use_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAction_Analyzer_Use.BPAction_Analyzer_Use_C.Analyzer_Start
// (BlueprintCallable, BlueprintEvent)

void UBPAction_Analyzer_Use_C::Analyzer_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAction_Analyzer_Use.BPAction_Analyzer_Use_C.Analyzer_Start");

	UBPAction_Analyzer_Use_C_Analyzer_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAction_Analyzer_Use.BPAction_Analyzer_Use_C.Analyzer_Stop
// (BlueprintCallable, BlueprintEvent)

void UBPAction_Analyzer_Use_C::Analyzer_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAction_Analyzer_Use.BPAction_Analyzer_Use_C.Analyzer_Stop");

	UBPAction_Analyzer_Use_C_Analyzer_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAction_Analyzer_Use.BPAction_Analyzer_Use_C.ExecuteUbergraph_BPAction_Analyzer_Use
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAction_Analyzer_Use_C::ExecuteUbergraph_BPAction_Analyzer_Use(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAction_Analyzer_Use.BPAction_Analyzer_Use_C.ExecuteUbergraph_BPAction_Analyzer_Use");

	UBPAction_Analyzer_Use_C_ExecuteUbergraph_BPAction_Analyzer_Use_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
