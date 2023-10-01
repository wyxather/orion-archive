// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_TorgueCrossPromo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_TorgueCrossPromo_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnActivated");

	UPassive_Gunner_TorgueCrossPromo_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_TorgueCrossPromo_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnResumed");

	UPassive_Gunner_TorgueCrossPromo_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Gunner_TorgueCrossPromo_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnAbilityTimerEnded");

	UPassive_Gunner_TorgueCrossPromo_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnGradeChanged
// (Event, Public, BlueprintEvent)

void UPassive_Gunner_TorgueCrossPromo_C::OnGradeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnGradeChanged");

	UPassive_Gunner_TorgueCrossPromo_C_OnGradeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.DetermineNewChance
// (BlueprintCallable, BlueprintEvent)

void UPassive_Gunner_TorgueCrossPromo_C::DetermineNewChance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.DetermineNewChance");

	UPassive_Gunner_TorgueCrossPromo_C_DetermineNewChance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.ExecuteUbergraph_Passive_Gunner_TorgueCrossPromo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_TorgueCrossPromo_C::ExecuteUbergraph_Passive_Gunner_TorgueCrossPromo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.ExecuteUbergraph_Passive_Gunner_TorgueCrossPromo");

	UPassive_Gunner_TorgueCrossPromo_C_ExecuteUbergraph_Passive_Gunner_TorgueCrossPromo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
