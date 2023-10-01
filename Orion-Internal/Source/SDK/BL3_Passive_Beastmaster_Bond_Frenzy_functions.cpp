// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond_Frenzy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.GetManualHUDIconValues
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            outStackCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          outDuration                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          outTimeRemaining               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond_Frenzy_C::GetManualHUDIconValues(int* outStackCount, float* outDuration, float* outTimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.GetManualHUDIconValues");

	UPassive_Beastmaster_Bond_Frenzy_C_GetManualHUDIconValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outStackCount != nullptr)
		*outStackCount = params.outStackCount;
	if (outDuration != nullptr)
		*outDuration = params.outDuration;
	if (outTimeRemaining != nullptr)
		*outTimeRemaining = params.outTimeRemaining;
}


// Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Bond_Frenzy_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.OnActivated");

	UPassive_Beastmaster_Bond_Frenzy_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.PetCausedAnyDamage_BondFrenzy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond_Frenzy_C::PetCausedAnyDamage_BondFrenzy(class AActor* DamagedActor, class UDamageSource* DamageSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.PetCausedAnyDamage_BondFrenzy");

	UPassive_Beastmaster_Bond_Frenzy_C_PetCausedAnyDamage_BondFrenzy_Params params;
	params.DamagedActor = DamagedActor;
	params.DamageSource = DamageSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Beastmaster_Bond_Frenzy_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.OnAbilityTimerEnded");

	UPassive_Beastmaster_Bond_Frenzy_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.ExecuteUbergraph_Passive_Beastmaster_Bond_Frenzy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond_Frenzy_C::ExecuteUbergraph_Passive_Beastmaster_Bond_Frenzy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C.ExecuteUbergraph_Passive_Beastmaster_Bond_Frenzy");

	UPassive_Beastmaster_Bond_Frenzy_C_ExecuteUbergraph_Passive_Beastmaster_Bond_Frenzy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
