#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerPanel.PlayerPanel_C
// (None)

class UClass* UPlayerPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerPanel_C");

	return Clss;
}


// PlayerPanel_C PlayerPanel.Default__PlayerPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerPanel_C* UPlayerPanel_C::GetDefaultObj()
{
	static class UPlayerPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerPanel_C*>(UPlayerPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerPanel.PlayerPanel_C.GroupingAnimations
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerPanel_C::GroupingAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerPanel_C", "GroupingAnimations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPanel.PlayerPanel_C.SetSkilltext
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNighrt                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerPanel_C::SetSkilltext(int32 CharaID, bool IsNighrt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerPanel_C", "SetSkilltext");

	Params::UPlayerPanel_C_SetSkilltext_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.IsNighrt = IsNighrt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPanel.PlayerPanel_C.RefreshCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNight                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerPanel_C::RefreshCharacter(enum class EPlayableCharacterID CharacterID, bool IsNight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerPanel_C", "RefreshCharacter");

	Params::UPlayerPanel_C_RefreshCharacter_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.IsNight = IsNight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPanel.PlayerPanel_C.InitPartsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerPanel_C::InitPartsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerPanel_C", "InitPartsWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPanel.PlayerPanel_C.IsPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Animation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerPanel_C::IsPlaying(bool* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerPanel_C", "IsPlaying");

	Params::UPlayerPanel_C_IsPlaying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Animation != nullptr)
		*Animation = Parms.Animation;

}


// Function PlayerPanel.PlayerPanel_C.FocusPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Focus                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNight                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerPanel_C::FocusPanel(bool Focus, enum class EPlayableCharacterID PlayerID, bool IsNight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerPanel_C", "FocusPanel");

	Params::UPlayerPanel_C_FocusPanel_Params Parms{};

	Parms.Focus = Focus;
	Parms.PlayerID = PlayerID;
	Parms.IsNight = IsNight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPanel.PlayerPanel_C.SetPlayer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFocus                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsNight                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerPanel_C::SetPlayer(enum class EPlayableCharacterID PlayerID, bool IsFocus, bool IsNight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerPanel_C", "SetPlayer");

	Params::UPlayerPanel_C_SetPlayer_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.IsFocus = IsFocus;
	Parms.IsNight = IsNight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPanel.PlayerPanel_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerPanel_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerPanel_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPanel.PlayerPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPanel.PlayerPanel_C.ExecuteUbergraph_PlayerPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPanel_C::ExecuteUbergraph_PlayerPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PlayerPanel_C", "ExecuteUbergraph_PlayerPanel");

	Params::UPlayerPanel_C_ExecuteUbergraph_PlayerPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


