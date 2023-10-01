// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BPI_RemnantPlayerController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ValidateItemRemoval
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPI_RemnantPlayerController_C::ValidateItemRemoval(class AActor** Source, class UClass** ItemBP, int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ValidateItemRemoval");

	UBPI_RemnantPlayerController_C_ValidateItemRemoval_Params params;
	params.Source = Source;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerInfusionMenu
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPI_RemnantPlayerController_C::ShowPlayerInfusionMenu(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerInfusionMenu");

	UBPI_RemnantPlayerController_C_ShowPlayerInfusionMenu_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerUpgradingMenu
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPI_RemnantPlayerController_C::ShowPlayerUpgradingMenu(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerUpgradingMenu");

	UBPI_RemnantPlayerController_C_ShowPlayerUpgradingMenu_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerCraftingMenu
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPI_RemnantPlayerController_C::ShowPlayerCraftingMenu(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerCraftingMenu");

	UBPI_RemnantPlayerController_C_ShowPlayerCraftingMenu_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerLootContainer
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPI_RemnantPlayerController_C::ShowPlayerLootContainer(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerLootContainer");

	UBPI_RemnantPlayerController_C_ShowPlayerLootContainer_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerDialogue
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPI_RemnantPlayerController_C::ShowPlayerDialogue(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerDialogue");

	UBPI_RemnantPlayerController_C_ShowPlayerDialogue_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.EndPlayerDialog
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPI_RemnantPlayerController_C::EndPlayerDialog(class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.EndPlayerDialog");

	UBPI_RemnantPlayerController_C_EndPlayerDialog_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
