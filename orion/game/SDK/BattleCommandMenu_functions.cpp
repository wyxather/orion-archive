#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleCommandMenu.BattleCommandMenu_C
// (None)

class UClass* UBattleCommandMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleCommandMenu_C");

	return Clss;
}


// BattleCommandMenu_C BattleCommandMenu.Default__BattleCommandMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleCommandMenu_C* UBattleCommandMenu_C::GetDefaultObj()
{
	static class UBattleCommandMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleCommandMenu_C*>(UBattleCommandMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleCommandMenu.BattleCommandMenu_C.IsEnableScrollBar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::IsEnableScrollBar(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "IsEnableScrollBar");

	Params::UBattleCommandMenu_C_IsEnableScrollBar_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BattleCommandMenu.BattleCommandMenu_C.GroupingAnimations
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::GroupingAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "GroupingAnimations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OpenPotentialityActionMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattlePlayerBP_C*           PlayerParam                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::OpenPotentialityActionMenu(class ABattlePlayerBP_C* PlayerParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OpenPotentialityActionMenu");

	Params::UBattleCommandMenu_C_OpenPotentialityActionMenu_Params Parms{};

	Parms.PlayerParam = PlayerParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.UpdatePartyChangeUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PartyChangeEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::UpdatePartyChangeUI(bool PartyChangeEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "UpdatePartyChangeUI");

	Params::UBattleCommandMenu_C_UpdatePartyChangeUI_Params Parms{};

	Parms.PartyChangeEnable = PartyChangeEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.Initialize Party Change
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::Initialize_Party_Change(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "Initialize Party Change");

	Params::UBattleCommandMenu_C_Initialize_Party_Change_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.GetPreparationCommandText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECOMMAND_SUB_MENU_TYPE  SubMenuType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CommandText                                                      (Parm, OutParm)

void UBattleCommandMenu_C::GetPreparationCommandText(enum class ECOMMAND_SUB_MENU_TYPE SubMenuType, class FText* CommandText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "GetPreparationCommandText");

	Params::UBattleCommandMenu_C_GetPreparationCommandText_Params Parms{};

	Parms.SubMenuType = SubMenuType;

	UObject::ProcessEvent(Func, &Parms);

	if (CommandText != nullptr)
		*CommandText = Parms.CommandText;

}


// Function BattleCommandMenu.BattleCommandMenu_C.GetPreparationAttributeIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsBattlePreparationMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON>Array                                                            (Parm, OutParm)

void UBattleCommandMenu_C::GetPreparationAttributeIcon(bool IsBattlePreparationMode, TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON>* Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "GetPreparationAttributeIcon");

	Params::UBattleCommandMenu_C_GetPreparationAttributeIcon_Params Parms{};

	Parms.IsBattlePreparationMode = IsBattlePreparationMode;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function BattleCommandMenu.BattleCommandMenu_C.SetRestrictPotentialityAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRestrict                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::SetRestrictPotentialityAction(bool IsRestrict)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "SetRestrictPotentialityAction");

	Params::UBattleCommandMenu_C_SetRestrictPotentialityAction_Params Parms{};

	Parms.IsRestrict = IsRestrict;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.SetRestrictBoost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRestrict                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::SetRestrictBoost(bool IsRestrict)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "SetRestrictBoost");

	Params::UBattleCommandMenu_C_SetRestrictBoost_Params Parms{};

	Parms.IsRestrict = IsRestrict;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.UpdateBoostHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::UpdateBoostHelp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "UpdateBoostHelp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.IsEquipedWeaponByAilment
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAILMENT_TYPE           AilmentType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWEAPON_CATEGORY        EquipmentCategory                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::IsEquipedWeaponByAilment(enum class EAILMENT_TYPE AilmentType, bool* Found, enum class EWEAPON_CATEGORY* EquipmentCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "IsEquipedWeaponByAilment");

	Params::UBattleCommandMenu_C_IsEquipedWeaponByAilment_Params Parms{};

	Parms.AilmentType = AilmentType;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (EquipmentCategory != nullptr)
		*EquipmentCategory = Parms.EquipmentCategory;

}


