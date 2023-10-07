#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharacterPanelEquipParamItem.WBP_CharacterPanelEquipParamItem_C
// (None)

class UClass* UWBP_CharacterPanelEquipParamItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharacterPanelEquipParamItem_C");

	return Clss;
}


// WBP_CharacterPanelEquipParamItem_C WBP_CharacterPanelEquipParamItem.Default__WBP_CharacterPanelEquipParamItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharacterPanelEquipParamItem_C* UWBP_CharacterPanelEquipParamItem_C::GetDefaultObj()
{
	static class UWBP_CharacterPanelEquipParamItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharacterPanelEquipParamItem_C*>(UWBP_CharacterPanelEquipParamItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharacterPanelEquipParamItem.WBP_CharacterPanelEquipParamItem_C.StopParamAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharacterPanelEquipParamItem_C::StopParamAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_CharacterPanelEquipParamItem_C", "StopParamAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharacterPanelEquipParamItem.WBP_CharacterPanelEquipParamItem_C.IsPlayingParamAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CharacterPanelEquipParamItem_C::IsPlayingParamAnimation(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_CharacterPanelEquipParamItem_C", "IsPlayingParamAnimation");

	Params::UWBP_CharacterPanelEquipParamItem_C_IsPlayingParamAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function WBP_CharacterPanelEquipParamItem.WBP_CharacterPanelEquipParamItem_C.PlayParamFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UWBP_CharacterPanelEquipParamItem_C::PlayParamFadeIn(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_CharacterPanelEquipParamItem_C", "PlayParamFadeIn");

	Params::UWBP_CharacterPanelEquipParamItem_C_PlayParamFadeIn_Params Parms{};

	Parms.Delegate = Delegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterPanelEquipParamItem.WBP_CharacterPanelEquipParamItem_C.PlayParamFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               First                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Delegate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UWBP_CharacterPanelEquipParamItem_C::PlayParamFadeOut(bool First, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_CharacterPanelEquipParamItem_C", "PlayParamFadeOut");

	Params::UWBP_CharacterPanelEquipParamItem_C_PlayParamFadeOut_Params Parms{};

	Parms.First = First;
	Parms.Delegate = Delegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterPanelEquipParamItem.WBP_CharacterPanelEquipParamItem_C.SetParamVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CharacterPanelEquipParamItem_C::SetParamVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_CharacterPanelEquipParamItem_C", "SetParamVisible");

	Params::UWBP_CharacterPanelEquipParamItem_C_SetParamVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharacterPanelEquipParamItem.WBP_CharacterPanelEquipParamItem_C.SetupText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ParameterText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              ParamBefore                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ParamAfter                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterPanelEquipParamItem_C::SetupText(class FText ParameterText, int32 ParamBefore, int32 ParamAfter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_CharacterPanelEquipParamItem_C", "SetupText");

	Params::UWBP_CharacterPanelEquipParamItem_C_SetupText_Params Parms{};

	Parms.ParameterText = ParameterText;
	Parms.ParamBefore = ParamBefore;
	Parms.ParamAfter = ParamAfter;

	UObject::ProcessEvent(Func, &Parms);

}

}


