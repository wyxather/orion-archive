// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Krakatoa_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Krakatoa.Projectile_Krakatoa_C.FireProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_Krakatoa_C::FireProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Krakatoa.Projectile_Krakatoa_C.FireProjectile");

	AProjectile_Krakatoa_C_FireProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Krakatoa.Projectile_Krakatoa_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Krakatoa_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Krakatoa.Projectile_Krakatoa_C.UserConstructionScript");

	AProjectile_Krakatoa_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Krakatoa.Projectile_Krakatoa_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Krakatoa_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Krakatoa.Projectile_Krakatoa_C.OnHitWorld");

	AProjectile_Krakatoa_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Krakatoa.Projectile_Krakatoa_C.ReceiveHit
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

void AProjectile_Krakatoa_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Krakatoa.Projectile_Krakatoa_C.ReceiveHit");

	AProjectile_Krakatoa_C_ReceiveHit_Params params;
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


// Function Projectile_Krakatoa.Projectile_Krakatoa_C.WeaponProjectileExplode
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Krakatoa_C::WeaponProjectileExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Krakatoa.Projectile_Krakatoa_C.WeaponProjectileExplode");

	AProjectile_Krakatoa_C_WeaponProjectileExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Krakatoa.Projectile_Krakatoa_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_Krakatoa_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Krakatoa.Projectile_Krakatoa_C.ReceiveBeginPlay");

	AProjectile_Krakatoa_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Krakatoa.Projectile_Krakatoa_C.ExecuteUbergraph_Projectile_Krakatoa
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Krakatoa_C::ExecuteUbergraph_Projectile_Krakatoa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Krakatoa.Projectile_Krakatoa_C.ExecuteUbergraph_Projectile_Krakatoa");

	AProjectile_Krakatoa_C_ExecuteUbergraph_Projectile_Krakatoa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
