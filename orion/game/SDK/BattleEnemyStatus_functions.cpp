#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleEnemyStatus.BattleEnemyStatus_C
// (None)

class UClass* UBattleEnemyStatus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEnemyStatus_C");

	return Clss;
}


// BattleEnemyStatus_C BattleEnemyStatus.Default__BattleEnemyStatus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEnemyStatus_C* UBattleEnemyStatus_C::GetDefaultObj()
{
	static class UBattleEnemyStatus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEnemyStatus_C*>(UBattleEnemyStatus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEnemyStatus.BattleEnemyStatus_C.InitializeStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::InitializeStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "InitializeStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.InitializeShuffleParameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::InitializeShuffleParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "InitializeShuffleParameter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.DebugForceEnemyNameVisble
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::DebugForceEnemyNameVisble()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "DebugForceEnemyNameVisble");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetIsUnableAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUnableAttack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleEnemyStatus_C::SetIsUnableAttack(bool IsUnableAttack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetIsUnableAttack");

	Params::UBattleEnemyStatus_C_SetIsUnableAttack_Params Parms{};

	Parms.IsUnableAttack = IsUnableAttack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   InPosition                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEnemyStatus_C::SetPosition(const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetPosition");

	Params::UBattleEnemyStatus_C_SetPosition_Params Parms{};

	Parms.InPosition = InPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.UpdatePoisonIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::UpdatePoisonIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "UpdatePoisonIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.CloseWeakPoison
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::CloseWeakPoison()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "CloseWeakPoison");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.OpenWeakPoison
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEnemyStatus_C::OpenWeakPoison(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "OpenWeakPoison");

	Params::UBattleEnemyStatus_C_OpenWeakPoison_Params Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetBribeMoney
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Money                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Negotiate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Enough_Money                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleEnemyStatus_C::SetBribeMoney(int32 Money, bool Negotiate, bool Enough_Money)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetBribeMoney");

	Params::UBattleEnemyStatus_C_SetBribeMoney_Params Parms{};

	Parms.Money = Money;
	Parms.Negotiate = Negotiate;
	Parms.Enough_Money = Enough_Money;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.DiseaseIconChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::DiseaseIconChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "DiseaseIconChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.UpdateIconLoop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              IconLoopAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEnemyStatus_C::UpdateIconLoop(float IconLoopAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "UpdateIconLoop");

	Params::UBattleEnemyStatus_C_UpdateIconLoop_Params Parms{};

	Parms.IconLoopAlpha = IconLoopAlpha;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetSuccessRateVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleEnemyStatus_C::SetSuccessRateVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetSuccessRateVisible");

	Params::UBattleEnemyStatus_C_SetSuccessRateVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetTameMonsterRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              RateValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEnemyStatus_C::SetTameMonsterRate(bool Visible, bool Enable, int32 RateValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetTameMonsterRate");

	Params::UBattleEnemyStatus_C_SetTameMonsterRate_Params Parms{};

	Parms.Visible = Visible;
	Parms.Enable = Enable;
	Parms.RateValue = RateValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetStealMoneyRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Settled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              RateValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEnemyStatus_C::SetStealMoneyRate(bool Visible, bool Settled, bool Enable, int32 RateValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetStealMoneyRate");

	Params::UBattleEnemyStatus_C_SetStealMoneyRate_Params Parms{};

	Parms.Visible = Visible;
	Parms.Settled = Settled;
	Parms.Enable = Enable;
	Parms.RateValue = RateValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetStealItemRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Settled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              RateValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEnemyStatus_C::SetStealItemRate(bool Visible, bool Settled, bool Enable, int32 RateValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetStealItemRate");

	Params::UBattleEnemyStatus_C_SetStealItemRate_Params Parms{};

	Parms.Visible = Visible;
	Parms.Settled = Settled;
	Parms.Enable = Enable;
	Parms.RateValue = RateValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.AddNewDisease
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEnemyStatus_C::AddNewDisease(enum class EDISEASE_TYPE& DiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "AddNewDisease");

	Params::UBattleEnemyStatus_C_AddNewDisease_Params Parms{};

	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetEnemyNameVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleEnemyStatus_C::SetEnemyNameVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetEnemyNameVisible");

	Params::UBattleEnemyStatus_C_SetEnemyNameVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.CallBackWeakLockAnimFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::CallBackWeakLockAnimFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "CallBackWeakLockAnimFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.PlayWeakChangeOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::PlayWeakChangeOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "PlayWeakChangeOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetWeakChangeIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::SetWeakChangeIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetWeakChangeIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.PlayWeakChangeClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::PlayWeakChangeClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "PlayWeakChangeClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.PlayShieldChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChangeValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEnemyStatus_C::PlayShieldChange(int32 ChangeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "PlayShieldChange");

	Params::UBattleEnemyStatus_C_PlayShieldChange_Params Parms{};

	Parms.ChangeValue = ChangeValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetupDiseaseIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FExecDiseaseHandler> DiseaseList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UBuffIcon_C*>         Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              StartPageIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleEnemyStatus_C::SetupDiseaseIcon(TArray<struct FExecDiseaseHandler>& DiseaseList, TArray<class UBuffIcon_C*>& Icon, int32 StartPageIndex, bool Instant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetupDiseaseIcon");

	Params::UBattleEnemyStatus_C_SetupDiseaseIcon_Params Parms{};

	Parms.DiseaseList = DiseaseList;
	Parms.Icon = Icon;
	Parms.StartPageIndex = StartPageIndex;
	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.CallBackBuffIconChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::CallBackBuffIconChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "CallBackBuffIconChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SortDisease by Count
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FExecDiseaseHandler> DeiseaseList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FExecDiseaseHandler> Result                                                           (Parm, OutParm, ContainsInstancedReference)

void UBattleEnemyStatus_C::SortDisease_by_Count(TArray<struct FExecDiseaseHandler>& DeiseaseList, TArray<struct FExecDiseaseHandler>* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SortDisease by Count");

	Params::UBattleEnemyStatus_C_SortDisease_by_Count_Params Parms{};

	Parms.DeiseaseList = DeiseaseList;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.CheckWeaknessOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              WeakBitmask                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AttributeIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleEnemyStatus_C::CheckWeaknessOpen(int32 WeakBitmask, int32 AttributeIndex, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "CheckWeaknessOpen");

	Params::UBattleEnemyStatus_C_CheckWeaknessOpen_Params Parms{};

	Parms.WeakBitmask = WeakBitmask;
	Parms.AttributeIndex = AttributeIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetupWeakLock
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       WeaponLock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<bool>                       AttributeLock                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleEnemyStatus_C::SetupWeakLock(TArray<bool>& WeaponLock, TArray<bool>& AttributeLock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetupWeakLock");

	Params::UBattleEnemyStatus_C_SetupWeakLock_Params Parms{};

	Parms.WeaponLock = WeaponLock;
	Parms.AttributeLock = AttributeLock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.GetWeakOpenStatus
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       WeaknessOpen                                                     (Parm, OutParm)

void UBattleEnemyStatus_C::GetWeakOpenStatus(TArray<bool>* WeaknessOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "GetWeakOpenStatus");

	Params::UBattleEnemyStatus_C_GetWeakOpenStatus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WeaknessOpen != nullptr)
		*WeaknessOpen = std::move(Parms.WeaknessOpen);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.OpenWeakIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Preparation2nd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              AttributeIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEnemyStatus_C::OpenWeakIcon(int32 Index, bool Preparation2nd, int32* AttributeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "OpenWeakIcon");

	Params::UBattleEnemyStatus_C_OpenWeakIcon_Params Parms{};

	Parms.Index = Index;
	Parms.Preparation2nd = Preparation2nd;

	UObject::ProcessEvent(Func, &Parms);

	if (AttributeIndex != nullptr)
		*AttributeIndex = Parms.AttributeIndex;

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.GetNameColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FSlateColor UBattleEnemyStatus_C::GetNameColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "GetNameColor");

	Params::UBattleEnemyStatus_C_GetNameColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.ResetDiseaseIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::ResetDiseaseIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "ResetDiseaseIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetLanguage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::SetLanguage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetLanguage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.UpdateDiseaseIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::UpdateDiseaseIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "UpdateDiseaseIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.ResumeBreak
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::ResumeBreak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "ResumeBreak");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.PlayBreak
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::PlayBreak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "PlayBreak");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.UpdateAttackAttribute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       AttributeList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleEnemyStatus_C::UpdateAttackAttribute(TArray<bool>& AttributeList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "UpdateAttackAttribute");

	Params::UBattleEnemyStatus_C_UpdateAttackAttribute_Params Parms{};

	Parms.AttributeList = AttributeList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetupWeakIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::SetupWeakIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetupWeakIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.UpdateWeakList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::UpdateWeakList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "UpdateWeakList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.CloseEnemyStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::CloseEnemyStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "CloseEnemyStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.OpenEnemyStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::OpenEnemyStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "OpenEnemyStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetEnemySelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleEnemyStatus_C::SetEnemySelect(bool Select)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetEnemySelect");

	Params::UBattleEnemyStatus_C_SetEnemySelect_Params Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.SetupCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleEnemyBP_C*            Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEnemyStatus_C::SetupCharacter(class ABattleEnemyBP_C* Enemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "SetupCharacter");

	Params::UBattleEnemyStatus_C_SetupCharacter_Params Parms{};

	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.GetCharacterName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UBattleEnemyStatus_C::GetCharacterName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "GetCharacterName");

	Params::UBattleEnemyStatus_C_GetCharacterName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.ShieldChangeDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::ShieldChangeDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "ShieldChangeDelay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.WeakLockAnimDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEnemyStatus_C::WeakLockAnimDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "WeakLockAnimDelay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEnemyStatus.BattleEnemyStatus_C.ExecuteUbergraph_BattleEnemyStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEnemyStatus_C::ExecuteUbergraph_BattleEnemyStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleEnemyStatus_C", "ExecuteUbergraph_BattleEnemyStatus");

	Params::UBattleEnemyStatus_C_ExecuteUbergraph_BattleEnemyStatus_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


