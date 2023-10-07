#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass FieldCommandWidgetMonster.FieldCommandWidgetMonster_C
// (None)

class UClass* UFieldCommandWidgetMonster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldCommandWidgetMonster_C");

	return Clss;
}


// FieldCommandWidgetMonster_C FieldCommandWidgetMonster.Default__FieldCommandWidgetMonster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFieldCommandWidgetMonster_C* UFieldCommandWidgetMonster_C::GetDefaultObj()
{
	static class UFieldCommandWidgetMonster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldCommandWidgetMonster_C*>(UFieldCommandWidgetMonster_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.MonsterReleaseCallback_OnTameCancel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::MonsterReleaseCallback_OnTameCancel(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "MonsterReleaseCallback_OnTameCancel");

	Params::UFieldCommandWidgetMonster_C_MonsterReleaseCallback_OnTameCancel_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ProcessMonsterCallback_OnTameCancel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::ProcessMonsterCallback_OnTameCancel(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "ProcessMonsterCallback_OnTameCancel");

	Params::UFieldCommandWidgetMonster_C_ProcessMonsterCallback_OnTameCancel_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OpenProcessItemConfirmDialog_OnTameCancel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OpenProcessItemConfirmDialog_OnTameCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OpenProcessItemConfirmDialog_OnTameCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.MonsterProcessCallback_OnTameCancel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::MonsterProcessCallback_OnTameCancel(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "MonsterProcessCallback_OnTameCancel");

	Params::UFieldCommandWidgetMonster_C_MonsterProcessCallback_OnTameCancel_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OpenTameCancelDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInvadeData                 InvadeData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UFieldCommandWidgetMonster_C::OpenTameCancelDialog(const struct FInvadeData& InvadeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OpenTameCancelDialog");

	Params::UFieldCommandWidgetMonster_C_OpenTameCancelDialog_Params Parms{};

	Parms.InvadeData = InvadeData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OpenProcessConfirmDialog
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInvadeData                 InvadeData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsNewMonsterInbattle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandWidgetMonster_C::OpenProcessConfirmDialog(struct FInvadeData& InvadeData, bool IsNewMonsterInbattle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OpenProcessConfirmDialog");

	Params::UFieldCommandWidgetMonster_C_OpenProcessConfirmDialog_Params Parms{};

	Parms.InvadeData = InvadeData;
	Parms.IsNewMonsterInbattle = IsNewMonsterInbattle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.PlayProcessEnemyEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::PlayProcessEnemyEvent(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "PlayProcessEnemyEvent");

	Params::UFieldCommandWidgetMonster_C_PlayProcessEnemyEvent_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnCloseFinish
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetStartableProcessEnemyEventLabel
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        EventLabel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::GetStartableProcessEnemyEventLabel(class FName* EventLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "GetStartableProcessEnemyEventLabel");

	Params::UFieldCommandWidgetMonster_C_GetStartableProcessEnemyEventLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EventLabel != nullptr)
		*EventLabel = Parms.EventLabel;

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.RequestLoadMonsterResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::RequestLoadMonsterResources()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "RequestLoadMonsterResources");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.RefreshMonsterList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::RefreshMonsterList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "RefreshMonsterList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetSelectedMonsterProcessItemData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ItemName                                                         (Parm, OutParm)
// int32                              ProcessNum                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::GetSelectedMonsterProcessItemData(class FName* ItemLabel, class FText* ItemName, int32* ProcessNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "GetSelectedMonsterProcessItemData");

	Params::UFieldCommandWidgetMonster_C_GetSelectedMonsterProcessItemData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemLabel != nullptr)
		*ItemLabel = Parms.ItemLabel;

	if (ItemName != nullptr)
		*ItemName = Parms.ItemName;

	if (ProcessNum != nullptr)
		*ProcessNum = Parms.ProcessNum;

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetMonsterProcessItemData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInvadeData                 InvadeData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        ItemLabel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ItemName                                                         (Parm, OutParm)
// int32                              ProcessNum                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::GetMonsterProcessItemData(struct FInvadeData& InvadeData, class FName* ItemLabel, class FText* ItemName, int32* ProcessNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "GetMonsterProcessItemData");

	Params::UFieldCommandWidgetMonster_C_GetMonsterProcessItemData_Params Parms{};

	Parms.InvadeData = InvadeData;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLabel != nullptr)
		*ItemLabel = Parms.ItemLabel;

	if (ItemName != nullptr)
		*ItemName = Parms.ItemName;

	if (ProcessNum != nullptr)
		*ProcessNum = Parms.ProcessNum;

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OpenProcessItemDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OpenProcessItemDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OpenProcessItemDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetProcessItemData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInvadeData                 Out_Row                                                          (Parm, OutParm)

void UFieldCommandWidgetMonster_C::GetProcessItemData(struct FInvadeData* Out_Row)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "GetProcessItemData");

	Params::UFieldCommandWidgetMonster_C_GetProcessItemData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Out_Row != nullptr)
		*Out_Row = std::move(Parms.Out_Row);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ReleaseSelectedMonster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::ReleaseSelectedMonster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "ReleaseSelectedMonster");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetProcessItemID
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ProcessedItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::GetProcessItemID(class FName* ProcessedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "GetProcessItemID");

	Params::UFieldCommandWidgetMonster_C_GetProcessItemID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ProcessedItem != nullptr)
		*ProcessedItem = Parms.ProcessedItem;

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetRemainCallCount
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CallCount                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::GetRemainCallCount(int32* CallCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "GetRemainCallCount");

	Params::UFieldCommandWidgetMonster_C_GetRemainCallCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallCount != nullptr)
		*CallCount = Parms.CallCount;

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ExecProcessItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::ExecProcessItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "ExecProcessItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.IsEnableProcessItem
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ListItemIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandWidgetMonster_C::IsEnableProcessItem(int32 ListItemIndex, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "IsEnableProcessItem");

	Params::UFieldCommandWidgetMonster_C_IsEnableProcessItem_Params Parms{};

	Parms.ListItemIndex = ListItemIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.IsEnableProcessItemByInvadeData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInvadeData                 InvadeData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandWidgetMonster_C::IsEnableProcessItemByInvadeData(struct FInvadeData& InvadeData, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "IsEnableProcessItemByInvadeData");

	Params::UFieldCommandWidgetMonster_C_IsEnableProcessItemByInvadeData_Params Parms{};

	Parms.InvadeData = InvadeData;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ProcessMonsterCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::ProcessMonsterCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "ProcessMonsterCallback");

	Params::UFieldCommandWidgetMonster_C_ProcessMonsterCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetReleaseMonsterList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                      ReleaseMonsterList                                               (Parm, OutParm)

