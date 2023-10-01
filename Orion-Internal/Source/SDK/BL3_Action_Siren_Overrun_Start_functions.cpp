// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Siren_Overrun_Start_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Siren_Overrun_Start_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.OnServerBegin");

	UAction_Siren_Overrun_Start_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.AN_PerformBlitzFeedback_Start
// (BlueprintCallable, BlueprintEvent)

void UAction_Siren_Overrun_Start_C::AN_PerformBlitzFeedback_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.AN_PerformBlitzFeedback_Start");

	UAction_Siren_Overrun_Start_C_AN_PerformBlitzFeedback_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.ExecuteUbergraph_Action_Siren_Overrun_Start
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Siren_Overrun_Start_C::ExecuteUbergraph_Action_Siren_Overrun_Start(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.ExecuteUbergraph_Action_Siren_Overrun_Start");

	UAction_Siren_Overrun_Start_C_ExecuteUbergraph_Action_Siren_Overrun_Start_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
