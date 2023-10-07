#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MenuSaveLoad.MenuSaveLoad_C
// (None)

class UClass* UMenuSaveLoad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuSaveLoad_C");

	return Clss;
}


// MenuSaveLoad_C MenuSaveLoad.Default__MenuSaveLoad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuSaveLoad_C* UMenuSaveLoad_C::GetDefaultObj()
{
	static class UMenuSaveLoad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuSaveLoad_C*>(UMenuSaveLoad_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuSaveLoad.MenuSaveLoad_C.GetCursorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoad_C::GetCursorPosition(struct FVector2D* Position, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetCursorPosition");

	Params::UMenuSaveLoad_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function MenuSaveLoad.MenuSaveLoad_C.CursorRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuDecide                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoad_C::CursorRight(bool* MenuDecide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "CursorRight");

	Params::UMenuSaveLoad_C_CursorRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuDecide != nullptr)
		*MenuDecide = Parms.MenuDecide;

}


// Function MenuSaveLoad.MenuSaveLoad_C.CursorLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuCancel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoad_C::CursorLeft(bool* MenuCancel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "CursorLeft");

	Params::UMenuSaveLoad_C_CursorLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuCancel != nullptr)
		*MenuCancel = Parms.MenuCancel;

}


// Function MenuSaveLoad.MenuSaveLoad_C.DecideMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NextState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoad_C::DecideMenu(bool* NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "DecideMenu");

	Params::UMenuSaveLoad_C_DecideMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextState != nullptr)
		*NextState = Parms.NextState;

}


// Function MenuSaveLoad.MenuSaveLoad_C.CancelMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoad_C::CancelMenu(bool* ReturnState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "CancelMenu");

	Params::UMenuSaveLoad_C_CancelMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnState != nullptr)
		*ReturnState = Parms.ReturnState;

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetMenuRelativePos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   RelativePos                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::GetMenuRelativePos(struct FVector2D* RelativePos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetMenuRelativePos");

	Params::UMenuSaveLoad_C_GetMenuRelativePos_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RelativePos != nullptr)
		*RelativePos = std::move(Parms.RelativePos);

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetTargetSystemData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSSaveSystem*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UKSSaveSystem* UMenuSaveLoad_C::GetTargetSystemData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetTargetSystemData");

	Params::UMenuSaveLoad_C_GetTargetSystemData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnLoadedSystemData
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              UserIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKSSaveSystem*               SystemData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::OnLoadedSystemData(const class FString& SlotName, int32 UserIndex, class UKSSaveSystem* SystemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnLoadedSystemData");

	Params::UMenuSaveLoad_C_OnLoadedSystemData_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;
	Parms.SystemData = SystemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnFinishLoadGame
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              UserIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMJSaveData*                 SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::OnFinishLoadGame(const class FString& SlotName, int32 UserIndex, class UMJSaveData* SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnFinishLoadGame");

	Params::UMenuSaveLoad_C_OnFinishLoadGame_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;
	Parms.SaveGame = SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnFinishSaveSystemData
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              UserIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccesss                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoad_C::OnFinishSaveSystemData(const class FString& SlotName, int32 UserIndex, bool IsSuccesss)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnFinishSaveSystemData");

	Params::UMenuSaveLoad_C_OnFinishSaveSystemData_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;
	Parms.IsSuccesss = IsSuccesss;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnFinishSaveGame
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              UserIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccesss                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoad_C::OnFinishSaveGame(const class FString& SlotName, int32 UserIndex, bool IsSuccesss)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnFinishSaveGame");

	Params::UMenuSaveLoad_C_OnFinishSaveGame_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;
	Parms.IsSuccesss = IsSuccesss;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.FocusToSelectedSlot_New
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AnimateScroll                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SetOffset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoad_C::FocusToSelectedSlot_New(bool AnimateScroll, bool IsUp, bool SetOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "FocusToSelectedSlot_New");

	Params::UMenuSaveLoad_C_FocusToSelectedSlot_New_Params Parms{};

	Parms.AnimateScroll = AnimateScroll;
	Parms.IsUp = IsUp;
	Parms.SetOffset = SetOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetSlotCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::GetSlotCount(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetSlotCount");

	Params::UMenuSaveLoad_C_GetSlotCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function MenuSaveLoad.MenuSaveLoad_C.SaveLoadConfimCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::SaveLoadConfimCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "SaveLoadConfimCallback");

	Params::UMenuSaveLoad_C_SaveLoadConfimCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.SaveFinishCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::SaveFinishCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "SaveFinishCallback");

	Params::UMenuSaveLoad_C_SaveFinishCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OpenMenu
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSaveMode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FromDebugMenu                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMenuSaveLoad_C::OpenMenu(bool IsSaveMode, bool FromDebugMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OpenMenu");

	Params::UMenuSaveLoad_C_OpenMenu_Params Parms{};

	Parms.IsSaveMode = IsSaveMode;
	Parms.FromDebugMenu = FromDebugMenu;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetResult
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESAVELOAD_RESULT        Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::GetResult(enum class ESAVELOAD_RESULT* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetResult");

	Params::UMenuSaveLoad_C_GetResult_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetCurrentSelectWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMenuSaveLoadSlot_C*         Slot                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::GetCurrentSelectWidget(class UMenuSaveLoadSlot_C** Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetCurrentSelectWidget");

	Params::UMenuSaveLoad_C_GetCurrentSelectWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Slot != nullptr)
		*Slot = Parms.Slot;

}


// Function MenuSaveLoad.MenuSaveLoad_C.SavingCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::SavingCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "SavingCallback");

	Params::UMenuSaveLoad_C_SavingCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetAllSlotLength
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Length                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::GetAllSlotLength(int32* Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetAllSlotLength");

	Params::UMenuSaveLoad_C_GetAllSlotLength_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Length != nullptr)
		*Length = Parms.Length;

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetAllSlotData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveDataObject*             SlotData                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::GetAllSlotData(int32 Index, class USaveDataObject** SlotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetAllSlotData");

	Params::UMenuSaveLoad_C_GetAllSlotData_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotData != nullptr)
		*SlotData = Parms.SlotData;

}


// Function MenuSaveLoad.MenuSaveLoad_C.AllClearListItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::AllClearListItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "AllClearListItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.Set Slot Name To Cousor Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::Set_Slot_Name_To_Cousor_Index()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "Set Slot Name To Cousor Index");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.Init
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMenuSaveLoad_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "Init");

	Params::UMenuSaveLoad_C_Init_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetSlotdata
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EKSSaveSlotName         SlotNo                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKSSaveSlotData             OutSlotData                                                      (Parm, OutParm)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoad_C::GetSlotdata(enum class EKSSaveSlotName SlotNo, struct FKSSaveSlotData* OutSlotData, bool* IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetSlotdata");

	Params::UMenuSaveLoad_C_GetSlotdata_Params Parms{};

	Parms.SlotNo = SlotNo;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlotData != nullptr)
		*OutSlotData = std::move(Parms.OutSlotData);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function MenuSaveLoad.MenuSaveLoad_C.FocusToSelectedSlot
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AnimateScroll                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SetOffset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoad_C::FocusToSelectedSlot(bool AnimateScroll, bool SetOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "FocusToSelectedSlot");

	Params::UMenuSaveLoad_C_FocusToSelectedSlot_Params Parms{};

	Parms.AnimateScroll = AnimateScroll;
	Parms.SetOffset = SetOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.CreateSlotUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::CreateSlotUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "CreateSlotUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.IsClosingState
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMenuSaveLoad_C::IsClosingState(int32 State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "IsClosingState");

	Params::UMenuSaveLoad_C_IsClosingState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuSaveLoad.MenuSaveLoad_C.InitWidgetParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::InitWidgetParts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "InitWidgetParts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.CanControl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               CanControl                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoad_C::CanControl(bool* CanControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "CanControl");

	Params::UMenuSaveLoad_C_CanControl_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanControl != nullptr)
		*CanControl = Parms.CanControl;

}


