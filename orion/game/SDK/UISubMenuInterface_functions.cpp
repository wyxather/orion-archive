#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass UISubMenuInterface.UISubMenuInterface_C
// (None)

class UClass* IUISubMenuInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UISubMenuInterface_C");

	return Clss;
}


// UISubMenuInterface_C UISubMenuInterface.Default__UISubMenuInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IUISubMenuInterface_C* IUISubMenuInterface_C::GetDefaultObj()
{
	static class IUISubMenuInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IUISubMenuInterface_C*>(IUISubMenuInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UISubMenuInterface.UISubMenuInterface_C.SubMenu_WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUISubMenuInterface_C::SubMenu_WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "SubMenu_WorldMapSlowCursorY");

	Params::IUISubMenuInterface_C_SubMenu_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UISubMenuInterface.UISubMenuInterface_C.SubMenu_WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUISubMenuInterface_C::SubMenu_WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "SubMenu_WorldMapSlowCursorX");

	Params::IUISubMenuInterface_C_SubMenu_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UISubMenuInterface.UISubMenuInterface_C.SubMenu_WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUISubMenuInterface_C::SubMenu_WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "SubMenu_WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UISubMenuInterface.UISubMenuInterface_C.SubMenu_WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUISubMenuInterface_C::SubMenu_WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "SubMenu_WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UISubMenuInterface.UISubMenuInterface_C.GetGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUISubMenuInterface_C::GetGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "GetGamePadAxisY");

	Params::IUISubMenuInterface_C_GetGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UISubMenuInterface.UISubMenuInterface_C.GetGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUISubMenuInterface_C::GetGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "GetGamePadAxisX");

	Params::IUISubMenuInterface_C_GetGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UISubMenuInterface.UISubMenuInterface_C.RBMenuRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUISubMenuInterface_C::RBMenuRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "RBMenuRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UISubMenuInterface.UISubMenuInterface_C.RightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUISubMenuInterface_C::RightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "RightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UISubMenuInterface.UISubMenuInterface_C.RightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUISubMenuInterface_C::RightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "RightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UISubMenuInterface.UISubMenuInterface_C.GetLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUISubMenuInterface_C::GetLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "GetLeftAxisY");

	Params::IUISubMenuInterface_C_GetLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UISubMenuInterface.UISubMenuInterface_C.GetLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUISubMenuInterface_C::GetLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "GetLeftAxisX");

	Params::IUISubMenuInterface_C_GetLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UISubMenuInterface.UISubMenuInterface_C.RBMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUISubMenuInterface_C::RBMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "RBMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UISubMenuInterface.UISubMenuInterface_C.GetRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUISubMenuInterface_C::GetRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "GetRightAxisY");

	Params::IUISubMenuInterface_C_GetRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UISubMenuInterface.UISubMenuInterface_C.GetRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUISubMenuInterface_C::GetRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "GetRightAxisX");

	Params::IUISubMenuInterface_C_GetRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UISubMenuInterface.UISubMenuInterface_C.GetMenuRelativePos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   RelativePos                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUISubMenuInterface_C::GetMenuRelativePos(struct FVector2D* RelativePos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "GetMenuRelativePos");

	Params::IUISubMenuInterface_C_GetMenuRelativePos_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RelativePos != nullptr)
		*RelativePos = std::move(Parms.RelativePos);

}


// Function UISubMenuInterface.UISubMenuInterface_C.OnHelpMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUISubMenuInterface_C::OnHelpMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "OnHelpMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UISubMenuInterface.UISubMenuInterface_C.CancelMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IUISubMenuInterface_C::CancelMenu(bool* ReturnState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "CancelMenu");

	Params::IUISubMenuInterface_C_CancelMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnState != nullptr)
		*ReturnState = Parms.ReturnState;

}


// Function UISubMenuInterface.UISubMenuInterface_C.DecideMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NextState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IUISubMenuInterface_C::DecideMenu(bool* NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "DecideMenu");

	Params::IUISubMenuInterface_C_DecideMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextState != nullptr)
		*NextState = Parms.NextState;

}


// Function UISubMenuInterface.UISubMenuInterface_C.CursorLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuCancel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IUISubMenuInterface_C::CursorLeft(bool* MenuCancel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "CursorLeft");

	Params::IUISubMenuInterface_C_CursorLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuCancel != nullptr)
		*MenuCancel = Parms.MenuCancel;

}


// Function UISubMenuInterface.UISubMenuInterface_C.CursorRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuDecide                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IUISubMenuInterface_C::CursorRight(bool* MenuDecide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "CursorRight");

	Params::IUISubMenuInterface_C_CursorRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuDecide != nullptr)
		*MenuDecide = Parms.MenuDecide;

}


// Function UISubMenuInterface.UISubMenuInterface_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUISubMenuInterface_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UISubMenuInterface.UISubMenuInterface_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUISubMenuInterface_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UISubMenuInterface.UISubMenuInterface_C.FocusMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUISubMenuInterface_C::FocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "FocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UISubMenuInterface.UISubMenuInterface_C.OutFocusMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUISubMenuInterface_C::OutFocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "OutFocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UISubMenuInterface.UISubMenuInterface_C.GetCursorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IUISubMenuInterface_C::GetCursorPosition(struct FVector2D* Position, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UISubMenuInterface_C", "GetCursorPosition");

	Params::IUISubMenuInterface_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}

}


