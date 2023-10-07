#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleSuccessRate.BattleSuccessRate_C
// (None)

class UClass* UBattleSuccessRate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleSuccessRate_C");

	return Clss;
}


// BattleSuccessRate_C BattleSuccessRate.Default__BattleSuccessRate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleSuccessRate_C* UBattleSuccessRate_C::GetDefaultObj()
{
	static class UBattleSuccessRate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleSuccessRate_C*>(UBattleSuccessRate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleSuccessRate.BattleSuccessRate_C.SetBribeMoney
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TitleText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        MoneyValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Negotiate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               EnoughMoney                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSuccessRate_C::SetBribeMoney(class FText TitleText, class FText MoneyValue, bool Negotiate, bool EnoughMoney)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSuccessRate_C", "SetBribeMoney");

	Params::UBattleSuccessRate_C_SetBribeMoney_Params Parms{};

	Parms.TitleText = TitleText;
	Parms.MoneyValue = MoneyValue;
	Parms.Negotiate = Negotiate;
	Parms.EnoughMoney = EnoughMoney;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSuccessRate.BattleSuccessRate_C.SetSuccessRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TitleText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        RateValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBattleSuccessRate_C::SetSuccessRate(class FText TitleText, class FText RateValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSuccessRate_C", "SetSuccessRate");

	Params::UBattleSuccessRate_C_SetSuccessRate_Params Parms{};

	Parms.TitleText = TitleText;
	Parms.RateValue = RateValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSuccessRate.BattleSuccessRate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattleSuccessRate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSuccessRate_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSuccessRate.BattleSuccessRate_C.ExecuteUbergraph_BattleSuccessRate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSuccessRate_C::ExecuteUbergraph_BattleSuccessRate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSuccessRate_C", "ExecuteUbergraph_BattleSuccessRate");

	Params::UBattleSuccessRate_C_ExecuteUbergraph_BattleSuccessRate_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


