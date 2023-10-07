#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleCommandBoostHelp.BattleCommandBoostHelp_C
// (None)

class UClass* UBattleCommandBoostHelp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleCommandBoostHelp_C");

	return Clss;
}


// BattleCommandBoostHelp_C BattleCommandBoostHelp.Default__BattleCommandBoostHelp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleCommandBoostHelp_C* UBattleCommandBoostHelp_C::GetDefaultObj()
{
	static class UBattleCommandBoostHelp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleCommandBoostHelp_C*>(UBattleCommandBoostHelp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.RefreshButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandBoostHelp_C::RefreshButtonText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandBoostHelp_C", "RefreshButtonText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.SetBoostUnable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandBoostHelp_C::SetBoostUnable(bool IsUnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandBoostHelp_C", "SetBoostUnable");

	Params::UBattleCommandBoostHelp_C_SetBoostUnable_Params Parms{};

	Parms.IsUnable = IsUnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.OnChangeBoostLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowRText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowLText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandBoostHelp_C::OnChangeBoostLevel(int32 BoostLevel, bool ShowRText, bool ShowLText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandBoostHelp_C", "OnChangeBoostLevel");

	Params::UBattleCommandBoostHelp_C_OnChangeBoostLevel_Params Parms{};

	Parms.BoostLevel = BoostLevel;
	Parms.ShowRText = ShowRText;
	Parms.ShowLText = ShowLText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.SetBoostDisable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandBoostHelp_C::SetBoostDisable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandBoostHelp_C", "SetBoostDisable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.PlayBoostOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandBoostHelp_C::PlayBoostOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandBoostHelp_C", "PlayBoostOn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.PlayBoostMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandBoostHelp_C::PlayBoostMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandBoostHelp_C", "PlayBoostMax");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.PlayBoostMin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandBoostHelp_C::PlayBoostMin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandBoostHelp_C", "PlayBoostMin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.SetLanguage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandBoostHelp_C::SetLanguage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandBoostHelp_C", "SetLanguage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.SetBoostHelpVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandBoostHelp_C::SetBoostHelpVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandBoostHelp_C", "SetBoostHelpVisible");

	Params::UBattleCommandBoostHelp_C_SetBoostHelpVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandBoostHelp_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandBoostHelp_C", "ChangeInputMode");

	Params::UBattleCommandBoostHelp_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandBoostHelp.BattleCommandBoostHelp_C.ExecuteUbergraph_BattleCommandBoostHelp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandBoostHelp_C::ExecuteUbergraph_BattleCommandBoostHelp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandBoostHelp_C", "ExecuteUbergraph_BattleCommandBoostHelp");

	Params::UBattleCommandBoostHelp_C_ExecuteUbergraph_BattleCommandBoostHelp_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


