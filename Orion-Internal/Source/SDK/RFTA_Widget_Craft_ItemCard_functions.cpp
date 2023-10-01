// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Craft_ItemCard_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.GetItemQuantityFromRecipe
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCraftingRecipe_Base**   Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ItemLevel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Craft_ItemCard_C::GetItemQuantityFromRecipe(class UCraftingRecipe_Base** Recipe, int* ItemLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.GetItemQuantityFromRecipe");

	UWidget_Craft_ItemCard_C_GetItemQuantityFromRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLevel != nullptr)
		*ItemLevel = params.ItemLevel;
}


// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.GetVisibility_2
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Craft_ItemCard_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.GetVisibility_2");

	UWidget_Craft_ItemCard_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Craft_ItemCard_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.GetVisibility_1");

	UWidget_Craft_ItemCard_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.CacheShouldShowInfo
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Craft_ItemCard_C::CacheShouldShowInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.CacheShouldShowInfo");

	UWidget_Craft_ItemCard_C_CacheShouldShowInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.SetInfo
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo*           Info                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           LevelOverride                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRecipeInfo*            Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Craft_ItemCard_C::SetInfo(struct FInspectInfo* Info, int* LevelOverride, struct FRecipeInfo* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.SetInfo");

	UWidget_Craft_ItemCard_C_SetInfo_Params params;
	params.Info = Info;
	params.LevelOverride = LevelOverride;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Get_Quantity_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Craft_ItemCard_C::Get_Quantity_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Get_Quantity_Visibility_1");

	UWidget_Craft_ItemCard_C_Get_Quantity_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.BuildStats
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Craft_ItemCard_C::BuildStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.BuildStats");

	UWidget_Craft_ItemCard_C_BuildStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Get_Quantity_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Craft_ItemCard_C::Get_Quantity_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Get_Quantity_Text_1");

	UWidget_Craft_ItemCard_C_Get_Quantity_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Get_Icon_Brush_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_Craft_ItemCard_C::Get_Icon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Get_Icon_Brush_1");

	UWidget_Craft_ItemCard_C_Get_Icon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Get_Label_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Craft_ItemCard_C::Get_Label_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Get_Label_Text_1");

	UWidget_Craft_ItemCard_C_Get_Label_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Craft_ItemCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Construct");

	UWidget_Craft_ItemCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.ZoomIn
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Craft_ItemCard_C::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.ZoomIn");

	UWidget_Craft_ItemCard_C_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.ZoomOut
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Craft_ItemCard_C::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.ZoomOut");

	UWidget_Craft_ItemCard_C_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.ExecuteUbergraph_Widget_Craft_ItemCard
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Craft_ItemCard_C::ExecuteUbergraph_Widget_Craft_ItemCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.ExecuteUbergraph_Widget_Craft_ItemCard");

	UWidget_Craft_ItemCard_C_ExecuteUbergraph_Widget_Craft_ItemCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
