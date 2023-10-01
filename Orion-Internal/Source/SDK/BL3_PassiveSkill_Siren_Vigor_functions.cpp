// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Vigor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Vigor.PassiveSkill_Siren_Vigor_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_Vigor_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Vigor.PassiveSkill_Siren_Vigor_C.OnActivated");

	UPassiveSkill_Siren_Vigor_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Vigor.PassiveSkill_Siren_Vigor_C.OnCausedActionSkillDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Siren_Vigor_C::OnCausedActionSkillDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Vigor.PassiveSkill_Siren_Vigor_C.OnCausedActionSkillDeath");

	UPassiveSkill_Siren_Vigor_C_OnCausedActionSkillDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Vigor.PassiveSkill_Siren_Vigor_C.ExecuteUbergraph_PassiveSkill_Siren_Vigor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Vigor_C::ExecuteUbergraph_PassiveSkill_Siren_Vigor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Vigor.PassiveSkill_Siren_Vigor_C.ExecuteUbergraph_PassiveSkill_Siren_Vigor");

	UPassiveSkill_Siren_Vigor_C_ExecuteUbergraph_PassiveSkill_Siren_Vigor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
