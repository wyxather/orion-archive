// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_BaseProjectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileDisarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_BaseProjectile_C::ProjectileDisarm(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileDisarm");

	AProj_Weapon_BaseProjectile_C_ProjectileDisarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileArm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_BaseProjectile_C::ProjectileArm(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileArm");

	AProj_Weapon_BaseProjectile_C_ProjectileArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileDetonate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_BaseProjectile_C::ProjectileDetonate(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileDetonate");

	AProj_Weapon_BaseProjectile_C_ProjectileDetonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Attached                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           StuckToActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_BaseProjectile_C::StickToTarget(const struct FHitResult& Hit, bool* Attached, bool* StuckToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToTarget");

	AProj_Weapon_BaseProjectile_C_StickToTarget_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attached != nullptr)
		*Attached = params.Attached;
	if (StuckToActor != nullptr)
		*StuckToActor = params.StuckToActor;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.AddElementalTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Collection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewScale                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AProj_Weapon_BaseProjectile_C::AddElementalTrail(class UClass* Collection, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.AddElementalTrail");

	AProj_Weapon_BaseProjectile_C_AddElementalTrail_Params params;
	params.Collection = Collection;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.CallExplode
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_Weapon_BaseProjectile_C::CallExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.CallExplode");

	AProj_Weapon_BaseProjectile_C_CallExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToWorld
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitInfo                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AProj_Weapon_BaseProjectile_C::StickToWorld(const struct FHitResult& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToWorld");

	AProj_Weapon_BaseProjectile_C_StickToWorld_Params params;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           AttachedToActor                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_BaseProjectile_C::StickToActor(const struct FHitResult& HitResult, bool* AttachedToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToActor");

	AProj_Weapon_BaseProjectile_C_StickToActor_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachedToActor != nullptr)
		*AttachedToActor = params.AttachedToActor;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.WeaponProjectileExplode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_Weapon_BaseProjectile_C::WeaponProjectileExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.WeaponProjectileExplode");

	AProj_Weapon_BaseProjectile_C_WeaponProjectileExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_Weapon_BaseProjectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.UserConstructionScript");

	AProj_Weapon_BaseProjectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ReceiveHit
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

void AProj_Weapon_BaseProjectile_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ReceiveHit");

	AProj_Weapon_BaseProjectile_C_ReceiveHit_Params params;
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


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_Weapon_BaseProjectile_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.OnExplode");

	AProj_Weapon_BaseProjectile_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Weapon_BaseProjectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ReceiveBeginPlay");

	AProj_Weapon_BaseProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Destructible_Fractured
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitDetection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_Weapon_BaseProjectile_C::Destructible_Fractured(const struct FVector& HitPoint, const struct FVector& HitDetection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Destructible_Fractured");

	AProj_Weapon_BaseProjectile_C_Destructible_Fractured_Params params;
	params.HitPoint = HitPoint;
	params.HitDetection = HitDetection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Actor_Died
// (BlueprintCallable, BlueprintEvent)

void AProj_Weapon_BaseProjectile_C::Actor_Died()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Actor_Died");

	AProj_Weapon_BaseProjectile_C_Actor_Died_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_Weapon_BaseProjectile_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.OnHitWorld");

	AProj_Weapon_BaseProjectile_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Fallback
// (BlueprintCallable, BlueprintEvent)

void AProj_Weapon_BaseProjectile_C::Fallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Fallback");

	AProj_Weapon_BaseProjectile_C_Fallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ExecuteUbergraph_Proj_Weapon_BaseProjectile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_BaseProjectile_C::ExecuteUbergraph_Proj_Weapon_BaseProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ExecuteUbergraph_Proj_Weapon_BaseProjectile");

	AProj_Weapon_BaseProjectile_C_ExecuteUbergraph_Proj_Weapon_BaseProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
