// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPBeastmasterComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPBeastmasterComponent.BPBeastmasterComponent_C.ValidateCurrentPetAugment
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UOakPlayerCharacterAugmentData_Pet** PetAugment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPBeastmasterComponent_C::ValidateCurrentPetAugment(class UOakPlayerCharacterAugmentData_Pet** PetAugment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.ValidateCurrentPetAugment");

	UBPBeastmasterComponent_C_ValidateCurrentPetAugment_Params params;
	params.PetAugment = PetAugment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetPetCooldownRefundPercent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EPetRespawnCooldownRefundType* RefundType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPBeastmasterComponent_C::GetPetCooldownRefundPercent(EPetRespawnCooldownRefundType* RefundType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetPetCooldownRefundPercent");

	UBPBeastmasterComponent_C_GetPetCooldownRefundPercent_Params params;
	params.RefundType = RefundType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetFallbackPetSpawnLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPBeastmasterComponent_C::GetFallbackPetSpawnLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetFallbackPetSpawnLocation");

	UBPBeastmasterComponent_C_GetFallbackPetSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPBeastmasterComponent.BPBeastmasterComponent_C.CheckForSpawnCollisions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SpawnLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bCollisionsDetected            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPBeastmasterComponent_C::CheckForSpawnCollisions(const struct FVector& SpawnLocation, bool* bCollisionsDetected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.CheckForSpawnCollisions");

	UBPBeastmasterComponent_C_CheckForSpawnCollisions_Params params;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCollisionsDetected != nullptr)
		*bCollisionsDetected = params.bCollisionsDetected;
}


// Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetPetSpawnClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UOakPlayerCharacterAugmentData_Pet* InAugment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPBeastmasterComponent_C::GetPetSpawnClass(class UOakPlayerCharacterAugmentData_Pet* InAugment, class UClass** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetPetSpawnClass");

	UBPBeastmasterComponent_C_GetPetSpawnClass_Params params;
	params.InAugment = InAugment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPBeastmasterComponent.BPBeastmasterComponent_C.SpawnNewPet
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakPlayerCharacterAugmentData_Pet** PetAugment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                SpawnLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AOakCharacter*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AOakCharacter* UBPBeastmasterComponent_C::SpawnNewPet(class UOakPlayerCharacterAugmentData_Pet** PetAugment, struct FVector* SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.SpawnNewPet");

	UBPBeastmasterComponent_C_SpawnNewPet_Params params;
	params.PetAugment = PetAugment;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPBeastmasterComponent.BPBeastmasterComponent_C.OnReleasedPet
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bForced                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPetReleaseReason*             ReleaseReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPBeastmasterComponent_C::OnReleasedPet(bool* bForced, EPetReleaseReason* ReleaseReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.OnReleasedPet");

	UBPBeastmasterComponent_C_OnReleasedPet_Params params;
	params.bForced = bForced;
	params.ReleaseReason = ReleaseReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPBeastmasterComponent.BPBeastmasterComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPBeastmasterComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.ReceiveBeginPlay");

	UBPBeastmasterComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPBeastmasterComponent.BPBeastmasterComponent_C.TryOrderPetAttack
// (Event, Protected, BlueprintEvent)

void UBPBeastmasterComponent_C::TryOrderPetAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.TryOrderPetAttack");

	UBPBeastmasterComponent_C_TryOrderPetAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPBeastmasterComponent.BPBeastmasterComponent_C.ExecuteUbergraph_BPBeastmasterComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPBeastmasterComponent_C::ExecuteUbergraph_BPBeastmasterComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.ExecuteUbergraph_BPBeastmasterComponent");

	UBPBeastmasterComponent_C_ExecuteUbergraph_BPBeastmasterComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
