#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MenuGuideItem.MenuGuideItem_C
// (None)

class UClass* UMenuGuideItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuGuideItem_C");

	return Clss;
}


// MenuGuideItem_C MenuGuideItem.Default__MenuGuideItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuGuideItem_C* UMenuGuideItem_C::GetDefaultObj()
{
	static class UMenuGuideItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuGuideItem_C*>(UMenuGuideItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuGuideItem.MenuGuideItem_C.SetGuideTextLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECONTROL_GUIDE_BUTTON_TYPEButtonType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuGuideItem_C::SetGuideTextLabel(class FName Label, enum class ECONTROL_GUIDE_BUTTON_TYPE ButtonType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuGuideItem_C", "SetGuideTextLabel");

	Params::UMenuGuideItem_C_SetGuideTextLabel_Params Parms{};

	Parms.Label = Label;
	Parms.ButtonType = ButtonType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuGuideItem.MenuGuideItem_C.Reflesh Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuGuideItem_C::Reflesh_Text()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuGuideItem_C", "Reflesh Text");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuGuideItem.MenuGuideItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMenuGuideItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuGuideItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuGuideItem.MenuGuideItem_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuGuideItem_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuGuideItem_C", "ChangeInputMode");

	Params::UMenuGuideItem_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuGuideItem.MenuGuideItem_C.ExecuteUbergraph_MenuGuideItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuGuideItem_C::ExecuteUbergraph_MenuGuideItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuGuideItem_C", "ExecuteUbergraph_MenuGuideItem");

	Params::UMenuGuideItem_C_ExecuteUbergraph_MenuGuideItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


