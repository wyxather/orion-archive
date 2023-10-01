// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPFightForYourLifeComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.SecondWindKillCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     CausedDeathDetails             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPFightForYourLifeComponent_C::SecondWindKillCheck(class UActorComponent* DamagedActor, const struct FCausedDeathDetails& CausedDeathDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.SecondWindKillCheck");

	UBPFightForYourLifeComponent_C_SecondWindKillCheck_Params params;
	params.DamagedActor = DamagedActor;
	params.CausedDeathDetails = CausedDeathDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.WormholeStarting
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::WormholeStarting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.WormholeStarting");

	UBPFightForYourLifeComponent_C_WormholeStarting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredIsRespawning
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::InjuredIsRespawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredIsRespawning");

	UBPFightForYourLifeComponent_C_InjuredIsRespawning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFightForYourLifeComponent_C::MarkDamagedEnemy(class AActor* DamagedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy");

	UBPFightForYourLifeComponent_C_MarkDamagedEnemy_Params params;
	params.DamagedActor = DamagedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_CinematicPause_Local
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::DownState_CinematicPause_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_CinematicPause_Local");

	UBPFightForYourLifeComponent_C_DownState_CinematicPause_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_CinematicPause_Host
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::DownState_CinematicPause_Host()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_CinematicPause_Host");

	UBPFightForYourLifeComponent_C_DownState_CinematicPause_Host_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Exertion_StanceChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStanceChangedEventArgs StanceArgs                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPFightForYourLifeComponent_C::Exertion_StanceChange(const struct FStanceChangedEventArgs& StanceArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Exertion_StanceChange");

	UBPFightForYourLifeComponent_C_Exertion_StanceChange_Params params;
	params.StanceArgs = StanceArgs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ImmediateTravelToResurrectLocal
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::ImmediateTravelToResurrectLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ImmediateTravelToResurrectLocal");

	UBPFightForYourLifeComponent_C_ImmediateTravelToResurrectLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Finished_Local
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::DownState_Finished_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Finished_Local");

	UBPFightForYourLifeComponent_C_DownState_Finished_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ImmediateTravelToResurrectHost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFightForYourLifeComponent_C::ImmediateTravelToResurrectHost(bool Interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ImmediateTravelToResurrectHost");

	UBPFightForYourLifeComponent_C_ImmediateTravelToResurrectHost_Params params;
	params.Interrupted = Interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ResurrectAtResurrectStation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTravelStationResurrectComponent* ResurrectStationComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPFightForYourLifeComponent_C::ResurrectAtResurrectStation(class UTravelStationResurrectComponent* ResurrectStationComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ResurrectAtResurrectStation");

	UBPFightForYourLifeComponent_C_ResurrectAtResurrectStation_Params params;
	params.ResurrectStationComponent = ResurrectStationComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Stopped_Local
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::GivingUp_Stopped_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Stopped_Local");

	UBPFightForYourLifeComponent_C_GivingUp_Stopped_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Started_Local
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::GivingUp_Started_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Started_Local");

	UBPFightForYourLifeComponent_C_GivingUp_Started_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Stopped_Host
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::GivingUp_Stopped_Host()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Stopped_Host");

	UBPFightForYourLifeComponent_C_GivingUp_Stopped_Host_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Started_Host
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::GivingUp_Started_Host()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Started_Host");

	UBPFightForYourLifeComponent_C_GivingUp_Started_Host_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishHeavyAmmoToSetPercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::ReplenishHeavyAmmoToSetPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishHeavyAmmoToSetPercentage");

	UBPFightForYourLifeComponent_C_ReplenishHeavyAmmoToSetPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishGrenadeAmmoToSetPercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::ReplenishGrenadeAmmoToSetPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishGrenadeAmmoToSetPercentage");

	UBPFightForYourLifeComponent_C_ReplenishGrenadeAmmoToSetPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishPistolAmmoToSetPercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::ReplenishPistolAmmoToSetPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishPistolAmmoToSetPercentage");

	UBPFightForYourLifeComponent_C_ReplenishPistolAmmoToSetPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishShotgunAmmoToSetPercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::ReplenishShotgunAmmoToSetPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishShotgunAmmoToSetPercentage");

	UBPFightForYourLifeComponent_C_ReplenishShotgunAmmoToSetPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishSniperRifleAmmoToSetPercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::ReplenishSniperRifleAmmoToSetPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishSniperRifleAmmoToSetPercentage");

	UBPFightForYourLifeComponent_C_ReplenishSniperRifleAmmoToSetPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishAssault RifleAmmoToSetPercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::ReplenishAssault_RifleAmmoToSetPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishAssault RifleAmmoToSetPercentage");

	UBPFightForYourLifeComponent_C_ReplenishAssault_RifleAmmoToSetPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishSMGAmmoToSetPercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::ReplenishSMGAmmoToSetPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishSMGAmmoToSetPercentage");

	UBPFightForYourLifeComponent_C_ReplenishSMGAmmoToSetPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Finished_Host
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::DownState_Finished_Host()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Finished_Host");

	UBPFightForYourLifeComponent_C_DownState_Finished_Host_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Stopped_Host
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHealed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFightForYourLifeComponent_C::Reviving_Stopped_Host(bool IsHealed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Stopped_Host");

	UBPFightForYourLifeComponent_C_Reviving_Stopped_Host_Params params;
	params.IsHealed = IsHealed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Started_Local
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::Reviving_Started_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Started_Local");

	UBPFightForYourLifeComponent_C_Reviving_Started_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Started_Host
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorBeingRevived              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFightForYourLifeComponent_C::Reviving_Started_Host(class AActor* ActorBeingRevived)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Started_Host");

	UBPFightForYourLifeComponent_C_Reviving_Started_Host_Params params;
	params.ActorBeingRevived = ActorBeingRevived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.RespawnAtResurrectStation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::RespawnAtResurrectStation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.RespawnAtResurrectStation");

	UBPFightForYourLifeComponent_C_RespawnAtResurrectStation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishHealthAndShields
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HealthPercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ShieldPercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFightForYourLifeComponent_C::ReplenishHealthAndShields(float HealthPercent, float ShieldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishHealthAndShields");

	UBPFightForYourLifeComponent_C_ReplenishHealthAndShields_Params params;
	params.HealthPercent = HealthPercent;
	params.ShieldPercent = ShieldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredStop
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::InjuredStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredStop");

	UBPFightForYourLifeComponent_C_InjuredStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredLive
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::InjuredLive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredLive");

	UBPFightForYourLifeComponent_C_InjuredLive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeRevived
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::FightForYourLifeRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeRevived");

	UBPFightForYourLifeComponent_C_FightForYourLifeRevived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeTimeExpired
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::FightForYourLifeTimeExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeTimeExpired");

	UBPFightForYourLifeComponent_C_FightForYourLifeTimeExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Stopped_Host
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::BeingRevived_Stopped_Host()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Stopped_Host");

	UBPFightForYourLifeComponent_C_BeingRevived_Stopped_Host_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Stopped_Local
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::DownState_Stopped_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Stopped_Local");

	UBPFightForYourLifeComponent_C_DownState_Stopped_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Stopped_Host
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::DownState_Stopped_Host()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Stopped_Host");

	UBPFightForYourLifeComponent_C_DownState_Stopped_Host_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Started_Local
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::BeingRevived_Started_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Started_Local");

	UBPFightForYourLifeComponent_C_BeingRevived_Started_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Started_Host
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::BeingRevived_Started_Host()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Started_Host");

	UBPFightForYourLifeComponent_C_BeingRevived_Started_Host_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeKilledEnemy
// (Public, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::FightForYourLifeKilledEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeKilledEnemy");

	UBPFightForYourLifeComponent_C_FightForYourLifeKilledEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Started_Local
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::DownState_Started_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Started_Local");

	UBPFightForYourLifeComponent_C_DownState_Started_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Started_Host
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::DownState_Started_Host()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Started_Host");

	UBPFightForYourLifeComponent_C_DownState_Started_Host_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FFYL_Penalty_Recover
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFightForYourLifeComponent_C::FFYL_Penalty_Recover(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FFYL_Penalty_Recover");

	UBPFightForYourLifeComponent_C_FFYL_Penalty_Recover_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy_Died
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFightForYourLifeComponent_C::MarkDamagedEnemy_Died(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy_Died");

	UBPFightForYourLifeComponent_C_MarkDamagedEnemy_Died_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy_RefreshDelay
// (BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::MarkDamagedEnemy_RefreshDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy_RefreshDelay");

	UBPFightForYourLifeComponent_C_MarkDamagedEnemy_RefreshDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPFightForYourLifeComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReceiveBeginPlay");

	UBPFightForYourLifeComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FFYL_Penalty_Apply
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void UBPFightForYourLifeComponent_C::FFYL_Penalty_Apply()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FFYL_Penalty_Apply");

	UBPFightForYourLifeComponent_C_FFYL_Penalty_Apply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.WatchForSecondWindKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFightForYourLifeComponent_C::WatchForSecondWindKill(bool Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.WatchForSecondWindKill");

	UBPFightForYourLifeComponent_C_WatchForSecondWindKill_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.CausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPFightForYourLifeComponent_C::CausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.CausedDeath");

	UBPFightForYourLifeComponent_C_CausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ExecuteUbergraph_BPFightForYourLifeComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFightForYourLifeComponent_C::ExecuteUbergraph_BPFightForYourLifeComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ExecuteUbergraph_BPFightForYourLifeComponent");

	UBPFightForYourLifeComponent_C_ExecuteUbergraph_BPFightForYourLifeComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
