#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SubActionCharacterPanel.WBP_SubActionCharacterPanel_C
// (None)

class UClass* UWBP_SubActionCharacterPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SubActionCharacterPanel_C");

	return Clss;
}


// WBP_SubActionCharacterPanel_C WBP_SubActionCharacterPanel.Default__WBP_SubActionCharacterPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SubActionCharacterPanel_C* UWBP_SubActionCharacterPanel_C::GetDefaultObj()
{
	static class UWBP_SubActionCharacterPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SubActionCharacterPanel_C*>(UWBP_SubActionCharacterPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SubActionCharacterPanel.WBP_SubActionCharacterPanel_C.SetSelecterVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionCharacterPanel_C::SetSelecterVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionCharacterPanel_C", "SetSelecterVisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionCharacterPanel.WBP_SubActionCharacterPanel_C.PlayCloseAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionCharacterPanel_C::PlayCloseAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionCharacterPanel_C", "PlayCloseAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionCharacterPanel.WBP_SubActionCharacterPanel_C.PlayOpenAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SubActionCharacterPanel_C::PlayOpenAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionCharacterPanel_C", "PlayOpenAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubActionCharacterPanel.WBP_SubActionCharacterPanel_C.Get Selecter Effect Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UWBP_SubActionCharacterPanel_C::Get_Selecter_Effect_Visibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionCharacterPanel_C", "Get Selecter Effect Visibility");

	Params::UWBP_SubActionCharacterPanel_C_Get_Selecter_Effect_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SubActionCharacterPanel.WBP_SubActionCharacterPanel_C.SetActiveCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubActionCharacterPanel_C::SetActiveCharacter(class ABattleCharacterBaseBP_C* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_SubActionCharacterPanel_C", "SetActiveCharacter");

	Params::UWBP_SubActionCharacterPanel_C_SetActiveCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


