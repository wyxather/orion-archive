// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_NPC_Explosive_Grenade_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_NPC_Explosive_Grenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.UserConstructionScript");

	AProj_NPC_Explosive_Grenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.OnBounce
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AProj_NPC_Explosive_Grenade_C::OnBounce(struct FHitResult* Hit, struct FVector* ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.OnBounce");

	AProj_NPC_Explosive_Grenade_C_OnBounce_Params params;
	params.Hit = Hit;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.BndEvt__MolotovMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Proj_PsychoMale_Shared_Molotov
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_NPC_Explosive_Grenade_C::BndEvt__MolotovMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Proj_PsychoMale_Shared_Molotov(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.BndEvt__MolotovMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Proj_PsychoMale_Shared_Molotov");

	AProj_NPC_Explosive_Grenade_C_BndEvt__MolotovMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Proj_PsychoMale_Shared_Molotov_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownExplosive_Grenade
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_NPC_Explosive_Grenade_C::BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownExplosive_Grenade(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownExplosive_Grenade");

	AProj_NPC_Explosive_Grenade_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownExplosive_Grenade_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_NPC_Explosive_Grenade_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.OnExplode");

	AProj_NPC_Explosive_Grenade_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.HNT_Prime
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_NPC_Explosive_Grenade_C::HNT_Prime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.HNT_Prime");

	AProj_NPC_Explosive_Grenade_C_HNT_Prime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.HNT_Drop
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_NPC_Explosive_Grenade_C::HNT_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.HNT_Drop");

	AProj_NPC_Explosive_Grenade_C_HNT_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.HNT_Throw
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_NPC_Explosive_Grenade_C::HNT_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.HNT_Throw");

	AProj_NPC_Explosive_Grenade_C_HNT_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_NPC_Explosive_Grenade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.ReceiveBeginPlay");

	AProj_NPC_Explosive_Grenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.ExecuteUbergraph_Proj_NPC_Explosive_Grenade
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_NPC_Explosive_Grenade_C::ExecuteUbergraph_Proj_NPC_Explosive_Grenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_NPC_Explosive_Grenade.Proj_NPC_Explosive_Grenade_C.ExecuteUbergraph_Proj_NPC_Explosive_Grenade");

	AProj_NPC_Explosive_Grenade_C_ExecuteUbergraph_Proj_NPC_Explosive_Grenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
