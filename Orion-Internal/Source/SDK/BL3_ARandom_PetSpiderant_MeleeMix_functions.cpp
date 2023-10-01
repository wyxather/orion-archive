// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_PetSpiderant_MeleeMix_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARandom_PetSpiderant_MeleeMix.ARandom_PetSpiderant_MeleeMix_C.Notify_Melee
// (BlueprintCallable, BlueprintEvent)

void UARandom_PetSpiderant_MeleeMix_C::Notify_Melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_PetSpiderant_MeleeMix.ARandom_PetSpiderant_MeleeMix_C.Notify_Melee");

	UARandom_PetSpiderant_MeleeMix_C_Notify_Melee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_PetSpiderant_MeleeMix.ARandom_PetSpiderant_MeleeMix_C.ExecuteUbergraph_ARandom_PetSpiderant_MeleeMix
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARandom_PetSpiderant_MeleeMix_C::ExecuteUbergraph_ARandom_PetSpiderant_MeleeMix(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_PetSpiderant_MeleeMix.ARandom_PetSpiderant_MeleeMix_C.ExecuteUbergraph_ARandom_PetSpiderant_MeleeMix");

	UARandom_PetSpiderant_MeleeMix_C_ExecuteUbergraph_ARandom_PetSpiderant_MeleeMix_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
