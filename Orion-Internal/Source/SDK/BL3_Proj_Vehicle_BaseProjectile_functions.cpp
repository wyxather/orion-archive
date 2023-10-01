// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Vehicle_BaseProjectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.IsEnemyAndAlive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnemyAndAlive                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_Vehicle_BaseProjectile_C::IsEnemyAndAlive(class AActor* Actor, bool* EnemyAndAlive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.IsEnemyAndAlive");

	AProj_Vehicle_BaseProjectile_C_IsEnemyAndAlive_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnemyAndAlive != nullptr)
		*EnemyAndAlive = params.EnemyAndAlive;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.TraceFromVehicleAimPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TraceLength                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              TraceResult                    (Parm, OutParm, IsPlainOldData)
// bool                           TraceSuccess                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_Vehicle_BaseProjectile_C::TraceFromVehicleAimPoint(float TraceLength, struct FHitResult* TraceResult, bool* TraceSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.TraceFromVehicleAimPoint");

	AProj_Vehicle_BaseProjectile_C_TraceFromVehicleAimPoint_Params params;
	params.TraceLength = TraceLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TraceResult != nullptr)
		*TraceResult = params.TraceResult;
	if (TraceSuccess != nullptr)
		*TraceSuccess = params.TraceSuccess;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.AddForwardVelocityBasedOnVehicle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_Vehicle_BaseProjectile_C::AddForwardVelocityBasedOnVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.AddForwardVelocityBasedOnVehicle");

	AProj_Vehicle_BaseProjectile_C_AddForwardVelocityBasedOnVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.AddVelocityBasedOnVehicle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_Vehicle_BaseProjectile_C::AddVelocityBasedOnVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.AddVelocityBasedOnVehicle");

	AProj_Vehicle_BaseProjectile_C_AddVelocityBasedOnVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Vehicle_BaseProjectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.UserConstructionScript");

	AProj_Vehicle_BaseProjectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.Failure_75FB4B9E4205FDE1F5B3E6BC2A573144
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnvQueryResult         QueryResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Vehicle_BaseProjectile_C::Failure_75FB4B9E4205FDE1F5B3E6BC2A573144(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.Failure_75FB4B9E4205FDE1F5B3E6BC2A573144");

	AProj_Vehicle_BaseProjectile_C_Failure_75FB4B9E4205FDE1F5B3E6BC2A573144_Params params;
	params.QueryResult = QueryResult;
	params.Location = Location;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.Success_75FB4B9E4205FDE1F5B3E6BC2A573144
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnvQueryResult         QueryResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Vehicle_BaseProjectile_C::Success_75FB4B9E4205FDE1F5B3E6BC2A573144(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.Success_75FB4B9E4205FDE1F5B3E6BC2A573144");

	AProj_Vehicle_BaseProjectile_C_Success_75FB4B9E4205FDE1F5B3E6BC2A573144_Params params;
	params.QueryResult = QueryResult;
	params.Location = Location;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Vehicle_BaseProjectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.ReceiveBeginPlay");

	AProj_Vehicle_BaseProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.ReceiveHit
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

void AProj_Vehicle_BaseProjectile_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.ReceiveHit");

	AProj_Vehicle_BaseProjectile_C_ReceiveHit_Params params;
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


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_Vehicle_BaseProjectile_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.OnExplode");

	AProj_Vehicle_BaseProjectile_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.StartHoming
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpecificActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Vehicle_BaseProjectile_C::StartHoming(class AActor* SpecificActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.StartHoming");

	AProj_Vehicle_BaseProjectile_C_StartHoming_Params params;
	params.SpecificActor = SpecificActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.UpdateHoming
// (BlueprintCallable, BlueprintEvent)

void AProj_Vehicle_BaseProjectile_C::UpdateHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.UpdateHoming");

	AProj_Vehicle_BaseProjectile_C_UpdateHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.OnHomingRequestSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorFound                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Vehicle_BaseProjectile_C::OnHomingRequestSuccess(class AActor* ActorFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.OnHomingRequestSuccess");

	AProj_Vehicle_BaseProjectile_C_OnHomingRequestSuccess_Params params;
	params.ActorFound = ActorFound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.OnHomingRequestFail
// (BlueprintCallable, BlueprintEvent)

void AProj_Vehicle_BaseProjectile_C::OnHomingRequestFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.OnHomingRequestFail");

	AProj_Vehicle_BaseProjectile_C_OnHomingRequestFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.StopHoming
// (BlueprintCallable, BlueprintEvent)

void AProj_Vehicle_BaseProjectile_C::StopHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.StopHoming");

	AProj_Vehicle_BaseProjectile_C_StopHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.BndEvt__ProximityDectector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_Vehicle_BaseProjectile
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_Vehicle_BaseProjectile_C::BndEvt__ProximityDectector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_Vehicle_BaseProjectile(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.BndEvt__ProximityDectector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_Vehicle_BaseProjectile");

	AProj_Vehicle_BaseProjectile_C_BndEvt__ProximityDectector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_Vehicle_BaseProjectile_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.StartHomeTowardsViewPoint
// (BlueprintCallable, BlueprintEvent)

void AProj_Vehicle_BaseProjectile_C::StartHomeTowardsViewPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.StartHomeTowardsViewPoint");

	AProj_Vehicle_BaseProjectile_C_StartHomeTowardsViewPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.ExecuteUbergraph_Proj_Vehicle_BaseProjectile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Vehicle_BaseProjectile_C::ExecuteUbergraph_Proj_Vehicle_BaseProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.ExecuteUbergraph_Proj_Vehicle_BaseProjectile");

	AProj_Vehicle_BaseProjectile_C_ExecuteUbergraph_Proj_Vehicle_BaseProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
