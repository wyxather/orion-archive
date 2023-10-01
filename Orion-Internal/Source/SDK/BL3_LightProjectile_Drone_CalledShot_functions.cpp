// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Drone_CalledShot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.ShouldSimulateTriggerRelease
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  ProjectileOwner                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_Drone_CalledShot_C::ShouldSimulateTriggerRelease(class AActor* ProjectileOwner, bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.ShouldSimulateTriggerRelease");

	ULightProjectile_Drone_CalledShot_C_ShouldSimulateTriggerRelease_Params params;
	params.ProjectileOwner = ProjectileOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.OnBegin
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_Drone_CalledShot_C::OnBegin(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.OnBegin");

	ULightProjectile_Drone_CalledShot_C_OnBegin_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.StartHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     LightProjectile                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_Drone_CalledShot_C::StartHoming(class UOakLightProjectile* LightProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.StartHoming");

	ULightProjectile_Drone_CalledShot_C_StartHoming_Params params;
	params.LightProjectile = LightProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.TryEnableHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     LightProjectile                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_Drone_CalledShot_C::TryEnableHoming(class UOakLightProjectile* LightProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.TryEnableHoming");

	ULightProjectile_Drone_CalledShot_C_TryEnableHoming_Params params;
	params.LightProjectile = LightProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_Drone_CalledShot_C::OnLifetimeExpired(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C.OnLifetimeExpired");

	ULightProjectile_Drone_CalledShot_C_OnLifetimeExpired_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
