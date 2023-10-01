// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Handsome_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.SetExplosionRadius
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::SetExplosionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.SetExplosionRadius");

	ATEDProjectile_Handsome_C_SetExplosionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_CanBeStolen
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATEDProjectile_Handsome_C::AIProjectile_CanBeStolen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_CanBeStolen");

	ATEDProjectile_Handsome_C_AIProjectile_CanBeStolen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectileArm
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::AIProjectileArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectileArm");

	ATEDProjectile_Handsome_C_AIProjectileArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectileDisarm
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::AIProjectileDisarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectileDisarm");

	ATEDProjectile_Handsome_C_AIProjectileDisarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.CalculateExplosionDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float*                         DamagePerShot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           BulletsPerShot                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATEDProjectile_Handsome_C::CalculateExplosionDamage(float* DamagePerShot, int* BulletsPerShot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.CalculateExplosionDamage");

	ATEDProjectile_Handsome_C_CalculateExplosionDamage_Params params;
	params.DamagePerShot = DamagePerShot;
	params.BulletsPerShot = BulletsPerShot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.RemoveAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ThrowType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_Handsome_C::RemoveAmmo(int* ThrowType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.RemoveAmmo");

	ATEDProjectile_Handsome_C_RemoveAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ThrowType != nullptr)
		*ThrowType = params.ThrowType;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.SpawnRotationandOffset
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void ATEDProjectile_Handsome_C::SpawnRotationandOffset(const struct FVector& Location, const struct FVector& HitNormal, const struct FVector& Normal, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.SpawnRotationandOffset");

	ATEDProjectile_Handsome_C_SpawnRotationandOffset_Params params;
	params.Location = Location;
	params.HitNormal = HitNormal;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitCombo
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::InitCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitCombo");

	ATEDProjectile_Handsome_C_InitCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerFXandAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::StabilizerFXandAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerFXandAudio");

	ATEDProjectile_Handsome_C_StabilizerFXandAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerBoostBouncy
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::StabilizerBoostBouncy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerBoostBouncy");

	ATEDProjectile_Handsome_C_StabilizerBoostBouncy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerBoost
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::StabilizerBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerBoost");

	ATEDProjectile_Handsome_C_StabilizerBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitHoming
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::InitHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitHoming");

	ATEDProjectile_Handsome_C_InitHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ThrowStyle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_Handsome_C::InitRotation(int ThrowStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitRotation");

	ATEDProjectile_Handsome_C_InitRotation_Params params;
	params.ThrowStyle = ThrowStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitStabilizer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::InitStabilizer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitStabilizer");

	ATEDProjectile_Handsome_C_InitStabilizer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.UserConstructionScript");

	ATEDProjectile_Handsome_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.OnBehaviorInitialized
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass**                 BehaviorClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_Handsome_C::OnBehaviorInitialized(class UClass** BehaviorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.OnBehaviorInitialized");

	ATEDProjectile_Handsome_C_OnBehaviorInitialized_Params params;
	params.BehaviorClass = BehaviorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.HomingThrust
// (BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::HomingThrust()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.HomingThrust");

	ATEDProjectile_Handsome_C_HomingThrust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATEDProjectile_Handsome_C::BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base");

	ATEDProjectile_Handsome_C_BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_Arm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::AIProjectile_Arm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_Arm");

	ATEDProjectile_Handsome_C_AIProjectile_Arm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATEDProjectile_Handsome_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.ReceiveBeginPlay");

	ATEDProjectile_Handsome_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.EnableDrunk
// (BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::EnableDrunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.EnableDrunk");

	ATEDProjectile_Handsome_C_EnableDrunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_Disarm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::AIProjectile_Disarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_Disarm");

	ATEDProjectile_Handsome_C_AIProjectile_Disarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.FuseExpired
// (BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Handsome_C::FuseExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.FuseExpired");

	ATEDProjectile_Handsome_C_FuseExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATEDProjectile_Handsome_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.OnHitWorld");

	ATEDProjectile_Handsome_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Handsome
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATEDProjectile_Handsome_C::BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Handsome(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Handsome");

	ATEDProjectile_Handsome_C_BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Handsome_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.ExecuteUbergraph_TEDProjectile_Handsome
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_Handsome_C::ExecuteUbergraph_TEDProjectile_Handsome(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.ExecuteUbergraph_TEDProjectile_Handsome");

	ATEDProjectile_Handsome_C_ExecuteUbergraph_TEDProjectile_Handsome_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
