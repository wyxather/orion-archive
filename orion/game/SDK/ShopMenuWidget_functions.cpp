#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuWidget.ShopMenuWidget_C
// (None)

class UClass* UShopMenuWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShopMenuWidget_C");

	return Clss;
}


// ShopMenuWidget_C ShopMenuWidget.Default__ShopMenuWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShopMenuWidget_C* UShopMenuWidget_C::GetDefaultObj()
{
	static class UShopMenuWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShopMenuWidget_C*>(UShopMenuWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShopMenuWidget.ShopMenuWidget_C.GetCursorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::GetCursorPosition(struct FVector2D* Position, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetCursorPosition");

	Params::UShopMenuWidget_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function ShopMenuWidget.ShopMenuWidget_C.CursorRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuDecide                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::CursorRight(bool* MenuDecide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CursorRight");

	Params::UShopMenuWidget_C_CursorRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuDecide != nullptr)
		*MenuDecide = Parms.MenuDecide;

}


// Function ShopMenuWidget.ShopMenuWidget_C.CursorLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuCancel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::CursorLeft(bool* MenuCancel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CursorLeft");

	Params::UShopMenuWidget_C_CursorLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuCancel != nullptr)
		*MenuCancel = Parms.MenuCancel;

}


// Function ShopMenuWidget.ShopMenuWidget_C.DecideMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NextState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::DecideMenu(bool* NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "DecideMenu");

	Params::UShopMenuWidget_C_DecideMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextState != nullptr)
		*NextState = Parms.NextState;

}


// Function ShopMenuWidget.ShopMenuWidget_C.CancelMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::CancelMenu(bool* ReturnState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CancelMenu");

	Params::UShopMenuWidget_C_CancelMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnState != nullptr)
		*ReturnState = Parms.ReturnState;

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetMenuRelativePos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   RelativePos                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::GetMenuRelativePos(struct FVector2D* RelativePos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetMenuRelativePos");

	Params::UShopMenuWidget_C_GetMenuRelativePos_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RelativePos != nullptr)
		*RelativePos = std::move(Parms.RelativePos);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UpdateReceiveGiftState
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::UpdateReceiveGiftState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UpdateReceiveGiftState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnClosedPreOrderGiftSuccessDialog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnClosedPreOrderGiftSuccessDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnClosedPreOrderGiftSuccessDialog");

	Params::UShopMenuWidget_C_OnClosedPreOrderGiftSuccessDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnClosedPreOrderGiftOrverDialog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnClosedPreOrderGiftOrverDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnClosedPreOrderGiftOrverDialog");

	Params::UShopMenuWidget_C_OnClosedPreOrderGiftOrverDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnClosedPreOrderGiftCompletedDialog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnClosedPreOrderGiftCompletedDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnClosedPreOrderGiftCompletedDialog");

	Params::UShopMenuWidget_C_OnClosedPreOrderGiftCompletedDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnClosedPreOrderGiftConfirmDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnClosedPreOrderGiftConfirmDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnClosedPreOrderGiftConfirmDialog");

	Params::UShopMenuWidget_C_OnClosedPreOrderGiftConfirmDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.StartMenuMode_PreOrderGift
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::StartMenuMode_PreOrderGift()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "StartMenuMode_PreOrderGift");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.MakeBarCommands
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<enum class ESHOPMENU_MODE>  ShopCommands_Bar                                                 (Parm, OutParm)

void UShopMenuWidget_C::MakeBarCommands(TArray<enum class ESHOPMENU_MODE>* ShopCommands_Bar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "MakeBarCommands");

	Params::UShopMenuWidget_C_MakeBarCommands_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShopCommands_Bar != nullptr)
		*ShopCommands_Bar = std::move(Parms.ShopCommands_Bar);

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetSelectedPurchaseItemData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPurchaseItemInfoData       Output                                                           (Parm, OutParm)

