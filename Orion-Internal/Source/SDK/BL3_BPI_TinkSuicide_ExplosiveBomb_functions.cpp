// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkSuicide_ExplosiveBomb_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_StartSuicide
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkSuicide_ExplosiveBomb_C::TinkSuicideBomb_StartSuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_StartSuicide");

	UBPI_TinkSuicide_ExplosiveBomb_C_TinkSuicideBomb_StartSuicide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_SetCurrentHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewCurrentHealth               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_TinkSuicide_ExplosiveBomb_C::TinkSuicideBomb_SetCurrentHealth(float NewCurrentHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_SetCurrentHealth");

	UBPI_TinkSuicide_ExplosiveBomb_C_TinkSuicideBomb_SetCurrentHealth_Params params;
	params.NewCurrentHealth = NewCurrentHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_SetFuseTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewFuseTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_TinkSuicide_ExplosiveBomb_C::TinkSuicideBomb_SetFuseTimer(float NewFuseTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkSuicide_ExplosiveBomb.BPI_TinkSuicide_ExplosiveBomb_C.TinkSuicideBomb_SetFuseTimer");

	UBPI_TinkSuicide_ExplosiveBomb_C_TinkSuicideBomb_SetFuseTimer_Params params;
	params.NewFuseTime = NewFuseTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
