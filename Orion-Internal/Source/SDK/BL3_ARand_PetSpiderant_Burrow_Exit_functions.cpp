// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARand_PetSpiderant_Burrow_Exit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARand_PetSpiderant_Burrow_Exit.ARand_PetSpiderant_Burrow_Exit_C.Notify_BurrowExit
// (BlueprintCallable, BlueprintEvent)

void UARand_PetSpiderant_Burrow_Exit_C::Notify_BurrowExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARand_PetSpiderant_Burrow_Exit.ARand_PetSpiderant_Burrow_Exit_C.Notify_BurrowExit");

	UARand_PetSpiderant_Burrow_Exit_C_Notify_BurrowExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARand_PetSpiderant_Burrow_Exit.ARand_PetSpiderant_Burrow_Exit_C.ExecuteUbergraph_ARand_PetSpiderant_Burrow_Exit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARand_PetSpiderant_Burrow_Exit_C::ExecuteUbergraph_ARand_PetSpiderant_Burrow_Exit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARand_PetSpiderant_Burrow_Exit.ARand_PetSpiderant_Burrow_Exit_C.ExecuteUbergraph_ARand_PetSpiderant_Burrow_Exit");

	UARand_PetSpiderant_Burrow_Exit_C_ExecuteUbergraph_ARand_PetSpiderant_Burrow_Exit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
