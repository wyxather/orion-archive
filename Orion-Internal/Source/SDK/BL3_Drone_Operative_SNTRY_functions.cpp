// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Drone_Operative_SNTRY_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.HasValidDroneTarget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADrone_Operative_SNTRY_C::HasValidDroneTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.HasValidDroneTarget");

	ADrone_Operative_SNTRY_C_HasValidDroneTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ConfigureDigistruct
// (Public, BlueprintCallable, BlueprintEvent)

void ADrone_Operative_SNTRY_C::ConfigureDigistruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ConfigureDigistruct");

	ADrone_Operative_SNTRY_C_ConfigureDigistruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ConfigureCryoEmitter
// (Public, BlueprintCallable, BlueprintEvent)

void ADrone_Operative_SNTRY_C::ConfigureCryoEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ConfigureCryoEmitter");

	ADrone_Operative_SNTRY_C_ConfigureCryoEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnSimCalledShotRelease
// (Public, BlueprintCallable, BlueprintEvent)

void ADrone_Operative_SNTRY_C::OnSimCalledShotRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnSimCalledShotRelease");

	ADrone_Operative_SNTRY_C_OnSimCalledShotRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.RegisterDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void ADrone_Operative_SNTRY_C::RegisterDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.RegisterDelegates");

	ADrone_Operative_SNTRY_C_RegisterDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DispatchCalledShotRestorationParticles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  KilledTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrone_Operative_SNTRY_C::DispatchCalledShotRestorationParticles(class AActor* KilledTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DispatchCalledShotRestorationParticles");

	ADrone_Operative_SNTRY_C_DispatchCalledShotRestorationParticles_Params params;
	params.KilledTarget = KilledTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.RefundDuration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Val                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrone_Operative_SNTRY_C::RefundDuration(float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.RefundDuration");

	ADrone_Operative_SNTRY_C_RefundDuration_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.AdvanceCalledShotCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADrone_Operative_SNTRY_C::AdvanceCalledShotCount(bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.AdvanceCalledShotCount");

	ADrone_Operative_SNTRY_C_AdvanceCalledShotCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupCalledShot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ADrone_Operative_SNTRY_C::SetupCalledShot(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupCalledShot");

	ADrone_Operative_SNTRY_C_SetupCalledShot_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ApplyShieldDamageRefund
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor**                 CurrentTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                LastDamageLocation             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         TotalRefund                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrone_Operative_SNTRY_C::ApplyShieldDamageRefund(class AActor** CurrentTarget, struct FVector* LastDamageLocation, float* TotalRefund)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ApplyShieldDamageRefund");

	ADrone_Operative_SNTRY_C_ApplyShieldDamageRefund_Params params;
	params.CurrentTarget = CurrentTarget;
	params.LastDamageLocation = LastDamageLocation;
	params.TotalRefund = TotalRefund;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CreateStaticFieldBeamToTarget
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BeamName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrone_Operative_SNTRY_C::CreateStaticFieldBeamToTarget(class AActor** TargetActor, struct FName* BeamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CreateStaticFieldBeamToTarget");

	ADrone_Operative_SNTRY_C_CreateStaticFieldBeamToTarget_Params params;
	params.TargetActor = TargetActor;
	params.BeamName = BeamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CreateBadDoseBeamToTarget
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BeamName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrone_Operative_SNTRY_C::CreateBadDoseBeamToTarget(class AActor** TargetActor, struct FName* BeamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CreateBadDoseBeamToTarget");

	ADrone_Operative_SNTRY_C_CreateBadDoseBeamToTarget_Params params;
	params.TargetActor = TargetActor;
	params.BeamName = BeamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupStaticField
// (Public, BlueprintCallable, BlueprintEvent)

void ADrone_Operative_SNTRY_C::SetupStaticField()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupStaticField");

	ADrone_Operative_SNTRY_C_SetupStaticField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupCryoBullets
// (Public, BlueprintCallable, BlueprintEvent)

void ADrone_Operative_SNTRY_C::SetupCryoBullets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupCryoBullets");

	ADrone_Operative_SNTRY_C_SetupCryoBullets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CauseCollisionDamageToEnemy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrone_Operative_SNTRY_C::CauseCollisionDamageToEnemy(class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CauseCollisionDamageToEnemy");

	ADrone_Operative_SNTRY_C_CauseCollisionDamageToEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.GetMoveDelayForTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADrone_Operative_SNTRY_C::GetMoveDelayForTarget(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.GetMoveDelayForTarget");

	ADrone_Operative_SNTRY_C_GetMoveDelayForTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.FindNewTargetAutonomous
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ADrone_Operative_SNTRY_C::FindNewTargetAutonomous()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.FindNewTargetAutonomous");

	ADrone_Operative_SNTRY_C_FindNewTargetAutonomous_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetExhaustFXEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsEnabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrone_Operative_SNTRY_C::SetExhaustFXEnabled(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetExhaustFXEnabled");

	ADrone_Operative_SNTRY_C_SetExhaustFXEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DropPayload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADrone_Operative_SNTRY_C::DropPayload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DropPayload");

	ADrone_Operative_SNTRY_C_DropPayload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADrone_Operative_SNTRY_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.UserConstructionScript");

	ADrone_Operative_SNTRY_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DigistructOut__FinishedFunc
// (BlueprintEvent)

void ADrone_Operative_SNTRY_C::DigistructOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DigistructOut__FinishedFunc");

	ADrone_Operative_SNTRY_C_DigistructOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DigistructOut__UpdateFunc
// (BlueprintEvent)

void ADrone_Operative_SNTRY_C::DigistructOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DigistructOut__UpdateFunc");

	ADrone_Operative_SNTRY_C_DigistructOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DronePhase__FinishedFunc
// (BlueprintEvent)

void ADrone_Operative_SNTRY_C::DronePhase__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DronePhase__FinishedFunc");

	ADrone_Operative_SNTRY_C_DronePhase__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DronePhase__UpdateFunc
// (BlueprintEvent)

void ADrone_Operative_SNTRY_C::DronePhase__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DronePhase__UpdateFunc");

	ADrone_Operative_SNTRY_C_DronePhase__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_SimpleDroneMovementComponentSignature__DelegateSignature_Drone_Operative_SNTRY
// (BlueprintEvent)
// Parameters:
// bool                           bIsBoosting                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrone_Operative_SNTRY_C::BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_SimpleDroneMovementComponentSignature__DelegateSignature_Drone_Operative_SNTRY(bool bIsBoosting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_SimpleDroneMovementComponentSignature__DelegateSignature_Drone_Operative_SNTRY");

	ADrone_Operative_SNTRY_C_BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_SimpleDroneMovementComponentSignature__DelegateSignature_Drone_Operative_SNTRY_Params params;
	params.bIsBoosting = bIsBoosting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.StartDigistructOut
// (BlueprintCallable, BlueprintEvent)

void ADrone_Operative_SNTRY_C::StartDigistructOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.StartDigistructOut");

	ADrone_Operative_SNTRY_C_StartDigistructOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ApplyCollisionDamageToTarget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrone_Operative_SNTRY_C::ApplyCollisionDamageToTarget(class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ApplyCollisionDamageToTarget");

	ADrone_Operative_SNTRY_C_ApplyCollisionDamageToTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADrone_Operative_SNTRY_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ReceiveBeginPlay");

	ADrone_Operative_SNTRY_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupMods
// (Event, Protected, BlueprintEvent)

void ADrone_Operative_SNTRY_C::SetupMods()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupMods");

	ADrone_Operative_SNTRY_C_SetupMods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnShutdownGracefully
// (Event, Protected, BlueprintEvent)

void ADrone_Operative_SNTRY_C::OnShutdownGracefully()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnShutdownGracefully");

	ADrone_Operative_SNTRY_C_OnShutdownGracefully_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoGracefulShutdown
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ADrone_Operative_SNTRY_C::DoGracefulShutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoGracefulShutdown");

	ADrone_Operative_SNTRY_C_DoGracefulShutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoDroneDelivery
// (Event, Protected, BlueprintEvent)

void ADrone_Operative_SNTRY_C::DoDroneDelivery()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoDroneDelivery");

	ADrone_Operative_SNTRY_C_DoDroneDelivery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnCalledShotActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ADrone_Operative_SNTRY_C::OnCalledShotActivated(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnCalledShotActivated");

	ADrone_Operative_SNTRY_C_OnCalledShotActivated_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoNextCalledShot
// (BlueprintCallable, BlueprintEvent)

void ADrone_Operative_SNTRY_C::DoNextCalledShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoNextCalledShot");

	ADrone_Operative_SNTRY_C_DoNextCalledShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnCalledShotKill
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 KilledActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrone_Operative_SNTRY_C::OnCalledShotKill(class AActor** KilledActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnCalledShotKill");

	ADrone_Operative_SNTRY_C_OnCalledShotKill_Params params;
	params.KilledActor = KilledActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetDronePhasing
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bPhasing                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrone_Operative_SNTRY_C::SetDronePhasing(bool* bPhasing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetDronePhasing");

	ADrone_Operative_SNTRY_C_SetDronePhasing_Params params;
	params.bPhasing = bPhasing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.HaltDronePhase
// (BlueprintCallable, BlueprintEvent)

void ADrone_Operative_SNTRY_C::HaltDronePhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.HaltDronePhase");

	ADrone_Operative_SNTRY_C_HaltDronePhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ExecuteUbergraph_Drone_Operative_SNTRY
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrone_Operative_SNTRY_C::ExecuteUbergraph_Drone_Operative_SNTRY(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ExecuteUbergraph_Drone_Operative_SNTRY");

	ADrone_Operative_SNTRY_C_ExecuteUbergraph_Drone_Operative_SNTRY_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
