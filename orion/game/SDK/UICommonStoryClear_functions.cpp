#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UICommonStoryClear.UICommonStoryClear_C
// (None)

class UClass* UUICommonStoryClear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UICommonStoryClear_C");

	return Clss;
}


// UICommonStoryClear_C UICommonStoryClear.Default__UICommonStoryClear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUICommonStoryClear_C* UUICommonStoryClear_C::GetDefaultObj()
{
	static class UUICommonStoryClear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUICommonStoryClear_C*>(UUICommonStoryClear_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UICommonStoryClear.UICommonStoryClear_C.OnResetHiddenFlag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonStoryClear_C::OnResetHiddenFlag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonStoryClear_C", "OnResetHiddenFlag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonStoryClear.UICommonStoryClear_C.HideTemporaryInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWIDGET_TEMPORARY_HIDE_USERHideUser                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonStoryClear_C::HideTemporaryInternal(bool IsHidden, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonStoryClear_C", "HideTemporaryInternal");

	Params::UUICommonStoryClear_C_HideTemporaryInternal_Params Parms{};

	Parms.IsHidden = IsHidden;
	Parms.HideUser = HideUser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonStoryClear.UICommonStoryClear_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TitleLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonStoryClear_C::SetTitleText(class FName TitleLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonStoryClear_C", "SetTitleText");

	Params::UUICommonStoryClear_C_SetTitleText_Params Parms{};

	Parms.TitleLabel = TitleLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonStoryClear.UICommonStoryClear_C.SetSymbol
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MainStoryLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonStoryClear_C::SetSymbol(class FName MainStoryLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonStoryClear_C", "SetSymbol");

	Params::UUICommonStoryClear_C_SetSymbol_Params Parms{};

	Parms.MainStoryLabel = MainStoryLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonStoryClear.UICommonStoryClear_C.Open_Innner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonStoryClear_C::Open_Innner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonStoryClear_C", "Open_Innner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonStoryClear.UICommonStoryClear_C.SetBodyText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        FormatLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TitleLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonStoryClear_C::SetBodyText(class FName FormatLabel, class FName TitleLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonStoryClear_C", "SetBodyText");

	Params::UUICommonStoryClear_C_SetBodyText_Params Parms{};

	Parms.FormatLabel = FormatLabel;
	Parms.TitleLabel = TitleLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonStoryClear.UICommonStoryClear_C.OpenSubStory
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TitleLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FormatTextLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUICommonStoryClear_C::OpenSubStory(class FName TitleLabel, class FName FormatTextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonStoryClear_C", "OpenSubStory");

	Params::UUICommonStoryClear_C_OpenSubStory_Params Parms{};

	Parms.TitleLabel = TitleLabel;
	Parms.FormatTextLabel = FormatTextLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UICommonStoryClear.UICommonStoryClear_C.OpenMarchant
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MainStoryLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TitleLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FormatTextLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUICommonStoryClear_C::OpenMarchant(class FName MainStoryLabel, class FName TitleLabel, class FName FormatTextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonStoryClear_C", "OpenMarchant");

	Params::UUICommonStoryClear_C_OpenMarchant_Params Parms{};

	Parms.MainStoryLabel = MainStoryLabel;
	Parms.TitleLabel = TitleLabel;
	Parms.FormatTextLabel = FormatTextLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UICommonStoryClear.UICommonStoryClear_C.OpenCoupling
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MainStoryLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TitleLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FormatTextLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUICommonStoryClear_C::OpenCoupling(class FName MainStoryLabel, class FName TitleLabel, class FName FormatTextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonStoryClear_C", "OpenCoupling");

	Params::UUICommonStoryClear_C_OpenCoupling_Params Parms{};

	Parms.MainStoryLabel = MainStoryLabel;
	Parms.TitleLabel = TitleLabel;
	Parms.FormatTextLabel = FormatTextLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UICommonStoryClear.UICommonStoryClear_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUICommonStoryClear_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonStoryClear_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonStoryClear.UICommonStoryClear_C.ExecuteUbergraph_UICommonStoryClear
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonStoryClear_C::ExecuteUbergraph_UICommonStoryClear(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonStoryClear_C", "ExecuteUbergraph_UICommonStoryClear");

	Params::UUICommonStoryClear_C_ExecuteUbergraph_UICommonStoryClear_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


