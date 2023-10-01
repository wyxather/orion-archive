// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Rakk_Egg_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Rakk_Egg_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.UserConstructionScript");

	AProjectile_Rakk_Egg_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.EggGrow__FinishedFunc
// (BlueprintEvent)

void AProjectile_Rakk_Egg_C::EggGrow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.EggGrow__FinishedFunc");

	AProjectile_Rakk_Egg_C_EggGrow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.EggGrow__UpdateFunc
// (BlueprintEvent)

void AProjectile_Rakk_Egg_C::EggGrow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.EggGrow__UpdateFunc");

	AProjectile_Rakk_Egg_C_EggGrow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.GbxAsyncRequest_Failed_3BCF79D24632D514162059875F138F2C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Rakk_Egg_C::GbxAsyncRequest_Failed_3BCF79D24632D514162059875F138F2C(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.GbxAsyncRequest_Failed_3BCF79D24632D514162059875F138F2C");

	AProjectile_Rakk_Egg_C_GbxAsyncRequest_Failed_3BCF79D24632D514162059875F138F2C_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.GbxAsyncRequest_Spawned_3BCF79D24632D514162059875F138F2C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Rakk_Egg_C::GbxAsyncRequest_Spawned_3BCF79D24632D514162059875F138F2C(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.GbxAsyncRequest_Spawned_3BCF79D24632D514162059875F138F2C");

	AProjectile_Rakk_Egg_C_GbxAsyncRequest_Spawned_3BCF79D24632D514162059875F138F2C_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_Rakk_Egg_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.ReceiveBeginPlay");

	AProjectile_Rakk_Egg_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.OnHitEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Rakk_Egg_C::OnHitEnemy(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.OnHitEnemy");

	AProjectile_Rakk_Egg_C_OnHitEnemy_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.SpawnRakklesnake
// (BlueprintCallable, BlueprintEvent)

void AProjectile_Rakk_Egg_C::SpawnRakklesnake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.SpawnRakklesnake");

	AProjectile_Rakk_Egg_C_SpawnRakklesnake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Projectile_Rakk_Egg
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Rakk_Egg_C::BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Projectile_Rakk_Egg(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Projectile_Rakk_Egg");

	AProjectile_Rakk_Egg_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Projectile_Rakk_Egg_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.ExecuteUbergraph_Projectile_Rakk_Egg
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Rakk_Egg_C::ExecuteUbergraph_Projectile_Rakk_Egg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Egg.Projectile_Rakk_Egg_C.ExecuteUbergraph_Projectile_Rakk_Egg");

	AProjectile_Rakk_Egg_C_ExecuteUbergraph_Projectile_Rakk_Egg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
