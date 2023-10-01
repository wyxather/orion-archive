#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Recipe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Recipe.Widget_Recipe_C
// 0x0111 (0x03C1 - 0x02B0)
class UWidget_Recipe_C : public UWidget_FocusWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Success;                                                  // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            fade;                                                     // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidget_HoldButton_C*                        ActionButton;                                             // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ActionLabel;                                              // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                ActionPanel;                                              // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Background;                                               // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_5;                                                 // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     BorderDark;                                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     BorderWhite;                                              // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              CostPanel;                                                // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    DLC_Overlay;                                              // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusButtonWidget*                          FocusButton;                                              // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      GrimeOverlay;                                             // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                  // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_13;                                                 // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_14;                                                 // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Price;                                                    // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ValidOverlay;                                             // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Craft_ItemCard_C*                    Widget_Craft_ItemCard;                                    // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    WidgetSizeBox;                                            // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCraftingComponent*                          CraftingComponent;                                        // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRecipeInfo                                 Recipe;                                                   // 0x0360(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	float                                              Percentagle_Hold;                                         // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAttemptedCraft;                                         // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnClearRecipe;                                            // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSelectRecipe;                                           // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               CachedIsEntitled;                                         // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Recipe.Widget_Recipe_C");
		return ptr;
	}


	void GetItemLevelFromRecipe(class UCraftingRecipe_Base** Recipe, int* ItemLevel);
	void GetItemFromRecipe(class UCraftingRecipe_Base** Recipe, class UClass** Item);
	void CheckEntitlement(class UClass** ItemBP, bool* NotifyOnNoEntitlement, bool* IsEntitled);
	ESlateVisibility Get_ValidOverlay_Visibility_1();
	struct FSlateColor Get_TextBlock_0_ColorAndOpacity_1();
	struct FText Get_ItemName_Text_1();
	float GetPercent_1();
	struct FText Get_Cost_Text_1();
	void GetCost(int* Out);
	ESlateVisibility Get_CostPanel_Visibility_1();
	ESlateVisibility Get_Selection_White_Stripe_Visibility();
	ESlateVisibility Get_ActionPanel_Visibility_1();
	ESlateVisibility GetVisibility_1();
	void BuildStats();
	void Refresh();
	void GetCraftingComponent(class UCraftingComponent** Component);
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_116_OnAdvButtonPressedEvent__DelegateSignature(class UWidget** Widget);
	void Construct();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_94_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_291_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_260_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnPressAndHold__DelegateSignature(bool* Success, float* CompletionPct);
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_141_OnAdvButtonReleasedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void SimulateDoAction();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void ExecuteUbergraph_Widget_Recipe(int* EntryPoint);
	void OnSelectRecipe__DelegateSignature(struct FRecipeInfo* Recipe, class UWidget_Recipe_C** RecipeWidget);
	void OnClearRecipe__DelegateSignature();
	void OnAttemptedCraft__DelegateSignature(struct FRecipeInfo* Recipe);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
