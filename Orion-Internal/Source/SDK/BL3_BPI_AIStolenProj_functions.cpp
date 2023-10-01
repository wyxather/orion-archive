// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_AIStolenProj_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDetonate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_AIStolenProj_C::AIStolenProj_AttemptDetonate(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDetonate");

	UBPI_AIStolenProj_C_AIStolenProj_AttemptDetonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_GetElementalTypeFromStolenProjectile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              StolenProjectileElement        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_AIStolenProj_C::AIStolenProj_GetElementalTypeFromStolenProjectile(EOakElementalType* StolenProjectileElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_GetElementalTypeFromStolenProjectile");

	UBPI_AIStolenProj_C_AIStolenProj_GetElementalTypeFromStolenProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StolenProjectileElement != nullptr)
		*StolenProjectileElement = params.StolenProjectileElement;
}


// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptLerpToSocket
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SocketToLerpTo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LerpDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_AIStolenProj_C::AIStolenProj_AttemptLerpToSocket(const struct FName& SocketToLerpTo, float LerpDuration, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptLerpToSocket");

	UBPI_AIStolenProj_C_AIStolenProj_AttemptLerpToSocket_Params params;
	params.SocketToLerpTo = SocketToLerpTo;
	params.LerpDuration = LerpDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptReturnTo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_AIThrowAtStyle> ReturnTo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetSocket                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxPrediction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AnglePercent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DirectionOffset                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 TargetOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  SpecifiedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_AIStolenProj_C::AIStolenProj_AttemptReturnTo(TEnumAsByte<Enum_AIThrowAtStyle> ReturnTo, const struct FName& TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& TargetOffset, class AActor* SpecifiedActor, const struct FVector& WorldLocation, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptReturnTo");

	UBPI_AIStolenProj_C_AIStolenProj_AttemptReturnTo_Params params;
	params.ReturnTo = ReturnTo;
	params.TargetSocket = TargetSocket;
	params.MaxPrediction = MaxPrediction;
	params.Speed = Speed;
	params.AnglePercent = AnglePercent;
	params.DirectionOffset = DirectionOffset;
	params.TargetOffset = TargetOffset;
	params.SpecifiedActor = SpecifiedActor;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptAttach
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_AIStolenProj_C::AIStolenProj_AttemptAttach(const struct FName& SocketName, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptAttach");

	UBPI_AIStolenProj_C_AIStolenProj_AttemptAttach_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDestroy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_AIStolenProj_C::AIStolenProj_AttemptDestroy(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDestroy");

	UBPI_AIStolenProj_C_AIStolenProj_AttemptDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDisarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_AIStolenProj_C::AIStolenProj_AttemptDisarm(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDisarm");

	UBPI_AIStolenProj_C_AIStolenProj_AttemptDisarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
