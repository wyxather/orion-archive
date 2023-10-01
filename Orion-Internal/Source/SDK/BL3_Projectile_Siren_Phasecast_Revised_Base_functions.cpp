// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_Phasecast_Revised_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.TryToAllure
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_Siren_Phasecast_Revised_Base_C::TryToAllure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.TryToAllure");

	AProjectile_Siren_Phasecast_Revised_Base_C_TryToAllure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.HandleWorldHit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Base_C::HandleWorldHit(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.HandleWorldHit");

	AProjectile_Siren_Phasecast_Revised_Base_C_HandleWorldHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.DoDamageToWorld
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Base_C::DoDamageToWorld(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.DoDamageToWorld");

	AProjectile_Siren_Phasecast_Revised_Base_C_DoDamageToWorld_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetOverlapComponent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* AProjectile_Siren_Phasecast_Revised_Base_C::GetOverlapComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetOverlapComponent");

	AProjectile_Siren_Phasecast_Revised_Base_C_GetOverlapComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetTargetedHitDirectionForDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 res                            (Parm, OutParm, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Base_C::GetTargetedHitDirectionForDamage(class AActor* Enemy, struct FVector* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetTargetedHitDirectionForDamage");

	AProjectile_Siren_Phasecast_Revised_Base_C_GetTargetedHitDirectionForDamage_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.CalculateDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Base_C::CalculateDamage(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.CalculateDamage");

	AProjectile_Siren_Phasecast_Revised_Base_C_CalculateDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.DoDamageToEnemy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Base_C::DoDamageToEnemy(class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.DoDamageToEnemy");

	AProjectile_Siren_Phasecast_Revised_Base_C_DoDamageToEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.HandleEnemyHit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Base_C::HandleEnemyHit(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.HandleEnemyHit");

	AProjectile_Siren_Phasecast_Revised_Base_C_HandleEnemyHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetImpactEffect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UImpactData*             res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Base_C::GetImpactEffect(class UImpactData** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetImpactEffect");

	AProjectile_Siren_Phasecast_Revised_Base_C_GetImpactEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.PlayImpactEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              InHitInfo                      (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Base_C::PlayImpactEffect(struct FHitResult* InHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.PlayImpactEffect");

	AProjectile_Siren_Phasecast_Revised_Base_C_PlayImpactEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InHitInfo != nullptr)
		*InHitInfo = params.InHitInfo;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ConfigureSkeletalMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_Siren_Phasecast_Revised_Base_C::ConfigureSkeletalMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ConfigureSkeletalMesh");

	AProjectile_Siren_Phasecast_Revised_Base_C_ConfigureSkeletalMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Siren_Phasecast_Revised_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.UserConstructionScript");

	AProjectile_Siren_Phasecast_Revised_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_Siren_Phasecast_Revised_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ReceiveBeginPlay");

	AProjectile_Siren_Phasecast_Revised_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Base_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnHitWorld");

	AProjectile_Siren_Phasecast_Revised_Base_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnHitEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Base_C::OnHitEnemy(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnHitEnemy");

	AProjectile_Siren_Phasecast_Revised_Base_C_OnHitEnemy_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnOverlappedEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Base_C::OnOverlappedEnemy(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnOverlappedEnemy");

	AProjectile_Siren_Phasecast_Revised_Base_C_OnOverlappedEnemy_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnOverlappedNeutral
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Base_C::OnOverlappedNeutral(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnOverlappedNeutral");

	AProjectile_Siren_Phasecast_Revised_Base_C_OnOverlappedNeutral_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Base_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ReceiveEndPlay");

	AProjectile_Siren_Phasecast_Revised_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Base_C::ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Base");

	AProjectile_Siren_Phasecast_Revised_Base_C_ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
