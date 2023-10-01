#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BPI_RemnantPlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_RemnantPlayerController.BPI_RemnantPlayerController_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_RemnantPlayerController_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_RemnantPlayerController.BPI_RemnantPlayerController_C");
		return ptr;
	}


	void ValidateItemRemoval(class AActor** Source, class UClass** ItemBP, int* Quantity);
	void ShowPlayerInfusionMenu(class AActor** Source);
	void ShowPlayerUpgradingMenu(class AActor** Source);
	void ShowPlayerCraftingMenu(class AActor** Source);
	void ShowPlayerLootContainer(class AActor** Source);
	void ShowPlayerDialogue(class AActor** Source);
	void EndPlayerDialog(class AActor** Source);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
