// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_DLCSkill_14_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UPassive_Gunner_DLCSkill_13_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.CalculateAbilityState");

	UPassive_Gunner_DLCSkill_13_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.GunnerCausedElementalEffect
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FStatusEffectSpec*      Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Gunner_DLCSkill_13_C::GunnerCausedElementalEffect(class AActor** Causer, struct FStatusEffectSpec* Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.GunnerCausedElementalEffect");

	UPassive_Gunner_DLCSkill_13_C_GunnerCausedElementalEffect_Params params;
	params.Causer = Causer;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_14
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_DLCSkill_13_C::ExecuteUbergraph_Passive_Gunner_DLCSkill_14(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_14");

	UPassive_Gunner_DLCSkill_13_C_ExecuteUbergraph_Passive_Gunner_DLCSkill_14_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
