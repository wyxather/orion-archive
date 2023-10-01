// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_PhaseLock_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.PlayDetach
// (Public, BlueprintCallable, BlueprintEvent)

void UControlledMove_PhaseLock_Base_C::PlayDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.PlayDetach");

	UControlledMove_PhaseLock_Base_C_PlayDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.ConfigurePhaseLockProperties
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UControlledMove_PhaseLock_Base_C::ConfigurePhaseLockProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.ConfigurePhaseLockProperties");

	UControlledMove_PhaseLock_Base_C_ConfigurePhaseLockProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.TryDestroyComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UControlledMove_PhaseLock_Base_C::TryDestroyComponent(class UParticleSystemComponent* Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.TryDestroyComponent");

	UControlledMove_PhaseLock_Base_C_TryDestroyComponent_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnStart
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         MoveDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_Base_C::OnStart(float* MoveDuration, class AActor** TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnStart");

	UControlledMove_PhaseLock_Base_C_OnStart_Params params;
	params.MoveDuration = MoveDuration;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_Base_C::OnStop(bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnStop");

	UControlledMove_PhaseLock_Base_C_OnStop_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnServerStart
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         MoveDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_Base_C::OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnServerStart");

	UControlledMove_PhaseLock_Base_C_OnServerStart_Params params;
	params.MoveDuration = MoveDuration;
	params.TargetActor = TargetActor;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnServerStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_Base_C::OnServerStop(bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnServerStop");

	UControlledMove_PhaseLock_Base_C_OnServerStop_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.ExecuteUbergraph_ControlledMove_PhaseLock_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_Base_C::ExecuteUbergraph_ControlledMove_PhaseLock_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.ExecuteUbergraph_ControlledMove_PhaseLock_Base");

	UControlledMove_PhaseLock_Base_C_ExecuteUbergraph_ControlledMove_PhaseLock_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
