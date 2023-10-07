#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass PartyChat.PartyChat_C
// (None)

class UClass* UPartyChat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartyChat_C");

	return Clss;
}


// PartyChat_C PartyChat.Default__PartyChat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPartyChat_C* UPartyChat_C::GetDefaultObj()
{
	static class UPartyChat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartyChat_C*>(UPartyChat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PartyChat.PartyChat_C.OutFocusPartyChatCharactr
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPartyChat_C::OutFocusPartyChatCharactr(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChat_C", "OutFocusPartyChatCharactr");

	Params::UPartyChat_C_OutFocusPartyChatCharactr_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PartyChat.PartyChat_C.FocusPartyChatCharactr
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      FocusCharacters                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPartyChat_C::FocusPartyChatCharactr(TArray<int32>& FocusCharacters, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChat_C", "FocusPartyChatCharactr");

	Params::UPartyChat_C_FocusPartyChatCharactr_Params Parms{};

	Parms.FocusCharacters = FocusCharacters;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PartyChat.PartyChat_C.VisibleBackGround
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPartyChat_C::VisibleBackGround(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChat_C", "VisibleBackGround");

	Params::UPartyChat_C_VisibleBackGround_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PartyChat.PartyChat_C.SetupPartyChatWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPartyChat                  PartyChatData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               UseBackgroundImage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPartyChat_C::SetupPartyChatWidget(struct FPartyChat& PartyChatData, bool UseBackgroundImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChat_C", "SetupPartyChatWidget");

	Params::UPartyChat_C_SetupPartyChatWidget_Params Parms{};

	Parms.PartyChatData = PartyChatData;
	Parms.UseBackgroundImage = UseBackgroundImage;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PartyChat.PartyChat_C.SetCharaDir
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPartyChat_C::SetCharaDir(int32 Index, enum class EKSCharacterDir Dir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChat_C", "SetCharaDir");

	Params::UPartyChat_C_SetCharaDir_Params Parms{};

	Parms.Index = Index;
	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PartyChat.PartyChat_C.GetCharacterPos
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Pos                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyChat_C::GetCharacterPos(struct FVector2D* Pos, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChat_C", "GetCharacterPos");

	Params::UPartyChat_C_GetCharacterPos_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);

}


// Function PartyChat.PartyChat_C.SetCharacterIndex
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPartyChat_C::SetCharacterIndex(int32 Index, enum class EPlayableCharacterID Character, enum class EKSCharacterDir Dir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChat_C", "SetCharacterIndex");

	Params::UPartyChat_C_SetCharacterIndex_Params Parms{};

	Parms.Index = Index;
	Parms.Character = Character;
	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PartyChat.PartyChat_C.SetCharacterDir
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPartyChatCharacter_C*       Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         ActionDir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyChat_C::SetCharacterDir(class UPartyChatCharacter_C* Character, int32 CharacterID, enum class EKSCharacterDir ActionDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChat_C", "SetCharacterDir");

	Params::UPartyChat_C_SetCharacterDir_Params Parms{};

	Parms.Character = Character;
	Parms.CharacterID = CharacterID;
	Parms.ActionDir = ActionDir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyChat.PartyChat_C.Initialization
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyChat_C::Initialization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChat_C", "Initialization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyChat.PartyChat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPartyChat_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChat_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyChat.PartyChat_C.ExecuteUbergraph_PartyChat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyChat_C::ExecuteUbergraph_PartyChat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChat_C", "ExecuteUbergraph_PartyChat");

	Params::UPartyChat_C_ExecuteUbergraph_PartyChat_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


