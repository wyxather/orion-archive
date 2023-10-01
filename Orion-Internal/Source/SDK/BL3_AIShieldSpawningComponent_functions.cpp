// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIShieldSpawningComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_Spawn
// (Public, BlueprintCallable, BlueprintEvent)

void UAIShieldSpawningComponent_C::AIShield_Spawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_Spawn");

	UAIShieldSpawningComponent_C_AIShield_Spawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ThrowSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowAnglePercent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetSocket                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                ThrowAngleOffset               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MaxPrediction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequestNewShield               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnIfDoesntExist             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIShieldSpawningComponent_C::AIShield_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const struct FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtTarget");

	UAIShieldSpawningComponent_C_AIShield_ThrowAtTarget_Params params;
	params.ThrowSpeed = ThrowSpeed;
	params.ThrowAnglePercent = ThrowAnglePercent;
	params.TargetSocket = TargetSocket;
	params.TargetOffset = TargetOffset;
	params.ThrowAngleOffset = ThrowAngleOffset;
	params.MaxPrediction = MaxPrediction;
	params.RequestNewShield = RequestNewShield;
	params.SpawnIfDoesntExist = SpawnIfDoesntExist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToThrowAt                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowAnglePercentage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActorSocket                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorOffset                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                ThrowAngleOffset               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MaxPrediction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequestNewShield               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnIfDoesntExist             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIShieldSpawningComponent_C::AIShield_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const struct FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtActor");

	UAIShieldSpawningComponent_C_AIShield_ThrowAtActor_Params params;
	params.ActorToThrowAt = ActorToThrowAt;
	params.ThrowSpeed = ThrowSpeed;
	params.ThrowAnglePercentage = ThrowAnglePercentage;
	params.ActorSocket = ActorSocket;
	params.ActorOffset = ActorOffset;
	params.ThrowAngleOffset = ThrowAngleOffset;
	params.MaxPrediction = MaxPrediction;
	params.RequestNewShield = RequestNewShield;
	params.SpawnIfDoesntExist = SpawnIfDoesntExist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LocationToThrowAt              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ThrowSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowAnglePercentage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequestNewShield               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnIfDoesntExist             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIShieldSpawningComponent_C::AIShield_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewShield, bool SpawnIfDoesntExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtLocation");

	UAIShieldSpawningComponent_C_AIShield_ThrowAtLocation_Params params;
	params.LocationToThrowAt = LocationToThrowAt;
	params.ThrowSpeed = ThrowSpeed;
	params.ThrowAnglePercentage = ThrowAnglePercentage;
	params.RequestNewShield = RequestNewShield;
	params.SpawnIfDoesntExist = SpawnIfDoesntExist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RequestNewShield               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIShieldSpawningComponent_C::AIShield_Drop(bool RequestNewShield)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_Drop");

	UAIShieldSpawningComponent_C_AIShield_Drop_Params params;
	params.RequestNewShield = RequestNewShield;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_SetNewShieldClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewShieldClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIShieldSpawningComponent_C::AIShield_SetNewShieldClass(class UClass* NewShieldClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_SetNewShieldClass");

	UAIShieldSpawningComponent_C_AIShield_SetNewShieldClass_Params params;
	params.NewShieldClass = NewShieldClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.ExecuteUbergraph_AIShieldSpawningComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIShieldSpawningComponent_C::ExecuteUbergraph_AIShieldSpawningComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.ExecuteUbergraph_AIShieldSpawningComponent");

	UAIShieldSpawningComponent_C_ExecuteUbergraph_AIShieldSpawningComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
