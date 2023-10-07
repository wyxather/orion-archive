#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass CharacterStandingPanel.CharacterStandingPanel_C
// (None)

class UClass* UCharacterStandingPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterStandingPanel_C");

	return Clss;
}


// CharacterStandingPanel_C CharacterStandingPanel.Default__CharacterStandingPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterStandingPanel_C* UCharacterStandingPanel_C::GetDefaultObj()
{
	static class UCharacterStandingPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterStandingPanel_C*>(UCharacterStandingPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterStandingPanel.CharacterStandingPanel_C.ResetCharacterResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharacterStandingPanel_C::ResetCharacterResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "ResetCharacterResource");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterStandingPanel.CharacterStandingPanel_C.SetTextureToMaterial
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAcqImage*                   ImageWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ParameterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterStandingPanel_C::SetTextureToMaterial(class UAcqImage* ImageWidget, class UTexture* Texture, class FName ParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "SetTextureToMaterial");

	Params::UCharacterStandingPanel_C_SetTextureToMaterial_Params Parms{};

	Parms.ImageWidget = ImageWidget;
	Parms.Texture = Texture;
	Parms.ParameterName = ParameterName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterStandingPanel.CharacterStandingPanel_C.GetFocusState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               FocusState                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterStandingPanel_C::GetFocusState(bool* FocusState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "GetFocusState");

	Params::UCharacterStandingPanel_C_GetFocusState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FocusState != nullptr)
		*FocusState = Parms.FocusState;

}


// Function CharacterStandingPanel.CharacterStandingPanel_C.SetOutFocusFromPlayerPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPreventReopenFromRefreshCharacter                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterStandingPanel_C::SetOutFocusFromPlayerPanel(bool IsPreventReopenFromRefreshCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "SetOutFocusFromPlayerPanel");

	Params::UCharacterStandingPanel_C_SetOutFocusFromPlayerPanel_Params Parms{};

	Parms.IsPreventReopenFromRefreshCharacter = IsPreventReopenFromRefreshCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterStandingPanel.CharacterStandingPanel_C.GetPortraitBgTe
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCoupling                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsNight                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Image                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UCharacterStandingPanel_C::GetPortraitBgTe(int32 CharaID, bool IsCoupling, bool IsNight, class UTexture2D** Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "GetPortraitBgTe");

	Params::UCharacterStandingPanel_C_GetPortraitBgTe_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.IsCoupling = IsCoupling;
	Parms.IsNight = IsNight;

	UObject::ProcessEvent(Func, &Parms);

	if (Image != nullptr)
		*Image = Parms.Image;

	return Parms.ReturnValue;

}


// Function CharacterStandingPanel.CharacterStandingPanel_C.GetPortraitTex
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCoupling                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsNight                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Image                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UCharacterStandingPanel_C::GetPortraitTex(int32 CharaID, bool IsCoupling, bool IsNight, class UTexture2D** Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "GetPortraitTex");

	Params::UCharacterStandingPanel_C_GetPortraitTex_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.IsCoupling = IsCoupling;
	Parms.IsNight = IsNight;

	UObject::ProcessEvent(Func, &Parms);

	if (Image != nullptr)
		*Image = Parms.Image;

	return Parms.ReturnValue;

}


// Function CharacterStandingPanel.CharacterStandingPanel_C.onFinishedFocusOut
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharacterStandingPanel_C::OnFinishedFocusOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "onFinishedFocusOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterStandingPanel.CharacterStandingPanel_C.SetOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterStandingPanel_C::SetOutFocus(bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "SetOutFocus");

	Params::UCharacterStandingPanel_C_SetOutFocus_Params Parms{};

	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterStandingPanel.CharacterStandingPanel_C.IsFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Focus                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterStandingPanel_C::IsFocus(bool* Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "IsFocus");

	Params::UCharacterStandingPanel_C_IsFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function CharacterStandingPanel.CharacterStandingPanel_C.SetUIFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharacterStandingPanel_C::SetUIFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "SetUIFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterStandingPanel.CharacterStandingPanel_C.InitCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsCoupling                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsNight                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterStandingPanel_C::InitCharacter(int32 CharacterID, bool UseName, bool IsCoupling, bool IsNight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "InitCharacter");

	Params::UCharacterStandingPanel_C_InitCharacter_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.UseName = UseName;
	Parms.IsCoupling = IsCoupling;
	Parms.IsNight = IsNight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterStandingPanel.CharacterStandingPanel_C.SetHide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHide                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterStandingPanel_C::SetHide(bool IsHide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "SetHide");

	Params::UCharacterStandingPanel_C_SetHide_Params Parms{};

	Parms.IsHide = IsHide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterStandingPanel.CharacterStandingPanel_C.Refresh Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsCoupling                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsNight                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterStandingPanel_C::Refresh_Character(int32 CharacterID, bool UseName, bool IsCoupling, bool IsNight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "Refresh Character");

	Params::UCharacterStandingPanel_C_Refresh_Character_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.UseName = UseName;
	Parms.IsCoupling = IsCoupling;
	Parms.IsNight = IsNight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterStandingPanel.CharacterStandingPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCharacterStandingPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterStandingPanel.CharacterStandingPanel_C.ExecuteUbergraph_CharacterStandingPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterStandingPanel_C::ExecuteUbergraph_CharacterStandingPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharacterStandingPanel_C", "ExecuteUbergraph_CharacterStandingPanel");

	Params::UCharacterStandingPanel_C_ExecuteUbergraph_CharacterStandingPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


