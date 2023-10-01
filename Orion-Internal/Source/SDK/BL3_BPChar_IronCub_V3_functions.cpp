// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_IronCub_V3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_SpecialistBear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::Init_SpecialistBear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_SpecialistBear");

	ABPChar_IronCub_V3_C_Init_SpecialistBear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_DakkaBearCore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::Init_DakkaBearCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_DakkaBearCore");

	ABPChar_IronCub_V3_C_Init_DakkaBearCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.GetSurpriseForYouTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  AsActor                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::GetSurpriseForYouTarget(class AActor** AsActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.GetSurpriseForYouTarget");

	ABPChar_IronCub_V3_C_GetSurpriseForYouTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsActor != nullptr)
		*AsActor = params.AsActor;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ExitSurpriseForYouCore
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::ExitSurpriseForYouCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ExitSurpriseForYouCore");

	ABPChar_IronCub_V3_C_ExitSurpriseForYouCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnRep_bAutoBearStarted
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::OnRep_bAutoBearStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnRep_bAutoBearStarted");

	ABPChar_IronCub_V3_C_OnRep_bAutoBearStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.CalculateAutoBearDuration
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::CalculateAutoBearDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.CalculateAutoBearDuration");

	ABPChar_IronCub_V3_C_CalculateAutoBearDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetNewAutoBearRotationRates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::SetNewAutoBearRotationRates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetNewAutoBearRotationRates");

	ABPChar_IronCub_V3_C_SetNewAutoBearRotationRates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnRep_UseModdedBubbleShieldFX
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::OnRep_UseModdedBubbleShieldFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnRep_UseModdedBubbleShieldFX");

	ABPChar_IronCub_V3_C_OnRep_UseModdedBubbleShieldFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.PrepareIronBearForEntry
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::PrepareIronBearForEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.PrepareIronBearForEntry");

	ABPChar_IronCub_V3_C_PrepareIronBearForEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.HasBubbleShield
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPChar_IronCub_V3_C::HasBubbleShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.HasBubbleShield");

	ABPChar_IronCub_V3_C_HasBubbleShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_BubbleShieldCore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::Init_BubbleShieldCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_BubbleShieldCore");

	ABPChar_IronCub_V3_C_Init_BubbleShieldCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ToggleBubbleShieldCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::ToggleBubbleShieldCollision(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ToggleBubbleShieldCollision");

	ABPChar_IronCub_V3_C_ToggleBubbleShieldCollision_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.StopBubbleShieldAudioLoop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::StopBubbleShieldAudioLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.StopBubbleShieldAudioLoop");

	ABPChar_IronCub_V3_C_StopBubbleShieldAudioLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.StartBubbleShieldAudioLoop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::StartBubbleShieldAudioLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.StartBubbleShieldAudioLoop");

	ABPChar_IronCub_V3_C_StartBubbleShieldAudioLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.LockResources
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::LockResources(bool Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.LockResources");

	ABPChar_IronCub_V3_C_LockResources_Params params;
	params.Locked = Locked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.TestAugment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOakActionAbilityAugmentData* Augment                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::TestAugment(class UOakActionAbilityAugmentData* Augment, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.TestAugment");

	ABPChar_IronCub_V3_C_TestAugment_Params params;
	params.Augment = Augment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod4_ReleaseNuke
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::Mod4_ReleaseNuke()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod4_ReleaseNuke");

	ABPChar_IronCub_V3_C_Mod4_ReleaseNuke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod2_OnCausedElementalEffect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FStatusEffectSpec       Spec                           (BlueprintVisible, Parm, OutParm, ReferenceParm)

void ABPChar_IronCub_V3_C::Mod2_OnCausedElementalEffect(class AActor* Causer, struct FStatusEffectSpec* Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod2_OnCausedElementalEffect");

	ABPChar_IronCub_V3_C_Mod2_OnCausedElementalEffect_Params params;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spec != nullptr)
		*Spec = params.Spec;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod1_Cleanup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       OakActionAbility               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::Mod1_Cleanup(class UOakActionAbility* OakActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod1_Cleanup");

	ABPChar_IronCub_V3_C_Mod1_Cleanup_Params params;
	params.OakActionAbility = OakActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod1_AddStack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::Mod1_AddStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod1_AddStack");

	ABPChar_IronCub_V3_C_Mod1_AddStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.GetWeaponUserForWeaponSlot
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWeaponSlotData**        SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAIWeaponUserComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIWeaponUserComponent* ABPChar_IronCub_V3_C::GetWeaponUserForWeaponSlot(class UWeaponSlotData** SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.GetWeaponUserForWeaponSlot");

	ABPChar_IronCub_V3_C_GetWeaponUserForWeaponSlot_Params params;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.TestHardpoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOakActionAbilityAugmentData* Hard_Point                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::TestHardpoint(class UOakActionAbilityAugmentData* Hard_Point, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.TestHardpoint");

	ABPChar_IronCub_V3_C_TestHardpoint_Params params;
	params.Hard_Point = Hard_Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetBlackboard_Aggro
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Toggle                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::SetBlackboard_Aggro(bool Toggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetBlackboard_Aggro");

	ABPChar_IronCub_V3_C_SetBlackboard_Aggro_Params params;
	params.Toggle = Toggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetupHardpointBlackboard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbilityAugmentSlotData* Hard_Point_Slot                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::SetupHardpointBlackboard(class UOakActionAbilityAugmentSlotData* Hard_Point_Slot, class UClass** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetupHardpointBlackboard");

	ABPChar_IronCub_V3_C_SetupHardpointBlackboard_Params params;
	params.Hard_Point_Slot = Hard_Point_Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.UserConstructionScript");

	ABPChar_IronCub_V3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnAnimEnd_97D044764693DA850AC80F83C4B2EAE6
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::OnAnimEnd_97D044764693DA850AC80F83C4B2EAE6()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnAnimEnd_97D044764693DA850AC80F83C4B2EAE6");

	ABPChar_IronCub_V3_C_OnAnimEnd_97D044764693DA850AC80F83C4B2EAE6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnEnd_97D044764693DA850AC80F83C4B2EAE6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::OnEnd_97D044764693DA850AC80F83C4B2EAE6(EGbxActionEndState EndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnEnd_97D044764693DA850AC80F83C4B2EAE6");

	ABPChar_IronCub_V3_C_OnEnd_97D044764693DA850AC80F83C4B2EAE6_Params params;
	params.EndState = EndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronBearDurationDepleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_IronCub_V3_C::IronBearDurationDepleted(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronBearDurationDepleted");

	ABPChar_IronCub_V3_C_IronBearDurationDepleted_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetupAutoBearDestroyCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RepDelay                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::SetupAutoBearDestroyCleanup(float RepDelay, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetupAutoBearDestroyCleanup");

	ABPChar_IronCub_V3_C_SetupAutoBearDestroyCleanup_Params params;
	params.RepDelay = RepDelay;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.EndAutoBear
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::EndAutoBear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.EndAutoBear");

	ABPChar_IronCub_V3_C_EndAutoBear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.DestroyIronCub
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::DestroyIronCub()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.DestroyIronCub");

	ABPChar_IronCub_V3_C_DestroyIronCub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronCub_OnActionSkillCoolingDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::IronCub_OnActionSkillCoolingDown(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronCub_OnActionSkillCoolingDown");

	ABPChar_IronCub_V3_C_IronCub_OnActionSkillCoolingDown_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_IronCub_V2
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_IronCub_V2(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_IronCub_V2");

	ABPChar_IronCub_V3_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_IronCub_V2_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_IronCub_V3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ReceiveBeginPlay");

	ABPChar_IronCub_V3_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnAggro_PlayerPets
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::OnAggro_PlayerPets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnAggro_PlayerPets");

	ABPChar_IronCub_V3_C_OnAggro_PlayerPets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnDeAggro_PlayerPets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AggroDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::OnDeAggro_PlayerPets(float AggroDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnDeAggro_PlayerPets");

	ABPChar_IronCub_V3_C_OnDeAggro_PlayerPets_Params params;
	params.AggroDuration = AggroDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnExitStarted
// (Event, Protected, BlueprintEvent)

void ABPChar_IronCub_V3_C::OnExitStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnExitStarted");

	ABPChar_IronCub_V3_C_OnExitStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronBear_DoMeleeAttack
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_IronCub_V3_C::IronBear_DoMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronBear_DoMeleeAttack");

	ABPChar_IronCub_V3_C_IronBear_DoMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ActivateNukeScreenIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EIronBearHardPointOrientation  HardpointOrientation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::ActivateNukeScreenIcons(EIronBearHardPointOrientation HardpointOrientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ActivateNukeScreenIcons");

	ABPChar_IronCub_V3_C_ActivateNukeScreenIcons_Params params;
	params.HardpointOrientation = HardpointOrientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetBubbleShieldFXModOverrideEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::SetBubbleShieldFXModOverrideEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetBubbleShieldFXModOverrideEnabled");

	ABPChar_IronCub_V3_C_SetBubbleShieldFXModOverrideEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnBubbleShieldEnabledStateChanged
// (Event, Protected, BlueprintEvent)

void ABPChar_IronCub_V3_C::OnBubbleShieldEnabledStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnBubbleShieldEnabledStateChanged");

	ABPChar_IronCub_V3_C_OnBubbleShieldEnabledStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnActionSkillActivated_IronBear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::OnActionSkillActivated_IronBear(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnActionSkillActivated_IronBear");

	ABPChar_IronCub_V3_C_OnActionSkillActivated_IronBear_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_IronCub_V3
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABPChar_IronCub_V3_C::BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_IronCub_V3(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_IronCub_V3");

	ABPChar_IronCub_V3_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_IronCub_V3_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Player_OnLevelUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OldExperienceLevel             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewExperienceLevel             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::Player_OnLevelUp(int OldExperienceLevel, int NewExperienceLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Player_OnLevelUp");

	ABPChar_IronCub_V3_C_Player_OnLevelUp_Params params;
	params.OldExperienceLevel = OldExperienceLevel;
	params.NewExperienceLevel = NewExperienceLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ExecuteUbergraph_BPChar_IronCub_V3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronCub_V3_C::ExecuteUbergraph_BPChar_IronCub_V3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ExecuteUbergraph_BPChar_IronCub_V3");

	ABPChar_IronCub_V3_C_ExecuteUbergraph_BPChar_IronCub_V3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
