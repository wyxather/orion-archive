// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tannis_Loop_ConsoleStruggle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Tannis_Loop_ConsoleStruggle.A_Tannis_Loop_ConsoleStruggle_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tannis_Loop_ConsoleStruggle_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tannis_Loop_ConsoleStruggle.A_Tannis_Loop_ConsoleStruggle_C.OnBegin");

	UA_Tannis_Loop_ConsoleStruggle_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tannis_Loop_ConsoleStruggle.A_Tannis_Loop_ConsoleStruggle_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tannis_Loop_ConsoleStruggle_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tannis_Loop_ConsoleStruggle.A_Tannis_Loop_ConsoleStruggle_C.OnEnd");

	UA_Tannis_Loop_ConsoleStruggle_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tannis_Loop_ConsoleStruggle.A_Tannis_Loop_ConsoleStruggle_C.ExecuteUbergraph_A_Tannis_Loop_ConsoleStruggle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tannis_Loop_ConsoleStruggle_C::ExecuteUbergraph_A_Tannis_Loop_ConsoleStruggle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tannis_Loop_ConsoleStruggle.A_Tannis_Loop_ConsoleStruggle_C.ExecuteUbergraph_A_Tannis_Loop_ConsoleStruggle");

	UA_Tannis_Loop_ConsoleStruggle_C_ExecuteUbergraph_A_Tannis_Loop_ConsoleStruggle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
