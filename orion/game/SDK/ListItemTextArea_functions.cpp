#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemTextArea.ListItemTextArea_C
// (None)

class UClass* UListItemTextArea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemTextArea_C");

	return Clss;
}


// ListItemTextArea_C ListItemTextArea.Default__ListItemTextArea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemTextArea_C* UListItemTextArea_C::GetDefaultObj()
{
	static class UListItemTextArea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemTextArea_C*>(UListItemTextArea_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemTextArea.ListItemTextArea_C.SetupMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemTextArea_C::SetupMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemTextArea_C", "SetupMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemTextArea.ListItemTextArea_C.SetEmblemIconPair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  TexturePair                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemTextArea_C::SetEmblemIconPair(class UTexture2D* Texture, class UTexture2D* TexturePair)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemTextArea_C", "SetEmblemIconPair");

	Params::UListItemTextArea_C_SetEmblemIconPair_Params Parms{};

	Parms.Texture = Texture;
	Parms.TexturePair = TexturePair;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemTextArea.ListItemTextArea_C.SetCharacterIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SubStoryLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemTextArea_C::SetCharacterIcon(class FName SubStoryLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemTextArea_C", "SetCharacterIcon");

	Params::UListItemTextArea_C_SetCharacterIcon_Params Parms{};

	Parms.SubStoryLabel = SubStoryLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemTextArea.ListItemTextArea_C.SetupText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemTextArea_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemTextArea_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemTextArea.ListItemTextArea_C.SetEmblemIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemTextArea_C::SetEmblemIcon(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemTextArea_C", "SetEmblemIcon");

	Params::UListItemTextArea_C_SetEmblemIcon_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemTextArea.ListItemTextArea_C.SetResultText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ResultText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UListItemTextArea_C::SetResultText(class FText ResultText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemTextArea_C", "SetResultText");

	Params::UListItemTextArea_C_SetResultText_Params Parms{};

	Parms.ResultText = ResultText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemTextArea.ListItemTextArea_C.SetStoryText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StoryText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UListItemTextArea_C::SetStoryText(class FText StoryText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemTextArea_C", "SetStoryText");

	Params::UListItemTextArea_C_SetStoryText_Params Parms{};

	Parms.StoryText = StoryText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemTextArea.ListItemTextArea_C.SetOrdererName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        OrdererName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UListItemTextArea_C::SetOrdererName(class FText OrdererName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemTextArea_C", "SetOrdererName");

	Params::UListItemTextArea_C_SetOrdererName_Params Parms{};

	Parms.OrdererName = OrdererName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemTextArea.ListItemTextArea_C.SetViewMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsStoryOnly                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemTextArea_C::SetViewMode(bool IsStoryOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemTextArea_C", "SetViewMode");

	Params::UListItemTextArea_C_SetViewMode_Params Parms{};

	Parms.IsStoryOnly = IsStoryOnly;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemTextArea.ListItemTextArea_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UListItemTextArea_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemTextArea_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemTextArea.ListItemTextArea_C.ExecuteUbergraph_ListItemTextArea
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemTextArea_C::ExecuteUbergraph_ListItemTextArea(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemTextArea_C", "ExecuteUbergraph_ListItemTextArea");

	Params::UListItemTextArea_C_ExecuteUbergraph_ListItemTextArea_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


