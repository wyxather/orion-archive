#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ScreenCaptureWidget.ScreenCaptureWidget_C
// (None)

class UClass* UScreenCaptureWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScreenCaptureWidget_C");

	return Clss;
}


// ScreenCaptureWidget_C ScreenCaptureWidget.Default__ScreenCaptureWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScreenCaptureWidget_C* UScreenCaptureWidget_C::GetDefaultObj()
{
	static class UScreenCaptureWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScreenCaptureWidget_C*>(UScreenCaptureWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScreenCaptureWidget.ScreenCaptureWidget_C.TickNoiseInternal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScreenCaptureWidget_C::TickNoiseInternal(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ScreenCaptureWidget_C", "TickNoiseInternal");

	Params::UScreenCaptureWidget_C_TickNoiseInternal_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScreenCaptureWidget.ScreenCaptureWidget_C.NoiseFinish
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UScreenCaptureWidget_C::NoiseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ScreenCaptureWidget_C", "NoiseFinish");

	Params::UScreenCaptureWidget_C_NoiseFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ScreenCaptureWidget.ScreenCaptureWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UScreenCaptureWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ScreenCaptureWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScreenCaptureWidget.ScreenCaptureWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScreenCaptureWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ScreenCaptureWidget_C", "Tick");

	Params::UScreenCaptureWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScreenCaptureWidget.ScreenCaptureWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UScreenCaptureWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ScreenCaptureWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScreenCaptureWidget.ScreenCaptureWidget_C.OpenUI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayNoise                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UScreenCaptureWidget_C::OpenUI(bool PlayNoise)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ScreenCaptureWidget_C", "OpenUI");

	Params::UScreenCaptureWidget_C_OpenUI_Params Parms{};

	Parms.PlayNoise = PlayNoise;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScreenCaptureWidget.ScreenCaptureWidget_C.OpenUIWithTexture
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ResourceLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScreenCaptureWidget_C::OpenUIWithTexture(class FName ResourceLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ScreenCaptureWidget_C", "OpenUIWithTexture");

	Params::UScreenCaptureWidget_C_OpenUIWithTexture_Params Parms{};

	Parms.ResourceLabel = ResourceLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScreenCaptureWidget.ScreenCaptureWidget_C.ExecuteUbergraph_ScreenCaptureWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScreenCaptureWidget_C::ExecuteUbergraph_ScreenCaptureWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ScreenCaptureWidget_C", "ExecuteUbergraph_ScreenCaptureWidget");

	Params::UScreenCaptureWidget_C_ExecuteUbergraph_ScreenCaptureWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


