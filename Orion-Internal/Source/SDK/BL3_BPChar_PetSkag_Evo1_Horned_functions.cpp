// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PetSkag_Evo1_Horned_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetSkag_Evo1_Horned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C.UserConstructionScript");

	ABPChar_PetSkag_Evo1_Horned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_PetSkag_Evo1_Horned_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C.ReceiveBeginPlay");

	ABPChar_PetSkag_Evo1_Horned_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C.ExecuteUbergraph_BPChar_PetSkag_Evo1_Horned
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetSkag_Evo1_Horned_C::ExecuteUbergraph_BPChar_PetSkag_Evo1_Horned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetSkag_Evo1_Horned.BPChar_PetSkag_Evo1_Horned_C.ExecuteUbergraph_BPChar_PetSkag_Evo1_Horned");

	ABPChar_PetSkag_Evo1_Horned_C_ExecuteUbergraph_BPChar_PetSkag_Evo1_Horned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