// Function BattleCommandMenu.BattleCommandMenu_C.CheckSelectSwitchAttribute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::CheckSelectSwitchAttribute(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "CheckSelectSwitchAttribute");

	Params::UBattleCommandMenu_C_CheckSelectSwitchAttribute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleCommandMenu.BattleCommandMenu_C.Get Select Menu Item Buttom Positon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   ViewportPosition                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   WidgetSize                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::Get_Select_Menu_Item_Buttom_Positon(struct FVector2D* ViewportPosition, struct FVector2D* WidgetSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "Get Select Menu Item Buttom Positon");

	Params::UBattleCommandMenu_C_Get_Select_Menu_Item_Buttom_Positon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ViewportPosition != nullptr)
		*ViewportPosition = std::move(Parms.ViewportPosition);

	if (WidgetSize != nullptr)
		*WidgetSize = std::move(Parms.WidgetSize);

}


// Function BattleCommandMenu.BattleCommandMenu_C.UpdatePreparationMenuItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCommandMenuActorBP_C* CommandMenuActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::UpdatePreparationMenuItem(class ABattleCommandMenuActorBP_C* CommandMenuActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "UpdatePreparationMenuItem");

	Params::UBattleCommandMenu_C_UpdatePreparationMenuItem_Params Parms{};

	Parms.CommandMenuActor = CommandMenuActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.SetSelectPreparationMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECOMMAND_SUB_MENU_TYPE  SelectPreparationMaterial                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UpdateMenuItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::SetSelectPreparationMaterial(enum class ECOMMAND_SUB_MENU_TYPE SelectPreparationMaterial, bool UpdateMenuItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "SetSelectPreparationMaterial");

	Params::UBattleCommandMenu_C_SetSelectPreparationMaterial_Params Parms{};

	Parms.SelectPreparationMaterial = SelectPreparationMaterial;
	Parms.UpdateMenuItem = UpdateMenuItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.CheckSelectPreparation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::CheckSelectPreparation(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "CheckSelectPreparation");

	Params::UBattleCommandMenu_C_CheckSelectPreparation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleCommandMenu.BattleCommandMenu_C.UpdateAddInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCommandMenuItem>    MenuItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleCommandMenu_C::UpdateAddInfo(TArray<struct FCommandMenuItem>& MenuItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "UpdateAddInfo");

	Params::UBattleCommandMenu_C_UpdateAddInfo_Params Parms{};

	Parms.MenuItem = MenuItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.AddMonsterCountWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::AddMonsterCountWidget(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "AddMonsterCountWidget");

	Params::UBattleCommandMenu_C_AddMonsterCountWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.SetEnableBoostHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableBoostHelp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::SetEnableBoostHelp(bool EnableBoostHelp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "SetEnableBoostHelp");

	Params::UBattleCommandMenu_C_SetEnableBoostHelp_Params Parms{};

	Parms.EnableBoostHelp = EnableBoostHelp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.Initialize Potentiality Action Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::Initialize_Potentiality_Action_Text(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "Initialize Potentiality Action Text");

	Params::UBattleCommandMenu_C_Initialize_Potentiality_Action_Text_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.UpdatePotentialityActionUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattlePlayerBP_C*           PlayerParam                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::UpdatePotentialityActionUI(class ABattlePlayerBP_C* PlayerParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "UpdatePotentialityActionUI");

	Params::UBattleCommandMenu_C_UpdatePotentialityActionUI_Params Parms{};

	Parms.PlayerParam = PlayerParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.SetInvadeMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InvadeMode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::SetInvadeMode(bool InvadeMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "SetInvadeMode");

	Params::UBattleCommandMenu_C_SetInvadeMode_Params Parms{};

	Parms.InvadeMode = InvadeMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.GetCommandWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattleCommandMenuItem_C*    TextWidget                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::GetCommandWidget(int32 Index, class UBattleCommandMenuItem_C** TextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "GetCommandWidget");

	Params::UBattleCommandMenu_C_GetCommandWidget_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (TextWidget != nullptr)
		*TextWidget = Parms.TextWidget;

}


