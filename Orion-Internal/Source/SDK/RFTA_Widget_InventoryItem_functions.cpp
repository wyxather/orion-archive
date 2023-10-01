// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_InventoryItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_InventoryItem.Widget_InventoryItem_C.CheckEntitlement
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          NotifyOnNoEntitlement          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsEntitled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryItem_C::CheckEntitlement(int* ItemID, bool* NotifyOnNoEntitlement, bool* IsEntitled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.CheckEntitlement");

	UWidget_InventoryItem_C_CheckEntitlement_Params params;
	params.ItemID = ItemID;
	params.NotifyOnNoEntitlement = NotifyOnNoEntitlement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEntitled != nullptr)
		*IsEntitled = params.IsEntitled;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.HasMaxQuantity
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryItem_C::HasMaxQuantity(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.HasMaxQuantity");

	UWidget_InventoryItem_C_HasMaxQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.GetModifiedPurchaseLevel
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 InspectActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::GetModifiedPurchaseLevel(class AActor** InspectActor, class UInventoryComponent** Inventory, int* ItemID, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.GetModifiedPurchaseLevel");

	UWidget_InventoryItem_C_GetModifiedPurchaseLevel_Params params;
	params.InspectActor = InspectActor;
	params.Inventory = Inventory;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.MarkUpgradeIngredientsForRemoval
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo*            Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_InventoryItem_C::MarkUpgradeIngredientsForRemoval(struct FRecipeInfo* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.MarkUpgradeIngredientsForRemoval");

	UWidget_InventoryItem_C_MarkUpgradeIngredientsForRemoval_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.IsRadialSlotted
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryItem_C::IsRadialSlotted(int* ItemID, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.IsRadialSlotted");

	UWidget_InventoryItem_C_IsRadialSlotted_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.CacheRecipe
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo             Recipe                         (Parm, OutParm)

void UWidget_InventoryItem_C::CacheRecipe(struct FRecipeInfo* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.CacheRecipe");

	UWidget_InventoryItem_C_CacheRecipe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Recipe != nullptr)
		*Recipe = params.Recipe;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.Get_OverlayIcon_ColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWidget_InventoryItem_C::Get_OverlayIcon_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.Get_OverlayIcon_ColorAndOpacity_1");

	UWidget_InventoryItem_C_Get_OverlayIcon_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.GetInspectInfo
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInspectInfo            InspectInfo                    (Parm, OutParm)

void UWidget_InventoryItem_C::GetInspectInfo(struct FInspectInfo* InspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.GetInspectInfo");

	UWidget_InventoryItem_C_GetInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InspectInfo != nullptr)
		*InspectInfo = params.InspectInfo;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.SetInspectInfo
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_InventoryItem_C::SetInspectInfo(struct FInspectInfo* InspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.SetInspectInfo");

	UWidget_InventoryItem_C_SetInspectInfo_Params params;
	params.InspectInfo = InspectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.Get_Border_4_BrushColor_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWidget_InventoryItem_C::Get_Border_4_BrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.Get_Border_4_BrushColor_1");

	UWidget_InventoryItem_C_Get_Border_4_BrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.GetCost
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::GetCost(int* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.GetCost");

	UWidget_InventoryItem_C_GetCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.GetPrimaryStat
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInspectStat            InspectStat                    (Parm, OutParm)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryItem_C::GetPrimaryStat(struct FInspectInfo* InspectInfo, struct FInspectStat* InspectStat, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.GetPrimaryStat");

	UWidget_InventoryItem_C_GetPrimaryStat_Params params;
	params.InspectInfo = InspectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InspectStat != nullptr)
		*InspectStat = params.InspectStat;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.UpgradeLevelColor
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_InventoryItem_C::UpgradeLevelColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.UpgradeLevelColor");

	UWidget_InventoryItem_C_UpgradeLevelColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.Get_Cost_ColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_InventoryItem_C::Get_Cost_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.Get_Cost_ColorAndOpacity_1");

	UWidget_InventoryItem_C_Get_Cost_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.GetEquippedVisibility
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_InventoryItem_C::GetEquippedVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.GetEquippedVisibility");

	UWidget_InventoryItem_C_GetEquippedVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.Action Panel Visibility
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_InventoryItem_C::Action_Panel_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.Action Panel Visibility");

	UWidget_InventoryItem_C_Action_Panel_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.GetVisibility_2
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_InventoryItem_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.GetVisibility_2");

	UWidget_InventoryItem_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.PlayEquipedSound
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryItem_C::PlayEquipedSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.PlayEquipedSound");

	UWidget_InventoryItem_C_PlayEquipedSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.ShouldRemoveUniqueItem
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryItem_C::ShouldRemoveUniqueItem(class UClass** ItemBP, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.ShouldRemoveUniqueItem");

	UWidget_InventoryItem_C_ShouldRemoveUniqueItem_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.PlayerHasItem
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryItem_C::PlayerHasItem(class UClass** ItemBP, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.PlayerHasItem");

	UWidget_InventoryItem_C_PlayerHasItem_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.IsUnique
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryItem_C::IsUnique(class UClass** ItemBP, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.IsUnique");

	UWidget_InventoryItem_C_IsUnique_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.GetRecipeCost
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRecipeInfo*            RecipeInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::GetRecipeCost(struct FRecipeInfo* RecipeInfo, int* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.GetRecipeCost");

	UWidget_InventoryItem_C_GetRecipeCost_Params params;
	params.RecipeInfo = RecipeInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.SelectItem
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryItem_C::SelectItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.SelectItem");

	UWidget_InventoryItem_C_SelectItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.Get_CostPanel_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_InventoryItem_C::Get_CostPanel_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.Get_CostPanel_Visibility_1");

	UWidget_InventoryItem_C_Get_CostPanel_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.RefreshAction
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryItem_C::RefreshAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.RefreshAction");

	UWidget_InventoryItem_C_RefreshAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.ValidateAction
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Label                          (Parm, OutParm)
// int                            Cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::ValidateAction(bool* Visible, bool* Valid, struct FText* Label, int* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.ValidateAction");

	UWidget_InventoryItem_C_ValidateAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
	if (Valid != nullptr)
		*Valid = params.Valid;
	if (Label != nullptr)
		*Label = params.Label;
	if (Cost != nullptr)
		*Cost = params.Cost;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.DoAction
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryItem_C::DoAction(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.DoAction");

	UWidget_InventoryItem_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.CacheInfo
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryItem_C::CacheInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.CacheInfo");

	UWidget_InventoryItem_C_CacheInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.GetFillUpBarVisibility
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_InventoryItem_C::GetFillUpBarVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.GetFillUpBarVisibility");

	UWidget_InventoryItem_C_GetFillUpBarVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.GetCachedInventory
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryComponent*     Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::GetCachedInventory(class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.GetCachedInventory");

	UWidget_InventoryItem_C_GetCachedInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.GetInventoryItem
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem          Item                           (Parm, OutParm, NoDestructor, ContainsInstancedReference)

void UWidget_InventoryItem_C::GetInventoryItem(struct FInventoryItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.GetInventoryItem");

	UWidget_InventoryItem_C_GetInventoryItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.DoUpgrade
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_InventoryItem_C::DoUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.DoUpgrade");

	UWidget_InventoryItem_C_DoUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.OnUpgradeResult
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::OnUpgradeResult(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.OnUpgradeResult");

	UWidget_InventoryItem_C_OnUpgradeResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.OnBuyResult
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::OnBuyResult(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.OnBuyResult");

	UWidget_InventoryItem_C_OnBuyResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_InventoryItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.Construct");

	UWidget_InventoryItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.OnFocus_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::OnFocus_Event_1(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.OnFocus_Event_1");

	UWidget_InventoryItem_C_OnFocus_Event_1_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.OnAdded
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_InventoryItem_C::OnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.OnAdded");

	UWidget_InventoryItem_C_OnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.OnInventoryChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_InventoryItem_C::OnInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.OnInventoryChanged");

	UWidget_InventoryItem_C_OnInventoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_92_OnAdvButtonPressedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_92_OnAdvButtonPressedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_92_OnAdvButtonPressedEvent__DelegateSignature");

	UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_92_OnAdvButtonPressedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_1388_OnPressAndHold__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// bool*                          Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float*                         CompletionPct                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::BndEvt__HoldButton_K2Node_ComponentBoundEvent_1388_OnPressAndHold__DelegateSignature(bool* Success, float* CompletionPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_1388_OnPressAndHold__DelegateSignature");

	UWidget_InventoryItem_C_BndEvt__HoldButton_K2Node_ComponentBoundEvent_1388_OnPressAndHold__DelegateSignature_Params params;
	params.Success = Success;
	params.CompletionPct = CompletionPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_528_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_528_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_528_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_528_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.RemoveOnQuantityZero
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_InventoryItem_C::RemoveOnQuantityZero()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.RemoveOnQuantityZero");

	UWidget_InventoryItem_C_RemoveOnQuantityZero_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.SimulateAction
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_InventoryItem_C::SimulateAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.SimulateAction");

	UWidget_InventoryItem_C_SimulateAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.Refresh
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_InventoryItem_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.Refresh");

	UWidget_InventoryItem_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.ExecuteUbergraph_Widget_InventoryItem
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::ExecuteUbergraph_Widget_InventoryItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.ExecuteUbergraph_Widget_InventoryItem");

	UWidget_InventoryItem_C_ExecuteUbergraph_Widget_InventoryItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.OnItemSelected__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::OnItemSelected__DelegateSignature(int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.OnItemSelected__DelegateSignature");

	UWidget_InventoryItem_C_OnItemSelected__DelegateSignature_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryItem.Widget_InventoryItem_C.OnItemAction__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryItem_C::OnItemAction__DelegateSignature(int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryItem.Widget_InventoryItem_C.OnItemAction__DelegateSignature");

	UWidget_InventoryItem_C_OnItemAction__DelegateSignature_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
