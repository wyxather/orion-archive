#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass GuildLicenseMissionWidget.GuildLicenseMissionWidget_C
// (None)

class UClass* UGuildLicenseMissionWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GuildLicenseMissionWidget_C");

	return Clss;
}


// GuildLicenseMissionWidget_C GuildLicenseMissionWidget.Default__GuildLicenseMissionWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGuildLicenseMissionWidget_C* UGuildLicenseMissionWidget_C::GetDefaultObj()
{
	static class UGuildLicenseMissionWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGuildLicenseMissionWidget_C*>(UGuildLicenseMissionWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.GetAcquisitionJobAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              JobID                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildLicenseMissionWidget_C::GetAcquisitionJobAbility(int32* JobID, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "GetAcquisitionJobAbility");

	Params::UGuildLicenseMissionWidget_C_GetAcquisitionJobAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JobID != nullptr)
		*JobID = Parms.JobID;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.GetCurrentIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildLicenseMissionWidget_C::GetCurrentIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "GetCurrentIndex");

	Params::UGuildLicenseMissionWidget_C_GetCurrentIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildLicenseMissionWidget_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.Cancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildLicenseMissionWidget_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildLicenseMissionWidget_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.IsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGuildLicenseMissionWidget_C::IsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "IsActive");

	Params::UGuildLicenseMissionWidget_C_IsActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildLicenseMissionWidget_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "UpdateText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.UpdateSelectIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildLicenseMissionWidget_C::UpdateSelectIndex(bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "UpdateSelectIndex");

	Params::UGuildLicenseMissionWidget_C_UpdateSelectIndex_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.CursorUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildLicenseMissionWidget_C::CursorUpdate(bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "CursorUpdate");

	Params::UGuildLicenseMissionWidget_C_CursorUpdate_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildLicenseMissionWidget_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildLicenseMissionWidget_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildLicenseMissionWidget_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.PlayOpenAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildLicenseMissionWidget_C::PlayOpenAnim(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "PlayOpenAnim");

	Params::UGuildLicenseMissionWidget_C_PlayOpenAnim_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        GuildLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReOpen                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildLicenseMissionWidget_C::Setup(class FName GuildLabel, bool ReOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "Setup");

	Params::UGuildLicenseMissionWidget_C_Setup_Params Parms{};

	Parms.GuildLabel = GuildLabel;
	Parms.ReOpen = ReOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.MenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildLicenseMissionWidget_C::MenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "MenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.MenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildLicenseMissionWidget_C::MenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "MenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildLicenseMissionWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildLicenseMissionWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGuildLicenseMissionWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildLicenseMissionWidget.GuildLicenseMissionWidget_C.ExecuteUbergraph_GuildLicenseMissionWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildLicenseMissionWidget_C::ExecuteUbergraph_GuildLicenseMissionWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildLicenseMissionWidget_C", "ExecuteUbergraph_GuildLicenseMissionWidget");

	Params::UGuildLicenseMissionWidget_C_ExecuteUbergraph_GuildLicenseMissionWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


