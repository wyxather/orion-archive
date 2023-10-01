// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_BareKnuckle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_BareKnuckle.PassiveSkill_Siren_BareKnuckle_C.IsConsideredMeleeDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_BareKnuckle_C::IsConsideredMeleeDamage(class UClass* Source, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_BareKnuckle.PassiveSkill_Siren_BareKnuckle_C.IsConsideredMeleeDamage");

	UPassiveSkill_Siren_BareKnuckle_C_IsConsideredMeleeDamage_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PassiveSkill_Siren_BareKnuckle.PassiveSkill_Siren_BareKnuckle_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_BareKnuckle_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_BareKnuckle.PassiveSkill_Siren_BareKnuckle_C.OnActivated");

	UPassiveSkill_Siren_BareKnuckle_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_BareKnuckle.PassiveSkill_Siren_BareKnuckle_C.SirenSkillEvent_OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageSource                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassiveSkill_Siren_BareKnuckle_C::SirenSkillEvent_OnCausedAnyDamage(float Damage, class UClass* DamageSource, class UClass* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_BareKnuckle.PassiveSkill_Siren_BareKnuckle_C.SirenSkillEvent_OnCausedAnyDamage");

	UPassiveSkill_Siren_BareKnuckle_C_SirenSkillEvent_OnCausedAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageSource = DamageSource;
	params.DamageType = DamageType;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_BareKnuckle.PassiveSkill_Siren_BareKnuckle_C.ExecuteUbergraph_PassiveSkill_Siren_BareKnuckle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_BareKnuckle_C::ExecuteUbergraph_PassiveSkill_Siren_BareKnuckle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_BareKnuckle.PassiveSkill_Siren_BareKnuckle_C.ExecuteUbergraph_PassiveSkill_Siren_BareKnuckle");

	UPassiveSkill_Siren_BareKnuckle_C_ExecuteUbergraph_PassiveSkill_Siren_BareKnuckle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
