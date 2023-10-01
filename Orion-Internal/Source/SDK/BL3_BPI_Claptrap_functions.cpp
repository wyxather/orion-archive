// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Claptrap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Claptrap.BPI_Claptrap_C.EnableClaptrapAntenna
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Claptrap_C::EnableClaptrapAntenna()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Claptrap.BPI_Claptrap_C.EnableClaptrapAntenna");

	UBPI_Claptrap_C_EnableClaptrapAntenna_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Claptrap.BPI_Claptrap_C.DisableClaptrapAntenna
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Claptrap_C::DisableClaptrapAntenna()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Claptrap.BPI_Claptrap_C.DisableClaptrapAntenna");

	UBPI_Claptrap_C_DisableClaptrapAntenna_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Claptrap.BPI_Claptrap_C.ForceClaptrapDownstate
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Claptrap_C::ForceClaptrapDownstate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Claptrap.BPI_Claptrap_C.ForceClaptrapDownstate");

	UBPI_Claptrap_C_ForceClaptrapDownstate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
