#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass SingleMenuWidget.SingleMenuWidget_C
// (None)

class UClass* USingleMenuWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SingleMenuWidget_C");

	return Clss;
}


// SingleMenuWidget_C SingleMenuWidget.Default__SingleMenuWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USingleMenuWidget_C* USingleMenuWidget_C::GetDefaultObj()
{
	static class USingleMenuWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USingleMenuWidget_C*>(USingleMenuWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SingleMenuWidget.SingleMenuWidget_C.EventFieldCommandBattleOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USingleMenuWidget_C::EventFieldCommandBattleOpen(class FName NPCLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "EventFieldCommandBattleOpen");

	Params::USingleMenuWidget_C_EventFieldCommandBattleOpen_Params Parms{};

	Parms.NPCLabel = NPCLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SingleMenuWidget.SingleMenuWidget_C.StorySelectOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WorldMapLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USingleMenuWidget_C::StorySelectOpen(class FName WorldMapLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "StorySelectOpen");

	Params::USingleMenuWidget_C_StorySelectOpen_Params Parms{};

	Parms.WorldMapLabel = WorldMapLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SingleMenuWidget.SingleMenuWidget_C.EndStateEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USingleMenuWidget_C::EndStateEvent(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "EndStateEvent");

	Params::USingleMenuWidget_C_EndStateEvent_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SingleMenuWidget.SingleMenuWidget_C.UpdateEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USingleMenuWidget_C::UpdateEvent(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "UpdateEvent");

	Params::USingleMenuWidget_C_UpdateEvent_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SingleMenuWidget.SingleMenuWidget_C.BeginStateEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USingleMenuWidget_C::BeginStateEvent(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "BeginStateEvent");

	Params::USingleMenuWidget_C_BeginStateEvent_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SingleMenuWidget.SingleMenuWidget_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USingleMenuWidget_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "IsRunning");

	Params::USingleMenuWidget_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SingleMenuWidget.SingleMenuWidget_C.CloseEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USingleMenuWidget_C::CloseEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "CloseEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SingleMenuWidget.SingleMenuWidget_C.InitUIParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USingleMenuWidget_C::InitUIParts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "InitUIParts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SingleMenuWidget.SingleMenuWidget_C.OpenEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USingleMenuWidget_C::OpenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "OpenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SingleMenuWidget.SingleMenuWidget_C.OnBeginState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USingleMenuWidget_C::OnBeginState(int32 PrevState, int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "OnBeginState");

	Params::USingleMenuWidget_C_OnBeginState_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SingleMenuWidget.SingleMenuWidget_C.OnEndState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USingleMenuWidget_C::OnEndState(int32 CurrentState, int32 NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "OnEndState");

	Params::USingleMenuWidget_C_OnEndState_Params Parms{};

	Parms.CurrentState = CurrentState;
	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SingleMenuWidget.SingleMenuWidget_C.OnUpdateState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USingleMenuWidget_C::OnUpdateState(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "OnUpdateState");

	Params::USingleMenuWidget_C_OnUpdateState_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SingleMenuWidget.SingleMenuWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USingleMenuWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "Tick");

	Params::USingleMenuWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SingleMenuWidget.SingleMenuWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USingleMenuWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SingleMenuWidget.SingleMenuWidget_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USingleMenuWidget_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SingleMenuWidget.SingleMenuWidget_C.ExecuteUbergraph_SingleMenuWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USingleMenuWidget_C::ExecuteUbergraph_SingleMenuWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SingleMenuWidget_C", "ExecuteUbergraph_SingleMenuWidget");

	Params::USingleMenuWidget_C_ExecuteUbergraph_SingleMenuWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


