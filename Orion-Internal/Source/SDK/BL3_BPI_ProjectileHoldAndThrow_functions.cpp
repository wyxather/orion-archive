// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_ProjectileHoldAndThrow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Throw
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void UBPI_ProjectileHoldAndThrow_C::HNT_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Throw");

	UBPI_ProjectileHoldAndThrow_C_HNT_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Drop
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void UBPI_ProjectileHoldAndThrow_C::HNT_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Drop");

	UBPI_ProjectileHoldAndThrow_C_HNT_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Prime
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void UBPI_ProjectileHoldAndThrow_C::HNT_Prime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Prime");

	UBPI_ProjectileHoldAndThrow_C_HNT_Prime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
