#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BarMenuPlayerSelect.BarMenuPlayerSelect_C
// (None)

class UClass* UBarMenuPlayerSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BarMenuPlayerSelect_C");

	return Clss;
}


// BarMenuPlayerSelect_C BarMenuPlayerSelect.Default__BarMenuPlayerSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBarMenuPlayerSelect_C* UBarMenuPlayerSelect_C::GetDefaultObj()
{
	static class UBarMenuPlayerSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBarMenuPlayerSelect_C*>(UBarMenuPlayerSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.IsChangeFlipbook
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuPlayerSelect_C::IsChangeFlipbook(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPlayerSelect_C", "IsChangeFlipbook");

	Params::UBarMenuPlayerSelect_C_IsChangeFlipbook_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.SetPrologue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuPlayerSelect_C::SetPrologue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPlayerSelect_C", "SetPrologue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuPlayerSelect_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPlayerSelect_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.Cancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuPlayerSelect_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPlayerSelect_C", "Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.SetupByStoryData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBarMenuStoryItem           StoryData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBarMenuPlayerSelect_C::SetupByStoryData(struct FBarMenuStoryItem& StoryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPlayerSelect_C", "SetupByStoryData");

	Params::UBarMenuPlayerSelect_C_SetupByStoryData_Params Parms{};

	Parms.StoryData = StoryData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.SetGrayOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGrayOut                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuPlayerSelect_C::SetGrayOut(bool IsGrayOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPlayerSelect_C", "SetGrayOut");

	Params::UBarMenuPlayerSelect_C_SetGrayOut_Params Parms{};

	Parms.IsGrayOut = IsGrayOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.SetIsCharacterHide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuPlayerSelect_C::SetIsCharacterHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPlayerSelect_C", "SetIsCharacterHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.SetIsExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuPlayerSelect_C::SetIsExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPlayerSelect_C", "SetIsExit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuPlayerSelect_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPlayerSelect_C", "Focus");

	Params::UBarMenuPlayerSelect_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuPlayerSelect_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPlayerSelect_C", "OutFocus");

	Params::UBarMenuPlayerSelect_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuPlayerSelect_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPlayerSelect_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuPlayerSelect_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPlayerSelect_C", "Tick");

	Params::UBarMenuPlayerSelect_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBarMenuPlayerSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPlayerSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuPlayerSelect.BarMenuPlayerSelect_C.ExecuteUbergraph_BarMenuPlayerSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuPlayerSelect_C::ExecuteUbergraph_BarMenuPlayerSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuPlayerSelect_C", "ExecuteUbergraph_BarMenuPlayerSelect");

	Params::UBarMenuPlayerSelect_C_ExecuteUbergraph_BarMenuPlayerSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