void UShopMenuWidget_C::GetSelectedPurchaseItemData(struct FPurchaseItemInfoData* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetSelectedPurchaseItemData");

	Params::UShopMenuWidget_C_GetSelectedPurchaseItemData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function ShopMenuWidget.ShopMenuWidget_C.SetINNSequenceState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EINN_SequenceState      NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::SetINNSequenceState(enum class EINN_SequenceState NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SetINNSequenceState");

	Params::UShopMenuWidget_C_SetINNSequenceState_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.ResetEquipParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::ResetEquipParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "ResetEquipParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OpenRemoveFixedEquipPartDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OpenRemoveFixedEquipPartDialog(int32 CharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OpenRemoveFixedEquipPartDialog");

	Params::UShopMenuWidget_C_OpenRemoveFixedEquipPartDialog_Params Parms{};

	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.Set Equipment Part from Item Category
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEquipmentCategory      EquipCategory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::Set_Equipment_Part_from_Item_Category(enum class EEquipmentCategory EquipCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "Set Equipment Part from Item Category");

	Params::UShopMenuWidget_C_Set_Equipment_Part_from_Item_Category_Params Parms{};

	Parms.EquipCategory = EquipCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.FocusListEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::FocusListEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "FocusListEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.QcEqp_ChangeAccesorySlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::QcEqp_ChangeAccesorySlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "QcEqp_ChangeAccesorySlot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.MenuStart
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::MenuStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "MenuStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetMenuItemEnable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESHOPMENU_MODE          Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::GetMenuItemEnable(enum class ESHOPMENU_MODE Mode, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetMenuItemEnable");

	Params::UShopMenuWidget_C_GetMenuItemEnable_Params Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function ShopMenuWidget.ShopMenuWidget_C.Is Party Status Show
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UShopMenuWidget_C::Is_Party_Status_Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "Is Party Status Show");

	Params::UShopMenuWidget_C_Is_Party_Status_Show_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShopMenuWidget.ShopMenuWidget_C.Check Marchant Action
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Exec                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::Check_Marchant_Action(bool* Exec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "Check Marchant Action");

	Params::UShopMenuWidget_C_Check_Marchant_Action_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Exec != nullptr)
		*Exec = Parms.Exec;

}


// Function ShopMenuWidget.ShopMenuWidget_C.TutorialCloseFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::TutorialCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "TutorialCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.RemoveFixedConfirmDialogCallback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::RemoveFixedConfirmDialogCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "RemoveFixedConfirmDialogCallback");

	Params::UShopMenuWidget_C_RemoveFixedConfirmDialogCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.SetTutorialEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::SetTutorialEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SetTutorialEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OpenAnimalInnDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OpenAnimalInnDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OpenAnimalInnDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.AnimalBuyConfirmDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::AnimalBuyConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "AnimalBuyConfirmDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.IsAnimalShop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsAnimalShop                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::IsAnimalShop(bool* IsAnimalShop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "IsAnimalShop");

	Params::UShopMenuWidget_C_IsAnimalShop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsAnimalShop != nullptr)
		*IsAnimalShop = Parms.IsAnimalShop;

}


