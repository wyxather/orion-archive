#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UILoading.UILoading_C
// (None)

class UClass* UUILoading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UILoading_C");

	return Clss;
}


// UILoading_C UILoading.Default__UILoading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUILoading_C* UUILoading_C::GetDefaultObj()
{
	static class UUILoading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUILoading_C*>(UUILoading_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UILoading.UILoading_C.GetLoader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSSimpleLevelLoader*        Loader                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUILoading_C::GetLoader(class AKSSimpleLevelLoader** Loader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "GetLoader");

	Params::UUILoading_C_GetLoader_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Loader != nullptr)
		*Loader = Parms.Loader;

}


// Function UILoading.UILoading_C.SetBalloonManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     BalloonManager                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUILoading_C::SetBalloonManager(class UObject* BalloonManager, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "SetBalloonManager");

	Params::UUILoading_C_SetBalloonManager_Params Parms{};

	Parms.BalloonManager = BalloonManager;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UILoading.UILoading_C.IsAllManagerReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUILoading_C::IsAllManagerReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "IsAllManagerReady");

	Params::UUILoading_C_IsAllManagerReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UILoading.UILoading_C.SetAllManagerReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUILoading_C::SetAllManagerReady(bool Ready, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "SetAllManagerReady");

	Params::UUILoading_C_SetAllManagerReady_Params Parms{};

	Parms.Ready = Ready;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UILoading.UILoading_C.SetManagerReady_DEPRICATED
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUILoading_C::SetManagerReady_DEPRICATED(bool Ready, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "SetManagerReady_DEPRICATED");

	Params::UUILoading_C_SetManagerReady_DEPRICATED_Params Parms{};

	Parms.Ready = Ready;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UILoading.UILoading_C.SetLoadReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUILoading_C::SetLoadReady(bool Ready, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "SetLoadReady");

	Params::UUILoading_C_SetLoadReady_Params Parms{};

	Parms.Ready = Ready;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UILoading.UILoading_C.IsManagerReady_DEPRICATED
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUILoading_C::IsManagerReady_DEPRICATED(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "IsManagerReady_DEPRICATED");

	Params::UUILoading_C_IsManagerReady_DEPRICATED_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UILoading.UILoading_C.IsLoadReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUILoading_C::IsLoadReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "IsLoadReady");

	Params::UUILoading_C_IsLoadReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UILoading.UILoading_C.SetTex
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ParameterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUILoading_C::SetTex(class FName ParameterName, class UTexture2D* InputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "SetTex");

	Params::UUILoading_C_SetTex_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UILoading.UILoading_C.LoadResource
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUILoading_C::LoadResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "LoadResource");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UILoading.UILoading_C.IsReburnAnyTorch
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUILoading_C::IsReburnAnyTorch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "IsReburnAnyTorch");

	Params::UUILoading_C_IsReburnAnyTorch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UILoading.UILoading_C.IsBurnOutAllTorch
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUILoading_C::IsBurnOutAllTorch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "IsBurnOutAllTorch");

	Params::UUILoading_C_IsBurnOutAllTorch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UILoading.UILoading_C.StartLoading_Inner
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUILoading_C::StartLoading_Inner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "StartLoading_Inner");

	Params::UUILoading_C_StartLoading_Inner_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UILoading.UILoading_C.StopLoading_Inner
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUILoading_C::StopLoading_Inner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "StopLoading_Inner");

	Params::UUILoading_C_StopLoading_Inner_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UILoading.UILoading_C.RemoveTitlePawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUILoading_C::RemoveTitlePawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "RemoveTitlePawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UILoading.UILoading_C.ShowTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUILoading_C::ShowTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "ShowTitle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UILoading.UILoading_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUILoading_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UILoading.UILoading_C.WidgetAnimationEvt_Focus_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UUILoading_C::WidgetAnimationEvt_Focus_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "WidgetAnimationEvt_Focus_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UILoading.UILoading_C.WidgetAnimationEvt_OutFocus_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)
// Parameters:

void UUILoading_C::WidgetAnimationEvt_OutFocus_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "WidgetAnimationEvt_OutFocus_K2Node_WidgetAnimationEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UILoading.UILoading_C.ExecuteUbergraph_UILoading
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUILoading_C::ExecuteUbergraph_UILoading(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UILoading_C", "ExecuteUbergraph_UILoading");

	Params::UUILoading_C_ExecuteUbergraph_UILoading_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


