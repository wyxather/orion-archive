#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass IntGaugeWBP.IntGaugeWBP_C
// (None)

class UClass* UIntGaugeWBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IntGaugeWBP_C");

	return Clss;
}


// IntGaugeWBP_C IntGaugeWBP.Default__IntGaugeWBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIntGaugeWBP_C* UIntGaugeWBP_C::GetDefaultObj()
{
	static class UIntGaugeWBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIntGaugeWBP_C*>(UIntGaugeWBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IntGaugeWBP.IntGaugeWBP_C.UpdateTexture
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UIntGaugeWBP_C::UpdateTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("IntGaugeWBP_C", "UpdateTexture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IntGaugeWBP.IntGaugeWBP_C.GetValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIntGaugeWBP_C::GetValue(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("IntGaugeWBP_C", "GetValue");

	Params::UIntGaugeWBP_C_GetValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function IntGaugeWBP.IntGaugeWBP_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIntGaugeWBP_C::SetValue(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("IntGaugeWBP_C", "SetValue");

	Params::UIntGaugeWBP_C_SetValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IntGaugeWBP.IntGaugeWBP_C.UpdateGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UIntGaugeWBP_C::UpdateGauge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("IntGaugeWBP_C", "UpdateGauge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IntGaugeWBP.IntGaugeWBP_C.DecrementGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UIntGaugeWBP_C::DecrementGauge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("IntGaugeWBP_C", "DecrementGauge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IntGaugeWBP.IntGaugeWBP_C.IncrementGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UIntGaugeWBP_C::IncrementGauge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("IntGaugeWBP_C", "IncrementGauge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IntGaugeWBP.IntGaugeWBP_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UIntGaugeWBP_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("IntGaugeWBP_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IntGaugeWBP.IntGaugeWBP_C.OnInputRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UIntGaugeWBP_C::OnInputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("IntGaugeWBP_C", "OnInputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IntGaugeWBP.IntGaugeWBP_C.OnInputLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UIntGaugeWBP_C::OnInputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("IntGaugeWBP_C", "OnInputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IntGaugeWBP.IntGaugeWBP_C.InitExWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UIntGaugeWBP_C::InitExWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("IntGaugeWBP_C", "InitExWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IntGaugeWBP.IntGaugeWBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UIntGaugeWBP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("IntGaugeWBP_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IntGaugeWBP.IntGaugeWBP_C.ExecuteUbergraph_IntGaugeWBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIntGaugeWBP_C::ExecuteUbergraph_IntGaugeWBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("IntGaugeWBP_C", "ExecuteUbergraph_IntGaugeWBP");

	Params::UIntGaugeWBP_C_ExecuteUbergraph_IntGaugeWBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


