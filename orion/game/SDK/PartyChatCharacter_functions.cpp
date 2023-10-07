#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass PartyChatCharacter.PartyChatCharacter_C
// (None)

class UClass* UPartyChatCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartyChatCharacter_C");

	return Clss;
}


// PartyChatCharacter_C PartyChatCharacter.Default__PartyChatCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPartyChatCharacter_C* UPartyChatCharacter_C::GetDefaultObj()
{
	static class UPartyChatCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartyChatCharacter_C*>(UPartyChatCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PartyChatCharacter.PartyChatCharacter_C.GetNoReadThiefLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LabelName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyChatCharacter_C::GetNoReadThiefLabel(int32 CharacterID, class FName* LabelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChatCharacter_C", "GetNoReadThiefLabel");

	Params::UPartyChatCharacter_C_GetNoReadThiefLabel_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (LabelName != nullptr)
		*LabelName = Parms.LabelName;

}


// Function PartyChatCharacter.PartyChatCharacter_C.PartyChatCharacter_AutoGenFunc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ObjList                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPartyChatCharacter_C::PartyChatCharacter_AutoGenFunc(TArray<class UObject*>& ObjList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChatCharacter_C", "PartyChatCharacter_AutoGenFunc");

	Params::UPartyChatCharacter_C_PartyChatCharacter_AutoGenFunc_Params Parms{};

	Parms.ObjList = ObjList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyChatCharacter.PartyChatCharacter_C.CheckThiefSisterEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              PartyChatId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyChatCharacter_C::CheckThiefSisterEvent(int32 PartyChatId, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChatCharacter_C", "CheckThiefSisterEvent");

	Params::UPartyChatCharacter_C_CheckThiefSisterEvent_Params Parms{};

	Parms.PartyChatId = PartyChatId;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function PartyChatCharacter.PartyChatCharacter_C.SetCharacterThief
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         ActionDir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PartyChatId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyChatCharacter_C::SetCharacterThief(int32 CharacterID, enum class EKSCharacterDir ActionDir, int32 PartyChatId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChatCharacter_C", "SetCharacterThief");

	Params::UPartyChatCharacter_C_SetCharacterThief_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.ActionDir = ActionDir;
	Parms.PartyChatId = PartyChatId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyChatCharacter.PartyChatCharacter_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFocus                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyChatCharacter_C::Focus(bool IsFocus, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChatCharacter_C", "Focus");

	Params::UPartyChatCharacter_C_Focus_Params Parms{};

	Parms.IsFocus = IsFocus;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyChatCharacter.PartyChatCharacter_C.GetCharacterID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CharacterID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyChatCharacter_C::GetCharacterID(int32* CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChatCharacter_C", "GetCharacterID");

	Params::UPartyChatCharacter_C_GetCharacterID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CharacterID != nullptr)
		*CharacterID = Parms.CharacterID;

}


// Function PartyChatCharacter.PartyChatCharacter_C.SetCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         ActionDir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PartyChatId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyChatCharacter_C::SetCharacter(int32 CharacterID, enum class EKSCharacterDir ActionDir, int32 PartyChatId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChatCharacter_C", "SetCharacter");

	Params::UPartyChatCharacter_C_SetCharacter_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.ActionDir = ActionDir;
	Parms.PartyChatId = PartyChatId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyChatCharacter.PartyChatCharacter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyChatCharacter_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChatCharacter_C", "PreConstruct");

	Params::UPartyChatCharacter_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyChatCharacter.PartyChatCharacter_C.ExecuteUbergraph_PartyChatCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyChatCharacter_C::ExecuteUbergraph_PartyChatCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyChatCharacter_C", "ExecuteUbergraph_PartyChatCharacter");

	Params::UPartyChatCharacter_C_ExecuteUbergraph_PartyChatCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


