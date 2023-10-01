// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Lilith_PhaseIn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Lilith_PhaseIn_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.OnBegin");

	UA_Lilith_PhaseIn_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Lilith_PhaseIn_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.OnEnd");

	UA_Lilith_PhaseIn_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.PhaseWalkAOE
// (BlueprintCallable, BlueprintEvent)

void UA_Lilith_PhaseIn_C::PhaseWalkAOE()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.PhaseWalkAOE");

	UA_Lilith_PhaseIn_C_PhaseWalkAOE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.Notify_Boom
// (BlueprintCallable, BlueprintEvent)

void UA_Lilith_PhaseIn_C::Notify_Boom()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.Notify_Boom");

	UA_Lilith_PhaseIn_C_Notify_Boom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.ExecuteUbergraph_A_Lilith_PhaseIn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Lilith_PhaseIn_C::ExecuteUbergraph_A_Lilith_PhaseIn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.ExecuteUbergraph_A_Lilith_PhaseIn");

	UA_Lilith_PhaseIn_C_ExecuteUbergraph_A_Lilith_PhaseIn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
