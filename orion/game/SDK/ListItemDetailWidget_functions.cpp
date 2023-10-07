#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemDetailWidget.ListItemDetailWidget_C
// (None)

class UClass* UListItemDetailWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemDetailWidget_C");

	return Clss;
}


// ListItemDetailWidget_C ListItemDetailWidget.Default__ListItemDetailWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemDetailWidget_C* UListItemDetailWidget_C::GetDefaultObj()
{
	static class UListItemDetailWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemDetailWidget_C*>(UListItemDetailWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemDetailWidget.ListItemDetailWidget_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UListItemDetailWidget_C::SetText(class FText NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemDetailWidget_C", "SetText");

	Params::UListItemDetailWidget_C_SetText_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemDetailWidget.ListItemDetailWidget_C.Hide
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemDetailWidget_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemDetailWidget_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemDetailWidget.ListItemDetailWidget_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemDetailWidget_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemDetailWidget_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemDetailWidget.ListItemDetailWidget_C.ExecuteUbergraph_ListItemDetailWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemDetailWidget_C::ExecuteUbergraph_ListItemDetailWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemDetailWidget_C", "ExecuteUbergraph_ListItemDetailWidget");

	Params::UListItemDetailWidget_C_ExecuteUbergraph_ListItemDetailWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


