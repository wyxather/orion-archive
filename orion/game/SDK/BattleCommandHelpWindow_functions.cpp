#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleCommandHelpWindow.BattleCommandHelpWindow_C
// (None)

class UClass* UBattleCommandHelpWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleCommandHelpWindow_C");

	return Clss;
}


// BattleCommandHelpWindow_C BattleCommandHelpWindow.Default__BattleCommandHelpWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleCommandHelpWindow_C* UBattleCommandHelpWindow_C::GetDefaultObj()
{
	static class UBattleCommandHelpWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleCommandHelpWindow_C*>(UBattleCommandHelpWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.RefreshText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandHelpWindow_C::RefreshText(enum class EKSUseInputType NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "RefreshText");

	Params::UBattleCommandHelpWindow_C_RefreshText_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.PreSetText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandHelpWindow_C::PreSetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "PreSetText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleCommandMenu_C*        Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsIgnoreUpdateFlip                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandHelpWindow_C::SetPosition(class UBattleCommandMenu_C* Widget, bool IsIgnoreUpdateFlip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "SetPosition");

	Params::UBattleCommandHelpWindow_C_SetPosition_Params Parms{};

	Parms.Widget = Widget;
	Parms.IsIgnoreUpdateFlip = IsIgnoreUpdateFlip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.FlipHelpWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFlip                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandHelpWindow_C::FlipHelpWindow(bool IsFlip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "FlipHelpWindow");

	Params::UBattleCommandHelpWindow_C_FlipHelpWindow_Params Parms{};

	Parms.IsFlip = IsFlip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.Scroll to Top
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandHelpWindow_C::Scroll_to_Top()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "Scroll to Top");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.ScrollDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandHelpWindow_C::ScrollDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "ScrollDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.ScrollUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandHelpWindow_C::ScrollUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "ScrollUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.ScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandHelpWindow_C::ScrollAxis(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "ScrollAxis");

	Params::UBattleCommandHelpWindow_C_ScrollAxis_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.UpdateScrollIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandHelpWindow_C::UpdateScrollIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "UpdateScrollIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.FinishClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandHelpWindow_C::FinishClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "FinishClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.UpdateHelpText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCommandMenuItem            Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              BoostLv                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsGag                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsNoEquipRestrictWeapon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandHelpWindow_C::UpdateHelpText(const struct FCommandMenuItem& Command, int32 BoostLv, bool IsGag, bool IsNoEquipRestrictWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "UpdateHelpText");

	Params::UBattleCommandHelpWindow_C_UpdateHelpText_Params Parms{};

	Parms.Command = Command;
	Parms.BoostLv = BoostLv;
	Parms.IsGag = IsGag;
	Parms.IsNoEquipRestrictWeapon = IsNoEquipRestrictWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.CloseHelpWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandHelpWindow_C::CloseHelpWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "CloseHelpWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.OpenHelpWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCommandMenuItem            Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              BoostLv                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsGag                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsNoEquipRestrictWeapon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandHelpWindow_C::OpenHelpWindow(const struct FCommandMenuItem& Command, int32 BoostLv, bool IsGag, bool IsNoEquipRestrictWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "OpenHelpWindow");

	Params::UBattleCommandHelpWindow_C_OpenHelpWindow_Params Parms{};

	Parms.Command = Command;
	Parms.BoostLv = BoostLv;
	Parms.IsGag = IsGag;
	Parms.IsNoEquipRestrictWeapon = IsNoEquipRestrictWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.SetHelpWindowVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandHelpWindow_C::SetHelpWindowVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "SetHelpWindowVisible");

	Params::UBattleCommandHelpWindow_C_SetHelpWindowVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandHelpWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "Tick");

	Params::UBattleCommandHelpWindow_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandHelpWindow_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "ChangeInputMode");

	Params::UBattleCommandHelpWindow_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandHelpWindow.BattleCommandHelpWindow_C.ExecuteUbergraph_BattleCommandHelpWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandHelpWindow_C::ExecuteUbergraph_BattleCommandHelpWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandHelpWindow_C", "ExecuteUbergraph_BattleCommandHelpWindow");

	Params::UBattleCommandHelpWindow_C_ExecuteUbergraph_BattleCommandHelpWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


