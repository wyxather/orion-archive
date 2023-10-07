#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C
// (None)

class UClass* UWBP_BattleDoubleSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BattleDoubleSpeed_C");

	return Clss;
}


// WBP_BattleDoubleSpeed_C WBP_BattleDoubleSpeed.Default__WBP_BattleDoubleSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BattleDoubleSpeed_C* UWBP_BattleDoubleSpeed_C::GetDefaultObj()
{
	static class UWBP_BattleDoubleSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BattleDoubleSpeed_C*>(UWBP_BattleDoubleSpeed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.RefreshButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleDoubleSpeed_C::RefreshButtonText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleDoubleSpeed_C", "RefreshButtonText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.ResetParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleDoubleSpeed_C::ResetParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleDoubleSpeed_C", "ResetParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.CheckAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleDoubleSpeed_C::CheckAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleDoubleSpeed_C", "CheckAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.PlayCloseAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleDoubleSpeed_C::PlayCloseAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleDoubleSpeed_C", "PlayCloseAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.OnOpenAnimFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleDoubleSpeed_C::OnOpenAnimFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleDoubleSpeed_C", "OnOpenAnimFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.ChangeSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               BattleStartOpen                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BattleDoubleSpeed_C::ChangeSpeed(bool BattleStartOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleDoubleSpeed_C", "ChangeSpeed");

	Params::UWBP_BattleDoubleSpeed_C_ChangeSpeed_Params Parms{};

	Parms.BattleStartOpen = BattleStartOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleDoubleSpeed_C::SetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleDoubleSpeed_C", "SetText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.PlayOpenAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               BattleStartOpen                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BattleDoubleSpeed_C::PlayOpenAnim(bool BattleStartOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleDoubleSpeed_C", "PlayOpenAnim");

	Params::UWBP_BattleDoubleSpeed_C_PlayOpenAnim_Params Parms{};

	Parms.BattleStartOpen = BattleStartOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleDoubleSpeed_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleDoubleSpeed_C", "Tick");

	Params::UWBP_BattleDoubleSpeed_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleDoubleSpeed_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleDoubleSpeed_C", "ChangeInputMode");

	Params::UWBP_BattleDoubleSpeed_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C.ExecuteUbergraph_WBP_BattleDoubleSpeed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleDoubleSpeed_C::ExecuteUbergraph_WBP_BattleDoubleSpeed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleDoubleSpeed_C", "ExecuteUbergraph_WBP_BattleDoubleSpeed");

	Params::UWBP_BattleDoubleSpeed_C_ExecuteUbergraph_WBP_BattleDoubleSpeed_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


