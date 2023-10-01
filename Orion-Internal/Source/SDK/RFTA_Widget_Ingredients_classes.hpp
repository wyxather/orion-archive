#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Ingredients_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Ingredients.Widget_Ingredients_C
// 0x003C (0x0285 - 0x0249)
class UWidget_Ingredients_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	class UVerticalBox*                                Ingredients;                                              // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FRecipeInfo                                 Recipe;                                                   // 0x0258(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              IngredientSpacing;                                        // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowScrap;                                                // 0x0284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Ingredients.Widget_Ingredients_C");
		return ptr;
	}


	void IsScrap(struct FIngredientInfo* Ingredient, bool* Out);
	void BuildIngredientList();
	void SetRecipe(struct FRecipeInfo* Recipe);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
