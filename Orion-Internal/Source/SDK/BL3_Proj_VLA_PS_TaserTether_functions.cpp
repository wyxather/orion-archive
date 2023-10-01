// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_VLA_PS_TaserTether_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.TriggerElementalPuddles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_VLA_PS_TaserTether_C::TriggerElementalPuddles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.TriggerElementalPuddles");

	AProj_VLA_PS_TaserTether_C_TriggerElementalPuddles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.AttachBeam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  BeamTarget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_VLA_PS_TaserTether_C::AttachBeam(class AActor* BeamTarget, class UClass* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.AttachBeam");

	AProj_VLA_PS_TaserTether_C_AttachBeam_Params params;
	params.BeamTarget = BeamTarget;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.StopMovementEnableTrigger
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_VLA_PS_TaserTether_C::StopMovementEnableTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.StopMovementEnableTrigger");

	AProj_VLA_PS_TaserTether_C_StopMovementEnableTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_VLA_PS_TaserTether_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.UserConstructionScript");

	AProj_VLA_PS_TaserTether_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_StartFuse
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_VLA_PS_TaserTether_C::BPI_StartFuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_StartFuse");

	AProj_VLA_PS_TaserTether_C_BPI_StartFuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_Explode
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_VLA_PS_TaserTether_C::BPI_Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_Explode");

	AProj_VLA_PS_TaserTether_C_BPI_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_SetSimulatePhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PhysicsOn_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_VLA_PS_TaserTether_C::BPI_SetSimulatePhysics(bool PhysicsOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_SetSimulatePhysics");

	AProj_VLA_PS_TaserTether_C_BPI_SetSimulatePhysics_Params params;
	params.PhysicsOn_ = PhysicsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_ImpulseThrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ThrowVector                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RotatorForSpin                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          FuseSpeedScale                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AdditiveVector                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AProj_VLA_PS_TaserTether_C::BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_ImpulseThrow");

	AProj_VLA_PS_TaserTether_C_BPI_ImpulseThrow_Params params;
	params.ThrowVector = ThrowVector;
	params.Force = Force;
	params.RotatorForSpin = RotatorForSpin;
	params.FuseSpeedScale = FuseSpeedScale;
	params.AdditiveVector = AdditiveVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_ResetHealth
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_VLA_PS_TaserTether_C::BPI_ResetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_ResetHealth");

	AProj_VLA_PS_TaserTether_C_BPI_ResetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_SetNavPainterEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_VLA_PS_TaserTether_C::BPI_SetNavPainterEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_SetNavPainterEnabled");

	AProj_VLA_PS_TaserTether_C_BPI_SetNavPainterEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ReceiveHit
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

void AProj_VLA_PS_TaserTether_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ReceiveHit");

	AProj_VLA_PS_TaserTether_C_ReceiveHit_Params params;
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


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_VLA_PS_TaserTether_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ReceiveBeginPlay");

	AProj_VLA_PS_TaserTether_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_VLA_PS_TaserTether_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.OnExplode");

	AProj_VLA_PS_TaserTether_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether
// (BlueprintEvent)
// Parameters:
// class AActor*                  TouchingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ComponentTouched               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProj_VLA_PS_TaserTether_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether");

	AProj_VLA_PS_TaserTether_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether_Params params;
	params.TouchingActor = TouchingActor;
	params.bIsPlayer = bIsPlayer;
	params.ComponentTouched = ComponentTouched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether
// (BlueprintEvent)
// Parameters:
// class AActor*                  LeavingActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_VLA_PS_TaserTether_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether(class AActor* LeavingActor, bool bIsPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether");

	AProj_VLA_PS_TaserTether_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether_Params params;
	params.LeavingActor = LeavingActor;
	params.bIsPlayer = bIsPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.Destructible_Fractured
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                HitPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                HitDetection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_VLA_PS_TaserTether_C::Destructible_Fractured(struct FVector* HitPoint, struct FVector* HitDetection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.Destructible_Fractured");

	AProj_VLA_PS_TaserTether_C_Destructible_Fractured_Params params;
	params.HitPoint = HitPoint;
	params.HitDetection = HitDetection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BarrelExplode
// (BlueprintCallable, BlueprintEvent)

void AProj_VLA_PS_TaserTether_C::BarrelExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BarrelExplode");

	AProj_VLA_PS_TaserTether_C_BarrelExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ExecuteUbergraph_Proj_VLA_PS_TaserTether
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_VLA_PS_TaserTether_C::ExecuteUbergraph_Proj_VLA_PS_TaserTether(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ExecuteUbergraph_Proj_VLA_PS_TaserTether");

	AProj_VLA_PS_TaserTether_C_ExecuteUbergraph_Proj_VLA_PS_TaserTether_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