void UFieldCommandWidgetMonster_C::GetReleaseMonsterList(TArray<int32>* ReleaseMonsterList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "GetReleaseMonsterList");

	Params::UFieldCommandWidgetMonster_C_GetReleaseMonsterList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReleaseMonsterList != nullptr)
		*ReleaseMonsterList = std::move(Parms.ReleaseMonsterList);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.CloseMonsterReleaseDialog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetMonster_C::CloseMonsterReleaseDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "CloseMonsterReleaseDialog");

	Params::UFieldCommandWidgetMonster_C_CloseMonsterReleaseDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OpenMonsterReleaseDialogInBattle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMonsterListData>    ShowMonsterList                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetMonster_C::OpenMonsterReleaseDialogInBattle(TArray<struct FMonsterListData>& ShowMonsterList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OpenMonsterReleaseDialogInBattle");

	Params::UFieldCommandWidgetMonster_C_OpenMonsterReleaseDialogInBattle_Params Parms{};

	Parms.ShowMonsterList = ShowMonsterList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OpenMonsterReleaseDialog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMonsterListData>    ShowMonsterList                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetMonster_C::OpenMonsterReleaseDialog(TArray<struct FMonsterListData>& ShowMonsterList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OpenMonsterReleaseDialog");

	Params::UFieldCommandWidgetMonster_C_OpenMonsterReleaseDialog_Params Parms{};

	Parms.ShowMonsterList = ShowMonsterList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.GetDialogInput
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UFieldCommandWidgetMonster_C::GetDialogInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "GetDialogInput");

	Params::UFieldCommandWidgetMonster_C_GetDialogInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.MonsterReleaseCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::MonsterReleaseCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "MonsterReleaseCallback");

	Params::UFieldCommandWidgetMonster_C_MonsterReleaseCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetMonster_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "SetReference");

	Params::UFieldCommandWidgetMonster_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ListBind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedCursor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::ListBind(int32 SelectedCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "ListBind");

	Params::UFieldCommandWidgetMonster_C_ListBind_Params Parms{};

	Parms.SelectedCursor = SelectedCursor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetMonster_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "IsRunning");

	Params::UFieldCommandWidgetMonster_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.CloseAnimation_old
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::CloseAnimation_old()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "CloseAnimation_old");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.InitWidgetParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::InitWidgetParts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "InitWidgetParts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.CloseListCommon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::CloseListCommon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "CloseListCommon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.CancelList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::CancelList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "CancelList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.CloseMonsterStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::CloseMonsterStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "CloseMonsterStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ListSelectEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdx                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::ListSelectEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "ListSelectEvent");

	Params::UFieldCommandWidgetMonster_C_ListSelectEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdx = ItemIdx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.CloseOpponent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::CloseOpponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "CloseOpponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OpenReleaseDialog
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMonsterListData>    ShowMonsterList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFieldCommandWidgetMonster_C::OpenReleaseDialog(TArray<struct FMonsterListData>& ShowMonsterList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OpenReleaseDialog");

	Params::UFieldCommandWidgetMonster_C_OpenReleaseDialog_Params Parms{};

	Parms.ShowMonsterList = ShowMonsterList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.MakeMonsterListData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMonsterListData>    ShowMonsterList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFieldCommandWidgetMonster_C::MakeMonsterListData(TArray<struct FMonsterListData>& ShowMonsterList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "MakeMonsterListData");

	Params::UFieldCommandWidgetMonster_C_MakeMonsterListData_Params Parms{};

	Parms.ShowMonsterList = ShowMonsterList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnRightAxisX");

	Params::UFieldCommandWidgetMonster_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnRightAxisY");

	Params::UFieldCommandWidgetMonster_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnLeftAxisX");

	Params::UFieldCommandWidgetMonster_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnLeftAxisY");

	Params::UFieldCommandWidgetMonster_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnGamePadAxisX");

	Params::UFieldCommandWidgetMonster_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnGamePadAxisY");

	Params::UFieldCommandWidgetMonster_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandWidgetMonster_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnListPaging");

	Params::UFieldCommandWidgetMonster_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "WorldMapSlowCursorX");

	Params::UFieldCommandWidgetMonster_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "WorldMapSlowCursorY");

	Params::UFieldCommandWidgetMonster_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "HelpScrollAxis");

	Params::UFieldCommandWidgetMonster_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "Tick");

	Params::UFieldCommandWidgetMonster_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetMonster_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetMonster.FieldCommandWidgetMonster_C.ExecuteUbergraph_FieldCommandWidgetMonster
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetMonster_C::ExecuteUbergraph_FieldCommandWidgetMonster(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetMonster_C", "ExecuteUbergraph_FieldCommandWidgetMonster");

	Params::UFieldCommandWidgetMonster_C_ExecuteUbergraph_FieldCommandWidgetMonster_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


