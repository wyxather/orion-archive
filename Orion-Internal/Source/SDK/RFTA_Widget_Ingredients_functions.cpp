// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Ingredients_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Ingredients.Widget_Ingredients_C.IsScrap
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIngredientInfo*        Ingredient                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Ingredients_C::IsScrap(struct FIngredientInfo* Ingredient, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ingredients.Widget_Ingredients_C.IsScrap");

	UWidget_Ingredients_C_IsScrap_Params params;
	params.Ingredient = Ingredient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_Ingredients.Widget_Ingredients_C.BuildIngredientList
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Ingredients_C::BuildIngredientList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ingredients.Widget_Ingredients_C.BuildIngredientList");

	UWidget_Ingredients_C_BuildIngredientList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Ingredients.Widget_Ingredients_C.SetRecipe
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo*            Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Ingredients_C::SetRecipe(struct FRecipeInfo* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ingredients.Widget_Ingredients_C.SetRecipe");

	UWidget_Ingredients_C_SetRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
