// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_PetSkag_Melee_Run_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.Notify_ClawRtoL
// (BlueprintCallable, BlueprintEvent)

void UARandom_PetSkag_Melee_Run_C::Notify_ClawRtoL()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.Notify_ClawRtoL");

	UARandom_PetSkag_Melee_Run_C_Notify_ClawRtoL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.Notify_Bite
// (BlueprintCallable, BlueprintEvent)

void UARandom_PetSkag_Melee_Run_C::Notify_Bite()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.Notify_Bite");

	UARandom_PetSkag_Melee_Run_C_Notify_Bite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.Notify_MeleeAttack
// (BlueprintCallable, BlueprintEvent)

void UARandom_PetSkag_Melee_Run_C::Notify_MeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.Notify_MeleeAttack");

	UARandom_PetSkag_Melee_Run_C_Notify_MeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.ExecuteUbergraph_ARandom_PetSkag_Melee_Run
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARandom_PetSkag_Melee_Run_C::ExecuteUbergraph_ARandom_PetSkag_Melee_Run(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_PetSkag_Melee_Run.ARandom_PetSkag_Melee_Run_C.ExecuteUbergraph_ARandom_PetSkag_Melee_Run");

	UARandom_PetSkag_Melee_Run_C_ExecuteUbergraph_ARandom_PetSkag_Melee_Run_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
