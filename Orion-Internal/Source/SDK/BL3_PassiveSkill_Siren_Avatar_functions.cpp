// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Avatar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_Avatar_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.OnActivated");

	UPassiveSkill_Siren_Avatar_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.Avatar_OnActionSkillReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Avatar_C::Avatar_OnActionSkillReady(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.Avatar_OnActionSkillReady");

	UPassiveSkill_Siren_Avatar_C_Avatar_OnActionSkillReady_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.Avatar_OnActionSkillActivating
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Avatar_C::Avatar_OnActionSkillActivating(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.Avatar_OnActionSkillActivating");

	UPassiveSkill_Siren_Avatar_C_Avatar_OnActionSkillActivating_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.PhaseTranceActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPhaseTranceAttackFamilyType   FamilyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhasetranceAttackAction> PhaseTranceAction              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Avatar_C::PhaseTranceActivated(EPhaseTranceAttackFamilyType FamilyType, TEnumAsByte<EPhasetranceAttackAction> PhaseTranceAction, bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.PhaseTranceActivated");

	UPassiveSkill_Siren_Avatar_C_PhaseTranceActivated_Params params;
	params.FamilyType = FamilyType;
	params.PhaseTranceAction = PhaseTranceAction;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.Avatar_OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Siren_Avatar_C::Avatar_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.Avatar_OnCausedDeath");

	UPassiveSkill_Siren_Avatar_C_Avatar_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.ExecuteUbergraph_PassiveSkill_Siren_Avatar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Avatar_C::ExecuteUbergraph_PassiveSkill_Siren_Avatar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.ExecuteUbergraph_PassiveSkill_Siren_Avatar");

	UPassiveSkill_Siren_Avatar_C_ExecuteUbergraph_PassiveSkill_Siren_Avatar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
