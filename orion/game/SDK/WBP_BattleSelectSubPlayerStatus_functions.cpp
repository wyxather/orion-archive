#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C
// (None)

class UClass* UWBP_BattleSelectSubPlayerStatus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BattleSelectSubPlayerStatus_C");

	return Clss;
}


// WBP_BattleSelectSubPlayerStatus_C WBP_BattleSelectSubPlayerStatus.Default__WBP_BattleSelectSubPlayerStatus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BattleSelectSubPlayerStatus_C* UWBP_BattleSelectSubPlayerStatus_C::GetDefaultObj()
{
	static class UWBP_BattleSelectSubPlayerStatus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BattleSelectSubPlayerStatus_C*>(UWBP_BattleSelectSubPlayerStatus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.SettingPlayerDebuffIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::SettingPlayerDebuffIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "SettingPlayerDebuffIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.SettingPlayerBuffIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::SettingPlayerBuffIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "SettingPlayerBuffIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.AddNewDisease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleSelectSubPlayerStatus_C::AddNewDisease(enum class EDISEASE_TYPE DiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "AddNewDisease");

	Params::UWBP_BattleSelectSubPlayerStatus_C_AddNewDisease_Params Parms{};

	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.SetupDiseaseIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FExecDiseaseHandler> DiseaseList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UBuffIcon_C*>         IconList                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              StartIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BattleSelectSubPlayerStatus_C::SetupDiseaseIcon(TArray<struct FExecDiseaseHandler>& DiseaseList, TArray<class UBuffIcon_C*>& IconList, int32 StartIndex, bool Instant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "SetupDiseaseIcon");

	Params::UWBP_BattleSelectSubPlayerStatus_C_SetupDiseaseIcon_Params Parms{};

	Parms.DiseaseList = DiseaseList;
	Parms.IconList = IconList;
	Parms.StartIndex = StartIndex;
	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.SortDiseaseByCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FExecDiseaseHandler> DiseaseList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FExecDiseaseHandler> Result                                                           (Parm, OutParm, ContainsInstancedReference)

void UWBP_BattleSelectSubPlayerStatus_C::SortDiseaseByCount(TArray<struct FExecDiseaseHandler>& DiseaseList, TArray<struct FExecDiseaseHandler>* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "SortDiseaseByCount");

	Params::UWBP_BattleSelectSubPlayerStatus_C_SortDiseaseByCount_Params Parms{};

	Parms.DiseaseList = DiseaseList;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.SetOrderIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::SetOrderIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "SetOrderIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.GetBoostGaugeLoopTime
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWBP_BattleSelectSubPlayerStatus_C::GetBoostGaugeLoopTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "GetBoostGaugeLoopTime");

	Params::UWBP_BattleSelectSubPlayerStatus_C_GetBoostGaugeLoopTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.SetPotentialityVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleSelectSubPlayerStatus_C::SetPotentialityVisibility(enum class ESlateVisibility Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "SetPotentialityVisibility");

	Params::UWBP_BattleSelectSubPlayerStatus_C_SetPotentialityVisibility_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.SetPositionOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   InOffset                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleSelectSubPlayerStatus_C::SetPositionOffset(const struct FVector2D& InOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "SetPositionOffset");

	Params::UWBP_BattleSelectSubPlayerStatus_C_SetPositionOffset_Params Parms{};

	Parms.InOffset = InOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.ReleasePotentialityAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::ReleasePotentialityAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "ReleasePotentialityAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.IsGuestCharacter
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsGuest                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BattleSelectSubPlayerStatus_C::IsGuestCharacter(bool* IsGuest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "IsGuestCharacter");

	Params::UWBP_BattleSelectSubPlayerStatus_C_IsGuestCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsGuest != nullptr)
		*IsGuest = Parms.IsGuest;

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.Revival
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::Revival()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "Revival");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.Update Potentiality Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::Update_Potentiality_Action()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "Update Potentiality Action");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.PlayDarkenExclusionEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::PlayDarkenExclusionEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "PlayDarkenExclusionEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.Play Darken End for Harden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::Play_Darken_End_for_Harden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "Play Darken End for Harden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.Play Darken for Exclusion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::Play_Darken_for_Exclusion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "Play Darken for Exclusion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.Play Darken for Harden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::Play_Darken_for_Harden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "Play Darken for Harden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.SetPlayerStatusVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BattleSelectSubPlayerStatus_C::SetPlayerStatusVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "SetPlayerStatusVisible");

	Params::UWBP_BattleSelectSubPlayerStatus_C_SetPlayerStatusVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.EndPlayerTurn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::EndPlayerTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "EndPlayerTurn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.StartPlayerTurn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::StartPlayerTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "StartPlayerTurn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.UpdateBoost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::UpdateBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "UpdateBoost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.UpdateStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::UpdateStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "UpdateStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Boost                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BattleSelectSubPlayerStatus_C::Update(bool Status, bool Boost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "Update");

	Params::UWBP_BattleSelectSubPlayerStatus_C_Update_Params Parms{};

	Parms.Status = Status;
	Parms.Boost = Boost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.CloseStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::CloseStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "CloseStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.LoopStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::LoopStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "LoopStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.OpenStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::OpenStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "OpenStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.InitPlayerStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattlePlayerBP_C*           Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleSelectSubPlayerStatus_C::InitPlayerStatus(class ABattlePlayerBP_C* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "InitPlayerStatus");

	Params::UWBP_BattleSelectSubPlayerStatus_C_InitPlayerStatus_Params Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BattleSelectSubPlayerStatus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BattleSelectSubPlayerStatus.WBP_BattleSelectSubPlayerStatus_C.ExecuteUbergraph_WBP_BattleSelectSubPlayerStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleSelectSubPlayerStatus_C::ExecuteUbergraph_WBP_BattleSelectSubPlayerStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_BattleSelectSubPlayerStatus_C", "ExecuteUbergraph_WBP_BattleSelectSubPlayerStatus");

	Params::UWBP_BattleSelectSubPlayerStatus_C_ExecuteUbergraph_WBP_BattleSelectSubPlayerStatus_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


