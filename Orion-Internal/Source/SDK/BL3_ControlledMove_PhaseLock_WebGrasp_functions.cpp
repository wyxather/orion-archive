// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_PhaseLock_WebGrasp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.PlayFeedback
// (Public, BlueprintCallable, BlueprintEvent)

void UControlledMove_PhaseLock_WebGrasp_C::PlayFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.PlayFeedback");

	UControlledMove_PhaseLock_WebGrasp_C_PlayFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.SetGraspTimerRunning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRes                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_WebGrasp_C::SetGraspTimerRunning(bool bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.SetGraspTimerRunning");

	UControlledMove_PhaseLock_WebGrasp_C_SetGraspTimerRunning_Params params;
	params.bRes = bRes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.GraspFinishLeech
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UControlledMove_PhaseLock_WebGrasp_C::GraspFinishLeech()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.GraspFinishLeech");

	UControlledMove_PhaseLock_WebGrasp_C_GraspFinishLeech_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnGraspLeechTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UControlledMove_PhaseLock_WebGrasp_C::OnGraspLeechTarget(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnGraspLeechTarget");

	UControlledMove_PhaseLock_WebGrasp_C_OnGraspLeechTarget_Params params;
	params.DamageReceiver = DamageReceiver;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DoPhaseTranceEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UControlledMove_PhaseLock_WebGrasp_C::DoPhaseTranceEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DoPhaseTranceEffects");

	UControlledMove_PhaseLock_WebGrasp_C_DoPhaseTranceEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DispatchGraspTargetDiedEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGbxCharacter*           Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_WebGrasp_C::DispatchGraspTargetDiedEvent(class AGbxCharacter* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DispatchGraspTargetDiedEvent");

	UControlledMove_PhaseLock_WebGrasp_C_DispatchGraspTargetDiedEvent_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.UnpackComboData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UControlledMove_PhaseLock_WebGrasp_C::UnpackComboData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.UnpackComboData");

	UControlledMove_PhaseLock_WebGrasp_C_UnpackComboData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ConfigureEmitters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UControlledMove_PhaseLock_WebGrasp_C::ConfigureEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ConfigureEmitters");

	UControlledMove_PhaseLock_WebGrasp_C_ConfigureEmitters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DispatchGraspedEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UControlledMove_PhaseLock_WebGrasp_C::DispatchGraspedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DispatchGraspedEvent");

	UControlledMove_PhaseLock_WebGrasp_C_DispatchGraspedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.RemoveElementalEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UControlledMove_PhaseLock_WebGrasp_C::RemoveElementalEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.RemoveElementalEffect");

	UControlledMove_PhaseLock_WebGrasp_C_RemoveElementalEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ApplyElementalEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UControlledMove_PhaseLock_WebGrasp_C::ApplyElementalEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ApplyElementalEffect");

	UControlledMove_PhaseLock_WebGrasp_C_ApplyElementalEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnServerStart
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         MoveDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_WebGrasp_C::OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnServerStart");

	UControlledMove_PhaseLock_WebGrasp_C_OnServerStart_Params params;
	params.MoveDuration = MoveDuration;
	params.TargetActor = TargetActor;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnServerStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_WebGrasp_C::OnServerStop(bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnServerStop");

	UControlledMove_PhaseLock_WebGrasp_C_OnServerStop_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ConfigurePhaseLockProperties
// (Public, BlueprintCallable, BlueprintEvent)

void UControlledMove_PhaseLock_WebGrasp_C::ConfigurePhaseLockProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ConfigurePhaseLockProperties");

	UControlledMove_PhaseLock_WebGrasp_C_ConfigurePhaseLockProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnControlledCharacterDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_WebGrasp_C::OnControlledCharacterDied(class AActor* Receiver, class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnControlledCharacterDied");

	UControlledMove_PhaseLock_WebGrasp_C_OnControlledCharacterDied_Params params;
	params.Receiver = Receiver;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ExecuteUbergraph_ControlledMove_PhaseLock_WebGrasp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_WebGrasp_C::ExecuteUbergraph_ControlledMove_PhaseLock_WebGrasp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ExecuteUbergraph_ControlledMove_PhaseLock_WebGrasp");

	UControlledMove_PhaseLock_WebGrasp_C_ExecuteUbergraph_ControlledMove_PhaseLock_WebGrasp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
