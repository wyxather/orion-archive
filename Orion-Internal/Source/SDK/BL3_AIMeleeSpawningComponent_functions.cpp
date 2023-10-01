// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIMeleeSpawningComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_GetElementalTypeFromMeleeWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              MeleeWeaponElement             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAIMeleeSpawningComponent_C::AIMelee_GetElementalTypeFromMeleeWeapon(EOakElementalType* MeleeWeaponElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_GetElementalTypeFromMeleeWeapon");

	UAIMeleeSpawningComponent_C_AIMelee_GetElementalTypeFromMeleeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MeleeWeaponElement != nullptr)
		*MeleeWeaponElement = params.MeleeWeaponElement;
}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RequestNewMeleeWeapon          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIMeleeSpawningComponent_C::AIMelee_Drop(bool RequestNewMeleeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_Drop");

	UAIMeleeSpawningComponent_C_AIMelee_Drop_Params params;
	params.RequestNewMeleeWeapon = RequestNewMeleeWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ThrowSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowAnglePercent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetSocket                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                ThrowAngleOffset               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MaxPrediction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequestNewMeleeWeapon          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnIfDoesntExist             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIMeleeSpawningComponent_C::AIMelee_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const struct FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtTarget");

	UAIMeleeSpawningComponent_C_AIMelee_ThrowAtTarget_Params params;
	params.ThrowSpeed = ThrowSpeed;
	params.ThrowAnglePercent = ThrowAnglePercent;
	params.TargetSocket = TargetSocket;
	params.TargetOffset = TargetOffset;
	params.ThrowAngleOffset = ThrowAngleOffset;
	params.MaxPrediction = MaxPrediction;
	params.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
	params.SpawnIfDoesntExist = SpawnIfDoesntExist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_Spawn
// (Public, BlueprintCallable, BlueprintEvent)

void UAIMeleeSpawningComponent_C::AIMelee_Spawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_Spawn");

	UAIMeleeSpawningComponent_C_AIMelee_Spawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToThrowAt                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowAnglePercentage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActorSocket                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorOffset                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                ThrowAngleOffset               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MaxPrediction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequestNewMeleeWeapon          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnIfDoesntExist             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIMeleeSpawningComponent_C::AIMelee_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const struct FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtActor");

	UAIMeleeSpawningComponent_C_AIMelee_ThrowAtActor_Params params;
	params.ActorToThrowAt = ActorToThrowAt;
	params.ThrowSpeed = ThrowSpeed;
	params.ThrowAnglePercentage = ThrowAnglePercentage;
	params.ActorSocket = ActorSocket;
	params.ActorOffset = ActorOffset;
	params.ThrowAngleOffset = ThrowAngleOffset;
	params.MaxPrediction = MaxPrediction;
	params.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
	params.SpawnIfDoesntExist = SpawnIfDoesntExist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LocationToThrowAt              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ThrowSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowAnglePercentage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequestNewMeleeWeapon          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnIfDoesntExist             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIMeleeSpawningComponent_C::AIMelee_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtLocation");

	UAIMeleeSpawningComponent_C_AIMelee_ThrowAtLocation_Params params;
	params.LocationToThrowAt = LocationToThrowAt;
	params.ThrowSpeed = ThrowSpeed;
	params.ThrowAnglePercentage = ThrowAnglePercentage;
	params.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
	params.SpawnIfDoesntExist = SpawnIfDoesntExist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_SetNewMeleeWeaponClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewMeleeWeaponClass            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIMeleeSpawningComponent_C::AIMelee_SetNewMeleeWeaponClass(class UClass* NewMeleeWeaponClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_SetNewMeleeWeaponClass");

	UAIMeleeSpawningComponent_C_AIMelee_SetNewMeleeWeaponClass_Params params;
	params.NewMeleeWeaponClass = NewMeleeWeaponClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.OnHeldActorNativeDrop
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIMeleeSpawningComponent_C::OnHeldActorNativeDrop(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.OnHeldActorNativeDrop");

	UAIMeleeSpawningComponent_C_OnHeldActorNativeDrop_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.ExecuteUbergraph_AIMeleeSpawningComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIMeleeSpawningComponent_C::ExecuteUbergraph_AIMeleeSpawningComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.ExecuteUbergraph_AIMeleeSpawningComponent");

	UAIMeleeSpawningComponent_C_ExecuteUbergraph_AIMeleeSpawningComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
