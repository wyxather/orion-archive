// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Punk_Anointed_EssenceOfTroy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.InitHomingTarget
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_Punk_Anointed_EssenceOfTroy_C::InitHomingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.InitHomingTarget");

	AProj_Punk_Anointed_EssenceOfTroy_C_InitHomingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Punk_Anointed_EssenceOfTroy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.UserConstructionScript");

	AProj_Punk_Anointed_EssenceOfTroy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Punk_Anointed_EssenceOfTroy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.ReceiveBeginPlay");

	AProj_Punk_Anointed_EssenceOfTroy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_Punk_Anointed_EssenceOfTroy_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.OnExplode");

	AProj_Punk_Anointed_EssenceOfTroy_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.BndEvt__AOECollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Proj_Punk_Anointed_HomingBall
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_Punk_Anointed_EssenceOfTroy_C::BndEvt__AOECollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Proj_Punk_Anointed_HomingBall(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.BndEvt__AOECollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Proj_Punk_Anointed_HomingBall");

	AProj_Punk_Anointed_EssenceOfTroy_C_BndEvt__AOECollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Proj_Punk_Anointed_HomingBall_Params params;
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


// Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.BndEvt__AOECollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Proj_Punk_Anointed_HomingBall
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Punk_Anointed_EssenceOfTroy_C::BndEvt__AOECollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Proj_Punk_Anointed_HomingBall(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.BndEvt__AOECollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Proj_Punk_Anointed_HomingBall");

	AProj_Punk_Anointed_EssenceOfTroy_C_BndEvt__AOECollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Proj_Punk_Anointed_HomingBall_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.ExecuteUbergraph_Proj_Punk_Anointed_EssenceOfTroy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Punk_Anointed_EssenceOfTroy_C::ExecuteUbergraph_Proj_Punk_Anointed_EssenceOfTroy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.ExecuteUbergraph_Proj_Punk_Anointed_EssenceOfTroy");

	AProj_Punk_Anointed_EssenceOfTroy_C_ExecuteUbergraph_Proj_Punk_Anointed_EssenceOfTroy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
