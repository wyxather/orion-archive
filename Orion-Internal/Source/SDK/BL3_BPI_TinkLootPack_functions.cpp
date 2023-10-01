// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkLootPack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPack_MyParentThawed
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLootPack_C::TinkLootPack_MyParentThawed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPack_MyParentThawed");

	UBPI_TinkLootPack_C_TinkLootPack_MyParentThawed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPack_MyParentFrozen
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLootPack_C::TinkLootPack_MyParentFrozen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPack_MyParentFrozen");

	UBPI_TinkLootPack_C_TinkLootPack_MyParentFrozen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPaack_SetExperienceLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ExperienceLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_TinkLootPack_C::TinkLootPaack_SetExperienceLevel(int ExperienceLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPaack_SetExperienceLevel");

	UBPI_TinkLootPack_C_TinkLootPaack_SetExperienceLevel_Params params;
	params.ExperienceLevel = ExperienceLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPack_MyParentDied
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLootPack_C::TinkLootPack_MyParentDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPack_MyParentDied");

	UBPI_TinkLootPack_C_TinkLootPack_MyParentDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPack_SetMyParent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_TinkLootPack_C::TinkLootPack_SetMyParent(class AActor* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLootPack.BPI_TinkLootPack_C.TinkLootPack_SetMyParent");

	UBPI_TinkLootPack_C_TinkLootPack_SetMyParent_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
