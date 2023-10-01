// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Combat_PipeValve_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.GetPipeFlowState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasFlow                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Combat_PipeValve_C::GetPipeFlowState(bool* HasFlow)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.GetPipeFlowState");

	AIO_Combat_PipeValve_C_GetPipeFlowState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasFlow != nullptr)
		*HasFlow = params.HasFlow;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.GetPipeDestroyedState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Destroyed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Combat_PipeValve_C::GetPipeDestroyedState(bool* Destroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.GetPipeDestroyedState");

	AIO_Combat_PipeValve_C_GetPipeDestroyedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destroyed != nullptr)
		*Destroyed = params.Destroyed;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SprayTrace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ProjectileRadius               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectTypeQuery>  ObjectTypeToTestAgainst        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> CollissionTraceChannel         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OutHitActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutHitLocation                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutHitNormal                   (Parm, OutParm, IsPlainOldData)

void AIO_Combat_PipeValve_C::SprayTrace(float ProjectileRadius, TEnumAsByte<EObjectTypeQuery> ObjectTypeToTestAgainst, TEnumAsByte<ECollisionChannel> CollissionTraceChannel, class AActor** OutHitActor, struct FVector* OutHitLocation, struct FVector* OutHitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SprayTrace");

	AIO_Combat_PipeValve_C_SprayTrace_Params params;
	params.ProjectileRadius = ProjectileRadius;
	params.ObjectTypeToTestAgainst = ObjectTypeToTestAgainst;
	params.CollissionTraceChannel = CollissionTraceChannel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHitActor != nullptr)
		*OutHitActor = params.OutHitActor;
	if (OutHitLocation != nullptr)
		*OutHitLocation = params.OutHitLocation;
	if (OutHitNormal != nullptr)
		*OutHitNormal = params.OutHitNormal;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.CheckForSprayDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::CheckForSprayDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.CheckForSprayDamage");

	AIO_Combat_PipeValve_C_CheckForSprayDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SetupDestroyedPipes
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::SetupDestroyedPipes()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SetupDestroyedPipes");

	AIO_Combat_PipeValve_C_SetupDestroyedPipes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SpawnAPuddle
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::SpawnAPuddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SpawnAPuddle");

	AIO_Combat_PipeValve_C_SpawnAPuddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.TurnOnFlowFeedback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::TurnOnFlowFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.TurnOnFlowFeedback");

	AIO_Combat_PipeValve_C_TurnOnFlowFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.TurnOffFlowFeedback
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::TurnOffFlowFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.TurnOffFlowFeedback");

	AIO_Combat_PipeValve_C_TurnOffFlowFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.TurnFlowOff
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::TurnFlowOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.TurnFlowOff");

	AIO_Combat_PipeValve_C_TurnFlowOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.TurnFlowOn
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::TurnFlowOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.TurnFlowOn");

	AIO_Combat_PipeValve_C_TurnFlowOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.CheckChangeFlowState
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::CheckChangeFlowState()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.CheckChangeFlowState");

	AIO_Combat_PipeValve_C_CheckChangeFlowState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.InitialSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::InitialSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.InitialSetup");

	AIO_Combat_PipeValve_C_InitialSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SetUpPipeValveMaterialParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    StaticMeshIn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AIO_Combat_PipeValve_C::SetUpPipeValveMaterialParameters(class UStaticMeshComponent* StaticMeshIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SetUpPipeValveMaterialParameters");

	AIO_Combat_PipeValve_C_SetUpPipeValveMaterialParameters_Params params;
	params.StaticMeshIn = StaticMeshIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.UserConstructionScript");

	AIO_Combat_PipeValve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_Combat_PipeValve_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.ReceiveBeginPlay");

	AIO_Combat_PipeValve_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void AIO_Combat_PipeValve_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.OnEnabled");

	AIO_Combat_PipeValve_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.OnLStateUnlocked
// (Event, Protected, BlueprintEvent)

void AIO_Combat_PipeValve_C::OnLStateUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.OnLStateUnlocked");

	AIO_Combat_PipeValve_C_OnLStateUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SwitchIsOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LastActorToUseSwitch           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Combat_PipeValve_C::SwitchIsOn(class AActor* LastActorToUseSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SwitchIsOn");

	AIO_Combat_PipeValve_C_SwitchIsOn_Params params;
	params.LastActorToUseSwitch = LastActorToUseSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SwitchIsOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LastActorToUseSwitch           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Combat_PipeValve_C::SwitchIsOff(class AActor* LastActorToUseSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SwitchIsOff");

	AIO_Combat_PipeValve_C_SwitchIsOff_Params params;
	params.LastActorToUseSwitch = LastActorToUseSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.OnEnabling
// (Event, Protected, BlueprintEvent)

void AIO_Combat_PipeValve_C::OnEnabling()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.OnEnabling");

	AIO_Combat_PipeValve_C_OnEnabling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.OnLStateLocked
// (Event, Protected, BlueprintEvent)

void AIO_Combat_PipeValve_C::OnLStateLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.OnLStateLocked");

	AIO_Combat_PipeValve_C_OnLStateLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SetPipeState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_IO_ExplodingPipe_DestroyedState> PipeState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Combat_PipeValve_C::SetPipeState(TEnumAsByte<Enum_IO_ExplodingPipe_DestroyedState> PipeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SetPipeState");

	AIO_Combat_PipeValve_C_SetPipeState_Params params;
	params.PipeState = PipeState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.DestroyPipe
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::DestroyPipe()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.DestroyPipe");

	AIO_Combat_PipeValve_C_DestroyPipe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SetPipeFlowState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasFlow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Combat_PipeValve_C::SetPipeFlowState(bool HasFlow)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SetPipeFlowState");

	AIO_Combat_PipeValve_C_SetPipeFlowState_Params params;
	params.HasFlow = HasFlow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_IO_Combat_PipeValve
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AIO_Combat_PipeValve_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_IO_Combat_PipeValve(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_IO_Combat_PipeValve");

	AIO_Combat_PipeValve_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_IO_Combat_PipeValve_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.AttemptToSpawnPudle
// (BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::AttemptToSpawnPudle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.AttemptToSpawnPudle");

	AIO_Combat_PipeValve_C_AttemptToSpawnPudle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.ExecuteUbergraph_IO_Combat_PipeValve
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Combat_PipeValve_C::ExecuteUbergraph_IO_Combat_PipeValve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.ExecuteUbergraph_IO_Combat_PipeValve");

	AIO_Combat_PipeValve_C_ExecuteUbergraph_IO_Combat_PipeValve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.On_PipeFlow_Off__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::On_PipeFlow_Off__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.On_PipeFlow_Off__DelegateSignature");

	AIO_Combat_PipeValve_C_On_PipeFlow_Off__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.On_PipeFlow_On__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::On_PipeFlow_On__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.On_PipeFlow_On__DelegateSignature");

	AIO_Combat_PipeValve_C_On_PipeFlow_On__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.On_PipeDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_Combat_PipeValve_C::On_PipeDestroyed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.On_PipeDestroyed__DelegateSignature");

	AIO_Combat_PipeValve_C_On_PipeDestroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
