#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemParamWidget.ListItemParamWidget_C
// (None)

class UClass* UListItemParamWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemParamWidget_C");

	return Clss;
}


// ListItemParamWidget_C ListItemParamWidget.Default__ListItemParamWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemParamWidget_C* UListItemParamWidget_C::GetDefaultObj()
{
	static class UListItemParamWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemParamWidget_C*>(UListItemParamWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemParamWidget.ListItemParamWidget_C.ResetBeforeParamColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemParamWidget_C::ResetBeforeParamColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemParamWidget_C", "ResetBeforeParamColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemParamWidget.ListItemParamWidget_C.SetBeforeParamColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListItemParamWidget_C::SetBeforeParamColor(TArray<int32>& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemParamWidget_C", "SetBeforeParamColor");

	Params::UListItemParamWidget_C_SetBeforeParamColor_Params Parms{};

	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemParamWidget.ListItemParamWidget_C.UpdateParamWidgets_ShowSameParams
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       ShowSameParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListItemParamWidget_C::UpdateParamWidgets_ShowSameParams(TArray<bool>& ShowSameParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemParamWidget_C", "UpdateParamWidgets_ShowSameParams");

	Params::UListItemParamWidget_C_UpdateParamWidgets_ShowSameParams_Params Parms{};

	Parms.ShowSameParam = ShowSameParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemParamWidget.ListItemParamWidget_C.SetAfterEquipmentParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      AfterEquipParam                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListItemParamWidget_C::SetAfterEquipmentParam(TArray<int32>& AfterEquipParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemParamWidget_C", "SetAfterEquipmentParam");

	Params::UListItemParamWidget_C_SetAfterEquipmentParam_Params Parms{};

	Parms.AfterEquipParam = AfterEquipParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemParamWidget.ListItemParamWidget_C.SetParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterParam             CharacterParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// TArray<int32>                      CurrentEquipParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListItemParamWidget_C::SetParams(struct FCharacterParam& CharacterParam, TArray<int32>& CurrentEquipParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemParamWidget_C", "SetParams");

	Params::UListItemParamWidget_C_SetParams_Params Parms{};

	Parms.CharacterParam = CharacterParam;
	Parms.CurrentEquipParam = CurrentEquipParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemParamWidget.ListItemParamWidget_C.SetAndUpdateCharacterParam
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterParam             CharacterParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// TArray<int32>                      CurrentEquipParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListItemParamWidget_C::SetAndUpdateCharacterParam(struct FCharacterParam& CharacterParam, TArray<int32>& CurrentEquipParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemParamWidget_C", "SetAndUpdateCharacterParam");

	Params::UListItemParamWidget_C_SetAndUpdateCharacterParam_Params Parms{};

	Parms.CharacterParam = CharacterParam;
	Parms.CurrentEquipParam = CurrentEquipParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemParamWidget.ListItemParamWidget_C.UpdateParamWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemParamWidget_C::UpdateParamWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemParamWidget_C", "UpdateParamWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemParamWidget.ListItemParamWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemParamWidget_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemParamWidget_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemParamWidget.ListItemParamWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UListItemParamWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemParamWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemParamWidget.ListItemParamWidget_C.ExecuteUbergraph_ListItemParamWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemParamWidget_C::ExecuteUbergraph_ListItemParamWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemParamWidget_C", "ExecuteUbergraph_ListItemParamWidget");

	Params::UListItemParamWidget_C_ExecuteUbergraph_ListItemParamWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


