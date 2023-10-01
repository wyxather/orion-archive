// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Global_Sliding_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnStart
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         MoveDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Global_Sliding_C::OnStart(float* MoveDuration, class AActor** TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnStart");

	UControlledMove_Global_Sliding_C_OnStart_Params params;
	params.MoveDuration = MoveDuration;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Global_Sliding_C::OnStop(bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnStop");

	UControlledMove_Global_Sliding_C_OnStop_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnHitTargetable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UControlledMove_Global_Sliding_C::OnHitTargetable(class AActor** HitActor, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnHitTargetable");

	UControlledMove_Global_Sliding_C_OnHitTargetable_Params params;
	params.HitActor = HitActor;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnHitWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UControlledMove_Global_Sliding_C::OnHitWorld(class AActor** HitActor, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnHitWorld");

	UControlledMove_Global_Sliding_C_OnHitWorld_Params params;
	params.HitActor = HitActor;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.SlideDuration
// (BlueprintCallable, BlueprintEvent)

void UControlledMove_Global_Sliding_C::SlideDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.SlideDuration");

	UControlledMove_Global_Sliding_C_SlideDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.MovementChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PreviousCustomMode             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Global_Sliding_C::MovementChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.MovementChanged");

	UControlledMove_Global_Sliding_C_MovementChanged_Params params;
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnHitDamageable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UControlledMove_Global_Sliding_C::OnHitDamageable(class AActor* HitActor, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnHitDamageable");

	UControlledMove_Global_Sliding_C_OnHitDamageable_Params params;
	params.HitActor = HitActor;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnServerStart
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         MoveDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Global_Sliding_C::OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnServerStart");

	UControlledMove_Global_Sliding_C_OnServerStart_Params params;
	params.MoveDuration = MoveDuration;
	params.TargetActor = TargetActor;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnCapsuleBeginOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UControlledMove_Global_Sliding_C::OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnCapsuleBeginOverlap");

	UControlledMove_Global_Sliding_C_OnCapsuleBeginOverlap_Params params;
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


// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnServerStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Global_Sliding_C::OnServerStop(bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.OnServerStop");

	UControlledMove_Global_Sliding_C_OnServerStop_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.ExecuteUbergraph_ControlledMove_Global_Sliding
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Global_Sliding_C::ExecuteUbergraph_ControlledMove_Global_Sliding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C.ExecuteUbergraph_ControlledMove_Global_Sliding");

	UControlledMove_Global_Sliding_C_ExecuteUbergraph_ControlledMove_Global_Sliding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
