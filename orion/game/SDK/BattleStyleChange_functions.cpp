#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleStyleChange.BattleStyleChange_C
// (None)

class UClass* UBattleStyleChange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleStyleChange_C");

	return Clss;
}


// BattleStyleChange_C BattleStyleChange.Default__BattleStyleChange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleStyleChange_C* UBattleStyleChange_C::GetDefaultObj()
{
	static class UBattleStyleChange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleStyleChange_C*>(UBattleStyleChange_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleStyleChange.BattleStyleChange_C.UpdateButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleStyleChange_C::UpdateButtonText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleStyleChange_C", "UpdateButtonText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleStyleChange.BattleStyleChange_C.PlayOffAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleStyleChange_C::PlayOffAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleStyleChange_C", "PlayOffAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleStyleChange.BattleStyleChange_C.PlayOnAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleStyleChange_C::PlayOnAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleStyleChange_C", "PlayOnAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleStyleChange.BattleStyleChange_C.PlayMaxAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleStyleChange_C::PlayMaxAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleStyleChange_C", "PlayMaxAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleStyleChange.BattleStyleChange_C.Set Effect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_STYLE_TYPE      BattleStyle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPotentialityActionData     PotentialityActionData                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleStyleChange_C::Set_Effect(enum class EBATTLE_STYLE_TYPE BattleStyle, struct FPotentialityActionData& PotentialityActionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleStyleChange_C", "Set Effect");

	Params::UBattleStyleChange_C_Set_Effect_Params Parms{};

	Parms.BattleStyle = BattleStyle;
	Parms.PotentialityActionData = PotentialityActionData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleStyleChange.BattleStyleChange_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFirstTurn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsAvailable                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleStyleChange_C::UpdateText(bool IsFirstTurn, bool IsAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleStyleChange_C", "UpdateText");

	Params::UBattleStyleChange_C_UpdateText_Params Parms{};

	Parms.IsFirstTurn = IsFirstTurn;
	Parms.IsAvailable = IsAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleStyleChange.BattleStyleChange_C.SetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameColor              ColorType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleStyleChange_C::SetColor(enum class EGameColor ColorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleStyleChange_C", "SetColor");

	Params::UBattleStyleChange_C_SetColor_Params Parms{};

	Parms.ColorType = ColorType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleStyleChange.BattleStyleChange_C.SetDefaultText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleStyleChange_C::SetDefaultText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleStyleChange_C", "SetDefaultText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleStyleChange.BattleStyleChange_C.Set Release Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRelease                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBATTLE_STYLE_TYPE      Style                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleStyleChange_C::Set_Release_Text(bool IsRelease, enum class EBATTLE_STYLE_TYPE Style)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleStyleChange_C", "Set Release Text");

	Params::UBattleStyleChange_C_Set_Release_Text_Params Parms{};

	Parms.IsRelease = IsRelease;
	Parms.Style = Style;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleStyleChange.BattleStyleChange_C.SetGameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleStyleChange_C::SetGameText(class FName Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleStyleChange_C", "SetGameText");

	Params::UBattleStyleChange_C_SetGameText_Params Parms{};

	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleStyleChange.BattleStyleChange_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattleStyleChange_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleStyleChange_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleStyleChange.BattleStyleChange_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleStyleChange_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleStyleChange_C", "ChangeInputMode");

	Params::UBattleStyleChange_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleStyleChange.BattleStyleChange_C.ExecuteUbergraph_BattleStyleChange
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleStyleChange_C::ExecuteUbergraph_BattleStyleChange(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleStyleChange_C", "ExecuteUbergraph_BattleStyleChange");

	Params::UBattleStyleChange_C_ExecuteUbergraph_BattleStyleChange_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


