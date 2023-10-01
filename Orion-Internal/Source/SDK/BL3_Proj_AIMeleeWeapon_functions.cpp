// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_AIMeleeWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIHeldActor_GetElementalType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EOakElementalType AProj_AIMeleeWeapon_C::AIHeldActor_GetElementalType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIHeldActor_GetElementalType");

	AProj_AIMeleeWeapon_C_AIHeldActor_GetElementalType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIMelee_GetElementalTypeFromMeleeWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              MeleeWeaponElement             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_AIMeleeWeapon_C::AIMelee_GetElementalTypeFromMeleeWeapon(EOakElementalType* MeleeWeaponElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIMelee_GetElementalTypeFromMeleeWeapon");

	AProj_AIMeleeWeapon_C_AIMelee_GetElementalTypeFromMeleeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MeleeWeaponElement != nullptr)
		*MeleeWeaponElement = params.MeleeWeaponElement;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.CauseDamageOnImpact
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_AIMeleeWeapon_C::CauseDamageOnImpact(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.CauseDamageOnImpact");

	AProj_AIMeleeWeapon_C_CauseDamageOnImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_AIMeleeWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.UserConstructionScript");

	AProj_AIMeleeWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIHeldActor_OnDrop
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_AIMeleeWeapon_C::AIHeldActor_OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIHeldActor_OnDrop");

	AProj_AIMeleeWeapon_C_AIHeldActor_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIHeldActor_OnPrime
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_AIMeleeWeapon_C::AIHeldActor_OnPrime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIHeldActor_OnPrime");

	AProj_AIMeleeWeapon_C_AIHeldActor_OnPrime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIHeldActor_OnThrow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_AIMeleeWeapon_C::AIHeldActor_OnThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIHeldActor_OnThrow");

	AProj_AIMeleeWeapon_C_AIHeldActor_OnThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIMelee_Spawn
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_AIMeleeWeapon_C::AIMelee_Spawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIMelee_Spawn");

	AProj_AIMeleeWeapon_C_AIMelee_Spawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIMelee_Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RequestNewMeleeWeapon          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_AIMeleeWeapon_C::AIMelee_Drop(bool RequestNewMeleeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIMelee_Drop");

	AProj_AIMeleeWeapon_C_AIMelee_Drop_Params params;
	params.RequestNewMeleeWeapon = RequestNewMeleeWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIMelee_ThrowAtTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ThrowSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowAnglePercent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetSocket                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                ThrowAngleOffset               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MaxPrediction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequestNewMeleeWeapon          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnIfDoesntExist             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_AIMeleeWeapon_C::AIMelee_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const struct FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIMelee_ThrowAtTarget");

	AProj_AIMeleeWeapon_C_AIMelee_ThrowAtTarget_Params params;
	params.ThrowSpeed = ThrowSpeed;
	params.ThrowAnglePercent = ThrowAnglePercent;
	params.TargetSocket = TargetSocket;
	params.TargetOffset = TargetOffset;
	params.ThrowAngleOffset = ThrowAngleOffset;
	params.MaxPrediction = MaxPrediction;
	params.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
	params.SpawnIfDoesntExist = SpawnIfDoesntExist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIMelee_ThrowAtActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToThrowAt                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowAnglePercentage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActorSocket                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorOffset                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                ThrowAngleOffset               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MaxPrediction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequestNewMeleeWeapon          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnIfDoesntExist             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_AIMeleeWeapon_C::AIMelee_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const struct FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIMelee_ThrowAtActor");

	AProj_AIMeleeWeapon_C_AIMelee_ThrowAtActor_Params params;
	params.ActorToThrowAt = ActorToThrowAt;
	params.ThrowSpeed = ThrowSpeed;
	params.ThrowAnglePercentage = ThrowAnglePercentage;
	params.ActorSocket = ActorSocket;
	params.ActorOffset = ActorOffset;
	params.ThrowAngleOffset = ThrowAngleOffset;
	params.MaxPrediction = MaxPrediction;
	params.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
	params.SpawnIfDoesntExist = SpawnIfDoesntExist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIMelee_ThrowAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LocationToThrowAt              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ThrowSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowAnglePercentage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequestNewMeleeWeapon          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnIfDoesntExist             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_AIMeleeWeapon_C::AIMelee_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIMelee_ThrowAtLocation");

	AProj_AIMeleeWeapon_C_AIMelee_ThrowAtLocation_Params params;
	params.LocationToThrowAt = LocationToThrowAt;
	params.ThrowSpeed = ThrowSpeed;
	params.ThrowAnglePercentage = ThrowAnglePercentage;
	params.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
	params.SpawnIfDoesntExist = SpawnIfDoesntExist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIMelee_SetNewMeleeWeaponClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewMeleeWeaponClass            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_AIMeleeWeapon_C::AIMelee_SetNewMeleeWeaponClass(class UClass* NewMeleeWeaponClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.AIMelee_SetNewMeleeWeaponClass");

	AProj_AIMeleeWeapon_C_AIMelee_SetNewMeleeWeaponClass_Params params;
	params.NewMeleeWeaponClass = NewMeleeWeaponClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.HNT_Prime
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_AIMeleeWeapon_C::HNT_Prime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.HNT_Prime");

	AProj_AIMeleeWeapon_C_HNT_Prime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_AIMeleeWeapon_C::BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee");

	AProj_AIMeleeWeapon_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.HNT_Throw
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_AIMeleeWeapon_C::HNT_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.HNT_Throw");

	AProj_AIMeleeWeapon_C_HNT_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_AIMeleeWeapon_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.OnHitWorld");

	AProj_AIMeleeWeapon_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.BndEvt__MeleeMesh_K2Node_ComponentBoundEvent_11_ComponentSleepSignature__DelegateSignature_Proj_Melee
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     SleepingComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_AIMeleeWeapon_C::BndEvt__MeleeMesh_K2Node_ComponentBoundEvent_11_ComponentSleepSignature__DelegateSignature_Proj_Melee(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.BndEvt__MeleeMesh_K2Node_ComponentBoundEvent_11_ComponentSleepSignature__DelegateSignature_Proj_Melee");

	AProj_AIMeleeWeapon_C_BndEvt__MeleeMesh_K2Node_ComponentBoundEvent_11_ComponentSleepSignature__DelegateSignature_Proj_Melee_Params params;
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.HNT_Drop
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_AIMeleeWeapon_C::HNT_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.HNT_Drop");

	AProj_AIMeleeWeapon_C_HNT_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.OnHitEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_AIMeleeWeapon_C::OnHitEnemy(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.OnHitEnemy");

	AProj_AIMeleeWeapon_C_OnHitEnemy_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.OnHitFriendly
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_AIMeleeWeapon_C::OnHitFriendly(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.OnHitFriendly");

	AProj_AIMeleeWeapon_C_OnHitFriendly_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.OnHitNeutral
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_AIMeleeWeapon_C::OnHitNeutral(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.OnHitNeutral");

	AProj_AIMeleeWeapon_C_OnHitNeutral_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.ExecuteUbergraph_Proj_AIMeleeWeapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_AIMeleeWeapon_C::ExecuteUbergraph_Proj_AIMeleeWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_AIMeleeWeapon.Proj_AIMeleeWeapon_C.ExecuteUbergraph_Proj_AIMeleeWeapon");

	AProj_AIMeleeWeapon_C_ExecuteUbergraph_Proj_AIMeleeWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