// Function ShopMenuWidget.ShopMenuWidget_C.Check Animal Shop Finish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::Check_Animal_Shop_Finish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "Check Animal Shop Finish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.CompleteTrade_FromAnimalBuy
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::CompleteTrade_FromAnimalBuy(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CompleteTrade_FromAnimalBuy");

	Params::UShopMenuWidget_C_CompleteTrade_FromAnimalBuy_Params Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.StartMenuMode_Animal_Buy
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::StartMenuMode_Animal_Buy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "StartMenuMode_Animal_Buy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.IsPlayingMenuItemAnimaton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UShopMenuWidget_C::IsPlayingMenuItemAnimaton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "IsPlayingMenuItemAnimaton");

	Params::UShopMenuWidget_C_IsPlayingMenuItemAnimaton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShopMenuWidget.ShopMenuWidget_C.CallbackLinerShipNotification
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShopMenuWidget_C::CallbackLinerShipNotification(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CallbackLinerShipNotification");

	Params::UShopMenuWidget_C_CallbackLinerShipNotification_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.RequestLevelChangeByLinerShip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::RequestLevelChangeByLinerShip(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "RequestLevelChangeByLinerShip");

	Params::UShopMenuWidget_C_RequestLevelChangeByLinerShip_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UpdateState_LinerShip
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::UpdateState_LinerShip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UpdateState_LinerShip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.StartMenuMode_LinerShip
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::StartMenuMode_LinerShip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "StartMenuMode_LinerShip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.SetupTopMenuItemList_LinerShip
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::SetupTopMenuItemList_LinerShip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SetupTopMenuItemList_LinerShip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.SetupTopMenuItem_LinerShip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ListItemIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESHOPMENU_MODE          MenuMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::SetupTopMenuItem_LinerShip(int32 ListItemIndex, enum class ESHOPMENU_MODE MenuMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SetupTopMenuItem_LinerShip");

	Params::UShopMenuWidget_C_SetupTopMenuItem_LinerShip_Params Parms{};

	Parms.ListItemIndex = ListItemIndex;
	Parms.MenuMode = MenuMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.SetupTopMenuItemList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::SetupTopMenuItemList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SetupTopMenuItemList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.SetupTopMenuItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ListItemIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESHOPMENU_MODE          MenuMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::SetupTopMenuItem(int32 ListItemIndex, enum class ESHOPMENU_MODE MenuMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SetupTopMenuItem");

	Params::UShopMenuWidget_C_SetupTopMenuItem_Params Parms{};

	Parms.ListItemIndex = ListItemIndex;
	Parms.MenuMode = MenuMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetTopMenuActiveItem
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMainMenuItemPanel_C*        SelectedMenuItem                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::GetTopMenuActiveItem(int32 Index, class UMainMenuItemPanel_C** SelectedMenuItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetTopMenuActiveItem");

	Params::UShopMenuWidget_C_GetTopMenuActiveItem_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedMenuItem != nullptr)
		*SelectedMenuItem = Parms.SelectedMenuItem;

}


// Function ShopMenuWidget.ShopMenuWidget_C.MenuListDefaultAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::MenuListDefaultAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "MenuListDefaultAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.NowSelectCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::NowSelectCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "NowSelectCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.NowSelectDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::NowSelectDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "NowSelectDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.MenuIconInit_DEPRECATED
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESHOPMENU_MODE          MenuMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::MenuIconInit_DEPRECATED(enum class ESHOPMENU_MODE MenuMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "MenuIconInit_DEPRECATED");

	Params::UShopMenuWidget_C_MenuIconInit_DEPRECATED_Params Parms{};

	Parms.MenuMode = MenuMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.EquipChangeConfirmCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::EquipChangeConfirmCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "EquipChangeConfirmCallback");

	Params::UShopMenuWidget_C_EquipChangeConfirmCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.InnConfirmCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::InnConfirmCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "InnConfirmCallback");

	Params::UShopMenuWidget_C_InnConfirmCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.BuySellConfirmCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::BuySellConfirmCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "BuySellConfirmCallback");

	Params::UShopMenuWidget_C_BuySellConfirmCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.IsChangeStateOpenFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UShopMenuWidget_C::IsChangeStateOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "IsChangeStateOpenFinish");

	Params::UShopMenuWidget_C_IsChangeStateOpenFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShopMenuWidget.ShopMenuWidget_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UShopMenuWidget_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SetReference");

	Params::UShopMenuWidget_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShopMenuWidget.ShopMenuWidget_C.IsChangeStateCloseFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UShopMenuWidget_C::IsChangeStateCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "IsChangeStateCloseFinish");

	Params::UShopMenuWidget_C_IsChangeStateCloseFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShopMenuWidget.ShopMenuWidget_C.RefreshTopTitle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::RefreshTopTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "RefreshTopTitle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OpenCommon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OpenCommon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OpenCommon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.RefreshSellItemWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::RefreshSellItemWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "RefreshSellItemWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.RefreshSelectNumArror
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::RefreshSelectNumArror()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "RefreshSelectNumArror");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.CalcTradeMaxForSell
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              FixedTradeCount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::CalcTradeMaxForSell(int32* FixedTradeCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CalcTradeMaxForSell");

	Params::UShopMenuWidget_C_CalcTradeMaxForSell_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FixedTradeCount != nullptr)
		*FixedTradeCount = Parms.FixedTradeCount;

}


