// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_VarkidShared_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_GetElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              VarkidElement                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidShared_C::Varkid_GetElement(EOakElementalType* VarkidElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_GetElement");

	ABPChar_VarkidShared_C_Varkid_GetElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VarkidElement != nullptr)
		*VarkidElement = params.VarkidElement;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_HasNavForEvolve
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidShared_C::Varkid_HasNavForEvolve(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_HasNavForEvolve");

	ABPChar_VarkidShared_C_Varkid_HasNavForEvolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_GetIsInPod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInPod_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidShared_C::Varkid_GetIsInPod(bool* IsInPod_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_GetIsInPod");

	ABPChar_VarkidShared_C_Varkid_GetIsInPod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInPod_ != nullptr)
		*IsInPod_ = params.IsInPod_;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_SetUINameByElement
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::Varkid_SetUINameByElement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_SetUINameByElement");

	ABPChar_VarkidShared_C_Varkid_SetUINameByElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.GetEvolveSpawnOption
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USpawnOptionData*        Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidShared_C::GetEvolveSpawnOption(class USpawnOptionData** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.GetEvolveSpawnOption");

	ABPChar_VarkidShared_C_GetEvolveSpawnOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.DetermineNaturalEvolutionElligibility
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::DetermineNaturalEvolutionElligibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.DetermineNaturalEvolutionElligibility");

	ABPChar_VarkidShared_C_DetermineNaturalEvolutionElligibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.UserConstructionScript");

	ABPChar_VarkidShared_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.GbxAsyncRequest_Spawned_81E6B93A454EA2E4DE809599AAF2220A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidShared_C::GbxAsyncRequest_Spawned_81E6B93A454EA2E4DE809599AAF2220A(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.GbxAsyncRequest_Spawned_81E6B93A454EA2E4DE809599AAF2220A");

	ABPChar_VarkidShared_C_GbxAsyncRequest_Spawned_81E6B93A454EA2E4DE809599AAF2220A_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.OnAnimEnd_F079A9F742D4D1C54D3AA5A416E2371B
// (BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::OnAnimEnd_F079A9F742D4D1C54D3AA5A416E2371B()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.OnAnimEnd_F079A9F742D4D1C54D3AA5A416E2371B");

	ABPChar_VarkidShared_C_OnAnimEnd_F079A9F742D4D1C54D3AA5A416E2371B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.OnEnd_F079A9F742D4D1C54D3AA5A416E2371B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidShared_C::OnEnd_F079A9F742D4D1C54D3AA5A416E2371B(EGbxActionEndState EndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.OnEnd_F079A9F742D4D1C54D3AA5A416E2371B");

	ABPChar_VarkidShared_C_OnEnd_F079A9F742D4D1C54D3AA5A416E2371B_Params params;
	params.EndState = EndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_SetBurrowed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBurrowed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidShared_C::Varkid_SetBurrowed(bool IsBurrowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_SetBurrowed");

	ABPChar_VarkidShared_C_Varkid_SetBurrowed_Params params;
	params.IsBurrowed = IsBurrowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_TargetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidShared_C::Varkid_TargetChanged(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_TargetChanged");

	ABPChar_VarkidShared_C_Varkid_TargetChanged_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_EnableRibbon
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::Varkid_EnableRibbon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_EnableRibbon");

	ABPChar_VarkidShared_C_Varkid_EnableRibbon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_DisableRibbon
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::Varkid_DisableRibbon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_DisableRibbon");

	ABPChar_VarkidShared_C_Varkid_DisableRibbon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_DestroyRibbon
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::Varkid_DestroyRibbon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_DestroyRibbon");

	ABPChar_VarkidShared_C_Varkid_DestroyRibbon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_BreathAttackStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::Varkid_BreathAttackStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_BreathAttackStart");

	ABPChar_VarkidShared_C_Varkid_BreathAttackStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_BreathAttackStop
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::Varkid_BreathAttackStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_BreathAttackStop");

	ABPChar_VarkidShared_C_Varkid_BreathAttackStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_Evolve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_VarkidEvolution> EvolveTo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USpawnOptionData*        CustomSpawnOption              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxUIName*              CustomPodUIName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidShared_C::Varkid_Evolve(TEnumAsByte<Enum_VarkidEvolution> EvolveTo, class USpawnOptionData* CustomSpawnOption, class UGbxUIName* CustomPodUIName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_Evolve");

	ABPChar_VarkidShared_C_Varkid_Evolve_Params params;
	params.EvolveTo = EvolveTo;
	params.CustomSpawnOption = CustomSpawnOption;
	params.CustomPodUIName = CustomPodUIName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.CE_VarkidPodSpawnChild
// (BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::CE_VarkidPodSpawnChild()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.CE_VarkidPodSpawnChild");

	ABPChar_VarkidShared_C_CE_VarkidPodSpawnChild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.CE_VarkidPodAnimate
// (BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::CE_VarkidPodAnimate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.CE_VarkidPodAnimate");

	ABPChar_VarkidShared_C_CE_VarkidPodAnimate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.CE_VarkidNaturalPodDeath
// (BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::CE_VarkidNaturalPodDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.CE_VarkidNaturalPodDeath");

	ABPChar_VarkidShared_C_CE_VarkidNaturalPodDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.VarkidPod_PodAppears
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::VarkidPod_PodAppears()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.VarkidPod_PodAppears");

	ABPChar_VarkidShared_C_VarkidPod_PodAppears_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.VarkidPod_HideBody
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::VarkidPod_HideBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.VarkidPod_HideBody");

	ABPChar_VarkidShared_C_VarkidPod_HideBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.VarkidPod_Burst
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::VarkidPod_Burst()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.VarkidPod_Burst");

	ABPChar_VarkidShared_C_VarkidPod_Burst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_VarkidShared_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.ReceiveBeginPlay");

	ABPChar_VarkidShared_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_VarkidShared
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidShared_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_VarkidShared(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_VarkidShared");

	ABPChar_VarkidShared_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_VarkidShared_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_IsFlying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFlying                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidShared_C::Varkid_IsFlying(bool IsFlying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_IsFlying");

	ABPChar_VarkidShared_C_Varkid_IsFlying_Params params;
	params.IsFlying = IsFlying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_AddPoisonScreenFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScreenParticleManagerComponent* PlayerScreenFXManager          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_VarkidShared_C::Varkid_AddPoisonScreenFX(class UScreenParticleManagerComponent* PlayerScreenFXManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_AddPoisonScreenFX");

	ABPChar_VarkidShared_C_Varkid_AddPoisonScreenFX_Params params;
	params.PlayerScreenFXManager = PlayerScreenFXManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_NonTechDeath
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidShared_C::Varkid_NonTechDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_NonTechDeath");

	ABPChar_VarkidShared_C_Varkid_NonTechDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.ExecuteUbergraph_BPChar_VarkidShared
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidShared_C::ExecuteUbergraph_BPChar_VarkidShared(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.ExecuteUbergraph_BPChar_VarkidShared");

	ABPChar_VarkidShared_C_ExecuteUbergraph_BPChar_VarkidShared_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_VarkidShared.BPChar_VarkidShared_C.OnSpawnedActorFromVarkidPod__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedChildActor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_VarkidShared_C::OnSpawnedActorFromVarkidPod__DelegateSignature(class AActor* SpawnedChildActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidShared.BPChar_VarkidShared_C.OnSpawnedActorFromVarkidPod__DelegateSignature");

	ABPChar_VarkidShared_C_OnSpawnedActorFromVarkidPod__DelegateSignature_Params params;
	params.SpawnedChildActor = SpawnedChildActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