// Function MenuSaveLoad.MenuSaveLoad_C.ReleaseSelf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::ReleaseSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "ReleaseSelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.MakeMainMissionClearFlag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ClearFlag                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::MakeMainMissionClearFlag(int32* ClearFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "MakeMainMissionClearFlag");

	Params::UMenuSaveLoad_C_MakeMainMissionClearFlag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ClearFlag != nullptr)
		*ClearFlag = Parms.ClearFlag;

}


// Function MenuSaveLoad.MenuSaveLoad_C.ResetMenuUI
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::ResetMenuUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "ResetMenuUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.ResetSlotUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::ResetSlotUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "ResetSlotUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.UpdateSlotUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSSaveSlotName         SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::UpdateSlotUI(enum class EKSSaveSlotName SlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "UpdateSlotUI");

	Params::UMenuSaveLoad_C_UpdateSlotUI_Params Parms{};

	Parms.SlotName = SlotName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.DecideMenu_Inner
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::DecideMenu_Inner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "DecideMenu_Inner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.ResetFocus
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::ResetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "ResetFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.SetCursorPos
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewPos                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsLoop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoad_C::SetCursorPos(int32 NewPos, bool IsUp, bool IsLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "SetCursorPos");

	Params::UMenuSaveLoad_C_SetCursorPos_Params Parms{};

	Parms.NewPos = NewPos;
	Parms.IsUp = IsUp;
	Parms.IsLoop = IsLoop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMenuSaveLoad_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "IsRunning");

	Params::UMenuSaveLoad_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuSaveLoad.MenuSaveLoad_C.MoveCursor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ToUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoad_C::MoveCursor(bool ToUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "MoveCursor");

	Params::UMenuSaveLoad_C_MoveCursor_Params Parms{};

	Parms.ToUp = ToUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.SetNextState_Local
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESAVELOAD_STATE         NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::SetNextState_Local(enum class ESAVELOAD_STATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "SetNextState_Local");

	Params::UMenuSaveLoad_C_SetNextState_Local_Params Parms{};

	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetCurrentState_Local
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESAVELOAD_STATE         CurrentState                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::GetCurrentState_Local(enum class ESAVELOAD_STATE* CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetCurrentState_Local");

	Params::UMenuSaveLoad_C_GetCurrentState_Local_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentState != nullptr)
		*CurrentState = Parms.CurrentState;

}


