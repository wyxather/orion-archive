// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Lilith_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Lilith.BPI_Lilith_C.LilithWingsOff
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Lilith_C::LilithWingsOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lilith.BPI_Lilith_C.LilithWingsOff");

	UBPI_Lilith_C_LilithWingsOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Lilith.BPI_Lilith_C.LilithWingsOn
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Lilith_C::LilithWingsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lilith.BPI_Lilith_C.LilithWingsOn");

	UBPI_Lilith_C_LilithWingsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Lilith.BPI_Lilith_C.LilithPhaseTeleportTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TeleportToActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Lilith_C::LilithPhaseTeleportTo(class AActor* TeleportToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lilith.BPI_Lilith_C.LilithPhaseTeleportTo");

	UBPI_Lilith_C_LilithPhaseTeleportTo_Params params;
	params.TeleportToActor = TeleportToActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Lilith.BPI_Lilith_C.LilithSpecialDownstate
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Lilith_C::LilithSpecialDownstate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Lilith.BPI_Lilith_C.LilithSpecialDownstate");

	UBPI_Lilith_C_LilithSpecialDownstate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
