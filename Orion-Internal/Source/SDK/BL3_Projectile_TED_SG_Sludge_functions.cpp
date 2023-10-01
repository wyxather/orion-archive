// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_TED_SG_Sludge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_TED_SG_Sludge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.UserConstructionScript");

	AProjectile_TED_SG_Sludge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_TED_SG_Sludge_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.OnHitWorld");

	AProjectile_TED_SG_Sludge_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.ReceiveHit
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

void AProjectile_TED_SG_Sludge_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.ReceiveHit");

	AProjectile_TED_SG_Sludge_C_ReceiveHit_Params params;
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


// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.GoToTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AProjectile_TED_SG_Sludge_C::GoToTarget(class AActor* HitActor, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.GoToTarget");

	AProjectile_TED_SG_Sludge_C_GoToTarget_Params params;
	params.HitActor = HitActor;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_TED_SG_Sludge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.ReceiveBeginPlay");

	AProjectile_TED_SG_Sludge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_TED_SG_Sludge_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.OnExplode");

	AProjectile_TED_SG_Sludge_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge
// (BlueprintEvent)

void AProjectile_TED_SG_Sludge_C::BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge");

	AProjectile_TED_SG_Sludge_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_1_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge
// (BlueprintEvent)

void AProjectile_TED_SG_Sludge_C::BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_1_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_1_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge");

	AProjectile_TED_SG_Sludge_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_1_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.OnHitEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_TED_SG_Sludge_C::OnHitEnemy(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.OnHitEnemy");

	AProjectile_TED_SG_Sludge_C_OnHitEnemy_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.ExecuteUbergraph_Projectile_TED_SG_Sludge
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_TED_SG_Sludge_C::ExecuteUbergraph_Projectile_TED_SG_Sludge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.ExecuteUbergraph_Projectile_TED_SG_Sludge");

	AProjectile_TED_SG_Sludge_C_ExecuteUbergraph_Projectile_TED_SG_Sludge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