// Function BattleCommandMenu.BattleCommandMenu_C.AutoSelectMenuItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::AutoSelectMenuItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "AutoSelectMenuItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.CursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::CursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "CursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.CursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::CursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "CursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.UpdateScrollBar
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::UpdateScrollBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "UpdateScrollBar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.ResetMenuIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::ResetMenuIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "ResetMenuIndex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.GetAbilityCostText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattlePlayerBP_C*           Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            ABILITY                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        AddText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Text                                                             (Parm, OutParm)

void UBattleCommandMenu_C::GetAbilityCostText(class ABattlePlayerBP_C* Enforcer, const struct FAbilityDataBase& ABILITY, class FText AddText, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "GetAbilityCostText");

	Params::UBattleCommandMenu_C_GetAbilityCostText_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.ABILITY = ABILITY;
	Parms.AddText = AddText;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BattleCommandMenu.BattleCommandMenu_C.MoveMenuCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::MoveMenuCursor(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "MoveMenuCursor");

	Params::UBattleCommandMenu_C_MoveMenuCursor_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.GetMenuIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::GetMenuIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "GetMenuIndex");

	Params::UBattleCommandMenu_C_GetMenuIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function BattleCommandMenu.BattleCommandMenu_C.CheckActiveItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::CheckActiveItem(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "CheckActiveItem");

	Params::UBattleCommandMenu_C_CheckActiveItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleCommandMenu.BattleCommandMenu_C.SetFloorIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Floor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::SetFloorIndex(int32 Floor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "SetFloorIndex");

	Params::UBattleCommandMenu_C_SetFloorIndex_Params Parms{};

	Parms.Floor = Floor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.GetSubMenuName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        MenuName                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::GetSubMenuName(class FName* MenuName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "GetSubMenuName");

	Params::UBattleCommandMenu_C_GetSubMenuName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuName != nullptr)
		*MenuName = Parms.MenuName;

}


// Function BattleCommandMenu.BattleCommandMenu_C.SetSubMenuName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MenuName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::SetSubMenuName(class FName MenuName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "SetSubMenuName");

	Params::UBattleCommandMenu_C_SetSubMenuName_Params Parms{};

	Parms.MenuName = MenuName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.GetSelectIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::GetSelectIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "GetSelectIndex");

	Params::UBattleCommandMenu_C_GetSelectIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function BattleCommandMenu.BattleCommandMenu_C.GetSelectCommandMenuItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FCommandMenuItem            Command                                                          (Parm, OutParm, HasGetValueTypeHash)
// bool                               FindMenuItem                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::GetSelectCommandMenuItem(struct FCommandMenuItem* Command, bool* FindMenuItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "GetSelectCommandMenuItem");

	Params::UBattleCommandMenu_C_GetSelectCommandMenuItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Command != nullptr)
		*Command = std::move(Parms.Command);

	if (FindMenuItem != nullptr)
		*FindMenuItem = Parms.FindMenuItem;

}


// Function BattleCommandMenu.BattleCommandMenu_C.CheckSelectNormalAttack
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::CheckSelectNormalAttack(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "CheckSelectNormalAttack");

	Params::UBattleCommandMenu_C_CheckSelectNormalAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleCommandMenu.BattleCommandMenu_C.ChangeAttributeIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DirNext                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::ChangeAttributeIcon(int32 Index, bool Instant, bool DirNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "ChangeAttributeIcon");

	Params::UBattleCommandMenu_C_ChangeAttributeIcon_Params Parms{};

	Parms.Index = Index;
	Parms.Instant = Instant;
	Parms.DirNext = DirNext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.SetPlayerHandler
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattlePlayerBP_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::SetPlayerHandler(class ABattlePlayerBP_C* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "SetPlayerHandler");

	Params::UBattleCommandMenu_C_SetPlayerHandler_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.MenuOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::MenuOutFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "MenuOutFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.MenuFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::MenuFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "MenuFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.InitializeMenuItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::InitializeMenuItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "InitializeMenuItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.CloseCommandMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::CloseCommandMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "CloseCommandMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.Change Boost Level
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::Change_Boost_Level(int32 BoostLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "Change Boost Level");

	Params::UBattleCommandMenu_C_Change_Boost_Level_Params Parms{};

	Parms.BoostLevel = BoostLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.Cancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.Decide
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OpenSubMenu                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::Decide(bool* OpenSubMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "Decide");

	Params::UBattleCommandMenu_C_Decide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OpenSubMenu != nullptr)
		*OpenSubMenu = Parms.OpenSubMenu;

}


