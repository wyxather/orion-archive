#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemWidget_Col1_4.ListItemWidget_Col1_4_C
// (None)

class UClass* UListItemWidget_Col1_4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemWidget_Col1_4_C");

	return Clss;
}


// ListItemWidget_Col1_4_C ListItemWidget_Col1_4.Default__ListItemWidget_Col1_4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemWidget_Col1_4_C* UListItemWidget_Col1_4_C::GetDefaultObj()
{
	static class UListItemWidget_Col1_4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemWidget_Col1_4_C*>(UListItemWidget_Col1_4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemWidget_Col1_4.ListItemWidget_Col1_4_C.ResetAppearance_Disable
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col1_4_C::ResetAppearance_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_4_C", "ResetAppearance_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col1_4.ListItemWidget_Col1_4_C.ResetAppearance_Enable
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col1_4_C::ResetAppearance_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_4_C", "ResetAppearance_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col1_4.ListItemWidget_Col1_4_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col1_4_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_4_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col1_4.ListItemWidget_Col1_4_C.GetTextOffset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   ViewportPosition                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Col1_4_C::GetTextOffset(struct FVector2D* ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_4_C", "GetTextOffset");

	Params::UListItemWidget_Col1_4_C_GetTextOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ViewportPosition != nullptr)
		*ViewportPosition = std::move(Parms.ViewportPosition);

}


// Function ListItemWidget_Col1_4.ListItemWidget_Col1_4_C.InitInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col1_4_C::InitInstance(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_4_C", "InitInstance");

	Params::UListItemWidget_Col1_4_C_InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Col1_4.ListItemWidget_Col1_4_C.Setup
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMJListWidgetItemData       ItemmData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ELIST_NUM_UNIT_TYPE     UnitType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col1_4_C::Setup(struct FMJListWidgetItemData& ItemmData, enum class ELIST_NUM_UNIT_TYPE UnitType, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_4_C", "Setup");

	Params::UListItemWidget_Col1_4_C_Setup_Params Parms{};

	Parms.ItemmData = ItemmData;
	Parms.UnitType = UnitType;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Col1_4.ListItemWidget_Col1_4_C.PreSetupProcess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMJListWidgetItemData       ListWidgetItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListItemWidget_Col1_4_C::PreSetupProcess(struct FMJListWidgetItemData& ListWidgetItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_4_C", "PreSetupProcess");

	Params::UListItemWidget_Col1_4_C_PreSetupProcess_Params Parms{};

	Parms.ListWidgetItemData = ListWidgetItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col1_4.ListItemWidget_Col1_4_C.SetupReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col1_4_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col1_4_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}

}


