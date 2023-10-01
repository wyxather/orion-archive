// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PetSpiderant_Evo2_King_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PetSpiderant_Evo2_King_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C.UserConstructionScript");

	ABPChar_PetSpiderant_Evo2_King_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_PetSpiderant_Evo2_King_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C.ReceiveBeginPlay");

	ABPChar_PetSpiderant_Evo2_King_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C.ExecuteUbergraph_BPChar_PetSpiderant_Evo2_King
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PetSpiderant_Evo2_King_C::ExecuteUbergraph_BPChar_PetSpiderant_Evo2_King(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C.ExecuteUbergraph_BPChar_PetSpiderant_Evo2_King");

	ABPChar_PetSpiderant_Evo2_King_C_ExecuteUbergraph_BPChar_PetSpiderant_Evo2_King_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
