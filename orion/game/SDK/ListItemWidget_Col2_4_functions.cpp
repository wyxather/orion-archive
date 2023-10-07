#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemWidget_Col2_4.ListItemWidget_Col2_4_C
// (None)

class UClass* UListItemWidget_Col2_4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemWidget_Col2_4_C");

	return Clss;
}


// ListItemWidget_Col2_4_C ListItemWidget_Col2_4.Default__ListItemWidget_Col2_4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemWidget_Col2_4_C* UListItemWidget_Col2_4_C::GetDefaultObj()
{
	static class UListItemWidget_Col2_4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemWidget_Col2_4_C*>(UListItemWidget_Col2_4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemWidget_Col2_4.ListItemWidget_Col2_4_C.InitInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col2_4_C::InitInstance(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_4_C", "InitInstance");

	Params::UListItemWidget_Col2_4_C_InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Col2_4.ListItemWidget_Col2_4_C.Setup
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMJListWidgetItemData       ItemmData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ELIST_NUM_UNIT_TYPE     UnitType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col2_4_C::Setup(struct FMJListWidgetItemData& ItemmData, enum class ELIST_NUM_UNIT_TYPE UnitType, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_4_C", "Setup");

	Params::UListItemWidget_Col2_4_C_Setup_Params Parms{};

	Parms.ItemmData = ItemmData;
	Parms.UnitType = UnitType;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Col2_4.ListItemWidget_Col2_4_C.PreSetupProcess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMJListWidgetItemData       ListWidgetItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ELIST_NUM_UNIT_TYPE     UnitType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Col2_4_C::PreSetupProcess(struct FMJListWidgetItemData& ListWidgetItemData, enum class ELIST_NUM_UNIT_TYPE UnitType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_4_C", "PreSetupProcess");

	Params::UListItemWidget_Col2_4_C_PreSetupProcess_Params Parms{};

	Parms.ListWidgetItemData = ListWidgetItemData;
	Parms.UnitType = UnitType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col2_4.ListItemWidget_Col2_4_C.SetupReference
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col2_4_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col2_4_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}

}


