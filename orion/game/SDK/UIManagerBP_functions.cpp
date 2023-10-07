#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass UIManagerBP.UIManagerBP_C
// (Actor)

class UClass* AUIManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIManagerBP_C");

	return Clss;
}


// UIManagerBP_C UIManagerBP.Default__UIManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUIManagerBP_C* AUIManagerBP_C::GetDefaultObj()
{
	static class AUIManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUIManagerBP_C*>(AUIManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIManagerBP.UIManagerBP_C.IsWidgetRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsRunning                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EKSUIKind               Kind                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUIManagerBP_C::IsWidgetRunning(bool* IsRunning, enum class EKSUIKind Kind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIManagerBP_C", "IsWidgetRunning");

	Params::AUIManagerBP_C_IsWidgetRunning_Params Parms{};

	Parms.Kind = Kind;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRunning != nullptr)
		*IsRunning = Parms.IsRunning;

}


// Function UIManagerBP.UIManagerBP_C.CloseMenuCommon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUIKind               Kind                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AUIManagerBP_C::CloseMenuCommon(enum class EKSUIKind Kind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIManagerBP_C", "CloseMenuCommon");

	Params::AUIManagerBP_C_CloseMenuCommon_Params Parms{};

	Parms.Kind = Kind;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIManagerBP.UIManagerBP_C.ForceCloseMenuCommon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUIKind               Kind                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AUIManagerBP_C::ForceCloseMenuCommon(enum class EKSUIKind Kind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIManagerBP_C", "ForceCloseMenuCommon");

	Params::AUIManagerBP_C_ForceCloseMenuCommon_Params Parms{};

	Parms.Kind = Kind;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIManagerBP.UIManagerBP_C.CloseDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OutIsSelected                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              OutFocusIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AUIManagerBP_C::CloseDialog(bool* OutIsSelected, int32* OutFocusIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIManagerBP_C", "CloseDialog");

	Params::AUIManagerBP_C_CloseDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutIsSelected != nullptr)
		*OutIsSelected = Parms.OutIsSelected;

	if (OutFocusIndex != nullptr)
		*OutFocusIndex = Parms.OutFocusIndex;

	return Parms.ReturnValue;

}


// Function UIManagerBP.UIManagerBP_C.OpenDialog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSUICommonDialogParam      InParam                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UKSUserWidgetBase*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UKSUserWidgetBase* AUIManagerBP_C::OpenDialog(struct FKSUICommonDialogParam& InParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIManagerBP_C", "OpenDialog");

	Params::AUIManagerBP_C_OpenDialog_Params Parms{};

	Parms.InParam = InParam;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIManagerBP.UIManagerBP_C.GetPartsWidgetClass
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUIPartsKind          Kind                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UUserWidget>   ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash)

TSoftClassPtr<class UUserWidget> AUIManagerBP_C::GetPartsWidgetClass(enum class EKSUIPartsKind Kind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIManagerBP_C", "GetPartsWidgetClass");

	Params::AUIManagerBP_C_GetPartsWidgetClass_Params Parms{};

	Parms.Kind = Kind;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIManagerBP.UIManagerBP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUIManagerBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIManagerBP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIManagerBP.UIManagerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUIManagerBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIManagerBP_C", "ReceiveTick");

	Params::AUIManagerBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIManagerBP.UIManagerBP_C.RefreshWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUIManagerBP_C::RefreshWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIManagerBP_C", "RefreshWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIManagerBP.UIManagerBP_C.ExecuteUbergraph_UIManagerBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUIManagerBP_C::ExecuteUbergraph_UIManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIManagerBP_C", "ExecuteUbergraph_UIManagerBP");

	Params::AUIManagerBP_C_ExecuteUbergraph_UIManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


