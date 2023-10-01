// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARand_PetSkag_MeleeMix_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_Bite
// (BlueprintCallable, BlueprintEvent)

void UARand_PetSkag_MeleeMix_C::Notify_Bite()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_Bite");

	UARand_PetSkag_MeleeMix_C_Notify_Bite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_ClawRtoL
// (BlueprintCallable, BlueprintEvent)

void UARand_PetSkag_MeleeMix_C::Notify_ClawRtoL()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_ClawRtoL");

	UARand_PetSkag_MeleeMix_C_Notify_ClawRtoL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_ClawLtoR
// (BlueprintCallable, BlueprintEvent)

void UARand_PetSkag_MeleeMix_C::Notify_ClawLtoR()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_ClawLtoR");

	UARand_PetSkag_MeleeMix_C_Notify_ClawLtoR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_MeleeAttack
// (BlueprintCallable, BlueprintEvent)

void UARand_PetSkag_MeleeMix_C::Notify_MeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.Notify_MeleeAttack");

	UARand_PetSkag_MeleeMix_C_Notify_MeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.ExecuteUbergraph_ARand_PetSkag_MeleeMix
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARand_PetSkag_MeleeMix_C::ExecuteUbergraph_ARand_PetSkag_MeleeMix(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARand_PetSkag_MeleeMix.ARand_PetSkag_MeleeMix_C.ExecuteUbergraph_ARand_PetSkag_MeleeMix");

	UARand_PetSkag_MeleeMix_C_ExecuteUbergraph_ARand_PetSkag_MeleeMix_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
