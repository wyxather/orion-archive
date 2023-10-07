#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuList.MainMenuList_C
// (None)

class UClass* UMainMenuList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuList_C");

	return Clss;
}


// MainMenuList_C MainMenuList.Default__MainMenuList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuList_C* UMainMenuList_C::GetDefaultObj()
{
	static class UMainMenuList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuList_C*>(UMainMenuList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuList.MainMenuList_C.IsUIPartsRunning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsRunning                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuList_C::IsUIPartsRunning(bool* IsRunning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "IsUIPartsRunning");

	Params::UMainMenuList_C_IsUIPartsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsRunning != nullptr)
		*IsRunning = Parms.IsRunning;

}


// Function MainMenuList.MainMenuList_C.IsPlayingAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuList_C::IsPlayingAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "IsPlayingAnim");

	Params::UMainMenuList_C_IsPlayingAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function MainMenuList.MainMenuList_C.SetCursorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuList_C::SetCursorVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "SetCursorVisibility");

	Params::UMainMenuList_C_SetCursorVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuList.MainMenuList_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "Setup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.GetSelectedListPanelPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   ViewportPosition                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuList_C::GetSelectedListPanelPosition(struct FVector2D* ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "GetSelectedListPanelPosition");

	Params::UMainMenuList_C_GetSelectedListPanelPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ViewportPosition != nullptr)
		*ViewportPosition = std::move(Parms.ViewportPosition);

}


// Function MainMenuList.MainMenuList_C.CheckHolyTorch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::CheckHolyTorch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "CheckHolyTorch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.SetupMenuList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::SetupMenuList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "SetupMenuList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.Construct
// (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.GetMenuItemByType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMAINMENUSTATE          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMainMenuItemPanel_C*        MenuItem                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuList_C::GetMenuItemByType(enum class EMAINMENUSTATE Type, class UMainMenuItemPanel_C** MenuItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "GetMenuItemByType");

	Params::UMainMenuList_C_GetMenuItemByType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (MenuItem != nullptr)
		*MenuItem = Parms.MenuItem;

}


// Function MainMenuList.MainMenuList_C.IsCancelAnimationPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuList_C::IsCancelAnimationPlaying(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "IsCancelAnimationPlaying");

	Params::UMainMenuList_C_IsCancelAnimationPlaying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function MainMenuList.MainMenuList_C.InitMenuListIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::InitMenuListIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "InitMenuListIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.StopAllPanelAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::StopAllPanelAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "StopAllPanelAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.DefaultAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::DefaultAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "DefaultAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.SetCursorPosFromState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMAINMENUSTATE          MainMenuState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AnimFast                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuList_C::SetCursorPosFromState(enum class EMAINMENUSTATE MainMenuState, bool AnimFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "SetCursorPosFromState");

	Params::UMainMenuList_C_SetCursorPosFromState_Params Parms{};

	Parms.MainMenuState = MainMenuState;
	Parms.AnimFast = AnimFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuList.MainMenuList_C.SetCursorPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CursorPosition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuList_C::SetCursorPosition(int32 CursorPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "SetCursorPosition");

	Params::UMainMenuList_C_SetCursorPosition_Params Parms{};

	Parms.CursorPosition = CursorPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuList.MainMenuList_C.UpdateNewIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::UpdateNewIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "UpdateNewIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.SetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMAINMENUSTATE          MenuType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuList_C::SetEnable(enum class EMAINMENUSTATE MenuType, bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "SetEnable");

	Params::UMainMenuList_C_SetEnable_Params Parms{};

	Parms.MenuType = MenuType;
	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuList.MainMenuList_C.SetupUnEnable
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::SetupUnEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "SetupUnEnable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.NowSelectFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::NowSelectFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "NowSelectFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.NowSelectOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::NowSelectOutFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "NowSelectOutFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.GetSelectData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMainMenuItemPanel_C*        Item                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuList_C::GetSelectData(class UMainMenuItemPanel_C** Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "GetSelectData");

	Params::UMainMenuList_C_GetSelectData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function MainMenuList.MainMenuList_C.NowSelectCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuList_C::NowSelectCancel(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "NowSelectCancel");

	Params::UMainMenuList_C_NowSelectCancel_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuList.MainMenuList_C.NowSelectDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuList_C::NowSelectDecide(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "NowSelectDecide");

	Params::UMainMenuList_C_NowSelectDecide_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuList.MainMenuList_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.CloseWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "CloseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuList_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "OnAnimationFinished");

	Params::UMainMenuList_C_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuList.MainMenuList_C.OpenWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::OpenWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "OpenWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "Tick");

	Params::UMainMenuList_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuList.MainMenuList_C.InitWidgetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuList_C::InitWidgetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "InitWidgetData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuList.MainMenuList_C.OnPartyRefresh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            ENoticeType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 NoticeArgs                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainMenuList_C::OnPartyRefresh(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "OnPartyRefresh");

	Params::UMainMenuList_C_OnPartyRefresh_Params Parms{};

	Parms.ENoticeType = ENoticeType;
	Parms.NoticeArgs = NoticeArgs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuList.MainMenuList_C.ExecuteUbergraph_MainMenuList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuList_C::ExecuteUbergraph_MainMenuList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuList_C", "ExecuteUbergraph_MainMenuList");

	Params::UMainMenuList_C_ExecuteUbergraph_MainMenuList_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


