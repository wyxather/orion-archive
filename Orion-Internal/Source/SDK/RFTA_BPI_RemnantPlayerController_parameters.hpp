#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BPI_RemnantPlayerController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ValidateItemRemoval
struct UBPI_RemnantPlayerController_C_ValidateItemRemoval_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerInfusionMenu
struct UBPI_RemnantPlayerController_C_ShowPlayerInfusionMenu_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerUpgradingMenu
struct UBPI_RemnantPlayerController_C_ShowPlayerUpgradingMenu_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerCraftingMenu
struct UBPI_RemnantPlayerController_C_ShowPlayerCraftingMenu_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerLootContainer
struct UBPI_RemnantPlayerController_C_ShowPlayerLootContainer_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.ShowPlayerDialogue
struct UBPI_RemnantPlayerController_C_ShowPlayerDialogue_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_RemnantPlayerController.BPI_RemnantPlayerController_C.EndPlayerDialog
struct UBPI_RemnantPlayerController_C_EndPlayerDialog_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
