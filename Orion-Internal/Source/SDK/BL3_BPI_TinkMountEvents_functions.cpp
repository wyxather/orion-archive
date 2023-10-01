// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkMountEvents_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_TinkMountEvents.BPI_TinkMountEvents_C.Tink_HasBeenPhaseLocked
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkMountEvents_C::Tink_HasBeenPhaseLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkMountEvents.BPI_TinkMountEvents_C.Tink_HasBeenPhaseLocked");

	UBPI_TinkMountEvents_C_Tink_HasBeenPhaseLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkMountEvents.BPI_TinkMountEvents_C.Tink_ForceMountToDetachRider
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkMountEvents_C::Tink_ForceMountToDetachRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkMountEvents.BPI_TinkMountEvents_C.Tink_ForceMountToDetachRider");

	UBPI_TinkMountEvents_C_Tink_ForceMountToDetachRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkMountEvents.BPI_TinkMountEvents_C.Tink_CheerGoon
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkMountEvents_C::Tink_CheerGoon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkMountEvents.BPI_TinkMountEvents_C.Tink_CheerGoon");

	UBPI_TinkMountEvents_C_Tink_CheerGoon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkMountEvents.BPI_TinkMountEvents_C.Event_TinkHasDied
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkMountEvents_C::Event_TinkHasDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkMountEvents.BPI_TinkMountEvents_C.Event_TinkHasDied");

	UBPI_TinkMountEvents_C_Event_TinkHasDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
