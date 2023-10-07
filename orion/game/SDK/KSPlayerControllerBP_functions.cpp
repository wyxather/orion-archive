#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSPlayerControllerBP.KSPlayerControllerBP_C
// (Actor, PlayerController)

class UClass* AKSPlayerControllerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSPlayerControllerBP_C");

	return Clss;
}


// KSPlayerControllerBP_C KSPlayerControllerBP.Default__KSPlayerControllerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSPlayerControllerBP_C* AKSPlayerControllerBP_C::GetDefaultObj()
{
	static class AKSPlayerControllerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSPlayerControllerBP_C*>(AKSPlayerControllerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.IsAnyKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        InputKey                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerControllerBP_C::IsAnyKey(const struct FKey& InputKey, bool* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "IsAnyKey");

	Params::AKSPlayerControllerBP_C_IsAnyKey_Params Parms{};

	Parms.InputKey = InputKey;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.CheckInputType
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerControllerBP_C::CheckInputType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "CheckInputType");

	Params::AKSPlayerControllerBP_C_CheckInputType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseEventY
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerControllerBP_C::MouseEventY(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "MouseEventY");

	Params::AKSPlayerControllerBP_C_MouseEventY_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseEventX
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerControllerBP_C::MouseEventX(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "MouseEventX");

	Params::AKSPlayerControllerBP_C_MouseEventX_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseYEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::MouseYEvent(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "MouseYEvent");

	Params::AKSPlayerControllerBP_C_MouseYEvent_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.Mouse XEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::Mouse_XEvent(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "Mouse XEvent");

	Params::AKSPlayerControllerBP_C_Mouse_XEvent_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.SettingOldConfig
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRemove                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerControllerBP_C::SettingOldConfig(bool IsRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "SettingOldConfig");

	Params::AKSPlayerControllerBP_C_SettingOldConfig_Params Parms{};

	Parms.IsRemove = IsRemove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.CanControlDebugMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Can_Control                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerControllerBP_C::CanControlDebugMenu(bool* Can_Control)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "CanControlDebugMenu");

	Params::AKSPlayerControllerBP_C_CanControlDebugMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Can_Control != nullptr)
		*Can_Control = Parms.Can_Control;

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.CanControlMainMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerControllerBP_C::CanControlMainMenu(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "CanControlMainMenu");

	Params::AKSPlayerControllerBP_C_CanControlMainMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.CanControlPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsControlPlayer                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerControllerBP_C::CanControlPlayer(bool* IsControlPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "CanControlPlayer");

	Params::AKSPlayerControllerBP_C_CanControlPlayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsControlPlayer != nullptr)
		*IsControlPlayer = Parms.IsControlPlayer;

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.SetControlCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       ControlCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControledCharacter                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::SetControlCharacter(class APawn* ControlCharacter, class APawn** ControledCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "SetControlCharacter");

	Params::AKSPlayerControllerBP_C_SetControlCharacter_Params Parms{};

	Parms.ControlCharacter = ControlCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (ControledCharacter != nullptr)
		*ControledCharacter = Parms.ControledCharacter;

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.SetDialogUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::SetDialogUI(class UWidget* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "SetDialogUI");

	Params::AKSPlayerControllerBP_C_SetDialogUI_Params Parms{};

	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.ClearUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPlayerControllerBP_C::ClearUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "ClearUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.SetUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::SetUI(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "SetUI");

	Params::AKSPlayerControllerBP_C_SetUI_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.getWidgetHandler
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::GetWidgetHandler(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "getWidgetHandler");

	Params::AKSPlayerControllerBP_C_GetWidgetHandler_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_Dash_K2Node_InputActionEvent_76
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_Dash_K2Node_InputActionEvent_76(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_Dash_K2Node_InputActionEvent_76");

	Params::AKSPlayerControllerBP_C_InpActEvt_Dash_K2Node_InputActionEvent_76_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_Dash_K2Node_InputActionEvent_75
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_Dash_K2Node_InputActionEvent_75(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_Dash_K2Node_InputActionEvent_75");

	Params::AKSPlayerControllerBP_C_InpActEvt_Dash_K2Node_InputActionEvent_75_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_FieldCommand_K2Node_InputActionEvent_74
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_FieldCommand_K2Node_InputActionEvent_74(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_FieldCommand_K2Node_InputActionEvent_74");

	Params::AKSPlayerControllerBP_C_InpActEvt_FieldCommand_K2Node_InputActionEvent_74_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_PlayerAction_K2Node_InputActionEvent_73
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_PlayerAction_K2Node_InputActionEvent_73(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_PlayerAction_K2Node_InputActionEvent_73");

	Params::AKSPlayerControllerBP_C_InpActEvt_PlayerAction_K2Node_InputActionEvent_73_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MainMenuOpenClose_K2Node_InputActionEvent_72
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MainMenuOpenClose_K2Node_InputActionEvent_72(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MainMenuOpenClose_K2Node_InputActionEvent_72");

	Params::AKSPlayerControllerBP_C_InpActEvt_MainMenuOpenClose_K2Node_InputActionEvent_72_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuPlusButton_K2Node_InputActionEvent_71
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuPlusButton_K2Node_InputActionEvent_71(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuPlusButton_K2Node_InputActionEvent_71");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuPlusButton_K2Node_InputActionEvent_71_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuMinusButton_K2Node_InputActionEvent_70
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuMinusButton_K2Node_InputActionEvent_70(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuMinusButton_K2Node_InputActionEvent_70");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuMinusButton_K2Node_InputActionEvent_70_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_BattleSpeedUpButton_K2Node_InputActionEvent_69
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_BattleSpeedUpButton_K2Node_InputActionEvent_69(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_BattleSpeedUpButton_K2Node_InputActionEvent_69");

	Params::AKSPlayerControllerBP_C_InpActEvt_BattleSpeedUpButton_K2Node_InputActionEvent_69_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_EventSpeedUpButton_K2Node_InputActionEvent_68
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_EventSpeedUpButton_K2Node_InputActionEvent_68(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_EventSpeedUpButton_K2Node_InputActionEvent_68");

	Params::AKSPlayerControllerBP_C_InpActEvt_EventSpeedUpButton_K2Node_InputActionEvent_68_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_EventSpeedDownButton_K2Node_InputActionEvent_67
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_EventSpeedDownButton_K2Node_InputActionEvent_67(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_EventSpeedDownButton_K2Node_InputActionEvent_67");

	Params::AKSPlayerControllerBP_C_InpActEvt_EventSpeedDownButton_K2Node_InputActionEvent_67_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_RadarMap_K2Node_InputActionEvent_66
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_RadarMap_K2Node_InputActionEvent_66(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_RadarMap_K2Node_InputActionEvent_66");

	Params::AKSPlayerControllerBP_C_InpActEvt_RadarMap_K2Node_InputActionEvent_66_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_ChangeTimeZone_K2Node_InputActionEvent_65
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_ChangeTimeZone_K2Node_InputActionEvent_65(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_ChangeTimeZone_K2Node_InputActionEvent_65");

	Params::AKSPlayerControllerBP_C_InpActEvt_ChangeTimeZone_K2Node_InputActionEvent_65_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuUpRepeat_K2Node_InputActionEvent_64
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuUpRepeat_K2Node_InputActionEvent_64(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuUpRepeat_K2Node_InputActionEvent_64");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuUpRepeat_K2Node_InputActionEvent_64_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuUpRepeat_K2Node_InputActionEvent_63
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuUpRepeat_K2Node_InputActionEvent_63(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuUpRepeat_K2Node_InputActionEvent_63");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuUpRepeat_K2Node_InputActionEvent_63_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuDownRepeat_K2Node_InputActionEvent_62
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuDownRepeat_K2Node_InputActionEvent_62(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuDownRepeat_K2Node_InputActionEvent_62");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuDownRepeat_K2Node_InputActionEvent_62_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuDownRepeat_K2Node_InputActionEvent_61
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuDownRepeat_K2Node_InputActionEvent_61(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuDownRepeat_K2Node_InputActionEvent_61");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuDownRepeat_K2Node_InputActionEvent_61_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightRepeat_K2Node_InputActionEvent_60
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRightRepeat_K2Node_InputActionEvent_60(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRightRepeat_K2Node_InputActionEvent_60");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRightRepeat_K2Node_InputActionEvent_60_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightRepeat_K2Node_InputActionEvent_59
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRightRepeat_K2Node_InputActionEvent_59(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRightRepeat_K2Node_InputActionEvent_59");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRightRepeat_K2Node_InputActionEvent_59_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLeftRepeat_K2Node_InputActionEvent_58
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuLeftRepeat_K2Node_InputActionEvent_58(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuLeftRepeat_K2Node_InputActionEvent_58");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuLeftRepeat_K2Node_InputActionEvent_58_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLeftRepeat_K2Node_InputActionEvent_57
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuLeftRepeat_K2Node_InputActionEvent_57(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuLeftRepeat_K2Node_InputActionEvent_57");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuLeftRepeat_K2Node_InputActionEvent_57_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuDecideRepeat_K2Node_InputActionEvent_56
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuDecideRepeat_K2Node_InputActionEvent_56(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuDecideRepeat_K2Node_InputActionEvent_56");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuDecideRepeat_K2Node_InputActionEvent_56_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuDecideRepeat_K2Node_InputActionEvent_55
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuDecideRepeat_K2Node_InputActionEvent_55(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuDecideRepeat_K2Node_InputActionEvent_55");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuDecideRepeat_K2Node_InputActionEvent_55_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuCancelRepeat_K2Node_InputActionEvent_54
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuCancelRepeat_K2Node_InputActionEvent_54(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuCancelRepeat_K2Node_InputActionEvent_54");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuCancelRepeat_K2Node_InputActionEvent_54_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuCancelRepeat_K2Node_InputActionEvent_53
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuCancelRepeat_K2Node_InputActionEvent_53(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuCancelRepeat_K2Node_InputActionEvent_53");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuCancelRepeat_K2Node_InputActionEvent_53_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuButtonXRepeat_K2Node_InputActionEvent_52
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuButtonXRepeat_K2Node_InputActionEvent_52(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuButtonXRepeat_K2Node_InputActionEvent_52");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuButtonXRepeat_K2Node_InputActionEvent_52_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuButtonXRepeat_K2Node_InputActionEvent_51
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuButtonXRepeat_K2Node_InputActionEvent_51(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuButtonXRepeat_K2Node_InputActionEvent_51");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuButtonXRepeat_K2Node_InputActionEvent_51_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuButtonYRepeat_K2Node_InputActionEvent_50
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuButtonYRepeat_K2Node_InputActionEvent_50(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuButtonYRepeat_K2Node_InputActionEvent_50");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuButtonYRepeat_K2Node_InputActionEvent_50_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuButtonYRepeat_K2Node_InputActionEvent_49
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuButtonYRepeat_K2Node_InputActionEvent_49(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuButtonYRepeat_K2Node_InputActionEvent_49");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuButtonYRepeat_K2Node_InputActionEvent_49_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLBRepeat_K2Node_InputActionEvent_48
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuLBRepeat_K2Node_InputActionEvent_48(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuLBRepeat_K2Node_InputActionEvent_48");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuLBRepeat_K2Node_InputActionEvent_48_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLBRepeat_K2Node_InputActionEvent_47
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuLBRepeat_K2Node_InputActionEvent_47(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuLBRepeat_K2Node_InputActionEvent_47");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuLBRepeat_K2Node_InputActionEvent_47_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRBRepeat_K2Node_InputActionEvent_46
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRBRepeat_K2Node_InputActionEvent_46(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRBRepeat_K2Node_InputActionEvent_46");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRBRepeat_K2Node_InputActionEvent_46_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRBRepeat_K2Node_InputActionEvent_45
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRBRepeat_K2Node_InputActionEvent_45(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRBRepeat_K2Node_InputActionEvent_45");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRBRepeat_K2Node_InputActionEvent_45_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_StartButtonRepeat_K2Node_InputActionEvent_44
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_StartButtonRepeat_K2Node_InputActionEvent_44(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_StartButtonRepeat_K2Node_InputActionEvent_44");

	Params::AKSPlayerControllerBP_C_InpActEvt_StartButtonRepeat_K2Node_InputActionEvent_44_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_StartButtonRepeat_K2Node_InputActionEvent_43
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_StartButtonRepeat_K2Node_InputActionEvent_43(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_StartButtonRepeat_K2Node_InputActionEvent_43");

	Params::AKSPlayerControllerBP_C_InpActEvt_StartButtonRepeat_K2Node_InputActionEvent_43_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_SelectButtonRepeat_K2Node_InputActionEvent_42
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_SelectButtonRepeat_K2Node_InputActionEvent_42(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_SelectButtonRepeat_K2Node_InputActionEvent_42");

	Params::AKSPlayerControllerBP_C_InpActEvt_SelectButtonRepeat_K2Node_InputActionEvent_42_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_SelectButtonRepeat_K2Node_InputActionEvent_41
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_SelectButtonRepeat_K2Node_InputActionEvent_41(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_SelectButtonRepeat_K2Node_InputActionEvent_41");

	Params::AKSPlayerControllerBP_C_InpActEvt_SelectButtonRepeat_K2Node_InputActionEvent_41_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightUpRepeat_K2Node_InputActionEvent_40
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRightUpRepeat_K2Node_InputActionEvent_40(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRightUpRepeat_K2Node_InputActionEvent_40");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRightUpRepeat_K2Node_InputActionEvent_40_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightUpRepeat_K2Node_InputActionEvent_39
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRightUpRepeat_K2Node_InputActionEvent_39(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRightUpRepeat_K2Node_InputActionEvent_39");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRightUpRepeat_K2Node_InputActionEvent_39_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightDownRepeat_K2Node_InputActionEvent_38
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRightDownRepeat_K2Node_InputActionEvent_38(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRightDownRepeat_K2Node_InputActionEvent_38");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRightDownRepeat_K2Node_InputActionEvent_38_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightDownRepeat_K2Node_InputActionEvent_37
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRightDownRepeat_K2Node_InputActionEvent_37(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRightDownRepeat_K2Node_InputActionEvent_37");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRightDownRepeat_K2Node_InputActionEvent_37_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_HelpScrollup_K2Node_InputActionEvent_36
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_HelpScrollup_K2Node_InputActionEvent_36(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_HelpScrollup_K2Node_InputActionEvent_36");

	Params::AKSPlayerControllerBP_C_InpActEvt_HelpScrollup_K2Node_InputActionEvent_36_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_HelpScrollup_K2Node_InputActionEvent_35
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_HelpScrollup_K2Node_InputActionEvent_35(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_HelpScrollup_K2Node_InputActionEvent_35");

	Params::AKSPlayerControllerBP_C_InpActEvt_HelpScrollup_K2Node_InputActionEvent_35_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_HelpScrollDown_K2Node_InputActionEvent_34
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_HelpScrollDown_K2Node_InputActionEvent_34(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_HelpScrollDown_K2Node_InputActionEvent_34");

	Params::AKSPlayerControllerBP_C_InpActEvt_HelpScrollDown_K2Node_InputActionEvent_34_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_HelpScrollDown_K2Node_InputActionEvent_33
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_HelpScrollDown_K2Node_InputActionEvent_33(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_HelpScrollDown_K2Node_InputActionEvent_33");

	Params::AKSPlayerControllerBP_C_InpActEvt_HelpScrollDown_K2Node_InputActionEvent_33_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuUp_K2Node_InputActionEvent_32
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuUp_K2Node_InputActionEvent_32(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuUp_K2Node_InputActionEvent_32");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuUp_K2Node_InputActionEvent_32_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuUp_K2Node_InputActionEvent_31
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuUp_K2Node_InputActionEvent_31(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuUp_K2Node_InputActionEvent_31");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuUp_K2Node_InputActionEvent_31_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuDown_K2Node_InputActionEvent_30
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuDown_K2Node_InputActionEvent_30(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuDown_K2Node_InputActionEvent_30");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuDown_K2Node_InputActionEvent_30_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuDown_K2Node_InputActionEvent_29
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuDown_K2Node_InputActionEvent_29(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuDown_K2Node_InputActionEvent_29");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuDown_K2Node_InputActionEvent_29_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLeft_K2Node_InputActionEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuLeft_K2Node_InputActionEvent_28(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuLeft_K2Node_InputActionEvent_28");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuLeft_K2Node_InputActionEvent_28_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLeft_K2Node_InputActionEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuLeft_K2Node_InputActionEvent_27(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuLeft_K2Node_InputActionEvent_27");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuLeft_K2Node_InputActionEvent_27_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRight_K2Node_InputActionEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRight_K2Node_InputActionEvent_26(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRight_K2Node_InputActionEvent_26");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRight_K2Node_InputActionEvent_26_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRight_K2Node_InputActionEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRight_K2Node_InputActionEvent_25(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRight_K2Node_InputActionEvent_25");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRight_K2Node_InputActionEvent_25_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuDecide_K2Node_InputActionEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuDecide_K2Node_InputActionEvent_24(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuDecide_K2Node_InputActionEvent_24");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuDecide_K2Node_InputActionEvent_24_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuCancel_K2Node_InputActionEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuCancel_K2Node_InputActionEvent_23(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuCancel_K2Node_InputActionEvent_23");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuCancel_K2Node_InputActionEvent_23_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuButtonX_K2Node_InputActionEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuButtonX_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuButtonX_K2Node_InputActionEvent_22");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuButtonX_K2Node_InputActionEvent_22_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuButtonY_K2Node_InputActionEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuButtonY_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuButtonY_K2Node_InputActionEvent_21");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuButtonY_K2Node_InputActionEvent_21_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLB_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuLB_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuLB_K2Node_InputActionEvent_20");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuLB_K2Node_InputActionEvent_20_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRB_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRB_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRB_K2Node_InputActionEvent_19");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRB_K2Node_InputActionEvent_19_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRB_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRB_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRB_K2Node_InputActionEvent_18");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRB_K2Node_InputActionEvent_18_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_SelectButton_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_SelectButton_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_SelectButton_K2Node_InputActionEvent_17");

	Params::AKSPlayerControllerBP_C_InpActEvt_SelectButton_K2Node_InputActionEvent_17_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRStickButton_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRStickButton_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRStickButton_K2Node_InputActionEvent_16");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRStickButton_K2Node_InputActionEvent_16_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLStickButton_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuLStickButton_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuLStickButton_K2Node_InputActionEvent_15");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuLStickButton_K2Node_InputActionEvent_15_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightAxisUp_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRightAxisUp_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRightAxisUp_K2Node_InputActionEvent_14");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRightAxisUp_K2Node_InputActionEvent_14_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRightAxisDown_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRightAxisDown_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRightAxisDown_K2Node_InputActionEvent_13");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRightAxisDown_K2Node_InputActionEvent_13_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuPlusButton_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuPlusButton_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuPlusButton_K2Node_InputActionEvent_12");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuPlusButton_K2Node_InputActionEvent_12_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuMinusButton_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuMinusButton_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuMinusButton_K2Node_InputActionEvent_11");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuMinusButton_K2Node_InputActionEvent_11_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_AnyButton_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_AnyButton_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_AnyButton_K2Node_InputActionEvent_10");

	Params::AKSPlayerControllerBP_C_InpActEvt_AnyButton_K2Node_InputActionEvent_10_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuListPagingLeft_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuListPagingLeft_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuListPagingLeft_K2Node_InputActionEvent_9");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuListPagingLeft_K2Node_InputActionEvent_9_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuListPagingRight_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuListPagingRight_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuListPagingRight_K2Node_InputActionEvent_8");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuListPagingRight_K2Node_InputActionEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuRTrigger_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuRTrigger_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuRTrigger_K2Node_InputActionEvent_7");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuRTrigger_K2Node_InputActionEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_MenuLTrigger_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_MenuLTrigger_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_MenuLTrigger_K2Node_InputActionEvent_6");

	Params::AKSPlayerControllerBP_C_InpActEvt_MenuLTrigger_K2Node_InputActionEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_ChangeTimeZone_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_ChangeTimeZone_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_ChangeTimeZone_K2Node_InputActionEvent_5");

	Params::AKSPlayerControllerBP_C_InpActEvt_ChangeTimeZone_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_StartButton_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_StartButton_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_StartButton_K2Node_InputActionEvent_4");

	Params::AKSPlayerControllerBP_C_InpActEvt_StartButton_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_WorldMap_ZoomIn_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_WorldMap_ZoomIn_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_WorldMap_ZoomIn_K2Node_InputActionEvent_3");

	Params::AKSPlayerControllerBP_C_InpActEvt_WorldMap_ZoomIn_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_WorldMap_ZoomOut_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_WorldMap_ZoomOut_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_WorldMap_ZoomOut_K2Node_InputActionEvent_2");

	Params::AKSPlayerControllerBP_C_InpActEvt_WorldMap_ZoomOut_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_ChangeStatusLeft_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_ChangeStatusLeft_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_ChangeStatusLeft_K2Node_InputActionEvent_1");

	Params::AKSPlayerControllerBP_C_InpActEvt_ChangeStatusLeft_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_ChangeStatusRight_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_ChangeStatusRight_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_ChangeStatusRight_K2Node_InputActionEvent_0");

	Params::AKSPlayerControllerBP_C_InpActEvt_ChangeStatusRight_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpActEvt_AnyKey_K2Node_InputKeyEvent_0");

	Params::AKSPlayerControllerBP_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_Test_Gene7_K2Node_InputAxisEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_Test_Gene7_K2Node_InputAxisEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_Test_Gene7_K2Node_InputAxisEvent_0");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_Test_Gene7_K2Node_InputAxisEvent_0_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_Test_Gene8_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_Test_Gene8_K2Node_InputAxisEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_Test_Gene8_K2Node_InputAxisEvent_1");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_Test_Gene8_K2Node_InputAxisEvent_1_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1");

	Params::AKSPlayerControllerBP_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0");

	Params::AKSPlayerControllerBP_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_ChangeTimeZone_Axis_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_ChangeTimeZone_Axis_K2Node_InputAxisEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_ChangeTimeZone_Axis_K2Node_InputAxisEvent_1");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_ChangeTimeZone_Axis_K2Node_InputAxisEvent_1_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.ResetKeyRepeat
// (Event, Public, BlueprintEvent)
// Parameters:

void AKSPlayerControllerBP_C::ResetKeyRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "ResetKeyRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveUpRepeat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerControllerBP_C::MouseMoveUpRepeat(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "MouseMoveUpRepeat");

	Params::AKSPlayerControllerBP_C_MouseMoveUpRepeat_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveDownRepeat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerControllerBP_C::MouseMoveDownRepeat(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "MouseMoveDownRepeat");

	Params::AKSPlayerControllerBP_C_MouseMoveDownRepeat_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveLeftRepeat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerControllerBP_C::MouseMoveLeftRepeat(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "MouseMoveLeftRepeat");

	Params::AKSPlayerControllerBP_C_MouseMoveLeftRepeat_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveRightRepeat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerControllerBP_C::MouseMoveRightRepeat(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "MouseMoveRightRepeat");

	Params::AKSPlayerControllerBP_C_MouseMoveRightRepeat_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_RStickX_K2Node_InputAxisEvent_60
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_RStickX_K2Node_InputAxisEvent_60(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_RStickX_K2Node_InputAxisEvent_60");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_RStickX_K2Node_InputAxisEvent_60_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_RStickY_K2Node_InputAxisEvent_70
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_RStickY_K2Node_InputAxisEvent_70(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_RStickY_K2Node_InputAxisEvent_70");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_RStickY_K2Node_InputAxisEvent_70_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_LStickX_K2Node_InputAxisEvent_20
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_LStickX_K2Node_InputAxisEvent_20(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_LStickX_K2Node_InputAxisEvent_20");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_LStickX_K2Node_InputAxisEvent_20_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_LStickY_K2Node_InputAxisEvent_26
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_LStickY_K2Node_InputAxisEvent_26(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_LStickY_K2Node_InputAxisEvent_26");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_LStickY_K2Node_InputAxisEvent_26_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_LGamePadX_K2Node_InputAxisEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_LGamePadX_K2Node_InputAxisEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_LGamePadX_K2Node_InputAxisEvent_0");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_LGamePadX_K2Node_InputAxisEvent_0_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_LGamePadY_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_LGamePadY_K2Node_InputAxisEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_LGamePadY_K2Node_InputAxisEvent_1");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_LGamePadY_K2Node_InputAxisEvent_1_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerControllerBP_C::MouseMoveRight(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "MouseMoveRight");

	Params::AKSPlayerControllerBP_C_MouseMoveRight_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Press                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerControllerBP_C::MouseMoveLeft(bool Press)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "MouseMoveLeft");

	Params::AKSPlayerControllerBP_C_MouseMoveLeft_Params Parms{};

	Parms.Press = Press;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerControllerBP_C::MouseMoveUp(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "MouseMoveUp");

	Params::AKSPlayerControllerBP_C_MouseMoveUp_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.MouseMoveDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerControllerBP_C::MouseMoveDown(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "MouseMoveDown");

	Params::AKSPlayerControllerBP_C_MouseMoveDown_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_WorldMap_SlowCursor_X_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_WorldMap_SlowCursor_X_K2Node_InputAxisEvent_2(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_WorldMap_SlowCursor_X_K2Node_InputAxisEvent_2");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_WorldMap_SlowCursor_X_K2Node_InputAxisEvent_2_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_WorldMap_SlowCursor_Y_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_WorldMap_SlowCursor_Y_K2Node_InputAxisEvent_3(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_WorldMap_SlowCursor_Y_K2Node_InputAxisEvent_3");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_WorldMap_SlowCursor_Y_K2Node_InputAxisEvent_3_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_HelpScrollAxis_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_HelpScrollAxis_K2Node_InputAxisEvent_4(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_HelpScrollAxis_K2Node_InputAxisEvent_4");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_HelpScrollAxis_K2Node_InputAxisEvent_4_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_ChangeTimeZone_Axis_K2Node_InputAxisEvent_5
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_ChangeTimeZone_Axis_K2Node_InputAxisEvent_5(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_ChangeTimeZone_Axis_K2Node_InputAxisEvent_5");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_ChangeTimeZone_Axis_K2Node_InputAxisEvent_5_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_253
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_253(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_253");

	Params::AKSPlayerControllerBP_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_253_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "ReceiveTick");

	Params::AKSPlayerControllerBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.DebugAddOldKeyConfig
// (Event, Public, BlueprintEvent)
// Parameters:

void AKSPlayerControllerBP_C::DebugAddOldKeyConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "DebugAddOldKeyConfig");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.DebugRemoveOldKeyConfig
// (Event, Public, BlueprintEvent)
// Parameters:

void AKSPlayerControllerBP_C::DebugRemoveOldKeyConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "DebugRemoveOldKeyConfig");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerControllerBP.KSPlayerControllerBP_C.ExecuteUbergraph_KSPlayerControllerBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerControllerBP_C::ExecuteUbergraph_KSPlayerControllerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerControllerBP_C", "ExecuteUbergraph_KSPlayerControllerBP");

	Params::AKSPlayerControllerBP_C_ExecuteUbergraph_KSPlayerControllerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


