// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tannis_Loop_ConsoleChannel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tannis_Loop_ConsoleChannel_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.OnBegin");

	UA_Tannis_Loop_ConsoleChannel_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tannis_Loop_ConsoleChannel_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.OnEnd");

	UA_Tannis_Loop_ConsoleChannel_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.StartChannel
// (BlueprintCallable, BlueprintEvent)

void UA_Tannis_Loop_ConsoleChannel_C::StartChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.StartChannel");

	UA_Tannis_Loop_ConsoleChannel_C_StartChannel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.StopChannel
// (BlueprintCallable, BlueprintEvent)

void UA_Tannis_Loop_ConsoleChannel_C::StopChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.StopChannel");

	UA_Tannis_Loop_ConsoleChannel_C_StopChannel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.ExecuteUbergraph_A_Tannis_Loop_ConsoleChannel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tannis_Loop_ConsoleChannel_C::ExecuteUbergraph_A_Tannis_Loop_ConsoleChannel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.ExecuteUbergraph_A_Tannis_Loop_ConsoleChannel");

	UA_Tannis_Loop_ConsoleChannel_C_ExecuteUbergraph_A_Tannis_Loop_ConsoleChannel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
