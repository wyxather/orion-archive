#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSTextManagerBP.KSTextManagerBP_C
// (Actor)

class UClass* AKSTextManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSTextManagerBP_C");

	return Clss;
}


// KSTextManagerBP_C KSTextManagerBP.Default__KSTextManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSTextManagerBP_C* AKSTextManagerBP_C::GetDefaultObj()
{
	static class AKSTextManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSTextManagerBP_C*>(AKSTextManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSTextManagerBP.KSTextManagerBP_C.IsReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSTextManagerBP_C::IsReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSTextManagerBP_C", "IsReady");

	Params::AKSTextManagerBP_C_IsReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function KSTextManagerBP.KSTextManagerBP_C.GetTalkVoiceTable
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EKSLanguage             Language                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UDataTable>   Table                                                            (Parm, OutParm, HasGetValueTypeHash)

void AKSTextManagerBP_C::GetTalkVoiceTable(enum class EKSLanguage Language, TSoftObjectPtr<class UDataTable>* Table)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSTextManagerBP_C", "GetTalkVoiceTable");

	Params::AKSTextManagerBP_C_GetTalkVoiceTable_Params Parms{};

	Parms.Language = Language;

	UObject::ProcessEvent(Func, &Parms);

	if (Table != nullptr)
		*Table = Parms.Table;

}


// Function KSTextManagerBP.KSTextManagerBP_C.GetTalkTextTable
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EKSLanguage             Language                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UDataTable>   Table                                                            (Parm, OutParm, HasGetValueTypeHash)

void AKSTextManagerBP_C::GetTalkTextTable(enum class EKSLanguage Language, TSoftObjectPtr<class UDataTable>* Table)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSTextManagerBP_C", "GetTalkTextTable");

	Params::AKSTextManagerBP_C_GetTalkTextTable_Params Parms{};

	Parms.Language = Language;

	UObject::ProcessEvent(Func, &Parms);

	if (Table != nullptr)
		*Table = Parms.Table;

}


// Function KSTextManagerBP.KSTextManagerBP_C.GetGameTextTable
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EKSLanguage             Language                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UDataTable>   DataTable                                                        (Parm, OutParm, HasGetValueTypeHash)

void AKSTextManagerBP_C::GetGameTextTable(enum class EKSLanguage Language, TSoftObjectPtr<class UDataTable>* DataTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSTextManagerBP_C", "GetGameTextTable");

	Params::AKSTextManagerBP_C_GetGameTextTable_Params Parms{};

	Parms.Language = Language;

	UObject::ProcessEvent(Func, &Parms);

	if (DataTable != nullptr)
		*DataTable = Parms.DataTable;

}


// Function KSTextManagerBP.KSTextManagerBP_C.CbLoadTextVoice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             TextVoiceObject                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AKSTextManagerBP_C::CbLoadTextVoice(TArray<class UObject*>& TextVoiceObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSTextManagerBP_C", "CbLoadTextVoice");

	Params::AKSTextManagerBP_C_CbLoadTextVoice_Params Parms{};

	Parms.TextVoiceObject = TextVoiceObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSTextManagerBP.KSTextManagerBP_C.LoadTextVoice
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSLanguage             ELang                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSTextManagerBP_C::LoadTextVoice(enum class EKSLanguage ELang)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSTextManagerBP_C", "LoadTextVoice");

	Params::AKSTextManagerBP_C_LoadTextVoice_Params Parms{};

	Parms.ELang = ELang;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSTextManagerBP.KSTextManagerBP_C.CbLoadText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             LoadData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AKSTextManagerBP_C::CbLoadText(TArray<class UObject*>& LoadData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSTextManagerBP_C", "CbLoadText");

	Params::AKSTextManagerBP_C_CbLoadText_Params Parms{};

	Parms.LoadData = LoadData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSTextManagerBP.KSTextManagerBP_C.LoadText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSLanguage             ELang                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSTextManagerBP_C::LoadText(enum class EKSLanguage ELang)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSTextManagerBP_C", "LoadText");

	Params::AKSTextManagerBP_C_LoadText_Params Parms{};

	Parms.ELang = ELang;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSTextManagerBP.KSTextManagerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSTextManagerBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSTextManagerBP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


