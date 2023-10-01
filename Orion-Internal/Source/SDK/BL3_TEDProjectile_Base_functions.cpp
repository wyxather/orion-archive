// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectileDetonate
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::AIProjectileDetonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectileDetonate");

	ATEDProjectile_Base_C_AIProjectileDetonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.DialogueTargetSearch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::DialogueTargetSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.DialogueTargetSearch");

	ATEDProjectile_Base_C_DialogueTargetSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.DialogueThrown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::DialogueThrown()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.DialogueThrown");

	ATEDProjectile_Base_C_DialogueThrown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.SetExplosionRadius
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::SetExplosionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.SetExplosionRadius");

	ATEDProjectile_Base_C_SetExplosionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectile_CanBeStolen
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATEDProjectile_Base_C::AIProjectile_CanBeStolen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectile_CanBeStolen");

	ATEDProjectile_Base_C_AIProjectile_CanBeStolen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectileArm
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::AIProjectileArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectileArm");

	ATEDProjectile_Base_C_AIProjectileArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectileDisarm
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::AIProjectileDisarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectileDisarm");

	ATEDProjectile_Base_C_AIProjectileDisarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.CalculateExplosionDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float*                         DamagePerShot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           BulletsPerShot                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATEDProjectile_Base_C::CalculateExplosionDamage(float* DamagePerShot, int* BulletsPerShot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.CalculateExplosionDamage");

	ATEDProjectile_Base_C_CalculateExplosionDamage_Params params;
	params.DamagePerShot = DamagePerShot;
	params.BulletsPerShot = BulletsPerShot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.RemoveAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ThrowType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_Base_C::RemoveAmmo(int* ThrowType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.RemoveAmmo");

	ATEDProjectile_Base_C_RemoveAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ThrowType != nullptr)
		*ThrowType = params.ThrowType;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.SpawnRotationandOffset
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void ATEDProjectile_Base_C::SpawnRotationandOffset(const struct FVector& Location, const struct FVector& HitNormal, const struct FVector& Normal, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.SpawnRotationandOffset");

	ATEDProjectile_Base_C_SpawnRotationandOffset_Params params;
	params.Location = Location;
	params.HitNormal = HitNormal;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.InitCombo
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::InitCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.InitCombo");

	ATEDProjectile_Base_C_InitCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.StabilizerFXandAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::StabilizerFXandAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.StabilizerFXandAudio");

	ATEDProjectile_Base_C_StabilizerFXandAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.StabilizerBoostBouncy
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::StabilizerBoostBouncy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.StabilizerBoostBouncy");

	ATEDProjectile_Base_C_StabilizerBoostBouncy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.StabilizerBoost
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::StabilizerBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.StabilizerBoost");

	ATEDProjectile_Base_C_StabilizerBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.InitHoming
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::InitHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.InitHoming");

	ATEDProjectile_Base_C_InitHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.InitRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ThrowStyle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_Base_C::InitRotation(int ThrowStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.InitRotation");

	ATEDProjectile_Base_C_InitRotation_Params params;
	params.ThrowStyle = ThrowStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.InitStabilizer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::InitStabilizer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.InitStabilizer");

	ATEDProjectile_Base_C_InitStabilizer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.FuelOut
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::FuelOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.FuelOut");

	ATEDProjectile_Base_C_FuelOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.UserConstructionScript");

	ATEDProjectile_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATEDProjectile_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.ReceiveBeginPlay");

	ATEDProjectile_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATEDProjectile_Base_C::BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base");

	ATEDProjectile_Base_C_BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.OnBehaviorInitialized
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass**                 BehaviorClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_Base_C::OnBehaviorInitialized(class UClass** BehaviorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.OnBehaviorInitialized");

	ATEDProjectile_Base_C_OnBehaviorInitialized_Params params;
	params.BehaviorClass = BehaviorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATEDProjectile_Base_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.ReceiveHit");

	ATEDProjectile_Base_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.HomingThrust
// (BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::HomingThrust()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.HomingThrust");

	ATEDProjectile_Base_C_HomingThrust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectile_Arm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::AIProjectile_Arm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectile_Arm");

	ATEDProjectile_Base_C_AIProjectile_Arm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.EnableDrunk
// (BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::EnableDrunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.EnableDrunk");

	ATEDProjectile_Base_C_EnableDrunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectile_Disarm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::AIProjectile_Disarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectile_Disarm");

	ATEDProjectile_Base_C_AIProjectile_Disarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.FuseExpired
// (BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Base_C::FuseExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.FuseExpired");

	ATEDProjectile_Base_C_FuseExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATEDProjectile_Base_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.OnHitWorld");

	ATEDProjectile_Base_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.OnBeginExplode
// (Event, Protected, BlueprintEvent)

void ATEDProjectile_Base_C::OnBeginExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.OnBeginExplode");

	ATEDProjectile_Base_C_OnBeginExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Base
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATEDProjectile_Base_C::BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Base(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Base");

	ATEDProjectile_Base_C_BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Base_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Base.TEDProjectile_Base_C.ExecuteUbergraph_TEDProjectile_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_Base_C::ExecuteUbergraph_TEDProjectile_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Base.TEDProjectile_Base_C.ExecuteUbergraph_TEDProjectile_Base");

	ATEDProjectile_Base_C_ExecuteUbergraph_TEDProjectile_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
