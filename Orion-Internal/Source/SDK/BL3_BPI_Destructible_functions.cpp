// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Destructible_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Destructible.BPI_Destructible_C.BPI_SetFracturable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Fracturable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Destructible_C::BPI_SetFracturable(bool Fracturable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Destructible.BPI_Destructible_C.BPI_SetFracturable");

	UBPI_Destructible_C_BPI_SetFracturable_Params params;
	params.Fracturable = Fracturable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Destructible.BPI_Destructible_C.BPI_SkipToDestroyedState
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Destructible_C::BPI_SkipToDestroyedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Destructible.BPI_Destructible_C.BPI_SkipToDestroyedState");

	UBPI_Destructible_C_BPI_SkipToDestroyedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Destructible.BPI_Destructible_C.BPI_ScriptedTotalDestruction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageRadius                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ImpulseStrength                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Destructible_C::BPI_ScriptedTotalDestruction(float DamageRadius, float ImpulseStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Destructible.BPI_Destructible_C.BPI_ScriptedTotalDestruction");

	UBPI_Destructible_C_BPI_ScriptedTotalDestruction_Params params;
	params.DamageRadius = DamageRadius;
	params.ImpulseStrength = ImpulseStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
