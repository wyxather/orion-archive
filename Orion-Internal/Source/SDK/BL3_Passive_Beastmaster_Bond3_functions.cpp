// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.CanHealPet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 DamageInst                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond3_C::CanHealPet(class UObject* DamageInst, class UDamageSource* DamageSource, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.CanHealPet");

	UPassive_Beastmaster_Bond3_C_CanHealPet_Params params;
	params.DamageInst = DamageInst;
	params.DamageSource = DamageSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.DoPetHeal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_Bond3_C::DoPetHeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.DoPetHeal");

	UPassive_Beastmaster_Bond3_C_DoPetHeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Bond3_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.OnActivated");

	UPassive_Beastmaster_Bond3_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.OnCausedDamage_Bond3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Beastmaster_Bond3_C::OnCausedDamage_Bond3(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.OnCausedDamage_Bond3");

	UPassive_Beastmaster_Bond3_C_OnCausedDamage_Bond3_Params params;
	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Beastmaster_Bond3_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.OnAbilityTimerEnded");

	UPassive_Beastmaster_Bond3_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.ExecuteUbergraph_Passive_Beastmaster_Bond3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond3_C::ExecuteUbergraph_Passive_Beastmaster_Bond3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.ExecuteUbergraph_Passive_Beastmaster_Bond3");

	UPassive_Beastmaster_Bond3_C_ExecuteUbergraph_Passive_Beastmaster_Bond3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
