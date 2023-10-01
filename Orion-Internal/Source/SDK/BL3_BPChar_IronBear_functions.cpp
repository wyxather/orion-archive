// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_IronBear_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_IronBear.BPChar_IronBear_C.GetIronBearAutoSlideCooldownRefund
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABPChar_IronBear_C::GetIronBearAutoSlideCooldownRefund()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.GetIronBearAutoSlideCooldownRefund");

	ABPChar_IronBear_C_GetIronBearAutoSlideCooldownRefund_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnRep_bAutoBearStarted
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::OnRep_bAutoBearStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnRep_bAutoBearStarted");

	ABPChar_IronBear_C_OnRep_bAutoBearStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.CalculateAutoBearDuration
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::CalculateAutoBearDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.CalculateAutoBearDuration");

	ABPChar_IronBear_C_CalculateAutoBearDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.GetWeaponUserForWeaponSlot
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWeaponSlotData**        SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAIWeaponUserComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIWeaponUserComponent* ABPChar_IronBear_C::GetWeaponUserForWeaponSlot(class UWeaponSlotData** SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.GetWeaponUserForWeaponSlot");

	ABPChar_IronBear_C_GetWeaponUserForWeaponSlot_Params params;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPChar_IronBear.BPChar_IronBear_C.SetScreenLoopEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::SetScreenLoopEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.SetScreenLoopEnabled");

	ABPChar_IronBear_C_SetScreenLoopEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.StopBubbleShieldAudioLoop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::StopBubbleShieldAudioLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.StopBubbleShieldAudioLoop");

	ABPChar_IronBear_C_StopBubbleShieldAudioLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.StartBubbleShieldAudioLoop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::StartBubbleShieldAudioLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.StartBubbleShieldAudioLoop");

	ABPChar_IronBear_C_StartBubbleShieldAudioLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.BootGunnersNestOccupant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::BootGunnersNestOccupant(bool InputPin, float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.BootGunnersNestOccupant");

	ABPChar_IronBear_C_BootGunnersNestOccupant_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delay != nullptr)
		*Delay = params.Delay;
}


// Function BPChar_IronBear.BPChar_IronBear_C.SetNewAutoBearRotationRates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::SetNewAutoBearRotationRates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.SetNewAutoBearRotationRates");

	ABPChar_IronBear_C_SetNewAutoBearRotationRates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.LockGunnerNestUsability
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::LockGunnerNestUsability()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.LockGunnerNestUsability");

	ABPChar_IronBear_C_LockGunnerNestUsability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.KickPlayerOutOfGunnersNest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           zKilled_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::KickPlayerOutOfGunnersNest(bool zKilled_, float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.KickPlayerOutOfGunnersNest");

	ABPChar_IronBear_C_KickPlayerOutOfGunnersNest_Params params;
	params.zKilled_ = zKilled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delay != nullptr)
		*Delay = params.Delay;
}


// Function BPChar_IronBear.BPChar_IronBear_C.InitNukeMod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EIronBearHardPointOrientation  NewOrientation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::InitNukeMod(EIronBearHardPointOrientation NewOrientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.InitNukeMod");

	ABPChar_IronBear_C_InitNukeMod_Params params;
	params.NewOrientation = NewOrientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.GetSurpriseForYouTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  AsActor                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::GetSurpriseForYouTarget(class AActor** AsActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.GetSurpriseForYouTarget");

	ABPChar_IronBear_C_GetSurpriseForYouTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsActor != nullptr)
		*AsActor = params.AsActor;
}


