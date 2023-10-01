// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_RakkAttack_Rakk_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHitTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SourceActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::SetHitTarget(class AActor* SourceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHitTarget");

	AProjectile_RakkAttack_Rakk_C_SetHitTarget_Params params;
	params.SourceActor = SourceActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHomingAndLocationWithDelay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::SetHomingAndLocationWithDelay(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHomingAndLocationWithDelay");

	AProjectile_RakkAttack_Rakk_C_SetHomingAndLocationWithDelay_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ChooseTargetFromSet
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>          SetRef                         (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::ChooseTargetFromSet(TArray<class AActor*>* SetRef, class AActor** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ChooseTargetFromSet");

	AProjectile_RakkAttack_Rakk_C_ChooseTargetFromSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SetRef != nullptr)
		*SetRef = params.SetRef;
	if (res != nullptr)
		*res = params.res;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.FindNewTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::FindNewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.FindNewTarget");

	AProjectile_RakkAttack_Rakk_C_FindNewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReleaseCurrentHomingTarget
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::ReleaseCurrentHomingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReleaseCurrentHomingTarget");

	AProjectile_RakkAttack_Rakk_C_ReleaseCurrentHomingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnRep_bReturningToOwner
// (BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::OnRep_bReturningToOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnRep_bReturningToOwner");

	AProjectile_RakkAttack_Rakk_C_OnRep_bReturningToOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoMod1Heal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::DoMod1Heal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoMod1Heal");

	AProjectile_RakkAttack_Rakk_C_DoMod1Heal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.HasHomingTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::HasHomingTarget(bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.HasHomingTarget");

	AProjectile_RakkAttack_Rakk_C_HasHomingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupRakkElement
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::SetupRakkElement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupRakkElement");

	AProjectile_RakkAttack_Rakk_C_SetupRakkElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupElementalMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         PassiveParticle                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::SetupElementalMaterials(class UMaterialInstance* Material, class UParticleSystem* PassiveParticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupElementalMaterials");

	AProjectile_RakkAttack_Rakk_C_SetupElementalMaterials_Params params;
	params.Material = Material;
	params.PassiveParticle = PassiveParticle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoPreDestroyCleanup
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::DoPreDestroyCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoPreDestroyCleanup");

	AProjectile_RakkAttack_Rakk_C_DoPreDestroyCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupMod1Transfusion
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::SetupMod1Transfusion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupMod1Transfusion");

	AProjectile_RakkAttack_Rakk_C_SetupMod1Transfusion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.InitAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::InitAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.InitAudio");

	AProjectile_RakkAttack_Rakk_C_InitAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHomingAndLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::SetHomingAndLocation(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHomingAndLocation");

	AProjectile_RakkAttack_Rakk_C_SetHomingAndLocation_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::DoRakkDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDamage");

	AProjectile_RakkAttack_Rakk_C_DoRakkDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.UserConstructionScript");

	AProjectile_RakkAttack_Rakk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnAnimEnd_A3A042B947729CE01D4C998DA75FCBF4
// (BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::OnAnimEnd_A3A042B947729CE01D4C998DA75FCBF4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnAnimEnd_A3A042B947729CE01D4C998DA75FCBF4");

	AProjectile_RakkAttack_Rakk_C_OnAnimEnd_A3A042B947729CE01D4C998DA75FCBF4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnEnd_A3A042B947729CE01D4C998DA75FCBF4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::OnEnd_A3A042B947729CE01D4C998DA75FCBF4(EGbxActionEndState EndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnEnd_A3A042B947729CE01D4C998DA75FCBF4");

	AProjectile_RakkAttack_Rakk_C_OnEnd_A3A042B947729CE01D4C998DA75FCBF4_Params params;
	params.EndState = EndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnAnimEnd_D54427794086CD24870288B0EF46744B
// (BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::OnAnimEnd_D54427794086CD24870288B0EF46744B()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnAnimEnd_D54427794086CD24870288B0EF46744B");

	AProjectile_RakkAttack_Rakk_C_OnAnimEnd_D54427794086CD24870288B0EF46744B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnEnd_D54427794086CD24870288B0EF46744B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::OnEnd_D54427794086CD24870288B0EF46744B(EGbxActionEndState EndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnEnd_D54427794086CD24870288B0EF46744B");

	AProjectile_RakkAttack_Rakk_C_OnEnd_D54427794086CD24870288B0EF46744B_Params params;
	params.EndState = EndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReceiveBeginPlay");

	AProjectile_RakkAttack_Rakk_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnHitDamagableObject");

	AProjectile_RakkAttack_Rakk_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnHitWorld");

	AProjectile_RakkAttack_Rakk_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnExplode");

	AProjectile_RakkAttack_Rakk_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_PetJabbermon_Rakk_Return1
// (BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_PetJabbermon_Rakk_Return1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_PetJabbermon_Rakk_Return1");

	AProjectile_RakkAttack_Rakk_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_PetJabbermon_Rakk_Return1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDestroyCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WantsNiceCleanup               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::DoRakkDestroyCleanup(bool WantsNiceCleanup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDestroyCleanup");

	AProjectile_RakkAttack_Rakk_C_DoRakkDestroyCleanup_Params params;
	params.WantsNiceCleanup = WantsNiceCleanup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupRuntimeMods
// (Event, Protected, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::SetupRuntimeMods()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupRuntimeMods");

	AProjectile_RakkAttack_Rakk_C_SetupRuntimeMods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDigistructIn
// (BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::DoRakkDigistructIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDigistructIn");

	AProjectile_RakkAttack_Rakk_C_DoRakkDigistructIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetNewHomingTarget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 NewHomingTarget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::SetNewHomingTarget(class AActor** NewHomingTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetNewHomingTarget");

	AProjectile_RakkAttack_Rakk_C_SetNewHomingTarget_Params params;
	params.NewHomingTarget = NewHomingTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnDeath_ProjectileHomingTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::OnDeath_ProjectileHomingTarget(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnDeath_ProjectileHomingTarget");

	AProjectile_RakkAttack_Rakk_C_OnDeath_ProjectileHomingTarget_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.StartNewTargetSearch
// (BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::StartNewTargetSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.StartNewTargetSearch");

	AProjectile_RakkAttack_Rakk_C_StartNewTargetSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReturnToOwner
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_C::ReturnToOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReturnToOwner");

	AProjectile_RakkAttack_Rakk_C_ReturnToOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetNewHomingTargetWithDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NewHomingTarget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::SetNewHomingTargetWithDelay(float Delay, class AActor* NewHomingTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetNewHomingTargetWithDelay");

	AProjectile_RakkAttack_Rakk_C_SetNewHomingTargetWithDelay_Params params;
	params.Delay = Delay;
	params.NewHomingTarget = NewHomingTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk
// (BlueprintEvent)
// Parameters:
// class AActor*                  TouchingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ComponentTouched               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk");

	AProjectile_RakkAttack_Rakk_C_BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_Params params;
	params.TouchingActor = TouchingActor;
	params.bIsPlayer = bIsPlayer;
	params.ComponentTouched = ComponentTouched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ExecuteUbergraph_Projectile_RakkAttack_Rakk
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_C::ExecuteUbergraph_Projectile_RakkAttack_Rakk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ExecuteUbergraph_Projectile_RakkAttack_Rakk");

	AProjectile_RakkAttack_Rakk_C_ExecuteUbergraph_Projectile_RakkAttack_Rakk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
