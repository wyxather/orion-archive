// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_PsychoMale_BadassRockSlam_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.EvaluateValidForDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidActor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ValidActorForDamage            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_PsychoMale_BadassRockSlam_C::EvaluateValidForDamage(class AActor* Actor, bool* ValidActor, class AActor** ValidActorForDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.EvaluateValidForDamage");

	AProj_PsychoMale_BadassRockSlam_C_EvaluateValidForDamage_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidActor != nullptr)
		*ValidActor = params.ValidActor;
	if (ValidActorForDamage != nullptr)
		*ValidActorForDamage = params.ValidActorForDamage;
}


// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_PsychoMale_BadassRockSlam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.UserConstructionScript");

	AProj_PsychoMale_BadassRockSlam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_PsychoMale_BadassRockSlam_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.OnExplode");

	AProj_PsychoMale_BadassRockSlam_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_PsychoMale_BadassRockSlam
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_PsychoMale_BadassRockSlam_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_PsychoMale_BadassRockSlam(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_PsychoMale_BadassRockSlam");

	AProj_PsychoMale_BadassRockSlam_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_PsychoMale_BadassRockSlam_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_PsychoMale_BadassRockSlam_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.ReceiveBeginPlay");

	AProj_PsychoMale_BadassRockSlam_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AProj_PsychoMale_BadassRockSlam_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.ReceiveDestroyed");

	AProj_PsychoMale_BadassRockSlam_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_PsychoMale_BadassRockSlam
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_PsychoMale_BadassRockSlam_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_PsychoMale_BadassRockSlam(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_PsychoMale_BadassRockSlam");

	AProj_PsychoMale_BadassRockSlam_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_PsychoMale_BadassRockSlam_Params params;
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


// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.ExecuteUbergraph_Proj_PsychoMale_BadassRockSlam
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_PsychoMale_BadassRockSlam_C::ExecuteUbergraph_Proj_PsychoMale_BadassRockSlam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.ExecuteUbergraph_Proj_PsychoMale_BadassRockSlam");

	AProj_PsychoMale_BadassRockSlam_C_ExecuteUbergraph_Proj_PsychoMale_BadassRockSlam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
