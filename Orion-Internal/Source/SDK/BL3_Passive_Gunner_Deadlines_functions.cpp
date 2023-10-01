// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_Deadlines_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_Deadlines_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.OnActivated");

	UPassive_Gunner_Deadlines_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.Deadlines_OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Gunner_Deadlines_C::Deadlines_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.Deadlines_OnCausedDeath");

	UPassive_Gunner_Deadlines_C_Deadlines_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.Deadlines_ActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_Deadlines_C::Deadlines_ActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.Deadlines_ActionSkillActivated");

	UPassive_Gunner_Deadlines_C_Deadlines_ActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.ExecuteUbergraph_Passive_Gunner_Deadlines
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_Deadlines_C::ExecuteUbergraph_Passive_Gunner_Deadlines(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Deadlines.Passive_Gunner_Deadlines_C.ExecuteUbergraph_Passive_Gunner_Deadlines");

	UPassive_Gunner_Deadlines_C_ExecuteUbergraph_Passive_Gunner_Deadlines_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
