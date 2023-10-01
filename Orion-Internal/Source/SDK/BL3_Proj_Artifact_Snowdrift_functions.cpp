// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Artifact_Snowdrift_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Artifact_Snowdrift_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.UserConstructionScript");

	AProj_Artifact_Snowdrift_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Artifact_Snowdrift_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.ReceiveBeginPlay");

	AProj_Artifact_Snowdrift_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_Artifact_Snowdrift_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.OnHitDamagableObject");

	AProj_Artifact_Snowdrift_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_Artifact_Snowdrift_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.OnExplode");

	AProj_Artifact_Snowdrift_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_ApeCryo_IceBall
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_Artifact_Snowdrift_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_ApeCryo_IceBall(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_ApeCryo_IceBall");

	AProj_Artifact_Snowdrift_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_ApeCryo_IceBall_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Artifact_Snowdrift
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_Artifact_Snowdrift_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Artifact_Snowdrift(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Artifact_Snowdrift");

	AProj_Artifact_Snowdrift_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Artifact_Snowdrift_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Artifact_Snowdrift
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_Artifact_Snowdrift_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Artifact_Snowdrift(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Artifact_Snowdrift");

	AProj_Artifact_Snowdrift_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Artifact_Snowdrift_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.ExecuteUbergraph_Proj_Artifact_Snowdrift
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Artifact_Snowdrift_C::ExecuteUbergraph_Proj_Artifact_Snowdrift(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.ExecuteUbergraph_Proj_Artifact_Snowdrift");

	AProj_Artifact_Snowdrift_C_ExecuteUbergraph_Proj_Artifact_Snowdrift_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
