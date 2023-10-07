#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleBoostGaugePoint.BattleBoostGaugePoint_C
// (None)

class UClass* UBattleBoostGaugePoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleBoostGaugePoint_C");

	return Clss;
}


// BattleBoostGaugePoint_C BattleBoostGaugePoint.Default__BattleBoostGaugePoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleBoostGaugePoint_C* UBattleBoostGaugePoint_C::GetDefaultObj()
{
	static class UBattleBoostGaugePoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleBoostGaugePoint_C*>(UBattleBoostGaugePoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.PlayAnimation_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Anim                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartAtTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsStopAllAnimBeforePlay                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NumLoopsToPlay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleBoostGaugePoint_C::PlayAnimation_Internal(class UWidgetAnimation* Anim, float StartAtTime, bool IsStopAllAnimBeforePlay, int32 NumLoopsToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleBoostGaugePoint_C", "PlayAnimation_Internal");

	Params::UBattleBoostGaugePoint_C_PlayAnimation_Internal_Params Parms{};

	Parms.Anim = Anim;
	Parms.StartAtTime = StartAtTime;
	Parms.IsStopAllAnimBeforePlay = IsStopAllAnimBeforePlay;
	Parms.NumLoopsToPlay = NumLoopsToPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.SetBoostEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleBoostGaugePoint_C::SetBoostEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleBoostGaugePoint_C", "SetBoostEnable");

	Params::UBattleBoostGaugePoint_C_SetBoostEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.SetAddBoostIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AddIcon                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleBoostGaugePoint_C::SetAddBoostIcon(bool AddIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleBoostGaugePoint_C", "SetAddBoostIcon");

	Params::UBattleBoostGaugePoint_C_SetAddBoostIcon_Params Parms{};

	Parms.AddIcon = AddIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.InitBoost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleBoostGaugePoint_C::InitBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleBoostGaugePoint_C", "InitBoost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.GetLoopAnimationTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              CurrentTime                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleBoostGaugePoint_C::GetLoopAnimationTime(float* CurrentTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleBoostGaugePoint_C", "GetLoopAnimationTime");

	Params::UBattleBoostGaugePoint_C_GetLoopAnimationTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentTime != nullptr)
		*CurrentTime = Parms.CurrentTime;

}


// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.SetStatusPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USelectPlayerStatusBase*     Panel                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleBoostGaugePoint_C::SetStatusPanel(class USelectPlayerStatusBase* Panel, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleBoostGaugePoint_C", "SetStatusPanel");

	Params::UBattleBoostGaugePoint_C_SetStatusPanel_Params Parms{};

	Parms.Panel = Panel;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.WaitLoop
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleBoostGaugePoint_C::WaitLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleBoostGaugePoint_C", "WaitLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.SetBoost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Boost                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleBoostGaugePoint_C::SetBoost(bool Boost, bool Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleBoostGaugePoint_C", "SetBoost");

	Params::UBattleBoostGaugePoint_C_SetBoost_Params Parms{};

	Parms.Boost = Boost;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.PlayWaitLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleBoostGaugePoint_C::PlayWaitLoop(float StartTime, float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleBoostGaugePoint_C", "PlayWaitLoop");

	Params::UBattleBoostGaugePoint_C_PlayWaitLoop_Params Parms{};

	Parms.StartTime = StartTime;
	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleBoostGaugePoint.BattleBoostGaugePoint_C.ExecuteUbergraph_BattleBoostGaugePoint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleBoostGaugePoint_C::ExecuteUbergraph_BattleBoostGaugePoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleBoostGaugePoint_C", "ExecuteUbergraph_BattleBoostGaugePoint");

	Params::UBattleBoostGaugePoint_C_ExecuteUbergraph_BattleBoostGaugePoint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


