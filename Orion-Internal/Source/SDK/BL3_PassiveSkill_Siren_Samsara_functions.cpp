// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Samsara_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Samsara.PassiveSkill_Siren_Samsara_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_Samsara_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Samsara.PassiveSkill_Siren_Samsara_C.OnActivated");

	UPassiveSkill_Siren_Samsara_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Samsara.PassiveSkill_Siren_Samsara_C.SirenSkillEvent_OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageSource                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassiveSkill_Siren_Samsara_C::SirenSkillEvent_OnCausedAnyDamage(float Damage, class UClass* DamageSource, class UClass* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Samsara.PassiveSkill_Siren_Samsara_C.SirenSkillEvent_OnCausedAnyDamage");

	UPassiveSkill_Siren_Samsara_C_SirenSkillEvent_OnCausedAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageSource = DamageSource;
	params.DamageType = DamageType;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Samsara.PassiveSkill_Siren_Samsara_C.ExecuteUbergraph_PassiveSkill_Siren_Samsara
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Samsara_C::ExecuteUbergraph_PassiveSkill_Siren_Samsara(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Samsara.PassiveSkill_Siren_Samsara_C.ExecuteUbergraph_PassiveSkill_Siren_Samsara");

	UPassiveSkill_Siren_Samsara_C_ExecuteUbergraph_PassiveSkill_Siren_Samsara_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
