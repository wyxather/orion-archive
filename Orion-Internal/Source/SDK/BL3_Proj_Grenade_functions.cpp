// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Grenade_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Grenade.Proj_Grenade_C.AIProjectile_CanBeStolen
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProj_Grenade_C::AIProjectile_CanBeStolen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Grenade.Proj_Grenade_C.AIProjectile_CanBeStolen");

	AProj_Grenade_C_AIProjectile_CanBeStolen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Proj_Grenade.Proj_Grenade_C.AIProjectileDetonate
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_Grenade_C::AIProjectileDetonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Grenade.Proj_Grenade_C.AIProjectileDetonate");

	AProj_Grenade_C_AIProjectileDetonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Grenade.Proj_Grenade_C.AIProjectileArm
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_Grenade_C::AIProjectileArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Grenade.Proj_Grenade_C.AIProjectileArm");

	AProj_Grenade_C_AIProjectileArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Grenade.Proj_Grenade_C.AIProjectileDisarm
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_Grenade_C::AIProjectileDisarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Grenade.Proj_Grenade_C.AIProjectileDisarm");

	AProj_Grenade_C_AIProjectileDisarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Grenade.Proj_Grenade_C.TriggerGrenadeDodge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_Grenade_C::TriggerGrenadeDodge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Grenade.Proj_Grenade_C.TriggerGrenadeDodge");

	AProj_Grenade_C_TriggerGrenadeDodge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Grenade.Proj_Grenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Grenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Grenade.Proj_Grenade_C.UserConstructionScript");

	AProj_Grenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Grenade.Proj_Grenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Grenade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Grenade.Proj_Grenade_C.ReceiveBeginPlay");

	AProj_Grenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Grenade.Proj_Grenade_C.OnBounce
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AProj_Grenade_C::OnBounce(struct FHitResult* Hit, struct FVector* ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Grenade.Proj_Grenade_C.OnBounce");

	AProj_Grenade_C_OnBounce_Params params;
	params.Hit = Hit;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Arm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Grenade_C::AIProjectile_Arm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Arm");

	AProj_Grenade_C_AIProjectile_Arm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Detonate
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Grenade_C::AIProjectile_Detonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Detonate");

	AProj_Grenade_C_AIProjectile_Detonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Disarm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Grenade_C::AIProjectile_Disarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Disarm");

	AProj_Grenade_C_AIProjectile_Disarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Grenade.Proj_Grenade_C.ExecuteUbergraph_Proj_Grenade
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Grenade_C::ExecuteUbergraph_Proj_Grenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Grenade.Proj_Grenade_C.ExecuteUbergraph_Proj_Grenade");

	AProj_Grenade_C_ExecuteUbergraph_Proj_Grenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