// Function MenuSaveLoad.MenuSaveLoad_C.CancelMenu_Inner
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::CancelMenu_Inner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "CancelMenu_Inner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.CloseMenu_Inner
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::CloseMenu_Inner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "CloseMenu_Inner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OpenMenu_Inner
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OpenMenu_Inner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OpenMenu_Inner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnEndState_Local
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESAVELOAD_STATE         CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESAVELOAD_STATE         NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::OnEndState_Local(enum class ESAVELOAD_STATE CurrentState, enum class ESAVELOAD_STATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnEndState_Local");

	Params::UMenuSaveLoad_C_OnEndState_Local_Params Parms{};

	Parms.CurrentState = CurrentState;
	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnBeginState_Local
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESAVELOAD_STATE         PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESAVELOAD_STATE         CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::OnBeginState_Local(enum class ESAVELOAD_STATE PrevState, enum class ESAVELOAD_STATE CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnBeginState_Local");

	Params::UMenuSaveLoad_C_OnBeginState_Local_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnUpdate_Local
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESAVELOAD_STATE         CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::OnUpdate_Local(enum class ESAVELOAD_STATE CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnUpdate_Local");

	Params::UMenuSaveLoad_C_OnUpdate_Local_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnRightAxisX");

	Params::UMenuSaveLoad_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnRightAxisY");

	Params::UMenuSaveLoad_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnLeftAxisX");

	Params::UMenuSaveLoad_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnLeftAxisY");

	Params::UMenuSaveLoad_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnGamePadAxisX");

	Params::UMenuSaveLoad_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnGamePadAxisY");

	Params::UMenuSaveLoad_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuSaveLoad_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnListPaging");

	Params::UMenuSaveLoad_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "WorldMapSlowCursorX");

	Params::UMenuSaveLoad_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "WorldMapSlowCursorY");

	Params::UMenuSaveLoad_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "HelpScrollAxis");

	Params::UMenuSaveLoad_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OutFocusMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OutFocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OutFocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.FocusMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::FocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "FocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnHelpMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnHelpMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnHelpMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::GetRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetRightAxisX");

	Params::UMenuSaveLoad_C_GetRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::GetRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetRightAxisY");

	Params::UMenuSaveLoad_C_GetRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.RBMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::RBMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "RBMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::GetLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetLeftAxisX");

	Params::UMenuSaveLoad_C_GetLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::GetLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetLeftAxisY");

	Params::UMenuSaveLoad_C_GetLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.RightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::RightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "RightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.RightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::RightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "RightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.RBMenuRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::RBMenuRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "RBMenuRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::GetGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetGamePadAxisX");

	Params::UMenuSaveLoad_C_GetGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.GetGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::GetGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "GetGamePadAxisY");

	Params::UMenuSaveLoad_C_GetGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.SubMenu_WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::SubMenu_WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "SubMenu_WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.SubMenu_WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::SubMenu_WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "SubMenu_WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.SubMenu_WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::SubMenu_WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "SubMenu_WorldMapSlowCursorX");

	Params::UMenuSaveLoad_C_SubMenu_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.SubMenu_WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::SubMenu_WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "SubMenu_WorldMapSlowCursorY");

	Params::UMenuSaveLoad_C_SubMenu_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "Tick");

	Params::UMenuSaveLoad_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnUpdateState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::OnUpdateState(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnUpdateState");

	Params::UMenuSaveLoad_C_OnUpdateState_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnBeginState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::OnBeginState(int32 PrevState, int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnBeginState");

	Params::UMenuSaveLoad_C_OnBeginState_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnEndState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::OnEndState(int32 CurrentState, int32 NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnEndState");

	Params::UMenuSaveLoad_C_OnEndState_Params Parms{};

	Parms.CurrentState = CurrentState;
	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuSaveLoad.MenuSaveLoad_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMenuSaveLoad_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuSaveLoad.MenuSaveLoad_C.ExecuteUbergraph_MenuSaveLoad
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuSaveLoad_C::ExecuteUbergraph_MenuSaveLoad(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuSaveLoad_C", "ExecuteUbergraph_MenuSaveLoad");

	Params::UMenuSaveLoad_C_ExecuteUbergraph_MenuSaveLoad_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


