#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleDamageNumber.BattleDamageNumber_C
// (None)

class UClass* UBattleDamageNumber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleDamageNumber_C");

	return Clss;
}


// BattleDamageNumber_C BattleDamageNumber.Default__BattleDamageNumber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleDamageNumber_C* UBattleDamageNumber_C::GetDefaultObj()
{
	static class UBattleDamageNumber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleDamageNumber_C*>(UBattleDamageNumber_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleDamageNumber.BattleDamageNumber_C.BattleSpeedChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDamageNumber_C::BattleSpeedChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "BattleSpeedChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDamageNumber.BattleDamageNumber_C.SetLanguage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetBreak                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SetGraphic                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleDamageNumber_C::SetLanguage(bool SetBreak, bool SetGraphic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "SetLanguage");

	Params::UBattleDamageNumber_C_SetLanguage_Params Parms{};

	Parms.SetBreak = SetBreak;
	Parms.SetGraphic = SetGraphic;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDamageNumber.BattleDamageNumber_C.SetVisibilityType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Miss                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AbilityCritical                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDAMAGE_UI_COLOR_TYPE   ColorType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDamageNumber_C::SetVisibilityType(bool Miss, bool AbilityCritical, int32 Number, enum class EBATTLE_DAMAGE_TYPE DamageType, enum class EDAMAGE_UI_COLOR_TYPE ColorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "SetVisibilityType");

	Params::UBattleDamageNumber_C_SetVisibilityType_Params Parms{};

	Parms.Miss = Miss;
	Parms.AbilityCritical = AbilityCritical;
	Parms.Number = Number;
	Parms.DamageType = DamageType;
	Parms.ColorType = ColorType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDamageNumber.BattleDamageNumber_C.PlayRecoveryBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RecoveryValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDamageNumber_C::PlayRecoveryBP(int32 RecoveryValue, class ABattleCharacterBaseBP_C* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "PlayRecoveryBP");

	Params::UBattleDamageNumber_C_PlayRecoveryBP_Params Parms{};

	Parms.RecoveryValue = RecoveryValue;
	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDamageNumber.BattleDamageNumber_C.PlayBreak
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDamageNumber_C::PlayBreak(class ABattleCharacterBaseBP_C* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "PlayBreak");

	Params::UBattleDamageNumber_C_PlayBreak_Params Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDamageNumber.BattleDamageNumber_C.PlayRecoveryMP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RecoveryValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDamageNumber_C::PlayRecoveryMP(int32 RecoveryValue, class ABattleCharacterBaseBP_C* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "PlayRecoveryMP");

	Params::UBattleDamageNumber_C_PlayRecoveryMP_Params Parms{};

	Parms.RecoveryValue = RecoveryValue;
	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDamageNumber.BattleDamageNumber_C.PlayMiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDamageNumber_C::PlayMiss(class ABattleCharacterBaseBP_C* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "PlayMiss");

	Params::UBattleDamageNumber_C_PlayMiss_Params Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDamageNumber.BattleDamageNumber_C.PlayRecoveryHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RecoveryValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDamageNumber_C::PlayRecoveryHP(int32 RecoveryValue, class ABattleCharacterBaseBP_C* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "PlayRecoveryHP");

	Params::UBattleDamageNumber_C_PlayRecoveryHP_Params Parms{};

	Parms.RecoveryValue = RecoveryValue;
	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDamageNumber.BattleDamageNumber_C.PlayDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDamageNumber_C::PlayDamage(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, class ABattleCharacterBaseBP_C* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "PlayDamage");

	Params::UBattleDamageNumber_C_PlayDamage_Params Parms{};

	Parms.DamageValue = DamageValue;
	Parms.DamageType = DamageType;
	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDamageNumber.BattleDamageNumber_C.DisplayTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDamageNumber_C::DisplayTimer(float DisplayTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "DisplayTimer");

	Params::UBattleDamageNumber_C_DisplayTimer_Params Parms{};

	Parms.DisplayTime = DisplayTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDamageNumber.BattleDamageNumber_C.DamageDisplayFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDamageNumber_C::DamageDisplayFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "DamageDisplayFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDamageNumber.BattleDamageNumber_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDamageNumber_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "Tick");

	Params::UBattleDamageNumber_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDamageNumber.BattleDamageNumber_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattleDamageNumber_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDamageNumber.BattleDamageNumber_C.OnBattleSpeedChange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 NoticeArgs                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleDamageNumber_C::OnBattleSpeedChange(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& NoticeArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "OnBattleSpeedChange");

	Params::UBattleDamageNumber_C_OnBattleSpeedChange_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.NoticeArgs = NoticeArgs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDamageNumber.BattleDamageNumber_C.ExecuteUbergraph_BattleDamageNumber
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDamageNumber_C::ExecuteUbergraph_BattleDamageNumber(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDamageNumber_C", "ExecuteUbergraph_BattleDamageNumber");

	Params::UBattleDamageNumber_C_ExecuteUbergraph_BattleDamageNumber_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


