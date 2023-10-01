// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_HW_PodRocket_Master_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ProjectileDisarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_HW_PodRocket_Master_C::ProjectileDisarm(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ProjectileDisarm");

	AProj_ATL_HW_PodRocket_Master_C_ProjectileDisarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ProjectileArm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_HW_PodRocket_Master_C::ProjectileArm(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ProjectileArm");

	AProj_ATL_HW_PodRocket_Master_C_ProjectileArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ProjectileDetonate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_HW_PodRocket_Master_C::ProjectileDetonate(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ProjectileDetonate");

	AProj_ATL_HW_PodRocket_Master_C_ProjectileDetonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.TargetLockBeam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HomingTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_HW_PodRocket_Master_C::TargetLockBeam(class AActor* HomingTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.TargetLockBeam");

	AProj_ATL_HW_PodRocket_Master_C_TargetLockBeam_Params params;
	params.HomingTarget = HomingTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_ATL_HW_PodRocket_Master_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.UserConstructionScript");

	AProj_ATL_HW_PodRocket_Master_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_ATL_HW_PodRocket_Master_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ReceiveBeginPlay");

	AProj_ATL_HW_PodRocket_Master_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ReceiveHit
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

void AProj_ATL_HW_PodRocket_Master_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ReceiveHit");

	AProj_ATL_HW_PodRocket_Master_C_ReceiveHit_Params params;
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


// Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_ATL_HW_PodRocket_Master_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.OnExplode");

	AProj_ATL_HW_PodRocket_Master_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.RetyHoming
// (BlueprintCallable, BlueprintEvent)

void AProj_ATL_HW_PodRocket_Master_C::RetyHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.RetyHoming");

	AProj_ATL_HW_PodRocket_Master_C_RetyHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ExecuteUbergraph_Proj_ATL_HW_PodRocket_Master
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_HW_PodRocket_Master_C::ExecuteUbergraph_Proj_ATL_HW_PodRocket_Master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Master.Proj_ATL_HW_PodRocket_Master_C.ExecuteUbergraph_Proj_ATL_HW_PodRocket_Master");

	AProj_ATL_HW_PodRocket_Master_C_ExecuteUbergraph_Proj_ATL_HW_PodRocket_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
