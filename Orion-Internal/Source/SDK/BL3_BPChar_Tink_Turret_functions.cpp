// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Tink_Turret_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.UserConstructionScript");

	ABPChar_Tink_Turret_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_PerformLaunch
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::TinkTurret_PerformLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_PerformLaunch");

	ABPChar_Tink_Turret_C_TinkTurret_PerformLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_DeathHide
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::TinkTurret_DeathHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_DeathHide");

	ABPChar_Tink_Turret_C_TinkTurret_DeathHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TInkTurret_SetPileSpawnerComp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpawnerComponent*       MyPileSpawnerComp              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Tink_Turret_C::TInkTurret_SetPileSpawnerComp(class USpawnerComponent* MyPileSpawnerComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TInkTurret_SetPileSpawnerComp");

	ABPChar_Tink_Turret_C_TInkTurret_SetPileSpawnerComp_Params params;
	params.MyPileSpawnerComp = MyPileSpawnerComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TurretGodModeOn
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::TurretGodModeOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TurretGodModeOn");

	ABPChar_Tink_Turret_C_TurretGodModeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TurretGodModeOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::TurretGodModeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TurretGodModeOff");

	ABPChar_Tink_Turret_C_TurretGodModeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TurretTargetableOn
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::TurretTargetableOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TurretTargetableOn");

	ABPChar_Tink_Turret_C_TurretTargetableOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TurretTargetableOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::TurretTargetableOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TurretTargetableOff");

	ABPChar_Tink_Turret_C_TurretTargetableOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_TrackingLaserCheckON
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TrackingLaserTarget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_Turret_C::TinkTurret_TrackingLaserCheckON(class AActor* TrackingLaserTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_TrackingLaserCheckON");

	ABPChar_Tink_Turret_C_TinkTurret_TrackingLaserCheckON_Params params;
	params.TrackingLaserTarget = TrackingLaserTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_TrackingLaserCheckOFF
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::TinkTurret_TrackingLaserCheckOFF()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_TrackingLaserCheckOFF");

	ABPChar_Tink_Turret_C_TinkTurret_TrackingLaserCheckOFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_OpenTrackingLaserCheckGate
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::CE_OpenTrackingLaserCheckGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_OpenTrackingLaserCheckGate");

	ABPChar_Tink_Turret_C_CE_OpenTrackingLaserCheckGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_CheckLaserTargetSeen
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::CE_CheckLaserTargetSeen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_CheckLaserTargetSeen");

	ABPChar_Tink_Turret_C_CE_CheckLaserTargetSeen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_Tink_Turret_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.ReceiveBeginPlay");

	ABPChar_Tink_Turret_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CleanUpTurretLegs_Event
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::CleanUpTurretLegs_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CleanUpTurretLegs_Event");

	ABPChar_Tink_Turret_C_CleanUpTurretLegs_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.OnFindTinkQueryFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_Turret_C::OnFindTinkQueryFinish(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.OnFindTinkQueryFinish");

	ABPChar_Tink_Turret_C_OnFindTinkQueryFinish_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_DeathCleanUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::TinkTurret_DeathCleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_DeathCleanUp");

	ABPChar_Tink_Turret_C_TinkTurret_DeathCleanUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_Tink_Turret
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_Turret_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_Tink_Turret(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_Tink_Turret");

	ABPChar_Tink_Turret_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_Tink_Turret_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_StopFaceCheckMetro
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::CE_StopFaceCheckMetro()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_StopFaceCheckMetro");

	ABPChar_Tink_Turret_C_CE_StopFaceCheckMetro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_OpenTrackingAudioStartGate
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::CE_OpenTrackingAudioStartGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_OpenTrackingAudioStartGate");

	ABPChar_Tink_Turret_C_CE_OpenTrackingAudioStartGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_TrackingAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_Turret_C::TinkTurret_TrackingAudio(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_TrackingAudio");

	ABPChar_Tink_Turret_C_TinkTurret_TrackingAudio_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_CloseTrackingAudioStopGate
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::CE_CloseTrackingAudioStopGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_CloseTrackingAudioStopGate");

	ABPChar_Tink_Turret_C_CE_CloseTrackingAudioStopGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_OpenTrackingAudioStopGate
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::CE_OpenTrackingAudioStopGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_OpenTrackingAudioStopGate");

	ABPChar_Tink_Turret_C_CE_OpenTrackingAudioStopGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_CloseTrackingAudioStartGate
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::CE_CloseTrackingAudioStartGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_CloseTrackingAudioStartGate");

	ABPChar_Tink_Turret_C_CE_CloseTrackingAudioStartGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.ExecuteUbergraph_BPChar_Tink_Turret
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_Turret_C::ExecuteUbergraph_BPChar_Tink_Turret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.ExecuteUbergraph_BPChar_Tink_Turret");

	ABPChar_Tink_Turret_C_ExecuteUbergraph_BPChar_Tink_Turret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.SetTinkTurretCollisionOn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::SetTinkTurretCollisionOn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.SetTinkTurretCollisionOn__DelegateSignature");

	ABPChar_Tink_Turret_C_SetTinkTurretCollisionOn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.SetTinkTurretCollisionOff__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::SetTinkTurretCollisionOff__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.SetTinkTurretCollisionOff__DelegateSignature");

	ABPChar_Tink_Turret_C_SetTinkTurretCollisionOff__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CleanUpTurretLegs__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_Turret_C::CleanUpTurretLegs__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CleanUpTurretLegs__DelegateSignature");

	ABPChar_Tink_Turret_C_CleanUpTurretLegs__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
