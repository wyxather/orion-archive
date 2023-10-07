#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ChapterCategoryWidget.ChapterCategoryWidget_C
// (None)

class UClass* UChapterCategoryWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChapterCategoryWidget_C");

	return Clss;
}


// ChapterCategoryWidget_C ChapterCategoryWidget.Default__ChapterCategoryWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChapterCategoryWidget_C* UChapterCategoryWidget_C::GetDefaultObj()
{
	static class UChapterCategoryWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChapterCategoryWidget_C*>(UChapterCategoryWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.SetBodyText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterCategoryWidget_C::SetBodyText(class FName Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "SetBodyText");

	Params::UChapterCategoryWidget_C_SetBodyText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.FocusWithoutCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterCategoryWidget_C::FocusWithoutCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "FocusWithoutCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.GetCategoryId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterCategoryWidget_C::GetCategoryId(int32* CategoryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "GetCategoryId");

	Params::UChapterCategoryWidget_C_GetCategoryId_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CategoryId != nullptr)
		*CategoryId = Parms.CategoryId;

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.SetCategoryId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterCategoryWidget_C::SetCategoryId(int32 CategoryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "SetCategoryId");

	Params::UChapterCategoryWidget_C_SetCategoryId_Params Parms{};

	Parms.CategoryId = CategoryId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.SetupText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterCategoryWidget_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.GetListNumText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ListNumLabel                                                     (Parm, OutParm)

void UChapterCategoryWidget_C::GetListNumText(class FText* ListNumLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "GetListNumText");

	Params::UChapterCategoryWidget_C_GetListNumText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListNumLabel != nullptr)
		*ListNumLabel = Parms.ListNumLabel;

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.GetListNameText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ListName                                                         (Parm, OutParm)

void UChapterCategoryWidget_C::GetListNameText(class FText* ListName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "GetListNameText");

	Params::UChapterCategoryWidget_C_GetListNameText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListName != nullptr)
		*ListName = Parms.ListName;

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterCategoryWidget_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.UpdateIconTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterCategoryWidget_C::UpdateIconTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "UpdateIconTransform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.Set Material Icon DEPRECATED
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterCategoryWidget_C::Set_Material_Icon_DEPRECATED(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "Set Material Icon DEPRECATED");

	Params::UChapterCategoryWidget_C_Set_Material_Icon_DEPRECATED_Params Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.SetCategoryHelpText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CategoryHelpText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        CategoryHelpGameTextID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterCategoryWidget_C::SetCategoryHelpText(const class FString& CategoryHelpText, class FName CategoryHelpGameTextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "SetCategoryHelpText");

	Params::UChapterCategoryWidget_C_SetCategoryHelpText_Params Parms{};

	Parms.CategoryHelpText = CategoryHelpText;
	Parms.CategoryHelpGameTextID = CategoryHelpGameTextID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.GetHelpText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UChapterCategoryWidget_C::GetHelpText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "GetHelpText");

	Params::UChapterCategoryWidget_C_GetHelpText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.GetHeight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterCategoryWidget_C::GetHeight(float* Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "GetHeight");

	Params::UChapterCategoryWidget_C_GetHeight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.GetCategoryName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        CategoryText                                                     (Parm, OutParm)

void UChapterCategoryWidget_C::GetCategoryName(class FText* CategoryText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "GetCategoryName");

	Params::UChapterCategoryWidget_C_GetCategoryName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CategoryText != nullptr)
		*CategoryText = Parms.CategoryText;

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.SetCategoryName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CategoryText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        CategoryGameTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterCategoryWidget_C::SetCategoryName(class FText CategoryText, class FName CategoryGameTextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "SetCategoryName");

	Params::UChapterCategoryWidget_C_SetCategoryName_Params Parms{};

	Parms.CategoryText = CategoryText;
	Parms.CategoryGameTextID = CategoryGameTextID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.SetCursorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterCategoryWidget_C::SetCursorVisible(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "SetCursorVisible");

	Params::UChapterCategoryWidget_C_SetCursorVisible_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.SetIcon_DEPRECATED
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterCategoryWidget_C::SetIcon_DEPRECATED(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "SetIcon_DEPRECATED");

	Params::UChapterCategoryWidget_C_SetIcon_DEPRECATED_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterCategoryWidget_C::PlayAnim(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "PlayAnim");

	Params::UChapterCategoryWidget_C_PlayAnim_Params Parms{};

	Parms.InAnimation = InAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.GetCursorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterCategoryWidget_C::GetCursorPosition(struct FVector2D* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "GetCursorPosition");

	Params::UChapterCategoryWidget_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterCategoryWidget_C::OutFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "OutFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChapterCategoryWidget_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChapterCategoryWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChapterCategoryWidget.ChapterCategoryWidget_C.ExecuteUbergraph_ChapterCategoryWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChapterCategoryWidget_C::ExecuteUbergraph_ChapterCategoryWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChapterCategoryWidget_C", "ExecuteUbergraph_ChapterCategoryWidget");

	Params::UChapterCategoryWidget_C_ExecuteUbergraph_ChapterCategoryWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


