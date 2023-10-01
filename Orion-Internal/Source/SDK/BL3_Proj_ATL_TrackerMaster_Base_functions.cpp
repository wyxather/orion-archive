// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_TrackerMaster_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.OnRep_StuckTarget
// (BlueprintCallable, BlueprintEvent)

void AProj_ATL_TrackerMaster_Base_C::OnRep_StuckTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.OnRep_StuckTarget");

	AProj_ATL_TrackerMaster_Base_C_OnRep_StuckTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.StartAudioLoopOnActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target_Actor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             Wwise_Event                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_TrackerMaster_Base_C::StartAudioLoopOnActor(class AActor* Target_Actor, class UWwiseEvent* Wwise_Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.StartAudioLoopOnActor");

	AProj_ATL_TrackerMaster_Base_C_StartAudioLoopOnActor_Params params;
	params.Target_Actor = Target_Actor;
	params.Wwise_Event = Wwise_Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.MultiTargetTag
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_ATL_TrackerMaster_Base_C::MultiTargetTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.MultiTargetTag");

	AProj_ATL_TrackerMaster_Base_C_MultiTargetTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.RemoveAllTargets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_ATL_TrackerMaster_Base_C::RemoveAllTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.RemoveAllTargets");

	AProj_ATL_TrackerMaster_Base_C_RemoveAllTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.SingleTargetTag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_ATL_TrackerMaster_Base_C::SingleTargetTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.SingleTargetTag");

	AProj_ATL_TrackerMaster_Base_C_SingleTargetTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_ATL_TrackerMaster_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.UserConstructionScript");

	AProj_ATL_TrackerMaster_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_ATL_TrackerMaster_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.ReceiveBeginPlay");

	AProj_ATL_TrackerMaster_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_ATL_TrackerMaster_Base_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.OnExplode");

	AProj_ATL_TrackerMaster_Base_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.ReceiveHit
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

void AProj_ATL_TrackerMaster_Base_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.ReceiveHit");

	AProj_ATL_TrackerMaster_Base_C_ReceiveHit_Params params;
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


// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.AttachedActorDeath
// (BlueprintCallable, BlueprintEvent)

void AProj_ATL_TrackerMaster_Base_C::AttachedActorDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.AttachedActorDeath");

	AProj_ATL_TrackerMaster_Base_C_AttachedActorDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.FuseStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FuseTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_TrackerMaster_Base_C::FuseStart(float FuseTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.FuseStart");

	AProj_ATL_TrackerMaster_Base_C_FuseStart_Params params;
	params.FuseTime = FuseTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.FuseTriggered
// (BlueprintCallable, BlueprintEvent)

void AProj_ATL_TrackerMaster_Base_C::FuseTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.FuseTriggered");

	AProj_ATL_TrackerMaster_Base_C_FuseTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.TargetStuck
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AProj_ATL_TrackerMaster_Base_C::TargetStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.TargetStuck");

	AProj_ATL_TrackerMaster_Base_C_TargetStuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.MultiTargetActorDeath_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_TrackerMaster_Base_C::MultiTargetActorDeath_Event(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.MultiTargetActorDeath_Event");

	AProj_ATL_TrackerMaster_Base_C_MultiTargetActorDeath_Event_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.ExecuteUbergraph_Proj_ATL_TrackerMaster_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_TrackerMaster_Base_C::ExecuteUbergraph_Proj_ATL_TrackerMaster_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C.ExecuteUbergraph_Proj_ATL_TrackerMaster_Base");

	AProj_ATL_TrackerMaster_Base_C_ExecuteUbergraph_Proj_ATL_TrackerMaster_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
