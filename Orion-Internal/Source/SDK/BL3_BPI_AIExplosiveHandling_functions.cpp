// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_AIExplosiveHandling_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_SetNewExplosiveClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewExplosiveClass              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_AIExplosiveHandling_C::AIExplosive_SetNewExplosiveClass(class UClass* NewExplosiveClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_SetNewExplosiveClass");

	UBPI_AIExplosiveHandling_C_AIExplosive_SetNewExplosiveClass_Params params;
	params.NewExplosiveClass = NewExplosiveClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_ThrowAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LocationToThrowAt              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ThrowSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowAnglePercentage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequestNewExplosive            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnIfDoesntExist             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_AIExplosiveHandling_C::AIExplosive_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewExplosive, bool SpawnIfDoesntExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_ThrowAtLocation");

	UBPI_AIExplosiveHandling_C_AIExplosive_ThrowAtLocation_Params params;
	params.LocationToThrowAt = LocationToThrowAt;
	params.ThrowSpeed = ThrowSpeed;
	params.ThrowAnglePercentage = ThrowAnglePercentage;
	params.RequestNewExplosive = RequestNewExplosive;
	params.SpawnIfDoesntExist = SpawnIfDoesntExist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_ThrowAtActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToThrowAt                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowAnglePercentage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActorSocket                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorOffset                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                ThrowAngleOffset               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MaxPrediction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequestNewExplosive            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnIfDoesntExist             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_AIExplosiveHandling_C::AIExplosive_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const struct FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesntExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_ThrowAtActor");

	UBPI_AIExplosiveHandling_C_AIExplosive_ThrowAtActor_Params params;
	params.ActorToThrowAt = ActorToThrowAt;
	params.ThrowSpeed = ThrowSpeed;
	params.ThrowAnglePercentage = ThrowAnglePercentage;
	params.ActorSocket = ActorSocket;
	params.ActorOffset = ActorOffset;
	params.ThrowAngleOffset = ThrowAngleOffset;
	params.MaxPrediction = MaxPrediction;
	params.RequestNewExplosive = RequestNewExplosive;
	params.SpawnIfDoesntExist = SpawnIfDoesntExist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_Detonate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KillSelfOnDetonate             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequestNewExplosive            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InstigatorOverride             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_AIExplosiveHandling_C::AIExplosive_Detonate(bool KillSelfOnDetonate, bool RequestNewExplosive, class AActor* InstigatorOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_Detonate");

	UBPI_AIExplosiveHandling_C_AIExplosive_Detonate_Params params;
	params.KillSelfOnDetonate = KillSelfOnDetonate;
	params.RequestNewExplosive = RequestNewExplosive;
	params.InstigatorOverride = InstigatorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RequestNewExplosive            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InstigatorOverride             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_AIExplosiveHandling_C::AIExplosive_Drop(bool RequestNewExplosive, class AActor* InstigatorOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_Drop");

	UBPI_AIExplosiveHandling_C_AIExplosive_Drop_Params params;
	params.RequestNewExplosive = RequestNewExplosive;
	params.InstigatorOverride = InstigatorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_ThrowAtTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ThrowSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThrowAnglePercent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetSocket                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                ThrowAngleOffset               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MaxPrediction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequestNewExplosive            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnIfDoesn_tExist            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_AIExplosiveHandling_C::AIExplosive_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const struct FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesn_tExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_ThrowAtTarget");

	UBPI_AIExplosiveHandling_C_AIExplosive_ThrowAtTarget_Params params;
	params.ThrowSpeed = ThrowSpeed;
	params.ThrowAnglePercent = ThrowAnglePercent;
	params.TargetSocket = TargetSocket;
	params.TargetOffset = TargetOffset;
	params.ThrowAngleOffset = ThrowAngleOffset;
	params.MaxPrediction = MaxPrediction;
	params.RequestNewExplosive = RequestNewExplosive;
	params.SpawnIfDoesn_tExist = SpawnIfDoesn_tExist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_Prime
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_AIExplosiveHandling_C::AIExplosive_Prime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_Prime");

	UBPI_AIExplosiveHandling_C_AIExplosive_Prime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_Spawn
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_AIExplosiveHandling_C::AIExplosive_Spawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_Spawn");

	UBPI_AIExplosiveHandling_C_AIExplosive_Spawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
