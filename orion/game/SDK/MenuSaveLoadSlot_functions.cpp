#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MenuSaveLoadSlot.MenuSaveLoadSlot_C
// (None)

class UClass* UMenuSaveLoadSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuSaveLoadSlot_C");

	return Clss;
}


// MenuSaveLoadSlot_C MenuSaveLoadSlot.Default__MenuSaveLoadSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuSaveLoadSlot_C* UMenuSaveLoadSlot_C::GetDefaultObj()
{
	static class UMenuSaveLoadSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuSaveLoadSlot_C*>(UMenuSaveLoadSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.SetCursorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoadSlot_C::SetCursorVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "SetCursorVisibility");

	Params::UMenuSaveLoadSlot_C_SetCursorVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.PlayFocusImmdiate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoadSlot_C::PlayFocusImmdiate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "PlayFocusImmdiate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.hidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoadSlot_C::Hidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "hidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.IsDataEnabled_New
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsEnabled                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoadSlot_C::IsDataEnabled_New(bool* IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "IsDataEnabled_New");

	Params::UMenuSaveLoadSlot_C_IsDataEnabled_New_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEnabled != nullptr)
		*IsEnabled = Parms.IsEnabled;

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.Update Anim DEPRECATED
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoadSlot_C::Update_Anim_DEPRECATED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "Update Anim DEPRECATED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.PlayAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoadSlot_C::PlayAnim(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "PlayAnim");

	Params::UMenuSaveLoadSlot_C_PlayAnim_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.IsDataEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsEnabled                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoadSlot_C::IsDataEnabled(bool* IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "IsDataEnabled");

	Params::UMenuSaveLoadSlot_C_IsDataEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEnabled != nullptr)
		*IsEnabled = Parms.IsEnabled;

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.ReleaseSelf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoadSlot_C::ReleaseSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "ReleaseSelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoadSlot_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.UpdateSlotData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoadSlot_C::UpdateSlotData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "UpdateSlotData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoadSlot_C::OutFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "OutFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoadSlot_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuSaveLoadSlot_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoadSlot_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "BP_OnItemExpansionChanged");

	Params::UMenuSaveLoadSlot_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMenuSaveLoadSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoadSlot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "Tick");

	Params::UMenuSaveLoadSlot_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMenuSaveLoadSlot_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoadSlot_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "OnListItemObjectSet");

	Params::UMenuSaveLoadSlot_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoadSlot_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "BP_OnItemSelectionChanged");

	Params::UMenuSaveLoadSlot_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoadSlot.MenuSaveLoadSlot_C.ExecuteUbergraph_MenuSaveLoadSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoadSlot_C::ExecuteUbergraph_MenuSaveLoadSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoadSlot_C", "ExecuteUbergraph_MenuSaveLoadSlot");

	Params::UMenuSaveLoadSlot_C_ExecuteUbergraph_MenuSaveLoadSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


