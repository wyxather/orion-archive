#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleWipe.BattleWipe_C
// (None)

class UClass* UBattleWipe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleWipe_C");

	return Clss;
}


// BattleWipe_C BattleWipe.Default__BattleWipe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleWipe_C* UBattleWipe_C::GetDefaultObj()
{
	static class UBattleWipe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleWipe_C*>(UBattleWipe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleWipe.BattleWipe_C.Wipe in Animation Finish
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::Wipe_in_Animation_Finish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "Wipe in Animation Finish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.WipeOutAnimationFinish
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::WipeOutAnimationFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "WipeOutAnimationFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.PlayWipeInAnimationAtBattleEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::PlayWipeInAnimationAtBattleEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "PlayWipeInAnimationAtBattleEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.PlayWipeOutAnimationAtBattleEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::PlayWipeOutAnimationAtBattleEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "PlayWipeOutAnimationAtBattleEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.PlayWhiteIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::PlayWhiteIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "PlayWhiteIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.PlayWhiteOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::PlayWhiteOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "PlayWhiteOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.StartWipeInFinishCallback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::StartWipeInFinishCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "StartWipeInFinishCallback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.SetState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_WIPE_STATE      NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleWipe_C::SetState(enum class EBATTLE_WIPE_STATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "SetState");

	Params::UBattleWipe_C_SetState_Params Parms{};

	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleWipe.BattleWipe_C.StartWipeOutFinishCallback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::StartWipeOutFinishCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "StartWipeOutFinishCallback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.WipeOutAtBattleStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::WipeOutAtBattleStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "WipeOutAtBattleStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.WipeOutAtBattleEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::WipeOutAtBattleEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "WipeOutAtBattleEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.WipeInAtBattleStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::WipeInAtBattleStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "WipeInAtBattleStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.WipeInAtBattleEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::WipeInAtBattleEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "WipeInAtBattleEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.IsReadyAnimation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBattleWipe_C::IsReadyAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "IsReadyAnimation");

	Params::UBattleWipe_C_IsReadyAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleWipe.BattleWipe_C.HideBattleEndWipe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::HideBattleEndWipe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "HideBattleEndWipe");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.HideBattleStartWipe_DEPRECATED
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::HideBattleStartWipe_DEPRECATED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "HideBattleStartWipe_DEPRECATED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.PlayBattleStartWipe_DEPRECATED
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::PlayBattleStartWipe_DEPRECATED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "PlayBattleStartWipe_DEPRECATED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.WipeStart_DEPLECATED
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::WipeStart_DEPLECATED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "WipeStart_DEPLECATED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.BattleEndWipeTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::BattleEndWipeTimeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "BattleEndWipeTimeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.SetupDebugWipeColor
// (Event, Public, BlueprintEvent)
// Parameters:

void UBattleWipe_C::SetupDebugWipeColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "SetupDebugWipeColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattleWipe_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.HideWipeAtBattleEnd_Immediately
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWipe_C::HideWipeAtBattleEnd_Immediately()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "HideWipeAtBattleEnd_Immediately");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.WidgetAnimationEvt_WhiteOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UBattleWipe_C::WidgetAnimationEvt_WhiteOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "WidgetAnimationEvt_WhiteOut_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.WidgetAnimationEvt_WhiteIn_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)
// Parameters:

void UBattleWipe_C::WidgetAnimationEvt_WhiteIn_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "WidgetAnimationEvt_WhiteIn_K2Node_WidgetAnimationEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWipe.BattleWipe_C.ExecuteUbergraph_BattleWipe
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleWipe_C::ExecuteUbergraph_BattleWipe(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWipe_C", "ExecuteUbergraph_BattleWipe");

	Params::UBattleWipe_C_ExecuteUbergraph_BattleWipe_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


