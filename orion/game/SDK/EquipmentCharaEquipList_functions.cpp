#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass EquipmentCharaEquipList.EquipmentCharaEquipList_C
// (None)

class UClass* UEquipmentCharaEquipList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EquipmentCharaEquipList_C");

	return Clss;
}


// EquipmentCharaEquipList_C EquipmentCharaEquipList.Default__EquipmentCharaEquipList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEquipmentCharaEquipList_C* UEquipmentCharaEquipList_C::GetDefaultObj()
{
	static class UEquipmentCharaEquipList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEquipmentCharaEquipList_C*>(UEquipmentCharaEquipList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.SetEmblem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentCharaEquipList_C::SetEmblem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "SetEmblem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.SetPlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentCharaEquipList_C::SetPlayerName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "SetPlayerName");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.GetActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Active                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentCharaEquipList_C::GetActive(bool* Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "GetActive");

	Params::UEquipmentCharaEquipList_C_GetActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentCharaEquipList_C::SetActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "SetActive");

	Params::UEquipmentCharaEquipList_C_SetActive_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.UpdateHelpText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentCharaEquipList_C::UpdateHelpText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "UpdateHelpText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentCharaEquipList_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               All                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentCharaEquipList_C::Refresh(bool All)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "Refresh");

	Params::UEquipmentCharaEquipList_C_Refresh_Params Parms{};

	Parms.All = All;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.FixChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentCharaEquipList_C::FixChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "FixChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.SetEndIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentCharaEquipList_C::SetEndIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "SetEndIndex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.SetStartIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentCharaEquipList_C::SetStartIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "SetStartIndex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.Can Select Item
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanSelect                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentCharaEquipList_C::Can_Select_Item(int32 Index, bool* CanSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "Can Select Item");

	Params::UEquipmentCharaEquipList_C_Can_Select_Item_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (CanSelect != nullptr)
		*CanSelect = Parms.CanSelect;

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.SetCurrentIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentCharaEquipList_C::SetCurrentIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "SetCurrentIndex");

	Params::UEquipmentCharaEquipList_C_SetCurrentIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.UpdateSelectIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               End                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentCharaEquipList_C::UpdateSelectIndex(bool IsUp, bool* End)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "UpdateSelectIndex");

	Params::UEquipmentCharaEquipList_C_UpdateSelectIndex_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

	if (End != nullptr)
		*End = Parms.End;

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.PlayOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentCharaEquipList_C::PlayOutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "PlayOutFocus");

	Params::UEquipmentCharaEquipList_C_PlayOutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.PlayFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentCharaEquipList_C::PlayFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "PlayFocus");

	Params::UEquipmentCharaEquipList_C_PlayFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.CanMoveCursor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CanMove                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentCharaEquipList_C::CanMoveCursor(bool IsUp, bool* CanMove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "CanMoveCursor");

	Params::UEquipmentCharaEquipList_C_CanMoveCursor_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

	if (CanMove != nullptr)
		*CanMove = Parms.CanMove;

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ChangeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentCharaEquipList_C::CursorDown(bool ChangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "CursorDown");

	Params::UEquipmentCharaEquipList_C_CursorDown_Params Parms{};

	Parms.ChangeIndex = ChangeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ChangeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentCharaEquipList_C::CursorUp(bool ChangeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "CursorUp");

	Params::UEquipmentCharaEquipList_C_CursorUp_Params Parms{};

	Parms.ChangeIndex = ChangeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.GetCurrentIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              SelectIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentCharaEquipList_C::GetCurrentIndex(int32* SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "GetCurrentIndex");

	Params::UEquipmentCharaEquipList_C_GetCurrentIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectIndex != nullptr)
		*SelectIndex = Parms.SelectIndex;

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.Create List Item Data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMJListWidgetItemData       ListData                                                         (Parm, OutParm)

void UEquipmentCharaEquipList_C::Create_List_Item_Data(int32 Index, class FName ItemLabel, struct FMJListWidgetItemData* ListData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "Create List Item Data");

	Params::UEquipmentCharaEquipList_C_Create_List_Item_Data_Params Parms{};

	Parms.Index = Index;
	Parms.ItemLabel = ItemLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (ListData != nullptr)
		*ListData = std::move(Parms.ListData);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.Set Equip Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentCharaEquipList_C::Set_Equip_Info()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "Set Equip Info");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentCharaEquipList_C::Setup(int32 CharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "Setup");

	Params::UEquipmentCharaEquipList_C_Setup_Params Parms{};

	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.SetPlayerFlipbook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentCharaEquipList_C::SetPlayerFlipbook()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "SetPlayerFlipbook");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEquipmentCharaEquipList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharaEquipList.EquipmentCharaEquipList_C.ExecuteUbergraph_EquipmentCharaEquipList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentCharaEquipList_C::ExecuteUbergraph_EquipmentCharaEquipList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentCharaEquipList_C", "ExecuteUbergraph_EquipmentCharaEquipList");

	Params::UEquipmentCharaEquipList_C_ExecuteUbergraph_EquipmentCharaEquipList_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


