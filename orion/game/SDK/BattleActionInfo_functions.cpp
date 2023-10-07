#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleActionInfo.BattleActionInfo_C
// (None)

class UClass* UBattleActionInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleActionInfo_C");

	return Clss;
}


// BattleActionInfo_C BattleActionInfo.Default__BattleActionInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleActionInfo_C* UBattleActionInfo_C::GetDefaultObj()
{
	static class UBattleActionInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleActionInfo_C*>(UBattleActionInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleActionInfo.BattleActionInfo_C.SetAutoCloseTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleActionInfo_C::SetAutoCloseTimer(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionInfo_C", "SetAutoCloseTimer");

	Params::UBattleActionInfo_C_SetAutoCloseTimer_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleActionInfo.BattleActionInfo_C.SetActionInfoLower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleActionInfo_C::SetActionInfoLower()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionInfo_C", "SetActionInfoLower");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleActionInfo.BattleActionInfo_C.ActionInfoClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceClose                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleActionInfo_C::ActionInfoClose(bool ForceClose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionInfo_C", "ActionInfoClose");

	Params::UBattleActionInfo_C_ActionInfoClose_Params Parms{};

	Parms.ForceClose = ForceClose;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleActionInfo.BattleActionInfo_C.ActionInfoOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleActionInfo_C::ActionInfoOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionInfo_C", "ActionInfoOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleActionInfo.BattleActionInfo_C.SetCommandName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CommandName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBattleActionInfo_C::SetCommandName(class FText CommandName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionInfo_C", "SetCommandName");

	Params::UBattleActionInfo_C_SetCommandName_Params Parms{};

	Parms.CommandName = CommandName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleActionInfo.BattleActionInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleActionInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionInfo_C", "Tick");

	Params::UBattleActionInfo_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleActionInfo.BattleActionInfo_C.ExecuteUbergraph_BattleActionInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleActionInfo_C::ExecuteUbergraph_BattleActionInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleActionInfo_C", "ExecuteUbergraph_BattleActionInfo");

	Params::UBattleActionInfo_C_ExecuteUbergraph_BattleActionInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


