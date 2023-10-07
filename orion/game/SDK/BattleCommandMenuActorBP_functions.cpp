#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattleCommandMenuActorBP.BattleCommandMenuActorBP_C
// (Actor)

class UClass* ABattleCommandMenuActorBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleCommandMenuActorBP_C");

	return Clss;
}


// BattleCommandMenuActorBP_C BattleCommandMenuActorBP.Default__BattleCommandMenuActorBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABattleCommandMenuActorBP_C* ABattleCommandMenuActorBP_C::GetDefaultObj()
{
	static class ABattleCommandMenuActorBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABattleCommandMenuActorBP_C*>(ABattleCommandMenuActorBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckItemUseEnableForCreate
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAilmentHandler>     AilmentList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Permit                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::CheckItemUseEnableForCreate(class FName ItemLabel, TArray<struct FAilmentHandler>& AilmentList, bool* Permit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CheckItemUseEnableForCreate");

	Params::ABattleCommandMenuActorBP_C_CheckItemUseEnableForCreate_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.AilmentList = AilmentList;

	UObject::ProcessEvent(Func, &Parms);

	if (Permit != nullptr)
		*Permit = Parms.Permit;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateBribeMenuPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::UpdateBribeMenuPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdateBribeMenuPosition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateActionOrderAnnounceAGIUpSelfDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::UpdateActionOrderAnnounceAGIUpSelfDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdateActionOrderAnnounceAGIUpSelfDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateActionOrderAnnounceAllAGIUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::UpdateActionOrderAnnounceAllAGIUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdateActionOrderAnnounceAllAGIUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateHelpWindow_Inner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCommandMenuItem            SelectCommand                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::UpdateHelpWindow_Inner(const struct FCommandMenuItem& SelectCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdateHelpWindow_Inner");

	Params::ABattleCommandMenuActorBP_C_UpdateHelpWindow_Inner_Params Parms{};

	Parms.SelectCommand = SelectCommand;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateHelpWindowPosition
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsIgnoreUpdateFlip                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::UpdateHelpWindowPosition(bool IsIgnoreUpdateFlip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdateHelpWindowPosition");

	Params::ABattleCommandMenuActorBP_C_UpdateHelpWindowPosition_Params Parms{};

	Parms.IsIgnoreUpdateFlip = IsIgnoreUpdateFlip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CloseOtherUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::CloseOtherUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CloseOtherUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdatePrepareHelpMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCommandMenuItem            SelectCommand                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::UpdatePrepareHelpMenu(const struct FCommandMenuItem& SelectCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdatePrepareHelpMenu");

	Params::ABattleCommandMenuActorBP_C_UpdatePrepareHelpMenu_Params Parms{};

	Parms.SelectCommand = SelectCommand;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdatePartyChangeUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::UpdatePartyChangeUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdatePartyChangeUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckLegendWeapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        SpecialItemLabel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLegendWeapon                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::CheckLegendWeapon(class FName SpecialItemLabel, bool* IsLegendWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CheckLegendWeapon");

	Params::ABattleCommandMenuActorBP_C_CheckLegendWeapon_Params Parms{};

	Parms.SpecialItemLabel = SpecialItemLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLegendWeapon != nullptr)
		*IsLegendWeapon = Parms.IsLegendWeapon;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateDefaultMenuItemFromInvadeData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InvadeDataLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCommandMenuItem>    MenuItemList                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               UsedOnceMonster                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CommandID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::CreateDefaultMenuItemFromInvadeData(class FName InvadeDataLabel, TArray<struct FCommandMenuItem>& MenuItemList, bool UsedOnceMonster, class FName CommandID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CreateDefaultMenuItemFromInvadeData");

	Params::ABattleCommandMenuActorBP_C_CreateDefaultMenuItemFromInvadeData_Params Parms{};

	Parms.InvadeDataLabel = InvadeDataLabel;
	Parms.MenuItemList = MenuItemList;
	Parms.UsedOnceMonster = UsedOnceMonster;
	Parms.CommandID = CommandID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdatePrepareMenuPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::UpdatePrepareMenuPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdatePrepareMenuPosition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CancelPreparationMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::CancelPreparationMode(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CancelPreparationMode");

	Params::ABattleCommandMenuActorBP_C_CancelPreparationMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.IsEquipRestrictWeapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FAbilitySetDataBase         AbilitySet                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquip                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::IsEquipRestrictWeapon(struct FAbilitySetDataBase& AbilitySet, class ABattleCharacterBase* Enforcer, bool* IsEquip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "IsEquipRestrictWeapon");

	Params::ABattleCommandMenuActorBP_C_IsEquipRestrictWeapon_Params Parms{};

	Parms.AbilitySet = AbilitySet;
	Parms.Enforcer = Enforcer;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquip != nullptr)
		*IsEquip = Parms.IsEquip;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckCommandSealingListForItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        CEnforceer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CItemData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EACTION_COMMAND_USEABLE ECommandUseable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::CheckCommandSealingListForItem(class ABattleCharacterBase* CEnforceer, const struct FItemData& CItemData, enum class EACTION_COMMAND_USEABLE* ECommandUseable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CheckCommandSealingListForItem");

	Params::ABattleCommandMenuActorBP_C_CheckCommandSealingListForItem_Params Parms{};

	Parms.CEnforceer = CEnforceer;
	Parms.CItemData = CItemData;

	UObject::ProcessEvent(Func, &Parms);

	if (ECommandUseable != nullptr)
		*ECommandUseable = Parms.ECommandUseable;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckCommandSealingListForInvade
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        CEnforceer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInvadeData                 CInvadeData                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EACTION_COMMAND_USEABLE ECommandUseable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::CheckCommandSealingListForInvade(class ABattleCharacterBase* CEnforceer, const struct FInvadeData& CInvadeData, enum class EACTION_COMMAND_USEABLE* ECommandUseable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CheckCommandSealingListForInvade");

	Params::ABattleCommandMenuActorBP_C_CheckCommandSealingListForInvade_Params Parms{};

	Parms.CEnforceer = CEnforceer;
	Parms.CInvadeData = CInvadeData;

	UObject::ProcessEvent(Func, &Parms);

	if (ECommandUseable != nullptr)
		*ECommandUseable = Parms.ECommandUseable;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckJobMenuEnable
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Emable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::CheckJobMenuEnable(bool* Emable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CheckJobMenuEnable");

	Params::ABattleCommandMenuActorBP_C_CheckJobMenuEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Emable != nullptr)
		*Emable = Parms.Emable;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckCommandSealingList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        CEnforceer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilitySetDataBase         CAbilitySet                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EACTION_COMMAND_USEABLE ECommandUseable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::CheckCommandSealingList(class ABattleCharacterBase* CEnforceer, const struct FAbilitySetDataBase& CAbilitySet, enum class EACTION_COMMAND_USEABLE* ECommandUseable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CheckCommandSealingList");

	Params::ABattleCommandMenuActorBP_C_CheckCommandSealingList_Params Parms{};

	Parms.CEnforceer = CEnforceer;
	Parms.CAbilitySet = CAbilitySet;

	UObject::ProcessEvent(Func, &Parms);

	if (ECommandUseable != nullptr)
		*ECommandUseable = Parms.ECommandUseable;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.SetupCommandSealingList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::SetupCommandSealingList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "SetupCommandSealingList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.IsGagMode
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCommandMenuItem            SelectedCommandMenuItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCommandMenuActorBP_C::IsGagMode(const struct FCommandMenuItem& SelectedCommandMenuItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "IsGagMode");

	Params::ABattleCommandMenuActorBP_C_IsGagMode_Params Parms{};

	Parms.SelectedCommandMenuItem = SelectedCommandMenuItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateMenuLayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::UpdateMenuLayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdateMenuLayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.PlayBoostSE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayBoostLv                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::PlayBoostSE(int32 PlayBoostLv)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "PlayBoostSE");

	Params::ABattleCommandMenuActorBP_C_PlayBoostSE_Params Parms{};

	Parms.PlayBoostLv = PlayBoostLv;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OffPotentialityAction
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCommandMenuActorBP_C::OffPotentialityAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OffPotentialityAction");

	Params::ABattleCommandMenuActorBP_C_OffPotentialityAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnPotentialityAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCommandMenuActorBP_C::OnPotentialityAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnPotentialityAction");

	Params::ABattleCommandMenuActorBP_C_OnPotentialityAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdatePreparationMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::UpdatePreparationMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdatePreparationMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.StartPreparationMode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::StartPreparationMode(int32 Count, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "StartPreparationMode");

	Params::ABattleCommandMenuActorBP_C_StartPreparationMode_Params Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.RemovePreparationMaterial
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PreparationModeFinish                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::RemovePreparationMaterial(bool* PreparationModeFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "RemovePreparationMaterial");

	Params::ABattleCommandMenuActorBP_C_RemovePreparationMaterial_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PreparationModeFinish != nullptr)
		*PreparationModeFinish = Parms.PreparationModeFinish;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Check Preparation Material Enable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PreparationMaterialID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaterialNum                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Permit                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ItemCount                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::Check_Preparation_Material_Enable(class FName PreparationMaterialID, int32 MaterialNum, bool* Permit, int32* ItemCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "Check Preparation Material Enable");

	Params::ABattleCommandMenuActorBP_C_Check_Preparation_Material_Enable_Params Parms{};

	Parms.PreparationMaterialID = PreparationMaterialID;
	Parms.MaterialNum = MaterialNum;

	UObject::ProcessEvent(Func, &Parms);

	if (Permit != nullptr)
		*Permit = Parms.Permit;

	if (ItemCount != nullptr)
		*ItemCount = Parms.ItemCount;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.AddPreparationMaterial
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ContinueSelectMaterial                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::AddPreparationMaterial(class FName Option, bool* ContinueSelectMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "AddPreparationMaterial");

	Params::ABattleCommandMenuActorBP_C_AddPreparationMaterial_Params Parms{};

	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

	if (ContinueSelectMaterial != nullptr)
		*ContinueSelectMaterial = Parms.ContinueSelectMaterial;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Get Selected Monster Count
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        MonsterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::Get_Selected_Monster_Count(class FName MonsterID, int32* Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "Get Selected Monster Count");

	Params::ABattleCommandMenuActorBP_C_Get_Selected_Monster_Count_Params Parms{};

	Parms.MonsterID = MonsterID;

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateMonsterCommandList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::UpdateMonsterCommandList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdateMonsterCommandList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateMultiMonsterMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::UpdateMultiMonsterMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdateMultiMonsterMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.StartMultiMonsterMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::StartMultiMonsterMode(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "StartMultiMonsterMode");

	Params::ABattleCommandMenuActorBP_C_StartMultiMonsterMode_Params Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.RemoveMultiMonster
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MultiModeFinish                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::RemoveMultiMonster(bool* MultiModeFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "RemoveMultiMonster");

	Params::ABattleCommandMenuActorBP_C_RemoveMultiMonster_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MultiModeFinish != nullptr)
		*MultiModeFinish = Parms.MultiModeFinish;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.AddMultiMonster
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ContinueSelectMonster                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::AddMultiMonster(class FName Option, bool* ContinueSelectMonster)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "AddMultiMonster");

	Params::ABattleCommandMenuActorBP_C_AddMultiMonster_Params Parms{};

	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

	if (ContinueSelectMonster != nullptr)
		*ContinueSelectMonster = Parms.ContinueSelectMonster;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Check Invade Monster Enable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InvadeMonsterID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Permit                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::Check_Invade_Monster_Enable(class FName InvadeMonsterID, bool* Permit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "Check Invade Monster Enable");

	Params::ABattleCommandMenuActorBP_C_Check_Invade_Monster_Enable_Params Parms{};

	Parms.InvadeMonsterID = InvadeMonsterID;

	UObject::ProcessEvent(Func, &Parms);

	if (Permit != nullptr)
		*Permit = Parms.Permit;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.GetOptionDataList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                AstrOptionDataList                                               (Parm, OutParm)
// class FName                        StrUseActionLabel                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::GetOptionDataList(TArray<class FName>* AstrOptionDataList, class FName* StrUseActionLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "GetOptionDataList");

	Params::ABattleCommandMenuActorBP_C_GetOptionDataList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AstrOptionDataList != nullptr)
		*AstrOptionDataList = std::move(Parms.AstrOptionDataList);

	if (StrUseActionLabel != nullptr)
		*StrUseActionLabel = Parms.StrUseActionLabel;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateDefaultMenuItemFromActionSet
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AbilitySetName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCommandMenuItem>    MenuItemList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CommandEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NormalAttack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CommandSeal                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LearningAbility                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SuperMagic                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HyperMagic                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PotentialityActionAbility                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::CreateDefaultMenuItemFromActionSet(class FName AbilitySetName, TArray<struct FCommandMenuItem>& MenuItemList, bool CommandEnable, bool NormalAttack, bool CommandSeal, bool LearningAbility, bool SuperMagic, bool HyperMagic, bool PotentialityActionAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CreateDefaultMenuItemFromActionSet");

	Params::ABattleCommandMenuActorBP_C_CreateDefaultMenuItemFromActionSet_Params Parms{};

	Parms.AbilitySetName = AbilitySetName;
	Parms.MenuItemList = MenuItemList;
	Parms.CommandEnable = CommandEnable;
	Parms.NormalAttack = NormalAttack;
	Parms.CommandSeal = CommandSeal;
	Parms.LearningAbility = LearningAbility;
	Parms.SuperMagic = SuperMagic;
	Parms.HyperMagic = HyperMagic;
	Parms.PotentialityActionAbility = PotentialityActionAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.SetupSpecialActionMenuItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::SetupSpecialActionMenuItem(int32 PlayerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "SetupSpecialActionMenuItem");

	Params::ABattleCommandMenuActorBP_C_SetupSpecialActionMenuItem_Params Parms{};

	Parms.PlayerID = PlayerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.TameMonsterConfirmCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::TameMonsterConfirmCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "TameMonsterConfirmCallback");

	Params::ABattleCommandMenuActorBP_C_TameMonsterConfirmCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdatePotentialityActionUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::UpdatePotentialityActionUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdatePotentialityActionUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateDefaultMenuItemFromItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCommandMenuItem>    AddItemList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ECOMMAND_MENU_TYPE      MenuType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECOMMAND_SUB_MENU_TYPE  SubMenuType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        AddInfo                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Useable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CommandSeal                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::CreateDefaultMenuItemFromItem(TArray<struct FCommandMenuItem>& AddItemList, struct FItemData& ItemData, enum class ECOMMAND_MENU_TYPE MenuType, enum class ECOMMAND_SUB_MENU_TYPE SubMenuType, class FName Option, class FText AddInfo, bool Useable, int32 Count, bool CommandSeal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CreateDefaultMenuItemFromItem");

	Params::ABattleCommandMenuActorBP_C_CreateDefaultMenuItemFromItem_Params Parms{};

	Parms.AddItemList = AddItemList;
	Parms.ItemData = ItemData;
	Parms.MenuType = MenuType;
	Parms.SubMenuType = SubMenuType;
	Parms.Option = Option;
	Parms.AddInfo = AddInfo;
	Parms.Useable = Useable;
	Parms.Count = Count;
	Parms.CommandSeal = CommandSeal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateBackPackItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::UpdateBackPackItemList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdateBackPackItemList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.AutoSelectCommandMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::AutoSelectCommandMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "AutoSelectCommandMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.GetHelpWindowOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Open                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::GetHelpWindowOpen(bool* Open)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "GetHelpWindowOpen");

	Params::ABattleCommandMenuActorBP_C_GetHelpWindowOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Open != nullptr)
		*Open = Parms.Open;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.ChangeTargetSelectStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::ChangeTargetSelectStep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "ChangeTargetSelectStep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateActionOrderAnnounce
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::UpdateActionOrderAnnounce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdateActionOrderAnnounce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckCommandEnable
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattlePlayerBP_C*           Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilitySetDataBase         AbilitySet                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAbilityDataBase            ABILITY                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               NormalAttack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Useable                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Disable                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::CheckCommandEnable(class ABattlePlayerBP_C* Enforcer, const struct FAbilitySetDataBase& AbilitySet, const struct FAbilityDataBase& ABILITY, bool NormalAttack, bool* Useable, bool* Disable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CheckCommandEnable");

	Params::ABattleCommandMenuActorBP_C_CheckCommandEnable_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.AbilitySet = AbilitySet;
	Parms.ABILITY = ABILITY;
	Parms.NormalAttack = NormalAttack;

	UObject::ProcessEvent(Func, &Parms);

	if (Useable != nullptr)
		*Useable = Parms.Useable;

	if (Disable != nullptr)
		*Disable = Parms.Disable;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.RemoveBoostEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWeatherEnd                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::RemoveBoostEffect(bool bWeatherEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "RemoveBoostEffect");

	Params::ABattleCommandMenuActorBP_C_RemoveBoostEffect_Params Parms{};

	Parms.bWeatherEnd = bWeatherEnd;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckCommandCost
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattlePlayerBP_C*           Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::CheckCommandCost(class ABattlePlayerBP_C* Enforcer, const struct FAbilityDataBase& Command, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CheckCommandCost");

	Params::ABattleCommandMenuActorBP_C_CheckCommandCost_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.Command = Command;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateWeaponThrowCommand
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAbilityDataBase            DefaultAbility                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        AbilityLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        WeaponName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            Command                                                          (Parm, OutParm)

void ABattleCommandMenuActorBP_C::CreateWeaponThrowCommand(const struct FAbilityDataBase& DefaultAbility, class FName AbilityLabel, class FName WeaponName, struct FAbilityDataBase* Command)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CreateWeaponThrowCommand");

	Params::ABattleCommandMenuActorBP_C_CreateWeaponThrowCommand_Params Parms{};

	Parms.DefaultAbility = DefaultAbility;
	Parms.AbilityLabel = AbilityLabel;
	Parms.WeaponName = WeaponName;

	UObject::ProcessEvent(Func, &Parms);

	if (Command != nullptr)
		*Command = std::move(Parms.Command);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.GetMenuIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              MenuIndex                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::GetMenuIndex(int32* MenuIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "GetMenuIndex");

	Params::ABattleCommandMenuActorBP_C_GetMenuIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuIndex != nullptr)
		*MenuIndex = Parms.MenuIndex;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Check Command Target Change
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAbilityDataBase            Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAbilityDataBase            ReturnCommand                                                    (Parm, OutParm)

void ABattleCommandMenuActorBP_C::Check_Command_Target_Change(struct FAbilityDataBase& Command, bool* Result, struct FAbilityDataBase* ReturnCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "Check Command Target Change");

	Params::ABattleCommandMenuActorBP_C_Check_Command_Target_Change_Params Parms{};

	Parms.Command = Command;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ReturnCommand != nullptr)
		*ReturnCommand = std::move(Parms.ReturnCommand);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckItemUseEnable
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAilmentHandler>     AilmentList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Permit                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::CheckItemUseEnable(class FName ItemLabel, TArray<struct FAilmentHandler>& AilmentList, bool* Permit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CheckItemUseEnable");

	Params::ABattleCommandMenuActorBP_C_CheckItemUseEnable_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.AilmentList = AilmentList;

	UObject::ProcessEvent(Func, &Parms);

	if (Permit != nullptr)
		*Permit = Parms.Permit;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Initialize Battle Start
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_ENCOUNT_TYPE    BattleMode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::Initialize_Battle_Start(enum class EBATTLE_ENCOUNT_TYPE BattleMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "Initialize Battle Start");

	Params::ABattleCommandMenuActorBP_C_Initialize_Battle_Start_Params Parms{};

	Parms.BattleMode = BattleMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.ReadyCommandMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::ReadyCommandMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "ReadyCommandMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateHelpWindow
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::UpdateHelpWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdateHelpWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnCloseHelp
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnCloseHelp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnCloseHelp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnOpenHelp
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnOpenHelp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnOpenHelp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CursorLeft
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::CursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CursorRight
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::CursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckItemMenuOpen
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Permit                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::CheckItemMenuOpen(bool* Permit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CheckItemMenuOpen");

	Params::ABattleCommandMenuActorBP_C_CheckItemMenuOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Permit != nullptr)
		*Permit = Parms.Permit;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckCallSupporterExec
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Permit                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::CheckCallSupporterExec(bool* Permit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CheckCallSupporterExec");

	Params::ABattleCommandMenuActorBP_C_CheckCallSupporterExec_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Permit != nullptr)
		*Permit = Parms.Permit;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.GetSubMenuList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECOMMAND_SUB_MENU_TYPE  Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCommandMenuItem>    ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<struct FCommandMenuItem> ABattleCommandMenuActorBP_C::GetSubMenuList(enum class ECOMMAND_SUB_MENU_TYPE Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "GetSubMenuList");

	Params::ABattleCommandMenuActorBP_C_GetSubMenuList_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateSpecialMenuItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattlePlayerBP_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::CreateSpecialMenuItem(class ABattlePlayerBP_C* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CreateSpecialMenuItem");

	Params::ABattleCommandMenuActorBP_C_CreateSpecialMenuItem_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateMenuPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsIgnoreUpdateFlip                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::UpdateMenuPosition(bool IsIgnoreUpdateFlip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdateMenuPosition");

	Params::ABattleCommandMenuActorBP_C_UpdateMenuPosition_Params Parms{};

	Parms.IsIgnoreUpdateFlip = IsIgnoreUpdateFlip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.RemoveCommandMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::RemoveCommandMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "RemoveCommandMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckSelectTarget
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAbilityDataBase            Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Continue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Permit                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::CheckSelectTarget(const struct FAbilityDataBase& Command, bool* Continue, bool* Permit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CheckSelectTarget");

	Params::ABattleCommandMenuActorBP_C_CheckSelectTarget_Params Parms{};

	Parms.Command = Command;

	UObject::ProcessEvent(Func, &Parms);

	if (Continue != nullptr)
		*Continue = Parms.Continue;

	if (Permit != nullptr)
		*Permit = Parms.Permit;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.GetBoostLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              BoostLevel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::GetBoostLevel(int32* BoostLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "GetBoostLevel");

	Params::ABattleCommandMenuActorBP_C_GetBoostLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BoostLevel != nullptr)
		*BoostLevel = Parms.BoostLevel;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CheckCommandExec
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAbilityDataBase            Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Permit                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::CheckCommandExec(const struct FAbilityDataBase& Command, bool* Permit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CheckCommandExec");

	Params::ABattleCommandMenuActorBP_C_CheckCommandExec_Params Parms{};

	Parms.Command = Command;

	UObject::ProcessEvent(Func, &Parms);

	if (Permit != nullptr)
		*Permit = Parms.Permit;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.DecideMenuItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECOMMAND_MENU_TYPE      Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::DecideMenuItem(enum class ECOMMAND_MENU_TYPE Type, const struct FAbilityDataBase& Command, class FName Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "DecideMenuItem");

	Params::ABattleCommandMenuActorBP_C_DecideMenuItem_Params Parms{};

	Parms.Type = Type;
	Parms.Command = Command;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateItemMenuItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::CreateItemMenuItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CreateItemMenuItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateAbilityMenuItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattlePlayerBP_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::CreateAbilityMenuItem(class ABattlePlayerBP_C* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CreateAbilityMenuItem");

	Params::ABattleCommandMenuActorBP_C_CreateAbilityMenuItem_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CreateMainMenuItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattlePlayerBP_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::CreateMainMenuItem(class ABattlePlayerBP_C* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CreateMainMenuItem");

	Params::ABattleCommandMenuActorBP_C_CreateMainMenuItem_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Get Select Command
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECOMMAND_MENU_TYPE      Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            Command                                                          (Parm, OutParm)
// bool                               UseGrowMagicBuff                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::Get_Select_Command(enum class ECOMMAND_MENU_TYPE* Type, struct FAbilityDataBase* Command, bool* UseGrowMagicBuff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "Get Select Command");

	Params::ABattleCommandMenuActorBP_C_Get_Select_Command_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

	if (Command != nullptr)
		*Command = std::move(Parms.Command);

	if (UseGrowMagicBuff != nullptr)
		*UseGrowMagicBuff = Parms.UseGrowMagicBuff;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CursorDown
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.CursorUp
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.ConfirmCommand
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::ConfirmCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "ConfirmCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnBoostChange
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Add                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::OnBoostChange(bool Add)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnBoostChange");

	Params::ABattleCommandMenuActorBP_C_OnBoostChange_Params Parms{};

	Parms.Add = Add;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnCancel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnDecide
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.IsClose
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Close                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::IsClose(bool* Close)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "IsClose");

	Params::ABattleCommandMenuActorBP_C_IsClose_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Close != nullptr)
		*Close = Parms.Close;

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattlePlayerBP_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::Open(class ABattlePlayerBP_C* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "Open");

	Params::ABattleCommandMenuActorBP_C_Open_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.InitializeCommandMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleTargetSelectBP_C*     TargetSelectBP                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::InitializeCommandMenu(class ABattleTargetSelectBP_C* TargetSelectBP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "InitializeCommandMenu");

	Params::ABattleCommandMenuActorBP_C_InitializeCommandMenu_Params Parms{};

	Parms.TargetSelectBP = TargetSelectBP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnRightAxisX");

	Params::ABattleCommandMenuActorBP_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnRightAxisY");

	Params::ABattleCommandMenuActorBP_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnLeftAxisX");

	Params::ABattleCommandMenuActorBP_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnLeftAxisY");

	Params::ABattleCommandMenuActorBP_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnGamePadAxisX");

	Params::ABattleCommandMenuActorBP_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnGamePadAxisY");

	Params::ABattleCommandMenuActorBP_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "WorldMapSlowCursorX");

	Params::ABattleCommandMenuActorBP_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "WorldMapSlowCursorY");

	Params::ABattleCommandMenuActorBP_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.ChangeBoostLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AddLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::ChangeBoostLevel(int32 BoostLevel, bool AddLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "ChangeBoostLevel");

	Params::ABattleCommandMenuActorBP_C_ChangeBoostLevel_Params Parms{};

	Parms.BoostLevel = BoostLevel;
	Parms.AddLevel = AddLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.ConfirmDialogPermit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::ConfirmDialogPermit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "ConfirmDialogPermit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.ConfirmDialogCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::ConfirmDialogCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "ConfirmDialogCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.UpdateCommandMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::UpdateCommandMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "UpdateCommandMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.WaitConfirmDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::WaitConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "WaitConfirmDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "ReceiveTick");

	Params::ABattleCommandMenuActorBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCommandMenuActorBP_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnListPaging");

	Params::ABattleCommandMenuActorBP_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "HelpScrollAxis");

	Params::ABattleCommandMenuActorBP_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCommandMenuActorBP_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenuActorBP.BattleCommandMenuActorBP_C.ExecuteUbergraph_BattleCommandMenuActorBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCommandMenuActorBP_C::ExecuteUbergraph_BattleCommandMenuActorBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenuActorBP_C", "ExecuteUbergraph_BattleCommandMenuActorBP");

	Params::ABattleCommandMenuActorBP_C_ExecuteUbergraph_BattleCommandMenuActorBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


