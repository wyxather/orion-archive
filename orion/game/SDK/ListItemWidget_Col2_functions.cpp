#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemWidget_Col2.ListItemWidget_Col2_C
// (None)

class UClass* UListItemWidget_Col2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemWidget_Col2_C");

	return Clss;
}


// ListItemWidget_Col2_C ListItemWidget_Col2.Default__ListItemWidget_Col2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemWidget_Col2_C* UListItemWidget_Col2_C::GetDefaultObj()
{
	static class UListItemWidget_Col2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemWidget_Col2_C*>(UListItemWidget_Col2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemWidget_Col2.ListItemWidget_Col2_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col2_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col2.ListItemWidget_Col2_C.ApplyShining
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col2_C::ApplyShining(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_C", "ApplyShining");

	Params::UListItemWidget_Col2_C_ApplyShining_Params Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col2.ListItemWidget_Col2_C.InitInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col2_C::InitInstance(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_C", "InitInstance");

	Params::UListItemWidget_Col2_C_InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Col2.ListItemWidget_Col2_C.Setup
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMJListWidgetItemData       ItemmData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ELIST_NUM_UNIT_TYPE     UnitType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col2_C::Setup(struct FMJListWidgetItemData& ItemmData, enum class ELIST_NUM_UNIT_TYPE UnitType, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_C", "Setup");

	Params::UListItemWidget_Col2_C_Setup_Params Parms{};

	Parms.ItemmData = ItemmData;
	Parms.UnitType = UnitType;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Col2.ListItemWidget_Col2_C.Pre Setup Process
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMJListWidgetItemData       ListWidgetItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListItemWidget_Col2_C::Pre_Setup_Process(struct FMJListWidgetItemData& ListWidgetItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_C", "Pre Setup Process");

	Params::UListItemWidget_Col2_C_Pre_Setup_Process_Params Parms{};

	Parms.ListWidgetItemData = ListWidgetItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col2.ListItemWidget_Col2_C.SetupReference
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col2_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col2.ListItemWidget_Col2_C.OutFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col2_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_C", "OutFocus");

	Params::UListItemWidget_Col2_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col2.ListItemWidget_Col2_C.SetShining
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               ShiningFlag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col2_C::SetShining(bool ShiningFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_C", "SetShining");

	Params::UListItemWidget_Col2_C_SetShining_Params Parms{};

	Parms.ShiningFlag = ShiningFlag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col2.ListItemWidget_Col2_C.Focus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col2_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_C", "Focus");

	Params::UListItemWidget_Col2_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col2.ListItemWidget_Col2_C.ExecuteUbergraph_ListItemWidget_Col2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Col2_C::ExecuteUbergraph_ListItemWidget_Col2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_C", "ExecuteUbergraph_ListItemWidget_Col2");

	Params::UListItemWidget_Col2_C_ExecuteUbergraph_ListItemWidget_Col2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


