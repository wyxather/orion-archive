#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerStatusPanel.PlayerStatusPanel_C
// (None)

class UClass* UPlayerStatusPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerStatusPanel_C");

	return Clss;
}


// PlayerStatusPanel_C PlayerStatusPanel.Default__PlayerStatusPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerStatusPanel_C* UPlayerStatusPanel_C::GetDefaultObj()
{
	static class UPlayerStatusPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerStatusPanel_C*>(UPlayerStatusPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerStatusPanel.PlayerStatusPanel_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerStatusPanel_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerStatusPanel_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerStatusPanel.PlayerStatusPanel_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerStatusPanel_C::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerStatusPanel_C", "Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerStatusPanel.PlayerStatusPanel_C.SetDefaultInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerStatusPanel_C::SetDefaultInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerStatusPanel_C", "SetDefaultInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerStatusPanel.PlayerStatusPanel_C.UpdateMeet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerStatusPanel_C::UpdateMeet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerStatusPanel_C", "UpdateMeet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerStatusPanel.PlayerStatusPanel_C.SetMeetInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerStatusPanel_C::SetMeetInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerStatusPanel_C", "SetMeetInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerStatusPanel.PlayerStatusPanel_C.SetShowInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HaveMoney                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlayTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerStatusPanel_C::SetShowInfo(bool HaveMoney, bool PlayTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerStatusPanel_C", "SetShowInfo");

	Params::UPlayerStatusPanel_C_SetShowInfo_Params Parms{};

	Parms.HaveMoney = HaveMoney;
	Parms.PlayTime = PlayTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerStatusPanel.PlayerStatusPanel_C.UpdatePlayTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerStatusPanel_C::UpdatePlayTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerStatusPanel_C", "UpdatePlayTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerStatusPanel.PlayerStatusPanel_C.UpdateMoney
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerStatusPanel_C::UpdateMoney()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerStatusPanel_C", "UpdateMoney");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerStatusPanel.PlayerStatusPanel_C.SetupText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerStatusPanel_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerStatusPanel_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerStatusPanel.PlayerStatusPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerStatusPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerStatusPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerStatusPanel.PlayerStatusPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerStatusPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerStatusPanel_C", "Tick");

	Params::UPlayerStatusPanel_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerStatusPanel.PlayerStatusPanel_C.ExecuteUbergraph_PlayerStatusPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerStatusPanel_C::ExecuteUbergraph_PlayerStatusPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerStatusPanel_C", "ExecuteUbergraph_PlayerStatusPanel");

	Params::UPlayerStatusPanel_C_ExecuteUbergraph_PlayerStatusPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


