// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_ClassMod_Hib_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.EndDomination
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Beastmaster_ClassMod_Hib_C::EndDomination()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.EndDomination");

	UOakAbility_Beastmaster_ClassMod_Hib_C_EndDomination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnDeath_DominateTarget_HitRun9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Beastmaster_ClassMod_Hib_C::OnDeath_DominateTarget_HitRun9(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnDeath_DominateTarget_HitRun9");

	UOakAbility_Beastmaster_ClassMod_Hib_C_OnDeath_DominateTarget_HitRun9_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOakAbility_Beastmaster_ClassMod_Hib_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnAbilityTimerEnded");

	UOakAbility_Beastmaster_ClassMod_Hib_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnAbilityTimerStarted
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOakAbility_Beastmaster_ClassMod_Hib_C::OnAbilityTimerStarted(struct FOakAbilityTimerSpec* Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnAbilityTimerStarted");

	UOakAbility_Beastmaster_ClassMod_Hib_C_OnAbilityTimerStarted_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Beastmaster_ClassMod_Hib_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnActivated");

	UOakAbility_Beastmaster_ClassMod_Hib_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOakAbility_Beastmaster_ClassMod_Hib_C::CustomEvent_2(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.CustomEvent_2");

	UOakAbility_Beastmaster_ClassMod_Hib_C_CustomEvent_2_Params params;
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


// Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Hib
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Beastmaster_ClassMod_Hib_C::ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Hib(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Hib");

	UOakAbility_Beastmaster_ClassMod_Hib_C_ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Hib_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
