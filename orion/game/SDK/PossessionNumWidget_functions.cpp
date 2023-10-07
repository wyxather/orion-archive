#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass PossessionNumWidget.PossessionNumWidget_C
// (None)

class UClass* UPossessionNumWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PossessionNumWidget_C");

	return Clss;
}


// PossessionNumWidget_C PossessionNumWidget.Default__PossessionNumWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPossessionNumWidget_C* UPossessionNumWidget_C::GetDefaultObj()
{
	static class UPossessionNumWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPossessionNumWidget_C*>(UPossessionNumWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PossessionNumWidget.PossessionNumWidget_C.HideByAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPossessionNumWidget_C::HideByAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PossessionNumWidget_C", "HideByAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PossessionNumWidget.PossessionNumWidget_C.IsOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OpenFlag                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPossessionNumWidget_C::IsOpen(bool* OpenFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PossessionNumWidget_C", "IsOpen");

	Params::UPossessionNumWidget_C_IsOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OpenFlag != nullptr)
		*OpenFlag = Parms.OpenFlag;

}


// Function PossessionNumWidget.PossessionNumWidget_C.OnTick_PlayAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPossessionNumWidget_C::OnTick_PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PossessionNumWidget_C", "OnTick_PlayAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PossessionNumWidget.PossessionNumWidget_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPossessionNumWidget_C::PlayAnim(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PossessionNumWidget_C", "PlayAnim");

	Params::UPossessionNumWidget_C_PlayAnim_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PossessionNumWidget.PossessionNumWidget_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPossessionNumWidget_C::OutFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PossessionNumWidget_C", "OutFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PossessionNumWidget.PossessionNumWidget_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPossessionNumWidget_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PossessionNumWidget_C", "Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PossessionNumWidget.PossessionNumWidget_C.SetPossessionNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPossessionNumWidget_C::SetPossessionNum(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PossessionNumWidget_C", "SetPossessionNum");

	Params::UPossessionNumWidget_C_SetPossessionNum_Params Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PossessionNumWidget.PossessionNumWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPossessionNumWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PossessionNumWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PossessionNumWidget.PossessionNumWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPossessionNumWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PossessionNumWidget_C", "Tick");

	Params::UPossessionNumWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PossessionNumWidget.PossessionNumWidget_C.ExecuteUbergraph_PossessionNumWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPossessionNumWidget_C::ExecuteUbergraph_PossessionNumWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PossessionNumWidget_C", "ExecuteUbergraph_PossessionNumWidget");

	Params::UPossessionNumWidget_C_ExecuteUbergraph_PossessionNumWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


