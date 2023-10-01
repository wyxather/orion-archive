// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_BoundaryTurret_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_BoundaryTurret.IO_BoundaryTurret_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_BoundaryTurret_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_BoundaryTurret.IO_BoundaryTurret_C.UserConstructionScript");

	AIO_BoundaryTurret_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_BoundaryTurret.IO_BoundaryTurret_C.PlayKillEffects
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                TargetLocation                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AIO_BoundaryTurret_C::PlayKillEffects(struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_BoundaryTurret.IO_BoundaryTurret_C.PlayKillEffects");

	AIO_BoundaryTurret_C_PlayKillEffects_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_BoundaryTurret.IO_BoundaryTurret_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_BoundaryTurret_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_BoundaryTurret.IO_BoundaryTurret_C.ReceiveBeginPlay");

	AIO_BoundaryTurret_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_BoundaryTurret.IO_BoundaryTurret_C.BndEvt__WarningAudio_K2Node_ComponentBoundEvent_2_ActorComponentActivatedSignature__DelegateSignature_IO_BoundaryTurret
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_BoundaryTurret_C::BndEvt__WarningAudio_K2Node_ComponentBoundEvent_2_ActorComponentActivatedSignature__DelegateSignature_IO_BoundaryTurret(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_BoundaryTurret.IO_BoundaryTurret_C.BndEvt__WarningAudio_K2Node_ComponentBoundEvent_2_ActorComponentActivatedSignature__DelegateSignature_IO_BoundaryTurret");

	AIO_BoundaryTurret_C_BndEvt__WarningAudio_K2Node_ComponentBoundEvent_2_ActorComponentActivatedSignature__DelegateSignature_IO_BoundaryTurret_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_BoundaryTurret.IO_BoundaryTurret_C.ExecuteUbergraph_IO_BoundaryTurret
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_BoundaryTurret_C::ExecuteUbergraph_IO_BoundaryTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_BoundaryTurret.IO_BoundaryTurret_C.ExecuteUbergraph_IO_BoundaryTurret");

	AIO_BoundaryTurret_C_ExecuteUbergraph_IO_BoundaryTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
