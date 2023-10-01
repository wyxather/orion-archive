// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_PsychoShared_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoLoot_Flee_Beam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_PsychoShared_C::PsychoLoot_Flee_Beam(bool Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoLoot_Flee_Beam");

	UBPI_PsychoShared_C_PsychoLoot_Flee_Beam_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_Anointed_Death
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PsychoShared_C::PsychoShared_Anointed_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_Anointed_Death");

	UBPI_PsychoShared_C_PsychoShared_Anointed_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_StolenProjFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_PsychoShared_C::PsychoShared_StolenProjFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_StolenProjFinished");

	UBPI_PsychoShared_C_PsychoShared_StolenProjFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_GetVariant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_PsychoVariants> PsychoVariant                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_PsychoShared_C::PsychoShared_GetVariant(TEnumAsByte<Enum_PsychoVariants>* PsychoVariant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_GetVariant");

	UBPI_PsychoShared_C_PsychoShared_GetVariant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PsychoVariant != nullptr)
		*PsychoVariant = params.PsychoVariant;
}


// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_TargetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_PsychoShared_C::PsychoShared_TargetChanged(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_TargetChanged");

	UBPI_PsychoShared_C_PsychoShared_TargetChanged_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_FireBreath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_PsychoShared_FireBreathFunctions> FireBreath_Function            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_PsychoShared_C::PsychoShared_FireBreath(TEnumAsByte<Enum_PsychoShared_FireBreathFunctions> FireBreath_Function)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_FireBreath");

	UBPI_PsychoShared_C_PsychoShared_FireBreath_Params params;
	params.FireBreath_Function = FireBreath_Function;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_FacePlant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary Damage_Summary                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPI_PsychoShared_C::PsychoShared_FacePlant(const struct FDamageReactionEventSummary& Damage_Summary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_FacePlant");

	UBPI_PsychoShared_C_PsychoShared_FacePlant_Params params;
	params.Damage_Summary = Damage_Summary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_MaskBreak
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary Damage_Summary                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPI_PsychoShared_C::PsychoShared_MaskBreak(const struct FDamageReactionEventSummary& Damage_Summary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PsychoShared.BPI_PsychoShared_C.PsychoShared_MaskBreak");

	UBPI_PsychoShared_C_PsychoShared_MaskBreak_Params params;
	params.Damage_Summary = Damage_Summary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
