#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattlePreparationHelpWindow.BattlePreparationHelpWindow_C
// (None)

class UClass* UBattlePreparationHelpWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePreparationHelpWindow_C");

	return Clss;
}


// BattlePreparationHelpWindow_C BattlePreparationHelpWindow.Default__BattlePreparationHelpWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePreparationHelpWindow_C* UBattlePreparationHelpWindow_C::GetDefaultObj()
{
	static class UBattlePreparationHelpWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePreparationHelpWindow_C*>(UBattlePreparationHelpWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.IsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Active                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePreparationHelpWindow_C::IsActive(bool* Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "IsActive");

	Params::UBattlePreparationHelpWindow_C_IsActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.RemovePreparationDataAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePreparationHelpWindow_C::RemovePreparationDataAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "RemovePreparationDataAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.UpdatePreparationData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPreparationData            PreparationData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Reset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePreparationHelpWindow_C::UpdatePreparationData(const struct FPreparationData& PreparationData, bool Reset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "UpdatePreparationData");

	Params::UBattlePreparationHelpWindow_C_UpdatePreparationData_Params Parms{};

	Parms.PreparationData = PreparationData;
	Parms.Reset = Reset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.RemovePreparationData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePreparationHelpWindow_C::RemovePreparationData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "RemovePreparationData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.SetBuildUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBuildUp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePreparationHelpWindow_C::SetBuildUp(bool IsBuildUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "SetBuildUp");

	Params::UBattlePreparationHelpWindow_C_SetBuildUp_Params Parms{};

	Parms.IsBuildUp = IsBuildUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.OpenMoney
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePreparationHelpWindow_C::OpenMoney()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "OpenMoney");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.OpenPreparation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePreparationHelpWindow_C::OpenPreparation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "OpenPreparation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.ResetParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePreparationHelpWindow_C::ResetParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "ResetParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.Set Spread
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSpread                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePreparationHelpWindow_C::Set_Spread(bool IsSpread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "Set Spread");

	Params::UBattlePreparationHelpWindow_C_Set_Spread_Params Parms{};

	Parms.IsSpread = IsSpread;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.Set Preparation Title Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECOMMAND_SUB_MENU_TYPE  Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePreparationHelpWindow_C::Set_Preparation_Title_Data(int32 Count, enum class ECOMMAND_SUB_MENU_TYPE Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "Set Preparation Title Data");

	Params::UBattlePreparationHelpWindow_C_Set_Preparation_Title_Data_Params Parms{};

	Parms.Count = Count;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.SetPreparationData_New
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPreparationData            PreparationData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBattlePreparationHelpWindow_C::SetPreparationData_New(const struct FPreparationData& PreparationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "SetPreparationData_New");

	Params::UBattlePreparationHelpWindow_C_SetPreparationData_New_Params Parms{};

	Parms.PreparationData = PreparationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.SetMoneyData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePreparationHelpWindow_C::SetMoneyData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "SetMoneyData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.CloseHelpWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PREPARATION                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePreparationHelpWindow_C::CloseHelpWindow(bool PREPARATION)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "CloseHelpWindow");

	Params::UBattlePreparationHelpWindow_C_CloseHelpWindow_Params Parms{};

	Parms.PREPARATION = PREPARATION;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.Open Help Window
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PREPARATION                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePreparationHelpWindow_C::Open_Help_Window(bool PREPARATION)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "Open Help Window");

	Params::UBattlePreparationHelpWindow_C_Open_Help_Window_Params Parms{};

	Parms.PREPARATION = PREPARATION;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.SetHelpWindowVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePreparationHelpWindow_C::SetHelpWindowVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "SetHelpWindowVisible");

	Params::UBattlePreparationHelpWindow_C_SetHelpWindowVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.SetPreparationData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAbilityDataBase            MenuItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              PreparationID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePreparationHelpWindow_C::SetPreparationData(const struct FAbilityDataBase& MenuItem, int32 PreparationID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "SetPreparationData");

	Params::UBattlePreparationHelpWindow_C_SetPreparationData_Params Parms{};

	Parms.MenuItem = MenuItem;
	Parms.PreparationID = PreparationID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePreparationHelpWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePreparationHelpWindow.BattlePreparationHelpWindow_C.ExecuteUbergraph_BattlePreparationHelpWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePreparationHelpWindow_C::ExecuteUbergraph_BattlePreparationHelpWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePreparationHelpWindow_C", "ExecuteUbergraph_BattlePreparationHelpWindow");

	Params::UBattlePreparationHelpWindow_C_ExecuteUbergraph_BattlePreparationHelpWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


