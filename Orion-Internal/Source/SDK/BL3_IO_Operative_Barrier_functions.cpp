// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Operative_Barrier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetBarrierHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHidden                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_Barrier_C::SetBarrierHidden(bool bIsHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetBarrierHidden");

	AIO_Operative_Barrier_C_SetBarrierHidden_Params params;
	params.bIsHidden = bIsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.GetDeterrenceFieldDamageForCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AOakCharacter*           Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Val                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_Barrier_C::GetDeterrenceFieldDamageForCharacter(class AOakCharacter* Enemy, float* Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.GetDeterrenceFieldDamageForCharacter");

	AIO_Operative_Barrier_C_GetDeterrenceFieldDamageForCharacter_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Val != nullptr)
		*Val = params.Val;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStateTransitionEnd
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::OnStateTransitionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStateTransitionEnd");

	AIO_Operative_Barrier_C_OnStateTransitionEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStateTransitionBegin
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::OnStateTransitionBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStateTransitionBegin");

	AIO_Operative_Barrier_C_OnStateTransitionBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.DetachFromPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::DetachFromPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.DetachFromPlayer");

	AIO_Operative_Barrier_C_DetachFromPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.AttachToPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::AttachToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.AttachToPlayer");

	AIO_Operative_Barrier_C_AttachToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.IsShuttingDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_Barrier_C::IsShuttingDown(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.IsShuttingDown");

	AIO_Operative_Barrier_C_IsShuttingDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupPhysicsAssetOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicsAsset*           InAssetOverride                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_Barrier_C::SetupPhysicsAssetOverride(class UPhysicsAsset* InAssetOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupPhysicsAssetOverride");

	AIO_Operative_Barrier_C_SetupPhysicsAssetOverride_Params params;
	params.InAssetOverride = InAssetOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupMultiModBarrierFX
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::SetupMultiModBarrierFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupMultiModBarrierFX");

	AIO_Operative_Barrier_C_SetupMultiModBarrierFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.GetDamageRTPCValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_Barrier_C::GetDamageRTPCValue(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.GetDamageRTPCValue");

	AIO_Operative_Barrier_C_GetDamageRTPCValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupStressTest
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::SetupStressTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupStressTest");

	AIO_Operative_Barrier_C_SetupStressTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.TryActivateSystem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AIO_Operative_Barrier_C::TryActivateSystem(class UParticleSystemComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.TryActivateSystem");

	AIO_Operative_Barrier_C_TryActivateSystem_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.ConfigureTemplates
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::ConfigureTemplates()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.ConfigureTemplates");

	AIO_Operative_Barrier_C_ConfigureTemplates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupModMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ParamName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Val                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_Barrier_C::SetupModMaterial(const struct FName& ParamName, float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupModMaterial");

	AIO_Operative_Barrier_C_SetupModMaterial_Params params;
	params.ParamName = ParamName;
	params.Val = Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupElectromagneticTherapy
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::SetupElectromagneticTherapy()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupElectromagneticTherapy");

	AIO_Operative_Barrier_C_SetupElectromagneticTherapy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupChargedRelay
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::SetupChargedRelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupChargedRelay");

	AIO_Operative_Barrier_C_SetupChargedRelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupDeterrenceField
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::SetupDeterrenceField()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupDeterrenceField");

	AIO_Operative_Barrier_C_SetupDeterrenceField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetBarrierHoldScalar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_Barrier_C::SetBarrierHoldScalar(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetBarrierHoldScalar");

	AIO_Operative_Barrier_C_SetBarrierHoldScalar_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.UserConstructionScript");

	AIO_Operative_Barrier_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.TurboTimeline__FinishedFunc
// (BlueprintEvent)

void AIO_Operative_Barrier_C::TurboTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.TurboTimeline__FinishedFunc");

	AIO_Operative_Barrier_C_TurboTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.TurboTimeline__UpdateFunc
// (BlueprintEvent)

void AIO_Operative_Barrier_C::TurboTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.TurboTimeline__UpdateFunc");

	AIO_Operative_Barrier_C_TurboTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX_OnCarried
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::UpdateFX_OnCarried()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX_OnCarried");

	AIO_Operative_Barrier_C_UpdateFX_OnCarried_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_Carried
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::OnStartState_Carried()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_Carried");

	AIO_Operative_Barrier_C_OnStartState_Carried_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Carried
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::OnEndState_Carried()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Carried");

	AIO_Operative_Barrier_C_OnEndState_Carried_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Activating
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::OnEndState_Activating()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Activating");

	AIO_Operative_Barrier_C_OnEndState_Activating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX_OnDeployed
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::UpdateFX_OnDeployed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX_OnDeployed");

	AIO_Operative_Barrier_C_UpdateFX_OnDeployed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_Deployed
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::OnStartState_Deployed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_Deployed");

	AIO_Operative_Barrier_C_OnStartState_Deployed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Deployed
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::OnEndState_Deployed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Deployed");

	AIO_Operative_Barrier_C_OnEndState_Deployed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_Operative_Barrier_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.ReceiveBeginPlay");

	AIO_Operative_Barrier_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.HandleBarrierStateChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// EOperativeBarrierState*        OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOperativeBarrierState*        NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_Barrier_C::HandleBarrierStateChange(EOperativeBarrierState* OldState, EOperativeBarrierState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.HandleBarrierStateChange");

	AIO_Operative_Barrier_C_HandleBarrierStateChange_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupBarrierMods
// (Event, Protected, BlueprintEvent)

void AIO_Operative_Barrier_C::SetupBarrierMods()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupBarrierMods");

	AIO_Operative_Barrier_C_SetupBarrierMods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::UpdateFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX");

	AIO_Operative_Barrier_C_UpdateFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.StartNextBarrierState
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::StartNextBarrierState()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.StartNextBarrierState");

	AIO_Operative_Barrier_C_StartNextBarrierState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnTurbochargedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          InbIsTurbocharged              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_Barrier_C::OnTurbochargedStateChanged(bool* InbIsTurbocharged)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnTurbochargedStateChanged");

	AIO_Operative_Barrier_C_OnTurbochargedStateChanged_Params params;
	params.InbIsTurbocharged = InbIsTurbocharged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_ShuttingDown
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::OnStartState_ShuttingDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_ShuttingDown");

	AIO_Operative_Barrier_C_OnStartState_ShuttingDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.ApplyDeterrenceFieldToEnemy
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_Barrier_C::ApplyDeterrenceFieldToEnemy(class AActor** Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.ApplyDeterrenceFieldToEnemy");

	AIO_Operative_Barrier_C_ApplyDeterrenceFieldToEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.DigistructOut
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_Barrier_C::DigistructOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.DigistructOut");

	AIO_Operative_Barrier_C_DigistructOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_Barrier.IO_Operative_Barrier_C.ExecuteUbergraph_IO_Operative_Barrier
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_Barrier_C::ExecuteUbergraph_IO_Operative_Barrier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_Barrier.IO_Operative_Barrier_C.ExecuteUbergraph_IO_Operative_Barrier");

	AIO_Operative_Barrier_C_ExecuteUbergraph_IO_Operative_Barrier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
