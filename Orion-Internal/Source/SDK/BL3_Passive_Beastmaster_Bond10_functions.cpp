// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond10_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnRep_DominateTarget
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_Bond10_C::OnRep_DominateTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnRep_DominateTarget");

	UPassive_Beastmaster_Bond10_C_OnRep_DominateTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.DetermineTargetClassification
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FinalDurationScalar            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond10_C::DetermineTargetClassification(int* FinalDurationScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.DetermineTargetClassification");

	UPassive_Beastmaster_Bond10_C_DetermineTargetClassification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FinalDurationScalar != nullptr)
		*FinalDurationScalar = params.FinalDurationScalar;
}


// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.RemoveDominateTargetFromList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond10_C::RemoveDominateTargetFromList(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.RemoveDominateTargetFromList");

	UPassive_Beastmaster_Bond10_C_RemoveDominateTargetFromList_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.TryApplyDominate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// class AActor*                  ActorToDominate                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool UPassive_Beastmaster_Bond10_C::TryApplyDominate(class UDamageSource* DamageSource, class UObject* Instigator, class AActor* Target, class AActor** ActorToDominate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.TryApplyDominate");

	UPassive_Beastmaster_Bond10_C_TryApplyDominate_Params params;
	params.DamageSource = DamageSource;
	params.Instigator = Instigator;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorToDominate != nullptr)
		*ActorToDominate = params.ActorToDominate;

	return params.ReturnValue;
}


// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.AddDominateTargetToList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond10_C::AddDominateTargetToList(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.AddDominateTargetToList");

	UPassive_Beastmaster_Bond10_C_AddDominateTargetToList_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.HandleDominateTimerFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InSpecTimer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOakAbilityTimerResult         InResult                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond10_C::HandleDominateTimerFinished(class UObject* InSpecTimer, EOakAbilityTimerResult InResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.HandleDominateTimerFinished");

	UPassive_Beastmaster_Bond10_C_HandleDominateTimerFinished_Params params;
	params.InSpecTimer = InSpecTimer;
	params.InResult = InResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.DoHealthPercentDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_Bond10_C::DoHealthPercentDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.DoHealthPercentDamage");

	UPassive_Beastmaster_Bond10_C_DoHealthPercentDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnAbilityTimerStarted
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Beastmaster_Bond10_C::OnAbilityTimerStarted(struct FOakAbilityTimerSpec* Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnAbilityTimerStarted");

	UPassive_Beastmaster_Bond10_C_OnAbilityTimerStarted_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec*   Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOakAbilityTimerResult* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Beastmaster_Bond10_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnAbilityTimerEnded");

	UPassive_Beastmaster_Bond10_C_OnAbilityTimerEnded_Params params;
	params.Spec = Spec;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnDeath_DominateTarget_HitRun9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond10_C::OnDeath_DominateTarget_HitRun9(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnDeath_DominateTarget_HitRun9");

	UPassive_Beastmaster_Bond10_C_OnDeath_DominateTarget_HitRun9_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.EndDomination
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_Bond10_C::EndDomination()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.EndDomination");

	UPassive_Beastmaster_Bond10_C_EndDomination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnCausedDamage_HitAndRun9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Beastmaster_Bond10_C::OnCausedDamage_HitAndRun9(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnCausedDamage_HitAndRun9");

	UPassive_Beastmaster_Bond10_C_OnCausedDamage_HitAndRun9_Params params;
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


// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.DoDominateExplosion
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_Bond10_C::DoDominateExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.DoDominateExplosion");

	UPassive_Beastmaster_Bond10_C_DoDominateExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Bond10_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnActivated");

	UPassive_Beastmaster_Bond10_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.ExecuteUbergraph_Passive_Beastmaster_Bond10
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond10_C::ExecuteUbergraph_Passive_Beastmaster_Bond10(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.ExecuteUbergraph_Passive_Beastmaster_Bond10");

	UPassive_Beastmaster_Bond10_C_ExecuteUbergraph_Passive_Beastmaster_Bond10_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