// Function ShopMenuWidget.ShopMenuWidget_C.CalcTradeMaxForBuy
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              FixedTradeCount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::CalcTradeMaxForBuy(int32* FixedTradeCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CalcTradeMaxForBuy");

	Params::UShopMenuWidget_C_CalcTradeMaxForBuy_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FixedTradeCount != nullptr)
		*FixedTradeCount = Parms.FixedTradeCount;

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnBeginState_ShopSelectTrade
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnBeginState_ShopSelectTrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnBeginState_ShopSelectTrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.IsMenuSelectable
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESHOPMENU_MODE          ShopMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSelectable                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::IsMenuSelectable(enum class ESHOPMENU_MODE ShopMode, bool* IsSelectable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "IsMenuSelectable");

	Params::UShopMenuWidget_C_IsMenuSelectable_Params Parms{};

	Parms.ShopMode = ShopMode;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSelectable != nullptr)
		*IsSelectable = Parms.IsSelectable;

}


// Function ShopMenuWidget.ShopMenuWidget_C.DisplayDebugInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::DisplayDebugInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "DisplayDebugInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.QcEqp_OnDecide
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::QcEqp_OnDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "QcEqp_OnDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.QcEqp_FocusCursor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::QcEqp_FocusCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "QcEqp_FocusCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.PrepareQuickEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::PrepareQuickEquipment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "PrepareQuickEquipment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.QcEqp_MoveCursor
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MoveValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UShopMenuWidget_C::QcEqp_MoveCursor(int32 MoveValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "QcEqp_MoveCursor");

	Params::UShopMenuWidget_C_QcEqp_MoveCursor_Params Parms{};

	Parms.MoveValue = MoveValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnBegin_BuyEquipment
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnBegin_BuyEquipment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnBegin_BuyEquipment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnEnd_BuyEquipment
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnEnd_BuyEquipment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnEnd_BuyEquipment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnBegin_BuyEquipConfirm
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnBegin_BuyEquipConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnBegin_BuyEquipConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.CanAnyEquipItem
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UShopMenuWidget_C::CanAnyEquipItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CanAnyEquipItem");

	Params::UShopMenuWidget_C_CanAnyEquipItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnUpdate_ShopConfirm
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnUpdate_ShopConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnUpdate_ShopConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnUpdate_BuyEquipConfirm
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnUpdate_BuyEquipConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnUpdate_BuyEquipConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.ModifyListCaption
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::ModifyListCaption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "ModifyListCaption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OpenTradeErrorDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OpenTradeErrorDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OpenTradeErrorDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.PlayMenuAnimation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            NewAnimation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::PlayMenuAnimation(class UWidgetAnimation* NewAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "PlayMenuAnimation");

	Params::UShopMenuWidget_C_PlayMenuAnimation_Params Parms{};

	Parms.NewAnimation = NewAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UpdateRelationshipState
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::UpdateRelationshipState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UpdateRelationshipState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetPrevState_Local
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESHOPMENU_STATE         CurrentState                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::GetPrevState_Local(enum class ESHOPMENU_STATE* CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetPrevState_Local");

	Params::UShopMenuWidget_C_GetPrevState_Local_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentState != nullptr)
		*CurrentState = Parms.CurrentState;

}


