#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BattlePartyChangeGuide.WBP_BattlePartyChangeGuide_C
// (None)

class UClass* UWBP_BattlePartyChangeGuide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BattlePartyChangeGuide_C");

	return Clss;
}


// WBP_BattlePartyChangeGuide_C WBP_BattlePartyChangeGuide.Default__WBP_BattlePartyChangeGuide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BattlePartyChangeGuide_C* UWBP_BattlePartyChangeGuide_C::GetDefaultObj()
{
	static class UWBP_BattlePartyChangeGuide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BattlePartyChangeGuide_C*>(UWBP_BattlePartyChangeGuide_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BattlePartyChangeGuide.WBP_BattlePartyChangeGuide_C.RefreshButtonText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattlePartyChangeGuide_C::RefreshButtonText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattlePartyChangeGuide_C", "RefreshButtonText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattlePartyChangeGuide.WBP_BattlePartyChangeGuide_C.Update Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BattlePartyChangeGuide_C::Update_Text(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattlePartyChangeGuide_C", "Update Text");

	Params::UWBP_BattlePartyChangeGuide_C_Update_Text_Params Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattlePartyChangeGuide.WBP_BattlePartyChangeGuide_C.SetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameColor              ColorType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattlePartyChangeGuide_C::SetColor(enum class EGameColor ColorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattlePartyChangeGuide_C", "SetColor");

	Params::UWBP_BattlePartyChangeGuide_C_SetColor_Params Parms{};

	Parms.ColorType = ColorType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattlePartyChangeGuide.WBP_BattlePartyChangeGuide_C.SetDefaultText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattlePartyChangeGuide_C::SetDefaultText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattlePartyChangeGuide_C", "SetDefaultText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattlePartyChangeGuide.WBP_BattlePartyChangeGuide_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattlePartyChangeGuide_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattlePartyChangeGuide_C", "ChangeInputMode");

	Params::UWBP_BattlePartyChangeGuide_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattlePartyChangeGuide.WBP_BattlePartyChangeGuide_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BattlePartyChangeGuide_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattlePartyChangeGuide_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattlePartyChangeGuide.WBP_BattlePartyChangeGuide_C.ExecuteUbergraph_WBP_BattlePartyChangeGuide
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattlePartyChangeGuide_C::ExecuteUbergraph_WBP_BattlePartyChangeGuide(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattlePartyChangeGuide_C", "ExecuteUbergraph_WBP_BattlePartyChangeGuide");

	Params::UWBP_BattlePartyChangeGuide_C_ExecuteUbergraph_WBP_BattlePartyChangeGuide_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


