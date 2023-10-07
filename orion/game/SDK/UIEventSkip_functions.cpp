#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UIEventSkip.UIEventSkip_C
// (None)

class UClass* UUIEventSkip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIEventSkip_C");

	return Clss;
}


// UIEventSkip_C UIEventSkip.Default__UIEventSkip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUIEventSkip_C* UUIEventSkip_C::GetDefaultObj()
{
	static class UUIEventSkip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIEventSkip_C*>(UUIEventSkip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIEventSkip.UIEventSkip_C.Tick_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIEventSkip_C::Tick_Internal(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "Tick_Internal");

	Params::UUIEventSkip_C_Tick_Internal_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIEventSkip.UIEventSkip_C.ResetSeqParamOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEventSkip_C::ResetSeqParamOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "ResetSeqParamOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEventSkip.UIEventSkip_C.ResetSeqParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEventSkip_C::ResetSeqParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "ResetSeqParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEventSkip.UIEventSkip_C.UpdateInputColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEventSkip_C::UpdateInputColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "UpdateInputColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEventSkip.UIEventSkip_C.SetSpeedModeIconColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEventSkip_C::SetSpeedModeIconColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "SetSpeedModeIconColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEventSkip.UIEventSkip_C.SetSpeedColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInput                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIEventSkip_C::SetSpeedColor(bool IsInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "SetSpeedColor");

	Params::UUIEventSkip_C_SetSpeedColor_Params Parms{};

	Parms.IsInput = IsInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIEventSkip.UIEventSkip_C.SetSkipColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInput                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIEventSkip_C::SetSkipColor(bool IsInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "SetSkipColor");

	Params::UUIEventSkip_C_SetSkipColor_Params Parms{};

	Parms.IsInput = IsInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIEventSkip.UIEventSkip_C.UpdateNotInputSkipUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIEventSkip_C::UpdateNotInputSkipUI(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "UpdateNotInputSkipUI");

	Params::UUIEventSkip_C_UpdateNotInputSkipUI_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIEventSkip.UIEventSkip_C.UpdateInputSkipUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEventSkip_C::UpdateInputSkipUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "UpdateInputSkipUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEventSkip.UIEventSkip_C.ChangeSpeedUpUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEVENT_MODE             EventMode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIEventSkip_C::ChangeSpeedUpUI(enum class EEVENT_MODE EventMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "ChangeSpeedUpUI");

	Params::UUIEventSkip_C_ChangeSpeedUpUI_Params Parms{};

	Parms.EventMode = EventMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIEventSkip.UIEventSkip_C.Debug_GetForceSkip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Debug_ForceSkip                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIEventSkip_C::Debug_GetForceSkip(bool* Debug_ForceSkip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "Debug_GetForceSkip");

	Params::UUIEventSkip_C_Debug_GetForceSkip_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Debug_ForceSkip != nullptr)
		*Debug_ForceSkip = Parms.Debug_ForceSkip;

}


// Function UIEventSkip.UIEventSkip_C.Debug_SetForceSkip
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bforceSkip                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIEventSkip_C::Debug_SetForceSkip(bool bforceSkip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "Debug_SetForceSkip");

	Params::UUIEventSkip_C_Debug_SetForceSkip_Params Parms{};

	Parms.bforceSkip = bforceSkip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIEventSkip.UIEventSkip_C.RefreshButtonText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEventSkip_C::RefreshButtonText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "RefreshButtonText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEventSkip.UIEventSkip_C.EventSkipVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Visible                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIEventSkip_C::EventSkipVisible(bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "EventSkipVisible");

	Params::UUIEventSkip_C_EventSkipVisible_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;

}


// Function UIEventSkip.UIEventSkip_C.OnEventSpeedChange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 NoticeArgs                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUIEventSkip_C::OnEventSpeedChange(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& NoticeArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "OnEventSpeedChange");

	Params::UUIEventSkip_C_OnEventSpeedChange_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.NoticeArgs = NoticeArgs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIEventSkip.UIEventSkip_C.UpdateProgress
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxTime                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUIEventSkip_C::UpdateProgress(float CurrentTime, float MaxTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "UpdateProgress");

	Params::UUIEventSkip_C_UpdateProgress_Params Parms{};

	Parms.CurrentTime = CurrentTime;
	Parms.MaxTime = MaxTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIEventSkip.UIEventSkip_C.EventCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEventSkip_C::EventCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "EventCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEventSkip.UIEventSkip_C.IsInputKey
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsInput                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIEventSkip_C::IsInputKey(bool* IsInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "IsInputKey");

	Params::UUIEventSkip_C_IsInputKey_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsInput != nullptr)
		*IsInput = Parms.IsInput;

}


// Function UIEventSkip.UIEventSkip_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIEventSkip_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "Tick");

	Params::UUIEventSkip_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIEventSkip.UIEventSkip_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEventSkip_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEventSkip.UIEventSkip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUIEventSkip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEventSkip.UIEventSkip_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEventSkip_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEventSkip.UIEventSkip_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIEventSkip_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "ChangeInputMode");

	Params::UUIEventSkip_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIEventSkip.UIEventSkip_C.ExecuteUbergraph_UIEventSkip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIEventSkip_C::ExecuteUbergraph_UIEventSkip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIEventSkip_C", "ExecuteUbergraph_UIEventSkip");

	Params::UUIEventSkip_C_ExecuteUbergraph_UIEventSkip_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


