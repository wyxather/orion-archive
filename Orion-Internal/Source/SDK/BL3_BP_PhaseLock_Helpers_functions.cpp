// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PhaseLock_Helpers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C.IsPhaselocked
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PhaseLock_Helpers_C::STATIC_IsPhaselocked(class AActor* Target, class UObject* __WorldContext, bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C.IsPhaselocked");

	UBP_PhaseLock_Helpers_C_IsPhaselocked_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C.GetAdjustedPhaseLockSpeed
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewSpeed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PhaseLock_Helpers_C::STATIC_GetAdjustedPhaseLockSpeed(class AActor* Target, class UObject* __WorldContext, float* NewSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C.GetAdjustedPhaseLockSpeed");

	UBP_PhaseLock_Helpers_C_GetAdjustedPhaseLockSpeed_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewSpeed != nullptr)
		*NewSpeed = params.NewSpeed;
}


// Function BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C.ApplyPhaseLockToTarget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  PhaseLockClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PhaseLock_Helpers_C::STATIC_ApplyPhaseLockToTarget(class AActor* Target, class UClass* PhaseLockClass, class AActor* Instigator, float Duration, float Speed, const struct FVector& TargetLocation, class UObject* __WorldContext, bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C.ApplyPhaseLockToTarget");

	UBP_PhaseLock_Helpers_C_ApplyPhaseLockToTarget_Params params;
	params.Target = Target;
	params.PhaseLockClass = PhaseLockClass;
	params.Instigator = Instigator;
	params.Duration = Duration;
	params.Speed = Speed;
	params.TargetLocation = TargetLocation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