// Function BPChar_IronBear.BPChar_IronBear_C.ExitSurpriseForYouCore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::ExitSurpriseForYouCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ExitSurpriseForYouCore");

	ABPChar_IronBear_C_ExitSurpriseForYouCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.HasBubbleShield
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPChar_IronBear_C::HasBubbleShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.HasBubbleShield");

	ABPChar_IronBear_C_HasBubbleShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPChar_IronBear.BPChar_IronBear_C.Init_BubbleShieldCore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::Init_BubbleShieldCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Init_BubbleShieldCore");

	ABPChar_IronBear_C_Init_BubbleShieldCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.Init_GunnersNestCore
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::Init_GunnersNestCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Init_GunnersNestCore");

	ABPChar_IronBear_C_Init_GunnersNestCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnRep_GunnersNestOccupied
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::OnRep_GunnersNestOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnRep_GunnersNestOccupied");

	ABPChar_IronBear_C_OnRep_GunnersNestOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnRep_UseModdedBubbleShieldFX
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::OnRep_UseModdedBubbleShieldFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnRep_UseModdedBubbleShieldFX");

	ABPChar_IronBear_C_OnRep_UseModdedBubbleShieldFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.ToggleBubbleShieldCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::ToggleBubbleShieldCollision(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ToggleBubbleShieldCollision");

	ABPChar_IronBear_C_ToggleBubbleShieldCollision_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenParameter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ParamName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EIronBearDamageLevel           TriggeredLevel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::UpdateScreenParameter(const struct FName& ParamName, EIronBearDamageLevel TriggeredLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenParameter");

	ABPChar_IronBear_C_UpdateScreenParameter_Params params;
	params.ParamName = ParamName;
	params.TriggeredLevel = TriggeredLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenDamage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* ParticleSystem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EIronBearDamageLevel           TriggeredLevel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EIronBearDamageLevel           TriggeredSmokeLevel            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EIronBearDamageLevel           TriggeredFireLevel             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::UpdateScreenDamage(class UParticleSystemComponent* ParticleSystem, EIronBearDamageLevel TriggeredLevel, EIronBearDamageLevel TriggeredSmokeLevel, EIronBearDamageLevel TriggeredFireLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenDamage");

	ABPChar_IronBear_C_UpdateScreenDamage_Params params;
	params.ParticleSystem = ParticleSystem;
	params.TriggeredLevel = TriggeredLevel;
	params.TriggeredSmokeLevel = TriggeredSmokeLevel;
	params.TriggeredFireLevel = TriggeredFireLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenCrack
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* ParticleSystem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EIronBearDamageLevel           TriggeredLevel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::UpdateScreenCrack(class UParticleSystemComponent* ParticleSystem, EIronBearDamageLevel TriggeredLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenCrack");

	ABPChar_IronBear_C_UpdateScreenCrack_Params params;
	params.ParticleSystem = ParticleSystem;
	params.TriggeredLevel = TriggeredLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.PrepareIronBearForEntry
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Gunner                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::PrepareIronBearForEntry(class AOakCharacter* Gunner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.PrepareIronBearForEntry");

	ABPChar_IronBear_C_PrepareIronBearForEntry_Params params;
	params.Gunner = Gunner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.UserConstructionScript");

	ABPChar_IronBear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABPChar_IronBear_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Timeline_0__FinishedFunc");

	ABPChar_IronBear_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABPChar_IronBear_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Timeline_0__UpdateFunc");

	ABPChar_IronBear_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABPChar_IronBear_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Timeline_1__FinishedFunc");

	ABPChar_IronBear_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABPChar_IronBear_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Timeline_1__UpdateFunc");

	ABPChar_IronBear_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABPChar_IronBear_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Timeline_2__FinishedFunc");

	ABPChar_IronBear_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABPChar_IronBear_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.Timeline_2__UpdateFunc");

	ABPChar_IronBear_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_2A9499CC4F6188887CB16E840419821A
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::OnAnimEnd_2A9499CC4F6188887CB16E840419821A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_2A9499CC4F6188887CB16E840419821A");

	ABPChar_IronBear_C_OnAnimEnd_2A9499CC4F6188887CB16E840419821A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_2A9499CC4F6188887CB16E840419821A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::OnEnd_2A9499CC4F6188887CB16E840419821A(EGbxActionEndState EndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_2A9499CC4F6188887CB16E840419821A");

	ABPChar_IronBear_C_OnEnd_2A9499CC4F6188887CB16E840419821A_Params params;
	params.EndState = EndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_D554724642CB95A6F77CEEA2DFDC9FF2
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::OnAnimEnd_D554724642CB95A6F77CEEA2DFDC9FF2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_D554724642CB95A6F77CEEA2DFDC9FF2");

	ABPChar_IronBear_C_OnAnimEnd_D554724642CB95A6F77CEEA2DFDC9FF2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_D554724642CB95A6F77CEEA2DFDC9FF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::OnEnd_D554724642CB95A6F77CEEA2DFDC9FF2(EGbxActionEndState EndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_D554724642CB95A6F77CEEA2DFDC9FF2");

	ABPChar_IronBear_C_OnEnd_D554724642CB95A6F77CEEA2DFDC9FF2_Params params;
	params.EndState = EndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_A39BE65742340F11ACEF63BD04B6FCB1
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::OnAnimEnd_A39BE65742340F11ACEF63BD04B6FCB1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_A39BE65742340F11ACEF63BD04B6FCB1");

	ABPChar_IronBear_C_OnAnimEnd_A39BE65742340F11ACEF63BD04B6FCB1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_A39BE65742340F11ACEF63BD04B6FCB1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::OnEnd_A39BE65742340F11ACEF63BD04B6FCB1(EGbxActionEndState EndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_A39BE65742340F11ACEF63BD04B6FCB1");

	ABPChar_IronBear_C_OnEnd_A39BE65742340F11ACEF63BD04B6FCB1_Params params;
	params.EndState = EndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnExiting
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bInstantExit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::OnExiting(bool* bInstantExit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnExiting");

	ABPChar_IronBear_C_OnExiting_Params params;
	params.bInstantExit = bInstantExit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnExited
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AController**            OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::OnExited(class AController** OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnExited");

	ABPChar_IronBear_C_OnExited_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnExitStarted
// (Event, Protected, BlueprintEvent)

void ABPChar_IronBear_C::OnExitStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnExitStarted");

	ABPChar_IronBear_C_OnExitStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.ServerNotifyIBScreenOff
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::ServerNotifyIBScreenOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ServerNotifyIBScreenOff");

	ABPChar_IronBear_C_ServerNotifyIBScreenOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.ClientOnExiting
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::ClientOnExiting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ClientOnExiting");

	ABPChar_IronBear_C_ClientOnExiting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.SetupAutoBearDestroyCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RepDelay                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::SetupAutoBearDestroyCleanup(float RepDelay, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.SetupAutoBearDestroyCleanup");

	ABPChar_IronBear_C_SetupAutoBearDestroyCleanup_Params params;
	params.RepDelay = RepDelay;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnActionSkillActivated_IronBear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::OnActionSkillActivated_IronBear(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnActionSkillActivated_IronBear");

	ABPChar_IronBear_C_OnActionSkillActivated_IronBear_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.ManualExitCancelled
// (Event, Protected, BlueprintEvent)

void ABPChar_IronBear_C::ManualExitCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ManualExitCancelled");

	ABPChar_IronBear_C_ManualExitCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_IronBear
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_IronBear_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_IronBear(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_IronBear");

	ABPChar_IronBear_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_IronBear_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnJumped
// (Event, Public, BlueprintEvent)

void ABPChar_IronBear_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnJumped");

	ABPChar_IronBear_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABPChar_IronBear_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnLanded");

	ABPChar_IronBear_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.ActivateGundamCore
// (Event, Protected, BlueprintEvent)

void ABPChar_IronBear_C::ActivateGundamCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ActivateGundamCore");

	ABPChar_IronBear_C_ActivateGundamCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.ServerActivateGundamCore
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::ServerActivateGundamCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ServerActivateGundamCore");

	ABPChar_IronBear_C_ServerActivateGundamCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_IronBear
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_IronBear_C::BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_IronBear(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_IronBear");

	ABPChar_IronBear_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_IronBear_Params params;
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


// Function BPChar_IronBear.BPChar_IronBear_C.IBScreenOn
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::IBScreenOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.IBScreenOn");

	ABPChar_IronBear_C_IBScreenOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.IBScreenOff
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::IBScreenOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.IBScreenOff");

	ABPChar_IronBear_C_IBScreenOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.EnableDamageScreens
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::EnableDamageScreens()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.EnableDamageScreens");

	ABPChar_IronBear_C_EnableDamageScreens_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.DisableDamageScreens
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::DisableDamageScreens()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.DisableDamageScreens");

	ABPChar_IronBear_C_DisableDamageScreens_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnDamageLevelChanged
// (Event, Protected, BlueprintEvent)

void ABPChar_IronBear_C::OnDamageLevelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnDamageLevelChanged");

	ABPChar_IronBear_C_OnDamageLevelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.ActivateNukeScreenIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EIronBearHardPointOrientation  HardpointOrientation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::ActivateNukeScreenIcons(EIronBearHardPointOrientation HardpointOrientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ActivateNukeScreenIcons");

	ABPChar_IronBear_C_ActivateNukeScreenIcons_Params params;
	params.HardpointOrientation = HardpointOrientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnEntered
// (Event, Protected, BlueprintEvent)

void ABPChar_IronBear_C::OnEntered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnEntered");

	ABPChar_IronBear_C_OnEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnEnteredClient
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::OnEnteredClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnEnteredClient");

	ABPChar_IronBear_C_OnEnteredClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnEntering
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player**   InGunner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::OnEntering(class AOakCharacter_Player** InGunner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnEntering");

	ABPChar_IronBear_C_OnEntering_Params params;
	params.InGunner = InGunner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_IronBear_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ReceiveBeginPlay");

	ABPChar_IronBear_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnBubbleShieldEnabledStateChanged
// (Event, Protected, BlueprintEvent)

void ABPChar_IronBear_C::OnBubbleShieldEnabledStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnBubbleShieldEnabledStateChanged");

	ABPChar_IronBear_C_OnBubbleShieldEnabledStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.SetBubbleShieldFXModOverrideEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::SetBubbleShieldFXModOverrideEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.SetBubbleShieldFXModOverrideEnabled");

	ABPChar_IronBear_C_SetBubbleShieldFXModOverrideEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__DestructibleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_IronBear
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABPChar_IronBear_C::BndEvt__DestructibleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_IronBear(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__DestructibleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_IronBear");

	ABPChar_IronBear_C_BndEvt__DestructibleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_IronBear_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.OnAttachStateChanged_GunnersNest
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::OnAttachStateChanged_GunnersNest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.OnAttachStateChanged_GunnersNest");

	ABPChar_IronBear_C_OnAttachStateChanged_GunnersNest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.StartDigistructIn
// (Event, Protected, BlueprintEvent)

void ABPChar_IronBear_C::StartDigistructIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.StartDigistructIn");

	ABPChar_IronBear_C_StartDigistructIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ReceiveEndPlay");

	ABPChar_IronBear_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.IronBear_DoMeleeAttack
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::IronBear_DoMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.IronBear_DoMeleeAttack");

	ABPChar_IronBear_C_IronBear_DoMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.UnlockResourceGod
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::UnlockResourceGod()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.UnlockResourceGod");

	ABPChar_IronBear_C_UnlockResourceGod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.StopBubbleShield
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_C::StopBubbleShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.StopBubbleShield");

	ABPChar_IronBear_C_StopBubbleShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear.BPChar_IronBear_C.ExecuteUbergraph_BPChar_IronBear
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_C::ExecuteUbergraph_BPChar_IronBear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear.BPChar_IronBear_C.ExecuteUbergraph_BPChar_IronBear");

	ABPChar_IronBear_C_ExecuteUbergraph_BPChar_IronBear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
