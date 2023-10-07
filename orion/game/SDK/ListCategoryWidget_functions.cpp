#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListCategoryWidget.ListCategoryWidget_C
// (None)

class UClass* UListCategoryWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListCategoryWidget_C");

	return Clss;
}


// ListCategoryWidget_C ListCategoryWidget.Default__ListCategoryWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListCategoryWidget_C* UListCategoryWidget_C::GetDefaultObj()
{
	static class UListCategoryWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListCategoryWidget_C*>(UListCategoryWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListCategoryWidget.ListCategoryWidget_C.ResetAppearance
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCategoryWidget_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCategoryWidget.ListCategoryWidget_C.SetShining
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHOLY_TORCH_SHINING_STATEType                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCategoryWidget_C::SetShining(enum class EHOLY_TORCH_SHINING_STATE Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "SetShining");

	Params::UListCategoryWidget_C_SetShining_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCategoryWidget.ListCategoryWidget_C.FocusWithoutCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCategoryWidget_C::FocusWithoutCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "FocusWithoutCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCategoryWidget.ListCategoryWidget_C.GetCategoryId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCategoryWidget_C::GetCategoryId(int32* CategoryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "GetCategoryId");

	Params::UListCategoryWidget_C_GetCategoryId_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CategoryId != nullptr)
		*CategoryId = Parms.CategoryId;

}


// Function ListCategoryWidget.ListCategoryWidget_C.SetCategoryId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCategoryWidget_C::SetCategoryId(int32 CategoryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "SetCategoryId");

	Params::UListCategoryWidget_C_SetCategoryId_Params Parms{};

	Parms.CategoryId = CategoryId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCategoryWidget.ListCategoryWidget_C.SetupText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCategoryWidget_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCategoryWidget.ListCategoryWidget_C.GetListNumText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ListNumLabel                                                     (Parm, OutParm)

void UListCategoryWidget_C::GetListNumText(class FText* ListNumLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "GetListNumText");

	Params::UListCategoryWidget_C_GetListNumText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListNumLabel != nullptr)
		*ListNumLabel = Parms.ListNumLabel;

}


// Function ListCategoryWidget.ListCategoryWidget_C.GetListNameText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ListName                                                         (Parm, OutParm)

void UListCategoryWidget_C::GetListNameText(class FText* ListName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "GetListNameText");

	Params::UListCategoryWidget_C_GetListNameText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListName != nullptr)
		*ListName = Parms.ListName;

}


// Function ListCategoryWidget.ListCategoryWidget_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCategoryWidget_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCategoryWidget.ListCategoryWidget_C.UpdateIconTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCategoryWidget_C::UpdateIconTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "UpdateIconTransform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCategoryWidget.ListCategoryWidget_C.SetCategoryHelpText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CategoryHelpText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        CategoryHelpGameTextID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCategoryWidget_C::SetCategoryHelpText(const class FString& CategoryHelpText, class FName CategoryHelpGameTextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "SetCategoryHelpText");

	Params::UListCategoryWidget_C_SetCategoryHelpText_Params Parms{};

	Parms.CategoryHelpText = CategoryHelpText;
	Parms.CategoryHelpGameTextID = CategoryHelpGameTextID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCategoryWidget.ListCategoryWidget_C.GetHelpText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UListCategoryWidget_C::GetHelpText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "GetHelpText");

	Params::UListCategoryWidget_C_GetHelpText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListCategoryWidget.ListCategoryWidget_C.GetHeight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCategoryWidget_C::GetHeight(float* Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "GetHeight");

	Params::UListCategoryWidget_C_GetHeight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function ListCategoryWidget.ListCategoryWidget_C.GetCategoryName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        CategoryText                                                     (Parm, OutParm)

void UListCategoryWidget_C::GetCategoryName(class FText* CategoryText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "GetCategoryName");

	Params::UListCategoryWidget_C_GetCategoryName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CategoryText != nullptr)
		*CategoryText = Parms.CategoryText;

}


// Function ListCategoryWidget.ListCategoryWidget_C.SetCategoryName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CategoryText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        CategoryGameTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCategoryWidget_C::SetCategoryName(class FText CategoryText, class FName CategoryGameTextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "SetCategoryName");

	Params::UListCategoryWidget_C_SetCategoryName_Params Parms{};

	Parms.CategoryText = CategoryText;
	Parms.CategoryGameTextID = CategoryGameTextID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCategoryWidget.ListCategoryWidget_C.SetCursorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCategoryWidget_C::SetCursorVisible(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "SetCursorVisible");

	Params::UListCategoryWidget_C_SetCursorVisible_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCategoryWidget.ListCategoryWidget_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCategoryWidget_C::SetIcon(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "SetIcon");

	Params::UListCategoryWidget_C_SetIcon_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCategoryWidget.ListCategoryWidget_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCategoryWidget_C::PlayAnim(class UWidgetAnimation* InAnimation, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "PlayAnim");

	Params::UListCategoryWidget_C_PlayAnim_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCategoryWidget.ListCategoryWidget_C.GetCursorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCategoryWidget_C::GetCursorPosition(struct FVector2D* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "GetCursorPosition");

	Params::UListCategoryWidget_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function ListCategoryWidget.ListCategoryWidget_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCategoryWidget_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "OutFocus");

	Params::UListCategoryWidget_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCategoryWidget.ListCategoryWidget_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCategoryWidget_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "Focus");

	Params::UListCategoryWidget_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCategoryWidget.ListCategoryWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UListCategoryWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCategoryWidget.ListCategoryWidget_C.ExecuteUbergraph_ListCategoryWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCategoryWidget_C::ExecuteUbergraph_ListCategoryWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCategoryWidget_C", "ExecuteUbergraph_ListCategoryWidget");

	Params::UListCategoryWidget_C_ExecuteUbergraph_ListCategoryWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