// Function BattleCommandMenu.BattleCommandMenu_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.CheckActiveMenuItem
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCommandMenuItem            Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              BoostLv                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Active                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::CheckActiveMenuItem(const struct FCommandMenuItem& Item, int32 BoostLv, bool* Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "CheckActiveMenuItem");

	Params::UBattleCommandMenu_C_CheckActiveMenuItem_Params Parms{};

	Parms.Item = Item;
	Parms.BoostLv = BoostLv;

	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;

}


// Function BattleCommandMenu.BattleCommandMenu_C.UpdateMenuCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::UpdateMenuCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "UpdateMenuCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.UpdateMenuItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UpdateActiveItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::UpdateMenuItem(bool UpdateActiveItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "UpdateMenuItem");

	Params::UBattleCommandMenu_C_UpdateMenuItem_Params Parms{};

	Parms.UpdateActiveItem = UpdateActiveItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.IsClose
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Close                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::IsClose(bool* Close)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "IsClose");

	Params::UBattleCommandMenu_C_IsClose_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Close != nullptr)
		*Close = Parms.Close;

}


// Function BattleCommandMenu.BattleCommandMenu_C.Get Select Command
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ECOMMAND_MENU_TYPE      Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECOMMAND_SUB_MENU_TYPE  SubType                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            Command                                                          (Parm, OutParm)
// class FName                        Option                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::Get_Select_Command(enum class ECOMMAND_MENU_TYPE* Type, enum class ECOMMAND_SUB_MENU_TYPE* SubType, struct FAbilityDataBase* Command, class FName* Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "Get Select Command");

	Params::UBattleCommandMenu_C_Get_Select_Command_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

	if (SubType != nullptr)
		*SubType = Parms.SubType;

	if (Command != nullptr)
		*Command = std::move(Parms.Command);

	if (Option != nullptr)
		*Option = Parms.Option;

}


// Function BattleCommandMenu.BattleCommandMenu_C.OpenCommandMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCommandMenuItem>    CommandItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        InitTargetCommand                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECOMMAND_SUB_MENU_TYPE  MenuType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OpenSuccess                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::OpenCommandMenu(TArray<struct FCommandMenuItem>& CommandItem, class FName InitTargetCommand, enum class ECOMMAND_SUB_MENU_TYPE MenuType, bool* OpenSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OpenCommandMenu");

	Params::UBattleCommandMenu_C_OpenCommandMenu_Params Parms{};

	Parms.CommandItem = CommandItem;
	Parms.InitTargetCommand = InitTargetCommand;
	Parms.MenuType = MenuType;

	UObject::ProcessEvent(Func, &Parms);

	if (OpenSuccess != nullptr)
		*OpenSuccess = Parms.OpenSuccess;

}


// Function BattleCommandMenu.BattleCommandMenu_C.SetCommandMenuVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::SetCommandMenuVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "SetCommandMenuVisible");

	Params::UBattleCommandMenu_C_SetCommandMenuVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnRightAxisX");

	Params::UBattleCommandMenu_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnRightAxisY");

	Params::UBattleCommandMenu_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnLeftAxisX");

	Params::UBattleCommandMenu_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnLeftAxisY");

	Params::UBattleCommandMenu_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnGamePadAxisX");

	Params::UBattleCommandMenu_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnGamePadAxisY");

	Params::UBattleCommandMenu_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCommandMenu_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnListPaging");

	Params::UBattleCommandMenu_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "WorldMapSlowCursorX");

	Params::UBattleCommandMenu_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "WorldMapSlowCursorY");

	Params::UBattleCommandMenu_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "HelpScrollAxis");

	Params::UBattleCommandMenu_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCommandMenu.BattleCommandMenu_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattleCommandMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCommandMenu.BattleCommandMenu_C.ExecuteUbergraph_BattleCommandMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCommandMenu_C::ExecuteUbergraph_BattleCommandMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCommandMenu_C", "ExecuteUbergraph_BattleCommandMenu");

	Params::UBattleCommandMenu_C_ExecuteUbergraph_BattleCommandMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


