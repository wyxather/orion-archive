// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_Tracker_Puck_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Puck_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.UserConstructionScript");

	AProj_ATL_Tracker_Puck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_ATL_Tracker_Puck_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.ReceiveBeginPlay");

	AProj_ATL_Tracker_Puck_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.FindHomingTarget_Event
// (BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Puck_C::FindHomingTarget_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.FindHomingTarget_Event");

	AProj_ATL_Tracker_Puck_C_FindHomingTarget_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.Retry_Homing
// (BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Puck_C::Retry_Homing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.Retry_Homing");

	AProj_ATL_Tracker_Puck_C_Retry_Homing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.ReceiveHit
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

void AProj_ATL_Tracker_Puck_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.ReceiveHit");

	AProj_ATL_Tracker_Puck_C_ReceiveHit_Params params;
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


// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.SingleTargetTag
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Puck_C::SingleTargetTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.SingleTargetTag");

	AProj_ATL_Tracker_Puck_C_SingleTargetTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.TargetStuck
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Puck_C::TargetStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.TargetStuck");

	AProj_ATL_Tracker_Puck_C_TargetStuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.OnLastBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_ATL_Tracker_Puck_C::OnLastBounce(struct FHitResult* ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.OnLastBounce");

	AProj_ATL_Tracker_Puck_C_OnLastBounce_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Proj_ATL_Tracker_Puck
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_ATL_Tracker_Puck_C::BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Proj_ATL_Tracker_Puck(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Proj_ATL_Tracker_Puck");

	AProj_ATL_Tracker_Puck_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Proj_ATL_Tracker_Puck_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.AttachedActorDeath
// (BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Puck_C::AttachedActorDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.AttachedActorDeath");

	AProj_ATL_Tracker_Puck_C_AttachedActorDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_ATL_Tracker_Puck_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.OnHitWorld");

	AProj_ATL_Tracker_Puck_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_ATL_Tracker_Puck_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.OnExplode");

	AProj_ATL_Tracker_Puck_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.Fallback
// (BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Puck_C::Fallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.Fallback");

	AProj_ATL_Tracker_Puck_C_Fallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.ExecuteUbergraph_Proj_ATL_Tracker_Puck
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_Tracker_Puck_C::ExecuteUbergraph_Proj_ATL_Tracker_Puck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.ExecuteUbergraph_Proj_ATL_Tracker_Puck");

	AProj_ATL_Tracker_Puck_C_ExecuteUbergraph_Proj_ATL_Tracker_Puck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
