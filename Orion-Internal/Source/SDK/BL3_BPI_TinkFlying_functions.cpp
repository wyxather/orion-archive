// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkFlying_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_TinkFlying.BPI_TinkFlying_C.Tink_SetWantsToLand
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkFlying_C::Tink_SetWantsToLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkFlying.BPI_TinkFlying_C.Tink_SetWantsToLand");

	UBPI_TinkFlying_C_Tink_SetWantsToLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkFlying.BPI_TinkFlying_C.Tink_SetWantsToFly
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkFlying_C::Tink_SetWantsToFly()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkFlying.BPI_TinkFlying_C.Tink_SetWantsToFly");

	UBPI_TinkFlying_C_Tink_SetWantsToFly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
