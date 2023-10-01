// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Siren_Overrun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.OnHitTargetable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UControlledMove_Siren_Overrun_C::OnHitTargetable(class AActor** HitActor, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.OnHitTargetable");

	UControlledMove_Siren_Overrun_C_OnHitTargetable_Params params;
	params.HitActor = HitActor;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.OnServerStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Siren_Overrun_C::OnServerStop(bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.OnServerStop");

	UControlledMove_Siren_Overrun_C_OnServerStop_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Siren_Overrun_C::OnStop(bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.OnStop");

	UControlledMove_Siren_Overrun_C_OnStop_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.ExecuteUbergraph_ControlledMove_Siren_Overrun
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_Siren_Overrun_C::ExecuteUbergraph_ControlledMove_Siren_Overrun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.ExecuteUbergraph_ControlledMove_Siren_Overrun");

	UControlledMove_Siren_Overrun_C_ExecuteUbergraph_ControlledMove_Siren_Overrun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
