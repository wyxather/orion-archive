// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_MAL_SR_Storm_Orbs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_MAL_SR_Storm_Orbs_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.UserConstructionScript");

	AProj_MAL_SR_Storm_Orbs_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_MAL_SR_Storm_Orbs_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveBeginPlay");

	AProj_MAL_SR_Storm_Orbs_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs
// (BlueprintEvent)
// Parameters:
// class AActor*                  TouchingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ComponentTouched               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProj_MAL_SR_Storm_Orbs_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs");

	AProj_MAL_SR_Storm_Orbs_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs_Params params;
	params.TouchingActor = TouchingActor;
	params.bIsPlayer = bIsPlayer;
	params.ComponentTouched = ComponentTouched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AProj_MAL_SR_Storm_Orbs_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveDestroyed");

	AProj_MAL_SR_Storm_Orbs_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.WeaponProjectileExplode
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_MAL_SR_Storm_Orbs_C::WeaponProjectileExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.WeaponProjectileExplode");

	AProj_MAL_SR_Storm_Orbs_C_WeaponProjectileExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs
// (BlueprintEvent)
// Parameters:
// class AActor*                  LeavingActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_MAL_SR_Storm_Orbs_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs(class AActor* LeavingActor, bool bIsPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs");

	AProj_MAL_SR_Storm_Orbs_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs_Params params;
	params.LeavingActor = LeavingActor;
	params.bIsPlayer = bIsPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveHit
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

void AProj_MAL_SR_Storm_Orbs_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveHit");

	AProj_MAL_SR_Storm_Orbs_C_ReceiveHit_Params params;
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


// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.Bobble
// (BlueprintCallable, BlueprintEvent)

void AProj_MAL_SR_Storm_Orbs_C::Bobble()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.Bobble");

	AProj_MAL_SR_Storm_Orbs_C_Bobble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ExecuteUbergraph_Proj_MAL_SR_Storm_Orbs
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_MAL_SR_Storm_Orbs_C::ExecuteUbergraph_Proj_MAL_SR_Storm_Orbs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ExecuteUbergraph_Proj_MAL_SR_Storm_Orbs");

	AProj_MAL_SR_Storm_Orbs_C_ExecuteUbergraph_Proj_MAL_SR_Storm_Orbs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