// Function ShopMenuWidget.ShopMenuWidget_C.IsClosingState
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UShopMenuWidget_C::IsClosingState(int32 State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "IsClosingState");

	Params::UShopMenuWidget_C_IsClosingState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnBegin_CloseState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnBegin_CloseState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnBegin_CloseState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.CloseAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::CloseAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CloseAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.StartMenuMode_RelationShip
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::StartMenuMode_RelationShip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "StartMenuMode_RelationShip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.StartMenuMode_Story
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::StartMenuMode_Story()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "StartMenuMode_Story");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.StartMenuMode_ChangeMember
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::StartMenuMode_ChangeMember()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "StartMenuMode_ChangeMember");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.StartMenuMode_Equip
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::StartMenuMode_Equip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "StartMenuMode_Equip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.StartMenuMode_Sell
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::StartMenuMode_Sell(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "StartMenuMode_Sell");

	Params::UShopMenuWidget_C_StartMenuMode_Sell_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ShopMenuWidget.ShopMenuWidget_C.StartMenuMode_Buy
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::StartMenuMode_Buy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "StartMenuMode_Buy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.InitPartsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::InitPartsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "InitPartsWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.FullRecovery_MainMember
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::FullRecovery_MainMember()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "FullRecovery_MainMember");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.SetGuideUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceTopGuide                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::SetGuideUI(bool ForceTopGuide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SetGuideUI");

	Params::UShopMenuWidget_C_SetGuideUI_Params Parms{};

	Parms.ForceTopGuide = ForceTopGuide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.SetCategoryDataByMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBuy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsAnimal                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::SetCategoryDataByMode(bool IsBuy, bool IsAnimal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SetCategoryDataByMode");

	Params::UShopMenuWidget_C_SetCategoryDataByMode_Params Parms{};

	Parms.IsBuy = IsBuy;
	Parms.IsAnimal = IsAnimal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UpdateInnState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::UpdateInnState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UpdateInnState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.RefreshTopMenuFocus
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::RefreshTopMenuFocus(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "RefreshTopMenuFocus");

	Params::UShopMenuWidget_C_RefreshTopMenuFocus_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UpdateTopMenuUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::UpdateTopMenuUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UpdateTopMenuUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UpdateOuterUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::UpdateOuterUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UpdateOuterUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.ResetPartyPanel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::ResetPartyPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "ResetPartyPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UpdateEquipParamWidget
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::UpdateEquipParamWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UpdateEquipParamWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.Calc Equip Param Before After
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::Calc_Equip_Param_Before_After()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "Calc Equip Param Before After");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UpdateEquippedItemData
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::UpdateEquippedItemData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UpdateEquippedItemData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UShopMenuWidget_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "IsRunning");

	Params::UShopMenuWidget_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetCurrentState_Local
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESHOPMENU_STATE         CurrentState                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::GetCurrentState_Local(enum class ESHOPMENU_STATE* CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetCurrentState_Local");

	Params::UShopMenuWidget_C_GetCurrentState_Local_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentState != nullptr)
		*CurrentState = Parms.CurrentState;

}


