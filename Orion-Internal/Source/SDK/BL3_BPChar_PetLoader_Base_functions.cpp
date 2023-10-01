// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PetLoader_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_GetType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_PetLoader_Variations> LoaderType                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetLoader_Base_C::PetLoader_GetType(TEnumAsByte<Enum_PetLoader_Variations>* LoaderType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_GetType");

	ABPChar_PetLoader_Base_C_PetLoader_GetType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoaderType != nullptr)
		*LoaderType = params.LoaderType;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRPG_isMissileBarrageDone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isDone_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetLoader_Base_C::PetLoaderRPG_isMissileBarrageDone(bool* isDone_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRPG_isMissileBarrageDone");

	ABPChar_PetLoader_Base_C_PetLoaderRPG_isMissileBarrageDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isDone_ != nullptr)
		*isDone_ = params.isDone_;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_isSpawningSurveyor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSpawningSurveyor             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetLoader_Base_C::PetLoader_isSpawningSurveyor(bool* IsSpawningSurveyor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_isSpawningSurveyor");

	ABPChar_PetLoader_Base_C_PetLoader_isSpawningSurveyor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSpawningSurveyor != nullptr)
		*IsSpawningSurveyor = params.IsSpawningSurveyor;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRep_bActivateEXPLoader
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::OnRep_bActivateEXPLoader()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRep_bActivateEXPLoader");

	ABPChar_PetLoader_Base_C_OnRep_bActivateEXPLoader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ChangeAlertState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewAlertState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetLoader_Base_C::ChangeAlertState(bool NewAlertState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ChangeAlertState");

	ABPChar_PetLoader_Base_C_ChangeAlertState_Params params;
	params.NewAlertState = NewAlertState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.CanLoseMember
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsArm                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLeg                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanLoseMember                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetLoader_Base_C::CanLoseMember(bool IsArm, bool IsLeg, bool* CanLoseMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.CanLoseMember");

	ABPChar_PetLoader_Base_C_CanLoseMember_Params params;
	params.IsArm = IsArm;
	params.IsLeg = IsLeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanLoseMember != nullptr)
		*CanLoseMember = params.CanLoseMember;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ShowWeaponIfValid
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::ShowWeaponIfValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ShowWeaponIfValid");

	ABPChar_PetLoader_Base_C_ShowWeaponIfValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.CheckStartWithoutMembers
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::CheckStartWithoutMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.CheckStartWithoutMembers");

	ABPChar_PetLoader_Base_C_CheckStartWithoutMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.SpawnDestroyedLeg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SpawnToSocketName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActionToPlay                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageReactionEventSummary HitInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_PetLoader_Base_C::SpawnDestroyedLeg(const struct FName& SpawnToSocketName, class UClass* ActionToPlay, const struct FDamageReactionEventSummary& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.SpawnDestroyedLeg");

	ABPChar_PetLoader_Base_C_SpawnDestroyedLeg_Params params;
	params.SpawnToSocketName = SpawnToSocketName;
	params.ActionToPlay = ActionToPlay;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.SpawnDestroyedArm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SpawnToSocketName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageReactionEventSummary HitInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_PetLoader_Base_C::SpawnDestroyedArm(const struct FName& SpawnToSocketName, bool bHasWeapon, const struct FDamageReactionEventSummary& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.SpawnDestroyedArm");

	ABPChar_PetLoader_Base_C_SpawnDestroyedArm_Params params;
	params.SpawnToSocketName = SpawnToSocketName;
	params.bHasWeapon = bHasWeapon;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.UserConstructionScript");

	ABPChar_PetLoader_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_LoaderShared
// (BlueprintEvent)
// Parameters:
// struct FStanceChangedEventArgs Args                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABPChar_PetLoader_Base_C::BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_LoaderShared(const struct FStanceChangedEventArgs& Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_LoaderShared");

	ABPChar_PetLoader_Base_C_BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_LoaderShared_Params params;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_PetLoader_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ReceiveBeginPlay");

	ABPChar_PetLoader_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StartFeetThrusters
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::StartFeetThrusters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StartFeetThrusters");

	ABPChar_PetLoader_Base_C_StartFeetThrusters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StopFeetThrusters
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::StopFeetThrusters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StopFeetThrusters");

	ABPChar_PetLoader_Base_C_StopFeetThrusters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetImmuneToPhaselock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsImmune                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetLoader_Base_C::PetLoader_SetImmuneToPhaselock(bool bIsImmune)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetImmuneToPhaselock");

	ABPChar_PetLoader_Base_C_PetLoader_SetImmuneToPhaselock_Params params;
	params.bIsImmune = bIsImmune;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.TriggerSmoke
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary HitInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_PetLoader_Base_C::TriggerSmoke(const struct FDamageReactionEventSummary& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.TriggerSmoke");

	ABPChar_PetLoader_Base_C_TriggerSmoke_Params params;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartLaserCharge
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoader_StartLaserCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartLaserCharge");

	ABPChar_PetLoader_Base_C_PetLoader_StartLaserCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ShieldHit
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoaderRIOT_ShieldHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ShieldHit");

	ABPChar_PetLoader_Base_C_PetLoaderRIOT_ShieldHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_IsUnboxSpawning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUnboxing                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetLoader_Base_C::PetLoader_IsUnboxSpawning(bool IsUnboxing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_IsUnboxSpawning");

	ABPChar_PetLoader_Base_C_PetLoader_IsUnboxSpawning_Params params;
	params.IsUnboxing = IsUnboxing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnLeftLegJointDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary Damage_Event                   (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_PetLoader_Base_C::OnLeftLegJointDamaged(const struct FDamageReactionEventSummary& Damage_Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnLeftLegJointDamaged");

	ABPChar_PetLoader_Base_C_OnLeftLegJointDamaged_Params params;
	params.Damage_Event = Damage_Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_AnticipateLaserBall
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoaderBadass_AnticipateLaserBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_AnticipateLaserBall");

	ABPChar_PetLoader_Base_C_PetLoaderBadass_AnticipateLaserBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRightLegJointDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary Damage_Event                   (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_PetLoader_Base_C::OnRightLegJointDamaged(const struct FDamageReactionEventSummary& Damage_Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRightLegJointDamaged");

	ABPChar_PetLoader_Base_C_OnRightLegJointDamaged_Params params;
	params.Damage_Event = Damage_Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnLeftArmJointDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary Damage_Event                   (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_PetLoader_Base_C::OnLeftArmJointDamaged(const struct FDamageReactionEventSummary& Damage_Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnLeftArmJointDamaged");

	ABPChar_PetLoader_Base_C_OnLeftArmJointDamaged_Params params;
	params.Damage_Event = Damage_Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRightArmJointDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary Damage_Event                   (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_PetLoader_Base_C::OnRightArmJointDamaged(const struct FDamageReactionEventSummary& Damage_Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRightArmJointDamaged");

	ABPChar_PetLoader_Base_C_OnRightArmJointDamaged_Params params;
	params.Damage_Event = Damage_Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_ThrowLaserBall
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoaderBadass_ThrowLaserBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_ThrowLaserBall");

	ABPChar_PetLoader_Base_C_PetLoaderBadass_ThrowLaserBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_LoaderShared
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetLoader_Base_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_LoaderShared(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_LoaderShared");

	ABPChar_PetLoader_Base_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_LoaderShared_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StopSpawningSurveyor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedWithSuccess            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetLoader_Base_C::PetLoader_StopSpawningSurveyor(bool FinishedWithSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StopSpawningSurveyor");

	ABPChar_PetLoader_Base_C_PetLoader_StopSpawningSurveyor_Params params;
	params.FinishedWithSuccess = FinishedWithSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartSpawningSurveyor
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoader_StartSpawningSurveyor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartSpawningSurveyor");

	ABPChar_PetLoader_Base_C_PetLoader_StartSpawningSurveyor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_LaserGround
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoaderBadass_LaserGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_LaserGround");

	ABPChar_PetLoader_Base_C_PetLoaderBadass_LaserGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
// (BlueprintEvent)

void ABPChar_PetLoader_Base_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet");

	ABPChar_PetLoader_Base_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
// (BlueprintEvent)

void ABPChar_PetLoader_Base_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet");

	ABPChar_PetLoader_Base_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnEnrageBegin
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::OnEnrageBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnEnrageBegin");

	ABPChar_PetLoader_Base_C_OnEnrageBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnEnrageEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::OnEnrageEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnEnrageEnd");

	ABPChar_PetLoader_Base_C_OnEnrageEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ChargeEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoaderRIOT_ChargeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ChargeEnd");

	ABPChar_PetLoader_Base_C_PetLoaderRIOT_ChargeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.LeftLegRemoveSparks
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::LeftLegRemoveSparks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.LeftLegRemoveSparks");

	ABPChar_PetLoader_Base_C_LeftLegRemoveSparks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.RightLegRemoveSparks
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::RightLegRemoveSparks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.RightLegRemoveSparks");

	ABPChar_PetLoader_Base_C_RightLegRemoveSparks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.LeftArmRemoveSparks
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::LeftArmRemoveSparks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.LeftArmRemoveSparks");

	ABPChar_PetLoader_Base_C_LeftArmRemoveSparks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.RightArmRemoveSparks
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::RightArmRemoveSparks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.RightArmRemoveSparks");

	ABPChar_PetLoader_Base_C_RightArmRemoveSparks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ActivateDLCSkill7
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::ActivateDLCSkill7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ActivateDLCSkill7");

	ABPChar_PetLoader_Base_C_ActivateDLCSkill7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StartDLCSkill7
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::StartDLCSkill7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StartDLCSkill7");

	ABPChar_PetLoader_Base_C_StartDLCSkill7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ChargeStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoaderRIOT_ChargeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ChargeStart");

	ABPChar_PetLoader_Base_C_PetLoaderRIOT_ChargeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_Active
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoader_SetEXPCore_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_Active");

	ABPChar_PetLoader_Base_C_PetLoader_SetEXPCore_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_Idle
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoader_SetEXPCore_Idle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_Idle");

	ABPChar_PetLoader_Base_C_PetLoader_SetEXPCore_Idle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_NotActive
// (BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoader_SetEXPCore_NotActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_NotActive");

	ABPChar_PetLoader_Base_C_PetLoader_SetEXPCore_NotActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_JumpStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoader_JumpStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_JumpStart");

	ABPChar_PetLoader_Base_C_PetLoader_JumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_JumpEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoader_JumpEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_JumpEnd");

	ABPChar_PetLoader_Base_C_PetLoader_JumpEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_EnterCrawlingState
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoader_EnterCrawlingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_EnterCrawlingState");

	ABPChar_PetLoader_Base_C_PetLoader_EnterCrawlingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_ToggleHandGrip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetLoader_Base_C::PetLoader_ToggleHandGrip(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_ToggleHandGrip");

	ABPChar_PetLoader_Base_C_PetLoader_ToggleHandGrip_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartLaser
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoader_StartLaser()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartLaser");

	ABPChar_PetLoader_Base_C_PetLoader_StartLaser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetProjectedIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_PetLoader_ProjectedIcons> Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetLoader_Base_C::PetLoader_SetProjectedIcon(TEnumAsByte<Enum_PetLoader_ProjectedIcons> Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetProjectedIcon");

	ABPChar_PetLoader_Base_C_PetLoader_SetProjectedIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRPG_ShootMissile
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoaderRPG_ShootMissile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRPG_ShootMissile");

	ABPChar_PetLoader_Base_C_PetLoaderRPG_ShootMissile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ShieldDestroyed
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoaderRIOT_ShieldDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ShieldDestroyed");

	ABPChar_PetLoader_Base_C_PetLoaderRIOT_ShieldDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ThrowShield
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoaderRIOT_ThrowShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ThrowShield");

	ABPChar_PetLoader_Base_C_PetLoaderRIOT_ThrowShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderEXP_SelfDestruct
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoaderEXP_SelfDestruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderEXP_SelfDestruct");

	ABPChar_PetLoader_Base_C_PetLoaderEXP_SelfDestruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderEXP_Explode
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetLoader_Base_C::PetLoaderEXP_Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderEXP_Explode");

	ABPChar_PetLoader_Base_C_PetLoaderEXP_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ExecuteUbergraph_BPChar_PetLoader_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetLoader_Base_C::ExecuteUbergraph_BPChar_PetLoader_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ExecuteUbergraph_BPChar_PetLoader_Base");

	ABPChar_PetLoader_Base_C_ExecuteUbergraph_BPChar_PetLoader_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
