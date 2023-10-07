#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass StatusMenuSpecialActionBox.StatusMenuSpecialActionBox_C
// (None)

class UClass* UStatusMenuSpecialActionBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusMenuSpecialActionBox_C");

	return Clss;
}


// StatusMenuSpecialActionBox_C StatusMenuSpecialActionBox.Default__StatusMenuSpecialActionBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusMenuSpecialActionBox_C* UStatusMenuSpecialActionBox_C::GetDefaultObj()
{
	static class UStatusMenuSpecialActionBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusMenuSpecialActionBox_C*>(UStatusMenuSpecialActionBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatusMenuSpecialActionBox.StatusMenuSpecialActionBox_C.SetIconImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuSpecialActionBox_C::SetIconImage(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuSpecialActionBox_C", "SetIconImage");

	Params::UStatusMenuSpecialActionBox_C_SetIconImage_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuSpecialActionBox.StatusMenuSpecialActionBox_C.SetDescriptionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DescriptionText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UStatusMenuSpecialActionBox_C::SetDescriptionText(class FText DescriptionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuSpecialActionBox_C", "SetDescriptionText");

	Params::UStatusMenuSpecialActionBox_C_SetDescriptionText_Params Parms{};

	Parms.DescriptionText = DescriptionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuSpecialActionBox.StatusMenuSpecialActionBox_C.SetNameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NameText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NameSuffixText1                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NameSuffixText2                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UStatusMenuSpecialActionBox_C::SetNameText(class FText NameText, class FText NameSuffixText1, class FText NameSuffixText2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuSpecialActionBox_C", "SetNameText");

	Params::UStatusMenuSpecialActionBox_C_SetNameText_Params Parms{};

	Parms.NameText = NameText;
	Parms.NameSuffixText1 = NameSuffixText1;
	Parms.NameSuffixText2 = NameSuffixText2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuSpecialActionBox.StatusMenuSpecialActionBox_C.SetCategoryText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CategoryText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CategorySuffixText                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UStatusMenuSpecialActionBox_C::SetCategoryText(class FText CategoryText, class FText CategorySuffixText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuSpecialActionBox_C", "SetCategoryText");

	Params::UStatusMenuSpecialActionBox_C_SetCategoryText_Params Parms{};

	Parms.CategoryText = CategoryText;
	Parms.CategorySuffixText = CategorySuffixText;

	UObject::ProcessEvent(Func, &Parms);

}

}


