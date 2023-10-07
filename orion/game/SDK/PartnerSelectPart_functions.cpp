#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass PartnerSelectPart.PartnerSelectPart_C
// (None)

class UClass* UPartnerSelectPart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartnerSelectPart_C");

	return Clss;
}


// PartnerSelectPart_C PartnerSelectPart.Default__PartnerSelectPart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPartnerSelectPart_C* UPartnerSelectPart_C::GetDefaultObj()
{
	static class UPartnerSelectPart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartnerSelectPart_C*>(UPartnerSelectPart_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PartnerSelectPart.PartnerSelectPart_C.SetCursorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartnerSelectPart_C::SetCursorVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartnerSelectPart_C", "SetCursorVisibility");

	Params::UPartnerSelectPart_C_SetCursorVisibility_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartnerSelectPart.PartnerSelectPart_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ResourceLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartnerSelectPart_C::Setup(class FName ResourceLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartnerSelectPart_C", "Setup");

	Params::UPartnerSelectPart_C_Setup_Params Parms{};

	Parms.ResourceLabel = ResourceLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartnerSelectPart.PartnerSelectPart_C.PlayOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartnerSelectPart_C::PlayOutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartnerSelectPart_C", "PlayOutFocus");

	Params::UPartnerSelectPart_C_PlayOutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartnerSelectPart.PartnerSelectPart_C.PlayFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartnerSelectPart_C::PlayFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartnerSelectPart_C", "PlayFocus");

	Params::UPartnerSelectPart_C_PlayFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartnerSelectPart.PartnerSelectPart_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartnerSelectPart_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartnerSelectPart_C", "Tick");

	Params::UPartnerSelectPart_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartnerSelectPart.PartnerSelectPart_C.ExecuteUbergraph_PartnerSelectPart
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartnerSelectPart_C::ExecuteUbergraph_PartnerSelectPart(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartnerSelectPart_C", "ExecuteUbergraph_PartnerSelectPart");

	Params::UPartnerSelectPart_C_ExecuteUbergraph_PartnerSelectPart_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


