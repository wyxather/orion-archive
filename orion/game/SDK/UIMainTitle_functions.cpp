#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UIMainTitle.UIMainTitle_C
// (None)

class UClass* UUIMainTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIMainTitle_C");

	return Clss;
}


// UIMainTitle_C UIMainTitle.Default__UIMainTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUIMainTitle_C* UUIMainTitle_C::GetDefaultObj()
{
	static class UUIMainTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIMainTitle_C*>(UUIMainTitle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIMainTitle.UIMainTitle_C.SetupNewGameForAutoPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerCharaId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::SetupNewGameForAutoPlay(int32 PlayerCharaId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "SetupNewGameForAutoPlay");

	Params::UUIMainTitle_C_SetupNewGameForAutoPlay_Params Parms{};

	Parms.PlayerCharaId = PlayerCharaId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.SetTitleScene
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTitleBase*                  Scene                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUITitleFlow            Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::SetTitleScene(class UTitleBase* Scene, enum class EUITitleFlow Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "SetTitleScene");

	Params::UUIMainTitle_C_SetTitleScene_Params Parms{};

	Parms.Scene = Scene;
	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.Debug_PrintFinishScene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUITitleFlow            Scene                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::Debug_PrintFinishScene(enum class EUITitleFlow Scene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "Debug_PrintFinishScene");

	Params::UUIMainTitle_C_Debug_PrintFinishScene_Params Parms{};

	Parms.Scene = Scene;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.Debug_PrintStartScene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUITitleFlow            Scene                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::Debug_PrintStartScene(enum class EUITitleFlow Scene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "Debug_PrintStartScene");

	Params::UUIMainTitle_C_Debug_PrintStartScene_Params Parms{};

	Parms.Scene = Scene;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.GetSceneFunction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                              InByte                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTitleBase*                  Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::GetSceneFunction(uint8 InByte, class UTitleBase** Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "GetSceneFunction");

	Params::UUIMainTitle_C_GetSceneFunction_Params Parms{};

	Parms.InByte = InByte;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function UIMainTitle.UIMainTitle_C.Debug_GetStateInfoAsString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUIMainTitle_C::Debug_GetStateInfoAsString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "Debug_GetStateInfoAsString");

	Params::UUIMainTitle_C_Debug_GetStateInfoAsString_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIMainTitle.UIMainTitle_C.ChnageTime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::ChnageTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "ChnageTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.SwitchTimeChangeUIVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::SwitchTimeChangeUIVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "SwitchTimeChangeUIVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.IsAvailableTimeChange
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUIMainTitle_C::IsAvailableTimeChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "IsAvailableTimeChange");

	Params::UUIMainTitle_C_IsAvailableTimeChange_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIMainTitle.UIMainTitle_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUIMainTitle_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "IsRunning");

	Params::UUIMainTitle_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIMainTitle.UIMainTitle_C.SetupDBAccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::SetupDBAccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "SetupDBAccess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.KickBattleUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::KickBattleUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "KickBattleUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.Set Title Scene OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTitleBase*                  Scene                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUITitleFlow            Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::Set_Title_Scene_OLD(class UTitleBase* Scene, enum class EUITitleFlow Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "Set Title Scene OLD");

	Params::UUIMainTitle_C_Set_Title_Scene_OLD_Params Parms{};

	Parms.Scene = Scene;
	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.CheckLoad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OK                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIMainTitle_C::CheckLoad(bool* OK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "CheckLoad");

	Params::UUIMainTitle_C_CheckLoad_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OK != nullptr)
		*OK = Parms.OK;

}


// Function UIMainTitle.UIMainTitle_C.SetupManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::SetupManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "SetupManager");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.SetupNextScene
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::SetupNextScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "SetupNextScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.CheckReady_DEPRECATED
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUITitleFlow            Scene                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OK                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIMainTitle_C::CheckReady_DEPRECATED(enum class EUITitleFlow Scene, bool* OK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "CheckReady_DEPRECATED");

	Params::UUIMainTitle_C_CheckReady_DEPRECATED_Params Parms{};

	Parms.Scene = Scene;

	UObject::ProcessEvent(Func, &Parms);

	if (OK != nullptr)
		*OK = Parms.OK;

}


// Function UIMainTitle.UIMainTitle_C.CheckLoadComplete
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIMainTitle_C::CheckLoadComplete(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "CheckLoadComplete");

	Params::UUIMainTitle_C_CheckLoadComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UIMainTitle.UIMainTitle_C.OnIsPlayerInput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlayerInput                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIMainTitle_C::OnIsPlayerInput(bool* IsPlayerInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnIsPlayerInput");

	Params::UUIMainTitle_C_OnIsPlayerInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlayerInput != nullptr)
		*IsPlayerInput = Parms.IsPlayerInput;

}


// Function UIMainTitle.UIMainTitle_C.InitGameParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::InitGameParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "InitGameParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.IsCompliteInitializing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIMainTitle_C::IsCompliteInitializing(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "IsCompliteInitializing");

	Params::UUIMainTitle_C_IsCompliteInitializing_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UIMainTitle.UIMainTitle_C.TitleInit
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::TitleInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "TitleInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.SetupTitleBack
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               BackSceneEnable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIMainTitle_C::SetupTitleBack(bool BackSceneEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "SetupTitleBack");

	Params::UUIMainTitle_C_SetupTitleBack_Params Parms{};

	Parms.BackSceneEnable = BackSceneEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.TitleLoadGame
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnd                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIMainTitle_C::TitleLoadGame(bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "TitleLoadGame");

	Params::UUIMainTitle_C_TitleLoadGame_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;

}


// Function UIMainTitle.UIMainTitle_C.TitleNewGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnd                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIMainTitle_C::TitleNewGame(bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "TitleNewGame");

	Params::UUIMainTitle_C_TitleNewGame_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;

}


// Function UIMainTitle.UIMainTitle_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.TickFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::TickFade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "TickFade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.TitleFadeOut
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::TitleFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "TitleFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.CreateTitleUI
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUITitleFlow            Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::CreateTitleUI(enum class EUITitleFlow Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "CreateTitleUI");

	Params::UUIMainTitle_C_CreateTitleUI_Params Parms{};

	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.FinishFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::FinishFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "FinishFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.FinishFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::FinishFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "FinishFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.DestoryTitleUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::DestoryTitleUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "DestoryTitleUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnGamePadAxisX");

	Params::UUIMainTitle_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnGamePadAxisY");

	Params::UUIMainTitle_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIMainTitle_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnListPaging");

	Params::UUIMainTitle_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "HelpScrollAxis");

	Params::UUIMainTitle_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "Tick");

	Params::UUIMainTitle_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnRightAxisX");

	Params::UUIMainTitle_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnRightAxisY");

	Params::UUIMainTitle_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnLeftAxisX");

	Params::UUIMainTitle_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnLeftAxisY");

	Params::UUIMainTitle_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "WorldMapSlowCursorX");

	Params::UUIMainTitle_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "WorldMapSlowCursorY");

	Params::UUIMainTitle_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIMainTitle.UIMainTitle_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMainTitle_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIMainTitle.UIMainTitle_C.ExecuteUbergraph_UIMainTitle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIMainTitle_C::ExecuteUbergraph_UIMainTitle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIMainTitle_C", "ExecuteUbergraph_UIMainTitle");

	Params::UUIMainTitle_C_ExecuteUbergraph_UIMainTitle_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


