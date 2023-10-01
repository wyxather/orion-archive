// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_SkagShared_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_SkagShared.BPI_SkagShared_C.Skag_ElementalDeath
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SkagShared_C::Skag_ElementalDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkagShared.BPI_SkagShared_C.Skag_ElementalDeath");

	UBPI_SkagShared_C_Skag_ElementalDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SkagShared.BPI_SkagShared_C.Skag_SetBellyActorSpawnOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpawnOptionData*        NewBellyActorSpawnOption       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_SkagShared_C::Skag_SetBellyActorSpawnOption(class USpawnOptionData* NewBellyActorSpawnOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkagShared.BPI_SkagShared_C.Skag_SetBellyActorSpawnOption");

	UBPI_SkagShared_C_Skag_SetBellyActorSpawnOption_Params params;
	params.NewBellyActorSpawnOption = NewBellyActorSpawnOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SkagShared.BPI_SkagShared_C.Skag_GetVariant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_SkagVariants> SkagVariantType                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_SkagShared_C::Skag_GetVariant(TEnumAsByte<Enum_SkagVariants>* SkagVariantType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkagShared.BPI_SkagShared_C.Skag_GetVariant");

	UBPI_SkagShared_C_Skag_GetVariant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkagVariantType != nullptr)
		*SkagVariantType = params.SkagVariantType;
}


// Function BPI_SkagShared.BPI_SkagShared_C.Skag_How_Interrupted
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SkagShared_C::Skag_How_Interrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkagShared.BPI_SkagShared_C.Skag_How_Interrupted");

	UBPI_SkagShared_C_Skag_How_Interrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SkagShared.BPI_SkagShared_C.Skag_Howl_Stop
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SkagShared_C::Skag_Howl_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkagShared.BPI_SkagShared_C.Skag_Howl_Stop");

	UBPI_SkagShared_C_Skag_Howl_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SkagShared.BPI_SkagShared_C.Skag_SetDefaultProjectile
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SkagShared_C::Skag_SetDefaultProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkagShared.BPI_SkagShared_C.Skag_SetDefaultProjectile");

	UBPI_SkagShared_C_Skag_SetDefaultProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SkagShared.BPI_SkagShared_C.Skag_SetBadassBombProjectile
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SkagShared_C::Skag_SetBadassBombProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkagShared.BPI_SkagShared_C.Skag_SetBadassBombProjectile");

	UBPI_SkagShared_C_Skag_SetBadassBombProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SkagShared.BPI_SkagShared_C.Skag_Howl_Start
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SkagShared_C::Skag_Howl_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkagShared.BPI_SkagShared_C.Skag_Howl_Start");

	UBPI_SkagShared_C_Skag_Howl_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SkagShared.BPI_SkagShared_C.Skag_GetElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              SkagElement                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_SkagShared_C::Skag_GetElement(EOakElementalType* SkagElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkagShared.BPI_SkagShared_C.Skag_GetElement");

	UBPI_SkagShared_C_Skag_GetElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkagElement != nullptr)
		*SkagElement = params.SkagElement;
}


// Function BPI_SkagShared.BPI_SkagShared_C.Skag_Transform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsForcedTransform              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_SkagShared_C::Skag_Transform(EOakElementalType Element, bool IsForcedTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkagShared.BPI_SkagShared_C.Skag_Transform");

	UBPI_SkagShared_C_Skag_Transform_Params params;
	params.Element = Element;
	params.IsForcedTransform = IsForcedTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SkagShared.BPI_SkagShared_C.Skag_VomitStop
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SkagShared_C::Skag_VomitStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkagShared.BPI_SkagShared_C.Skag_VomitStop");

	UBPI_SkagShared_C_Skag_VomitStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SkagShared.BPI_SkagShared_C.Skag_VomitStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SkagShared_C::Skag_VomitStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkagShared.BPI_SkagShared_C.Skag_VomitStart");

	UBPI_SkagShared_C_Skag_VomitStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_SkagShared.BPI_SkagShared_C.Skag_StolenProjFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SkagShared_C::Skag_StolenProjFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SkagShared.BPI_SkagShared_C.Skag_StolenProjFinished");

	UBPI_SkagShared_C_Skag_StolenProjFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