// Function ShopMenuWidget.ShopMenuWidget_C.SetNextState_Local
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESHOPMENU_STATE         NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::SetNextState_Local(enum class ESHOPMENU_STATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SetNextState_Local");

	Params::UShopMenuWidget_C_SetNextState_Local_Params Parms{};

	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnEndState_Local
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESHOPMENU_STATE         CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESHOPMENU_STATE         NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnEndState_Local(enum class ESHOPMENU_STATE CurrentState, enum class ESHOPMENU_STATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnEndState_Local");

	Params::UShopMenuWidget_C_OnEndState_Local_Params Parms{};

	Parms.CurrentState = CurrentState;
	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnBeginState_Local
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESHOPMENU_STATE         PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESHOPMENU_STATE         CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnBeginState_Local(enum class ESHOPMENU_STATE PrevState, enum class ESHOPMENU_STATE CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnBeginState_Local");

	Params::UShopMenuWidget_C_OnBeginState_Local_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnUpdate_Local
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESHOPMENU_STATE         CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnUpdate_Local(enum class ESHOPMENU_STATE CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnUpdate_Local");

	Params::UShopMenuWidget_C_OnUpdate_Local_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.StartMenuMode_Inn
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::StartMenuMode_Inn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "StartMenuMode_Inn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.AddCategories
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::AddCategories()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "AddCategories");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.CreateCategoryData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBuy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::CreateCategoryData(bool IsBuy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CreateCategoryData");

	Params::UShopMenuWidget_C_CreateCategoryData_Params Parms{};

	Parms.IsBuy = IsBuy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.LimitTradeItemNum
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCountup                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::LimitTradeItemNum(bool IsCountup, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "LimitTradeItemNum");

	Params::UShopMenuWidget_C_LimitTradeItemNum_Params Parms{};

	Parms.IsCountup = IsCountup;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UpdatePossessionItemNum
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemIdx                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMJListWidgetItemData>WidgetItems                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FName>                ItemLabels                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShopMenuWidget_C::UpdatePossessionItemNum(int32 ItemIdx, TArray<struct FMJListWidgetItemData>& WidgetItems, TArray<class FName>& ItemLabels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UpdatePossessionItemNum");

	Params::UShopMenuWidget_C_UpdatePossessionItemNum_Params Parms{};

	Parms.ItemIdx = ItemIdx;
	Parms.WidgetItems = WidgetItems;
	Parms.ItemLabels = ItemLabels;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.SetupShopInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ShopLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::SetupShopInfo(class FName ShopLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SetupShopInfo");

	Params::UShopMenuWidget_C_SetupShopInfo_Params Parms{};

	Parms.ShopLabel = ShopLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.CreateBackpackItemAll
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::CreateBackpackItemAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CreateBackpackItemAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetSelectedItemLabel
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::GetSelectedItemLabel(class FName* ItemLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetSelectedItemLabel");

	Params::UShopMenuWidget_C_GetSelectedItemLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemLabel != nullptr)
		*ItemLabel = Parms.ItemLabel;

}


// Function ShopMenuWidget.ShopMenuWidget_C.CompleteTrade
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCompleted                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::CompleteTrade(bool* IsCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CompleteTrade");

	Params::UShopMenuWidget_C_CompleteTrade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsCompleted != nullptr)
		*IsCompleted = Parms.IsCompleted;

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetSelectedProductData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMJListWidgetItemData       Product                                                          (Parm, OutParm)

void UShopMenuWidget_C::GetSelectedProductData(struct FMJListWidgetItemData* Product)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetSelectedProductData");

	Params::UShopMenuWidget_C_GetSelectedProductData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Product != nullptr)
		*Product = std::move(Parms.Product);

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetSelectedItemData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemData                   Item                                                             (Parm, OutParm)

void UShopMenuWidget_C::GetSelectedItemData(struct FItemData* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetSelectedItemData");

	Params::UShopMenuWidget_C_GetSelectedItemData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = std::move(Parms.Item);

}


// Function ShopMenuWidget.ShopMenuWidget_C.ListEventCallback
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::ListEventCallback(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "ListEventCallback");

	Params::UShopMenuWidget_C_ListEventCallback_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.ChangeState_Confirm
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::ChangeState_Confirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "ChangeState_Confirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.ChangeState_SelectNum
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanTrade                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::ChangeState_SelectNum(bool* CanTrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "ChangeState_SelectNum");

	Params::UShopMenuWidget_C_ChangeState_SelectNum_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanTrade != nullptr)
		*CanTrade = Parms.CanTrade;

}


// Function ShopMenuWidget.ShopMenuWidget_C.CreateShopCategoryAll
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ShopLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsAnimalShop                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::CreateShopCategoryAll(class FName ShopLabel, bool IsAnimalShop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CreateShopCategoryAll");

	Params::UShopMenuWidget_C_CreateShopCategoryAll_Params Parms{};

	Parms.ShopLabel = ShopLabel;
	Parms.IsAnimalShop = IsAnimalShop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UpdateTopMenuFocus
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::UpdateTopMenuFocus(int32 NewIndex, bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UpdateTopMenuFocus");

	Params::UShopMenuWidget_C_UpdateTopMenuFocus_Params Parms{};

	Parms.NewIndex = NewIndex;
	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.InitShopMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::InitShopMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "InitShopMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.MenuCancel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::MenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "MenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.MenuDecide
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::MenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "MenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.MenuSelectItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::MenuSelectItem(bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "MenuSelectItem");

	Params::UShopMenuWidget_C_MenuSelectItem_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.Is Playing All Animation 
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UShopMenuWidget_C::Is_Playing_All_Animation_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "Is Playing All Animation ");

	Params::UShopMenuWidget_C_Is_Playing_All_Animation__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnEnd_CloseState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnEnd_CloseState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnEnd_CloseState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OutFocusMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OutFocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OutFocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.FocusMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::FocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "FocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnHelpMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnHelpMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnHelpMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::GetRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetRightAxisX");

	Params::UShopMenuWidget_C_GetRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::GetRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetRightAxisY");

	Params::UShopMenuWidget_C_GetRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.RBMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::RBMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "RBMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::GetLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetLeftAxisX");

	Params::UShopMenuWidget_C_GetLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::GetLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetLeftAxisY");

	Params::UShopMenuWidget_C_GetLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.RightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::RightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "RightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.RightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::RightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "RightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.RBMenuRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::RBMenuRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "RBMenuRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::GetGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetGamePadAxisX");

	Params::UShopMenuWidget_C_GetGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.GetGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::GetGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "GetGamePadAxisY");

	Params::UShopMenuWidget_C_GetGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.SubMenu_WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::SubMenu_WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SubMenu_WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.SubMenu_WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::SubMenu_WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SubMenu_WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.SubMenu_WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::SubMenu_WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SubMenu_WorldMapSlowCursorX");

	Params::UShopMenuWidget_C_SubMenu_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.SubMenu_WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::SubMenu_WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SubMenu_WorldMapSlowCursorY");

	Params::UShopMenuWidget_C_SubMenu_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnRightAxisX");

	Params::UShopMenuWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnRightAxisY");

	Params::UShopMenuWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnLeftAxisX");

	Params::UShopMenuWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnLeftAxisY");

	Params::UShopMenuWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnGamePadAxisX");

	Params::UShopMenuWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnGamePadAxisY");

	Params::UShopMenuWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnListPaging");

	Params::UShopMenuWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "WorldMapSlowCursorX");

	Params::UShopMenuWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "WorldMapSlowCursorY");

	Params::UShopMenuWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "HelpScrollAxis");

	Params::UShopMenuWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnUpdateState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnUpdateState(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnUpdateState");

	Params::UShopMenuWidget_C_OnUpdateState_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnBeginState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnBeginState(int32 PrevState, int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnBeginState");

	Params::UShopMenuWidget_C_OnBeginState_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnEndState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::OnEndState(int32 CurrentState, int32 NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnEndState");

	Params::UShopMenuWidget_C_OnEndState_Params Parms{};

	Parms.CurrentState = CurrentState;
	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "Tick");

	Params::UShopMenuWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.SetParam
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ShopLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceDefaultBar                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FromNPC                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuWidget_C::SetParam(class FName ShopLabel, bool ForceDefaultBar, bool FromNPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "SetParam");

	Params::UShopMenuWidget_C_SetParam_Params Parms{};

	Parms.ShopLabel = ShopLabel;
	Parms.ForceDefaultBar = ForceDefaultBar;
	Parms.FromNPC = FromNPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShopMenuWidget.ShopMenuWidget_C.OpenExBar
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShopMenuWidget_C::OpenExBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "OpenExBar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShopMenuWidget.ShopMenuWidget_C.ExecuteUbergraph_ShopMenuWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuWidget_C::ExecuteUbergraph_ShopMenuWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ShopMenuWidget_C", "ExecuteUbergraph_ShopMenuWidget");

	Params::UShopMenuWidget_C_ExecuteUbergraph_ShopMenuWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


