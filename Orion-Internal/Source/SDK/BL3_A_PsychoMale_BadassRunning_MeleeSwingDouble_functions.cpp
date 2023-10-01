// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_BadassRunning_MeleeSwingDouble_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PsychoMale_BadassRunning_MeleeSwingDouble.A_PsychoMale_BadassRunning_MeleeSwingDouble_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_BadassRunning_MeleeSwingDouble_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSwingDouble.A_PsychoMale_BadassRunning_MeleeSwingDouble_C.OnBegin");

	UA_PsychoMale_BadassRunning_MeleeSwingDouble_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeSwingDouble.A_PsychoMale_BadassRunning_MeleeSwingDouble_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_BadassRunning_MeleeSwingDouble_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSwingDouble.A_PsychoMale_BadassRunning_MeleeSwingDouble_C.OnEnd");

	UA_PsychoMale_BadassRunning_MeleeSwingDouble_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeSwingDouble.A_PsychoMale_BadassRunning_MeleeSwingDouble_C.MeleeStrike
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_BadassRunning_MeleeSwingDouble_C::MeleeStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSwingDouble.A_PsychoMale_BadassRunning_MeleeSwingDouble_C.MeleeStrike");

	UA_PsychoMale_BadassRunning_MeleeSwingDouble_C_MeleeStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeSwingDouble.A_PsychoMale_BadassRunning_MeleeSwingDouble_C.ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSwingDouble
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_BadassRunning_MeleeSwingDouble_C::ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSwingDouble(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSwingDouble.A_PsychoMale_BadassRunning_MeleeSwingDouble_C.ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSwingDouble");

	UA_PsychoMale_BadassRunning_MeleeSwingDouble_C_ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSwingDouble_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
