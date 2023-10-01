// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_Tracker_Ball_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.AOE_FindTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Ball_C::AOE_FindTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.AOE_FindTarget");

	AProj_ATL_Tracker_Ball_C_AOE_FindTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Ball_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.UserConstructionScript");

	AProj_ATL_Tracker_Ball_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_ATL_Tracker_Ball_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnExplode");

	AProj_ATL_Tracker_Ball_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_ATL_Tracker_Ball_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ReceiveBeginPlay");

	AProj_ATL_Tracker_Ball_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnHitEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_ATL_Tracker_Ball_C::OnHitEnemy(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnHitEnemy");

	AProj_ATL_Tracker_Ball_C_OnHitEnemy_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_ATL_Tracker_Ball_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnHitWorld");

	AProj_ATL_Tracker_Ball_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.FuseTriggered
// (BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Ball_C::FuseTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.FuseTriggered");

	AProj_ATL_Tracker_Ball_C_FuseTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ReceiveHit
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

void AProj_ATL_Tracker_Ball_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ReceiveHit");

	AProj_ATL_Tracker_Ball_C_ReceiveHit_Params params;
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


// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball
// (BlueprintEvent)
// Parameters:
// class AActor*                  TouchingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ComponentTouched               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProj_ATL_Tracker_Ball_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball");

	AProj_ATL_Tracker_Ball_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball_Params params;
	params.TouchingActor = TouchingActor;
	params.bIsPlayer = bIsPlayer;
	params.ComponentTouched = ComponentTouched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.AttachedActorDeath
// (BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Ball_C::AttachedActorDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.AttachedActorDeath");

	AProj_ATL_Tracker_Ball_C_AttachedActorDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ExecuteUbergraph_Proj_ATL_Tracker_Ball
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_Tracker_Ball_C::ExecuteUbergraph_Proj_ATL_Tracker_Ball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ExecuteUbergraph_Proj_ATL_Tracker_Ball");

	AProj_ATL_Tracker_Ball_C_ExecuteUbergraph_Proj_ATL_Tracker_Ball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
