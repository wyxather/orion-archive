#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_3DPlayerSelectIcon.WBP_3DPlayerSelectIcon_C
// (None)

class UClass* UWBP_3DPlayerSelectIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_3DPlayerSelectIcon_C");

	return Clss;
}


// WBP_3DPlayerSelectIcon_C WBP_3DPlayerSelectIcon.Default__WBP_3DPlayerSelectIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_3DPlayerSelectIcon_C* UWBP_3DPlayerSelectIcon_C::GetDefaultObj()
{
	static class UWBP_3DPlayerSelectIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_3DPlayerSelectIcon_C*>(UWBP_3DPlayerSelectIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_3DPlayerSelectIcon.WBP_3DPlayerSelectIcon_C.StartEnable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_3DPlayerSelectIcon_C::StartEnable(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectIcon_C", "StartEnable");

	Params::UWBP_3DPlayerSelectIcon_C_StartEnable_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DPlayerSelectIcon.WBP_3DPlayerSelectIcon_C.StartDisable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_3DPlayerSelectIcon_C::StartDisable(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectIcon_C", "StartDisable");

	Params::UWBP_3DPlayerSelectIcon_C_StartDisable_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DPlayerSelectIcon.WBP_3DPlayerSelectIcon_C.GetSnapPositionOffset
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UWBP_3DPlayerSelectIcon_C::GetSnapPositionOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectIcon_C", "GetSnapPositionOffset");

	Params::UWBP_3DPlayerSelectIcon_C_GetSnapPositionOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DPlayerSelectIcon.WBP_3DPlayerSelectIcon_C.UpdateTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETimeZoneType           TimeZone                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectIcon_C::UpdateTimeZone(enum class ETimeZoneType TimeZone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectIcon_C", "UpdateTimeZone");

	Params::UWBP_3DPlayerSelectIcon_C_UpdateTimeZone_Params Parms{};

	Parms.TimeZone = TimeZone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DPlayerSelectIcon.WBP_3DPlayerSelectIcon_C.StartFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFocus                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_3DPlayerSelectIcon_C::StartFocus(bool IsFocus, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectIcon_C", "StartFocus");

	Params::UWBP_3DPlayerSelectIcon_C_StartFocus_Params Parms{};

	Parms.IsFocus = IsFocus;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DPlayerSelectIcon.WBP_3DPlayerSelectIcon_C.SetupIconImage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectIcon_C::SetupIconImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectIcon_C", "SetupIconImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectIcon.WBP_3DPlayerSelectIcon_C.FinishAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_3DPlayerSelectIcon_C::FinishAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectIcon_C", "FinishAnimation");

	Params::UWBP_3DPlayerSelectIcon_C_FinishAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DPlayerSelectIcon.WBP_3DPlayerSelectIcon_C.SelectAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectIcon_C::SelectAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectIcon_C", "SelectAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectIcon.WBP_3DPlayerSelectIcon_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectIcon_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectIcon_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectIcon.WBP_3DPlayerSelectIcon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectIcon_C", "Tick");

	Params::UWBP_3DPlayerSelectIcon_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DPlayerSelectIcon.WBP_3DPlayerSelectIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectIcon.WBP_3DPlayerSelectIcon_C.ExecuteUbergraph_WBP_3DPlayerSelectIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectIcon_C::ExecuteUbergraph_WBP_3DPlayerSelectIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectIcon_C", "ExecuteUbergraph_WBP_3DPlayerSelectIcon");

	Params::UWBP_3DPlayerSelectIcon_C_ExecuteUbergraph_WBP_3DPlayerSelectIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


