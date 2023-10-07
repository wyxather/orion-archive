#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass SupportAbilityWidget.SupportAbilityWidget_C
// (None)

class UClass* USupportAbilityWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SupportAbilityWidget_C");

	return Clss;
}


// SupportAbilityWidget_C SupportAbilityWidget.Default__SupportAbilityWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USupportAbilityWidget_C* USupportAbilityWidget_C::GetDefaultObj()
{
	static class USupportAbilityWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USupportAbilityWidget_C*>(USupportAbilityWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SupportAbilityWidget.SupportAbilityWidget_C.IsHelpVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HelpVisible                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportAbilityWidget_C::IsHelpVisible(bool* HelpVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "IsHelpVisible");

	Params::USupportAbilityWidget_C_IsHelpVisible_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HelpVisible != nullptr)
		*HelpVisible = Parms.HelpVisible;

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.UpdateHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityWidget_C::UpdateHelp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "UpdateHelp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.SetupHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HelpVisible                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportAbilityWidget_C::SetupHelp(bool HelpVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "SetupHelp");

	Params::USupportAbilityWidget_C_SetupHelp_Params Parms{};

	Parms.HelpVisible = HelpVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.SwitchHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityWidget_C::SwitchHelp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "SwitchHelp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.GetSlotNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              SlotNum                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityWidget_C::GetSlotNum(int32* SlotNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "GetSlotNum");

	Params::USupportAbilityWidget_C_GetSlotNum_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SlotNum != nullptr)
		*SlotNum = Parms.SlotNum;

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.SetSelectDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityWidget_C::SetSelectDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "SetSelectDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.UpdateCursor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCursor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SelectDecide                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UnSelectReset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsMove                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportAbilityWidget_C::UpdateCursor(int32 NewCursor, bool SelectDecide, bool UnSelectReset, bool IsFast, bool* IsMove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "UpdateCursor");

	Params::USupportAbilityWidget_C_UpdateCursor_Params Parms{};

	Parms.NewCursor = NewCursor;
	Parms.SelectDecide = SelectDecide;
	Parms.UnSelectReset = UnSelectReset;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMove != nullptr)
		*IsMove = Parms.IsMove;

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.GetCursorPos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CursorPos                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityWidget_C::GetCursorPos(int32* CursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "GetCursorPos");

	Params::USupportAbilityWidget_C_GetCursorPos_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CursorPos != nullptr)
		*CursorPos = Parms.CursorPos;

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.Set Support Ability
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AbilityID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListItemWidget_Col1_C*      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DetailText                                                       (Parm, OutParm)

void USupportAbilityWidget_C::Set_Support_Ability(int32 AbilityID, class UListItemWidget_Col1_C* Target, class FText* DetailText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "Set Support Ability");

	Params::USupportAbilityWidget_C_Set_Support_Ability_Params Parms{};

	Parms.AbilityID = AbilityID;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (DetailText != nullptr)
		*DetailText = Parms.DetailText;

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.SetupText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityWidget_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.CursorDown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportAbilityWidget_C::CursorDown(bool* IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "CursorDown");

	Params::USupportAbilityWidget_C_CursorDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.CursorUp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportAbilityWidget_C::CursorUp(bool* IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "CursorUp");

	Params::USupportAbilityWidget_C_CursorUp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityWidget_C::OutFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "OutFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportAbilityWidget_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "Focus");

	Params::USupportAbilityWidget_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.Setup Widget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsGuestCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportAbilityWidget_C::Setup_Widget(struct FSavePlayerCharacterData& CharacterData, bool IsGuestCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "Setup Widget");

	Params::USupportAbilityWidget_C_Setup_Widget_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.IsGuestCharacter = IsGuestCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USupportAbilityWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityWidget.SupportAbilityWidget_C.ExecuteUbergraph_SupportAbilityWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityWidget_C::ExecuteUbergraph_SupportAbilityWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityWidget_C", "ExecuteUbergraph_SupportAbilityWidget");

	Params::USupportAbilityWidget_C_ExecuteUbergraph_SupportAbilityWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


