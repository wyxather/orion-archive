#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ParamBeforeAfterWBP.ParamBeforeAfterWBP_C
// (None)

class UClass* UParamBeforeAfterWBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParamBeforeAfterWBP_C");

	return Clss;
}


// ParamBeforeAfterWBP_C ParamBeforeAfterWBP.Default__ParamBeforeAfterWBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParamBeforeAfterWBP_C* UParamBeforeAfterWBP_C::GetDefaultObj()
{
	static class UParamBeforeAfterWBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParamBeforeAfterWBP_C*>(UParamBeforeAfterWBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.ResetBeforeParamColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UParamBeforeAfterWBP_C::ResetBeforeParamColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ParamBeforeAfterWBP_C", "ResetBeforeParamColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.ChangeBeforeParamColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ColorType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UParamBeforeAfterWBP_C::ChangeBeforeParamColor(int32 ColorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ParamBeforeAfterWBP_C", "ChangeBeforeParamColor");

	Params::UParamBeforeAfterWBP_C_ChangeBeforeParamColor_Params Parms{};

	Parms.ColorType = ColorType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.SetLimit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ParamMax                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ParamMin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UParamBeforeAfterWBP_C::SetLimit(int32 ParamMax, int32 ParamMin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ParamBeforeAfterWBP_C", "SetLimit");

	Params::UParamBeforeAfterWBP_C_SetLimit_Params Parms{};

	Parms.ParamMax = ParamMax;
	Parms.ParamMin = ParamMin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UParamBeforeAfterWBP_C::SetIcon(class UTexture2D* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ParamBeforeAfterWBP_C", "SetIcon");

	Params::UParamBeforeAfterWBP_C_SetIcon_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UParamBeforeAfterWBP_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ParamBeforeAfterWBP_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.SetParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ValueBefore                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ValueAfter                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowParamEvenIfSameValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UParamBeforeAfterWBP_C::SetParam(int32 ValueBefore, int32 ValueAfter, bool ShowParamEvenIfSameValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ParamBeforeAfterWBP_C", "SetParam");

	Params::UParamBeforeAfterWBP_C_SetParam_Params Parms{};

	Parms.ValueBefore = ValueBefore;
	Parms.ValueAfter = ValueAfter;
	Parms.ShowParamEvenIfSameValue = ShowParamEvenIfSameValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.UpdateParamText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowParamEvenIfSameValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UParamBeforeAfterWBP_C::UpdateParamText(bool ShowParamEvenIfSameValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ParamBeforeAfterWBP_C", "UpdateParamText");

	Params::UParamBeforeAfterWBP_C_UpdateParamText_Params Parms{};

	Parms.ShowParamEvenIfSameValue = ShowParamEvenIfSameValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.UpdateText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UParamBeforeAfterWBP_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ParamBeforeAfterWBP_C", "UpdateText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UParamBeforeAfterWBP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ParamBeforeAfterWBP_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ParamBeforeAfterWBP.ParamBeforeAfterWBP_C.ExecuteUbergraph_ParamBeforeAfterWBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UParamBeforeAfterWBP_C::ExecuteUbergraph_ParamBeforeAfterWBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ParamBeforeAfterWBP_C", "ExecuteUbergraph_ParamBeforeAfterWBP");

	Params::UParamBeforeAfterWBP_C_ExecuteUbergraph_ParamBeforeAfterWBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


