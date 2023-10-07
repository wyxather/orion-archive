#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BP_PartyChatNotification.BP_PartyChatNotification_C
// (None)

class UClass* UBP_PartyChatNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PartyChatNotification_C");

	return Clss;
}


// BP_PartyChatNotification_C BP_PartyChatNotification.Default__BP_PartyChatNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PartyChatNotification_C* UBP_PartyChatNotification_C::GetDefaultObj()
{
	static class UBP_PartyChatNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PartyChatNotification_C*>(UBP_PartyChatNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PartyChatNotification.BP_PartyChatNotification_C.OnResetHiddenFlag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PartyChatNotification_C::OnResetHiddenFlag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PartyChatNotification_C", "OnResetHiddenFlag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartyChatNotification.BP_PartyChatNotification_C.HideTemporaryInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWIDGET_TEMPORARY_HIDE_USERHideUser                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyChatNotification_C::HideTemporaryInternal(bool IsHidden, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PartyChatNotification_C", "HideTemporaryInternal");

	Params::UBP_PartyChatNotification_C_HideTemporaryInternal_Params Parms{};

	Parms.IsHidden = IsHidden;
	Parms.HideUser = HideUser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyChatNotification.BP_PartyChatNotification_C.CanOpen
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_PartyChatNotification_C::CanOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PartyChatNotification_C", "CanOpen");

	Params::UBP_PartyChatNotification_C_CanOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PartyChatNotification.BP_PartyChatNotification_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyChatNotification_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PartyChatNotification_C", "Tick");

	Params::UBP_PartyChatNotification_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyChatNotification.BP_PartyChatNotification_C.SetIsOpening
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOpening                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PartyChatNotification_C::SetIsOpening(bool IsOpening)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PartyChatNotification_C", "SetIsOpening");

	Params::UBP_PartyChatNotification_C_SetIsOpening_Params Parms{};

	Parms.IsOpening = IsOpening;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyChatNotification.BP_PartyChatNotification_C.UpdateText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PartyChatNotification_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PartyChatNotification_C", "UpdateText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartyChatNotification.BP_PartyChatNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_PartyChatNotification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PartyChatNotification_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartyChatNotification.BP_PartyChatNotification_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyChatNotification_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PartyChatNotification_C", "ChangeInputMode");

	Params::UBP_PartyChatNotification_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PartyChatNotification.BP_PartyChatNotification_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PartyChatNotification_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PartyChatNotification_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PartyChatNotification.BP_PartyChatNotification_C.ExecuteUbergraph_BP_PartyChatNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyChatNotification_C::ExecuteUbergraph_BP_PartyChatNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_PartyChatNotification_C", "ExecuteUbergraph_BP_PartyChatNotification");

	Params::UBP_PartyChatNotification_C_ExecuteUbergraph_BP_PartyChatNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


