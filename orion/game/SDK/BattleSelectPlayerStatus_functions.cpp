#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleSelectPlayerStatus.BattleSelectPlayerStatus_C
// (None)

class UClass* UBattleSelectPlayerStatus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleSelectPlayerStatus_C");

	return Clss;
}


// BattleSelectPlayerStatus_C BattleSelectPlayerStatus.Default__BattleSelectPlayerStatus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleSelectPlayerStatus_C* UBattleSelectPlayerStatus_C::GetDefaultObj()
{
	static class UBattleSelectPlayerStatus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleSelectPlayerStatus_C*>(UBattleSelectPlayerStatus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.CalcHpRatio
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSelectPlayerStatus_C::CalcHpRatio(float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "CalcHpRatio");

	Params::UBattleSelectPlayerStatus_C_CalcHpRatio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.GetBoostGaugeLoopTime
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBattleSelectPlayerStatus_C::GetBoostGaugeLoopTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "GetBoostGaugeLoopTime");

	Params::UBattleSelectPlayerStatus_C_GetBoostGaugeLoopTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.UpdateTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HPRatio                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MPRatio                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HPDecRatio                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSelectPlayerStatus_C::UpdateTextColor(float HPRatio, float MPRatio, float HPDecRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "UpdateTextColor");

	Params::UBattleSelectPlayerStatus_C_UpdateTextColor_Params Parms{};

	Parms.HPRatio = HPRatio;
	Parms.MPRatio = MPRatio;
	Parms.HPDecRatio = HPDecRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.SetPotentialityVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSelectPlayerStatus_C::SetPotentialityVisibility(enum class ESlateVisibility Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "SetPotentialityVisibility");

	Params::UBattleSelectPlayerStatus_C_SetPotentialityVisibility_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.SetPositionOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   InOffset                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSelectPlayerStatus_C::SetPositionOffset(const struct FVector2D& InOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "SetPositionOffset");

	Params::UBattleSelectPlayerStatus_C_SetPositionOffset_Params Parms{};

	Parms.InOffset = InOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.ReleasePotentialityAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::ReleasePotentialityAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "ReleasePotentialityAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.IsGuestCharacter
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsGuest                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSelectPlayerStatus_C::IsGuestCharacter(bool* IsGuest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "IsGuestCharacter");

	Params::UBattleSelectPlayerStatus_C_IsGuestCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsGuest != nullptr)
		*IsGuest = Parms.IsGuest;

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.Revival
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::Revival()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "Revival");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.Update Potentiality Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::Update_Potentiality_Action()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "Update Potentiality Action");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.DebuffIconChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::DebuffIconChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "DebuffIconChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.BuffIconChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::BuffIconChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "BuffIconChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.UpdateIconLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              IconLoopAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSelectPlayerStatus_C::UpdateIconLoop(float IconLoopAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "UpdateIconLoop");

	Params::UBattleSelectPlayerStatus_C_UpdateIconLoop_Params Parms{};

	Parms.IconLoopAlpha = IconLoopAlpha;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.ChangeFatalPoisonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::ChangeFatalPoisonIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "ChangeFatalPoisonIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.AddNewDisease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSelectPlayerStatus_C::AddNewDisease(enum class EDISEASE_TYPE DiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "AddNewDisease");

	Params::UBattleSelectPlayerStatus_C_AddNewDisease_Params Parms{};

	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.SettingPlayerDebuffIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::SettingPlayerDebuffIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "SettingPlayerDebuffIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.SettingPlayerBuffIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::SettingPlayerBuffIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "SettingPlayerBuffIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.PlayDarkenExclusionEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::PlayDarkenExclusionEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "PlayDarkenExclusionEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.Play Darken End for Harden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::Play_Darken_End_for_Harden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "Play Darken End for Harden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.Play Darken for Exclusion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::Play_Darken_for_Exclusion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "Play Darken for Exclusion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.Play Darken for Harden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::Play_Darken_for_Harden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "Play Darken for Harden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.SetPlayerStatusVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSelectPlayerStatus_C::SetPlayerStatusVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "SetPlayerStatusVisible");

	Params::UBattleSelectPlayerStatus_C_SetPlayerStatusVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.CallBackDebuffIconChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::CallBackDebuffIconChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "CallBackDebuffIconChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.CallBackBuffIconChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::CallBackBuffIconChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "CallBackBuffIconChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.SetupDiseaseIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FExecDiseaseHandler> DiseaseList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UBuffIcon_C*>         IconList                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              StartIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSelectPlayerStatus_C::SetupDiseaseIcon(TArray<struct FExecDiseaseHandler>& DiseaseList, TArray<class UBuffIcon_C*>& IconList, int32 StartIndex, bool Instant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "SetupDiseaseIcon");

	Params::UBattleSelectPlayerStatus_C_SetupDiseaseIcon_Params Parms{};

	Parms.DiseaseList = DiseaseList;
	Parms.IconList = IconList;
	Parms.StartIndex = StartIndex;
	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.SortDiseaseByCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FExecDiseaseHandler> DiseaseList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FExecDiseaseHandler> Result                                                           (Parm, OutParm, ContainsInstancedReference)

void UBattleSelectPlayerStatus_C::SortDiseaseByCount(TArray<struct FExecDiseaseHandler>& DiseaseList, TArray<struct FExecDiseaseHandler>* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "SortDiseaseByCount");

	Params::UBattleSelectPlayerStatus_C_SortDiseaseByCount_Params Parms{};

	Parms.DiseaseList = DiseaseList;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.AddDiseaseIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  IconTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSelectPlayerStatus_C::AddDiseaseIcon(enum class EDISEASE_TYPE DiseaseType, class UTexture2D* IconTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "AddDiseaseIcon");

	Params::UBattleSelectPlayerStatus_C_AddDiseaseIcon_Params Parms{};

	Parms.DiseaseType = DiseaseType;
	Parms.IconTexture = IconTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.SetLanguage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::SetLanguage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "SetLanguage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.EndPlayerTurn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::EndPlayerTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "EndPlayerTurn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.StartPlayerTurn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::StartPlayerTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "StartPlayerTurn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.UpdateBoost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::UpdateBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "UpdateBoost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.UpdateStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::UpdateStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "UpdateStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Boost                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSelectPlayerStatus_C::Update(bool Status, bool Boost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "Update");

	Params::UBattleSelectPlayerStatus_C_Update_Params Parms{};

	Parms.Status = Status;
	Parms.Boost = Boost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.CloseStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::CloseStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "CloseStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.LoopStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::LoopStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "LoopStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.OpenStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::OpenStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "OpenStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.InitPlayerStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattlePlayerBP_C*           Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSelectPlayerStatus_C::InitPlayerStatus(class ABattlePlayerBP_C* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "InitPlayerStatus");

	Params::UBattleSelectPlayerStatus_C_InitPlayerStatus_Params Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.OnResolutionChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleSelectPlayerStatus_C::OnResolutionChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "OnResolutionChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSelectPlayerStatus.BattleSelectPlayerStatus_C.ExecuteUbergraph_BattleSelectPlayerStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSelectPlayerStatus_C::ExecuteUbergraph_BattleSelectPlayerStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSelectPlayerStatus_C", "ExecuteUbergraph_BattleSelectPlayerStatus");

	Params::UBattleSelectPlayerStatus_C_ExecuteUbergraph_BattleSelectPlayerStatus_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


