// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkPileEvents_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPile_EnablePile
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkPileEvents_C::TinkPile_EnablePile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPile_EnablePile");

	UBPI_TinkPileEvents_C_TinkPile_EnablePile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPIle_DisablePile
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkPileEvents_C::TinkPIle_DisablePile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPIle_DisablePile");

	UBPI_TinkPileEvents_C_TinkPIle_DisablePile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPile_MyUserExitedPile
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkPileEvents_C::TinkPile_MyUserExitedPile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPile_MyUserExitedPile");

	UBPI_TinkPileEvents_C_TinkPile_MyUserExitedPile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPile_MyUserBuiltObject
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkPileEvents_C::TinkPile_MyUserBuiltObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPile_MyUserBuiltObject");

	UBPI_TinkPileEvents_C_TinkPile_MyUserBuiltObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPile_MyUserEnteredPile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_TinkBuildSelection> WhatToBuild                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_TinkPileEvents_C::TinkPile_MyUserEnteredPile(TEnumAsByte<Enum_TinkBuildSelection> WhatToBuild, class AActor* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkPileEvents.BPI_TinkPileEvents_C.TinkPile_MyUserEnteredPile");

	UBPI_TinkPileEvents_C_TinkPile_MyUserEnteredPile_Params params;
	params.WhatToBuild = WhatToBuild;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
