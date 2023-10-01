#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_UserWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_UserWidget.Widget_UserWidget_C
// 0x0009 (0x0249 - 0x0240)
class UWidget_UserWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               DialogPushed;                                             // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_UserWidget.Widget_UserWidget_C");
		return ptr;
	}


	void GetRelevantPlayerPawn(class APawn** Player);
	void GetLegacyProgression(class UProgressionComponent** Out);
	void IsDialogPushed(bool* Out);
	void GetProgression(class UProgressionComponent** Out);
	void GetTraitsComponent(class UTraitsComponent** Traits);
	void EndDialog(struct FName* Result);
	void BeginDialog(class UClass** DialogBP, struct FText* Text, struct FText* Caption, class AUIActor** Out);
	void GetContextInventory(class UInventoryComponent** Inventory);
	void GetHud(class AUIHud** UIHud);
	void GetCrafting(class UCraftingComponent** Crafting);
	void GetInventory(class UInventoryComponent** Inventory);
	void GetContextActor(class AActor** Actor);
	void OnPushDialog();
	void OnPopDialog();
	void ExecuteUbergraph_Widget_UserWidget(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
