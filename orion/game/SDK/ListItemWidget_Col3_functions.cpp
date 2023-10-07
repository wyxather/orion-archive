#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListItemWidget_Col3.ListItemWidget_Col3_C
// (None)

class UClass* UListItemWidget_Col3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItemWidget_Col3_C");

	return Clss;
}


// ListItemWidget_Col3_C ListItemWidget_Col3.Default__ListItemWidget_Col3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItemWidget_Col3_C* UListItemWidget_Col3_C::GetDefaultObj()
{
	static class UListItemWidget_Col3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItemWidget_Col3_C*>(UListItemWidget_Col3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListItemWidget_Col3.ListItemWidget_Col3_C.SetTextColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 Color                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListItemWidget_Col3_C::SetTextColor(struct FSlateColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col3_C", "SetTextColor");

	Params::UListItemWidget_Col3_C_SetTextColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col3.ListItemWidget_Col3_C.SetItemData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  IconTex                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  IconTex0                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Value0                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Value1                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Detail                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ELIST_ITEM_STATUS       Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Col3_C::SetItemData(class UTexture2D* IconTex, class UTexture2D* IconTex0, class FText& Name, class FText& Value0, class FText& Value1, class FText& Detail, enum class ELIST_ITEM_STATUS Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col3_C", "SetItemData");

	Params::UListItemWidget_Col3_C_SetItemData_Params Parms{};

	Parms.IconTex = IconTex;
	Parms.IconTex0 = IconTex0;
	Parms.Name = Name;
	Parms.Value0 = Value0;
	Parms.Value1 = Value1;
	Parms.Detail = Detail;
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListItemWidget_Col3.ListItemWidget_Col3_C.Setup
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMJListWidgetItemData       ItemmData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ELIST_NUM_UNIT_TYPE     UnitType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col3_C::Setup(struct FMJListWidgetItemData& ItemmData, enum class ELIST_NUM_UNIT_TYPE UnitType, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col3_C", "Setup");

	Params::UListItemWidget_Col3_C_Setup_Params Parms{};

	Parms.ItemmData = ItemmData;
	Parms.UnitType = UnitType;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Col3.ListItemWidget_Col3_C.InitInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListItemWidget_Col3_C::InitInstance(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col3_C", "InitInstance");

	Params::UListItemWidget_Col3_C_InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ListItemWidget_Col3.ListItemWidget_Col3_C.SetupReference
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col3_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col3_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col3.ListItemWidget_Col3_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListItemWidget_Col3_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col3_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListItemWidget_Col3.ListItemWidget_Col3_C.ExecuteUbergraph_ListItemWidget_Col3
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListItemWidget_Col3_C::ExecuteUbergraph_ListItemWidget_Col3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListItemWidget_Col3_C", "ExecuteUbergraph_ListItemWidget_Col3");

	Params::UListItemWidget_Col3_C_ExecuteUbergraph_ListItemWidget_Col3_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


