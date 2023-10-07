#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MenuFooter.MenuFooter_C
// (None)

class UClass* UMenuFooter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuFooter_C");

	return Clss;
}


// MenuFooter_C MenuFooter.Default__MenuFooter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuFooter_C* UMenuFooter_C::GetDefaultObj()
{
	static class UMenuFooter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuFooter_C*>(UMenuFooter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuFooter.MenuFooter_C.IsUIPartsRunning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsRunning                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuFooter_C::IsUIPartsRunning(bool* IsRunning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "IsUIPartsRunning");

	Params::UMenuFooter_C_IsUIPartsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsRunning != nullptr)
		*IsRunning = Parms.IsRunning;

}


// Function MenuFooter.MenuFooter_C.IsPlayingAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuFooter_C::IsPlayingAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "IsPlayingAnim");

	Params::UMenuFooter_C_IsPlayingAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function MenuFooter.MenuFooter_C.TextBranchByPlatform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OutLabel                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuFooter_C::TextBranchByPlatform(class FName Label, class FName* OutLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "TextBranchByPlatform");

	Params::UMenuFooter_C_TextBranchByPlatform_Params Parms{};

	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLabel != nullptr)
		*OutLabel = Parms.OutLabel;

}


// Function MenuFooter.MenuFooter_C.GetCurrentGuideData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FGuideData>          OutGuideData                                                     (Parm, OutParm)

void UMenuFooter_C::GetCurrentGuideData(TArray<struct FGuideData>* OutGuideData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "GetCurrentGuideData");

	Params::UMenuFooter_C_GetCurrentGuideData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutGuideData != nullptr)
		*OutGuideData = std::move(Parms.OutGuideData);

}


// Function MenuFooter.MenuFooter_C.SetHelpGameTextLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuFooter_C::SetHelpGameTextLabel(class FName InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "SetHelpGameTextLabel");

	Params::UMenuFooter_C_SetHelpGameTextLabel_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuFooter.MenuFooter_C.PushGuideData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGuideData>          PushGudeData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMenuFooter_C::PushGuideData(TArray<struct FGuideData>& PushGudeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "PushGuideData");

	Params::UMenuFooter_C_PushGuideData_Params Parms{};

	Parms.PushGudeData = PushGudeData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuFooter.MenuFooter_C.SetHideButtonType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class ECONTROL_GUIDE_BUTTON_TYPE>ButtonType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMenuFooter_C::SetHideButtonType(TArray<enum class ECONTROL_GUIDE_BUTTON_TYPE>& ButtonType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "SetHideButtonType");

	Params::UMenuFooter_C_SetHideButtonType_Params Parms{};

	Parms.ButtonType = ButtonType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuFooter.MenuFooter_C.RefreshGuideData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGuideData>          Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMenuFooter_C::RefreshGuideData(TArray<struct FGuideData>& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "RefreshGuideData");

	Params::UMenuFooter_C_RefreshGuideData_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuFooter.MenuFooter_C.ClearPushGuideData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuFooter_C::ClearPushGuideData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "ClearPushGuideData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuFooter.MenuFooter_C.HelpUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuFooter_C::HelpUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "HelpUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuFooter.MenuFooter_C.ChangeText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GuideID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewTextLabe                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuFooter_C::ChangeText(int32 GuideID, class FName NewTextLabe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "ChangeText");

	Params::UMenuFooter_C_ChangeText_Params Parms{};

	Parms.GuideID = GuideID;
	Parms.NewTextLabe = NewTextLabe;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuFooter.MenuFooter_C.InitWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuFooter_C::InitWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "InitWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuFooter.MenuFooter_C.PopGudeData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuFooter_C::PopGudeData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "PopGudeData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuFooter.MenuFooter_C.RefreshHideButtonType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RefreshTypeOnly                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuFooter_C::RefreshHideButtonType(bool RefreshTypeOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "RefreshHideButtonType");

	Params::UMenuFooter_C_RefreshHideButtonType_Params Parms{};

	Parms.RefreshTypeOnly = RefreshTypeOnly;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuFooter.MenuFooter_C.SetVisibleTextAndGuide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuFooter_C::SetVisibleTextAndGuide(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "SetVisibleTextAndGuide");

	Params::UMenuFooter_C_SetVisibleTextAndGuide_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuFooter.MenuFooter_C.ResetAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuFooter_C::ResetAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "ResetAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuFooter.MenuFooter_C.SetTextOffset
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuFooter_C::SetTextOffset(float Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "SetTextOffset");

	Params::UMenuFooter_C_SetTextOffset_Params Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuFooter.MenuFooter_C.UpdateMoveText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuFooter_C::UpdateMoveText(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "UpdateMoveText");

	Params::UMenuFooter_C_UpdateMoveText_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuFooter.MenuFooter_C.CheckMoveText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuFooter_C::CheckMoveText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "CheckMoveText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuFooter.MenuFooter_C.CalcHelpTextSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuFooter_C::CalcHelpTextSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "CalcHelpTextSize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuFooter.MenuFooter_C.CalcRightSpaceSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuFooter_C::CalcRightSpaceSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "CalcRightSpaceSize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuFooter.MenuFooter_C.CalcLeftSpaceSize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuFooter_C::CalcLeftSpaceSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "CalcLeftSpaceSize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuFooter.MenuFooter_C.CalcMoveTextInfo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuFooter_C::CalcMoveTextInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "CalcMoveTextInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuFooter.MenuFooter_C.SetHelpText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UMenuFooter_C::SetHelpText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "SetHelpText");

	Params::UMenuFooter_C_SetHelpText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuFooter.MenuFooter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMenuFooter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuFooter.MenuFooter_C.OpenWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuFooter_C::OpenWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "OpenWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuFooter.MenuFooter_C.CloseWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuFooter_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "CloseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuFooter.MenuFooter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuFooter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "Tick");

	Params::UMenuFooter_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuFooter.MenuFooter_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuFooter_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "ChangeInputMode");

	Params::UMenuFooter_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuFooter.MenuFooter_C.InitWidgetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuFooter_C::InitWidgetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "InitWidgetData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuFooter.MenuFooter_C.ExecuteUbergraph_MenuFooter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuFooter_C::ExecuteUbergraph_MenuFooter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuFooter_C", "ExecuteUbergraph_MenuFooter");

	Params::UMenuFooter_C_ExecuteUbergraph_MenuFooter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


