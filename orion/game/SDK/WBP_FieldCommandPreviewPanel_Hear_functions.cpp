#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C
// (None)

class UClass* UWBP_FieldCommandPreviewPanel_Hear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FieldCommandPreviewPanel_Hear_C");

	return Clss;
}


// WBP_FieldCommandPreviewPanel_Hear_C WBP_FieldCommandPreviewPanel_Hear.Default__WBP_FieldCommandPreviewPanel_Hear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FieldCommandPreviewPanel_Hear_C* UWBP_FieldCommandPreviewPanel_Hear_C::GetDefaultObj()
{
	static class UWBP_FieldCommandPreviewPanel_Hear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FieldCommandPreviewPanel_Hear_C*>(UWBP_FieldCommandPreviewPanel_Hear_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.GetHearScreenShotResource
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               FristTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UWBP_FieldCommandPreviewPanel_Hear_C::GetHearScreenShotResource(bool FristTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "GetHearScreenShotResource");

	Params::UWBP_FieldCommandPreviewPanel_Hear_C_GetHearScreenShotResource_Params Parms{};

	Parms.FristTime = FristTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.GetCanPlayCloseSe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanPlay                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Hear_C::GetCanPlayCloseSe(bool* CanPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "GetCanPlayCloseSe");

	Params::UWBP_FieldCommandPreviewPanel_Hear_C_GetCanPlayCloseSe_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanPlay != nullptr)
		*CanPlay = Parms.CanPlay;

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.OnFinishFieldCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Hear_C::OnFinishFieldCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "OnFinishFieldCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.SetupNpcStatus
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Hear_C::SetupNpcStatus(class FName NPCLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "SetupNpcStatus");

	Params::UWBP_FieldCommandPreviewPanel_Hear_C_SetupNpcStatus_Params Parms{};

	Parms.NPCLabel = NPCLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Hear_C::Open(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "Open");

	Params::UWBP_FieldCommandPreviewPanel_Hear_C_Open_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Hear_C::Close(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "Close");

	Params::UWBP_FieldCommandPreviewPanel_Hear_C_Close_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.Cancel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Hear_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.CanCloseState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFieldCommandPreviewMenuStateNextState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Hear_C::CanCloseState(enum class EFieldCommandPreviewMenuState* NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "CanCloseState");

	Params::UWBP_FieldCommandPreviewPanel_Hear_C_CanCloseState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextState != nullptr)
		*NextState = Parms.NextState;

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.AddDeltaTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TickDelta                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Hear_C::AddDeltaTime(float TickDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "AddDeltaTime");

	Params::UWBP_FieldCommandPreviewPanel_Hear_C_AddDeltaTime_Params Parms{};

	Parms.TickDelta = TickDelta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.UpdateSpecialState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Hear_C::UpdateSpecialState(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "UpdateSpecialState");

	Params::UWBP_FieldCommandPreviewPanel_Hear_C_UpdateSpecialState_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.SwapTemplate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Hear_C::SwapTemplate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "SwapTemplate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.Decide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFieldCommandPreviewPanelDecideAnswerNewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Hear_C::Decide(enum class EFieldCommandPreviewPanelDecideAnswer* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "Decide");

	Params::UWBP_FieldCommandPreviewPanel_Hear_C_Decide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.SetupInfomationTemplate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Hear_C::SetupInfomationTemplate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "SetupInfomationTemplate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.SetupConfirmTemplate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Hear_C::SetupConfirmTemplate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "SetupConfirmTemplate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.SetupPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Hear_C::SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "SetupPanel");

	Params::UWBP_FieldCommandPreviewPanel_Hear_C_SetupPanel_Params Parms{};

	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Hear_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Hear_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "Tick");

	Params::UWBP_FieldCommandPreviewPanel_Hear_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C.ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Hear
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Hear_C::ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Hear(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Hear_C", "ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Hear");

	Params::UWBP_FieldCommandPreviewPanel_Hear_C_ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Hear_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


