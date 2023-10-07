#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass EventBackGroundFade.EventBackGroundFade_C
// (None)

class UClass* UEventBackGroundFade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventBackGroundFade_C");

	return Clss;
}


// EventBackGroundFade_C EventBackGroundFade.Default__EventBackGroundFade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEventBackGroundFade_C* UEventBackGroundFade_C::GetDefaultObj()
{
	static class UEventBackGroundFade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventBackGroundFade_C*>(UEventBackGroundFade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventBackGroundFade.EventBackGroundFade_C.EndFadeOut
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEventBackGroundFade_C::EndFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventBackGroundFade_C", "EndFadeOut");

	Params::UEventBackGroundFade_C_EndFadeOut_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventBackGroundFade.EventBackGroundFade_C.EndFadeIn
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEventBackGroundFade_C::EndFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventBackGroundFade_C", "EndFadeIn");

	Params::UEventBackGroundFade_C_EndFadeIn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventBackGroundFade.EventBackGroundFade_C.UpdateMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventBackGroundFade_C::UpdateMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventBackGroundFade_C", "UpdateMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventBackGroundFade.EventBackGroundFade_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventBackGroundFade_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventBackGroundFade_C", "Tick");

	Params::UEventBackGroundFade_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventBackGroundFade.EventBackGroundFade_C.SetFadeMaterialParam
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResourceLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventBackGroundFade_C::SetFadeMaterialParam(const struct FLinearColor& Color, class FName ResourceLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventBackGroundFade_C", "SetFadeMaterialParam");

	Params::UEventBackGroundFade_C_SetFadeMaterialParam_Params Parms{};

	Parms.Color = Color;
	Parms.ResourceLabel = ResourceLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventBackGroundFade.EventBackGroundFade_C.ExecuteUbergraph_EventBackGroundFade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventBackGroundFade_C::ExecuteUbergraph_EventBackGroundFade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventBackGroundFade_C", "ExecuteUbergraph_EventBackGroundFade");

	Params::UEventBackGroundFade_C_ExecuteUbergraph_EventBackGroundFade_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


