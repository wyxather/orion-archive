#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BuffIcon.BuffIcon_C
// (None)

class UClass* UBuffIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuffIcon_C");

	return Clss;
}


// BuffIcon_C BuffIcon.Default__BuffIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuffIcon_C* UBuffIcon_C::GetDefaultObj()
{
	static class UBuffIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuffIcon_C*>(UBuffIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuffIcon.BuffIcon_C.PlayDIseaseIconChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  ChangeIcon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffIcon_C::PlayDIseaseIconChange(class UTexture2D* ChangeIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BuffIcon_C", "PlayDIseaseIconChange");

	Params::UBuffIcon_C_PlayDIseaseIconChange_Params Parms{};

	Parms.ChangeIcon = ChangeIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffIcon.BuffIcon_C.PlayIconOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffIcon_C::PlayIconOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BuffIcon_C", "PlayIconOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffIcon.BuffIcon_C.PlayIconIN
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffIcon_C::PlayIconIN(bool Instant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BuffIcon_C", "PlayIconIN");

	Params::UBuffIcon_C_PlayIconIN_Params Parms{};

	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffIcon.BuffIcon_C.SetDiseaseIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  IconTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsTurn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffIcon_C::SetDiseaseIcon(class UTexture2D* IconTexture, int32 Count, bool IsTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BuffIcon_C", "SetDiseaseIcon");

	Params::UBuffIcon_C_SetDiseaseIcon_Params Parms{};

	Parms.IconTexture = IconTexture;
	Parms.Count = Count;
	Parms.IsTurn = IsTurn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffIcon.BuffIcon_C.DiseaseChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffIcon_C::DiseaseChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BuffIcon_C", "DiseaseChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffIcon.BuffIcon_C.ExecuteUbergraph_BuffIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffIcon_C::ExecuteUbergraph_BuffIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BuffIcon_C", "ExecuteUbergraph_BuffIcon");

	Params::UBuffIcon_C_ExecuteUbergraph_BuffIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


