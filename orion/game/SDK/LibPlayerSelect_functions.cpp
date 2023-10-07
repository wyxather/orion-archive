#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibPlayerSelect.LibPlayerSelect_C
// (None)

class UClass* ULibPlayerSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibPlayerSelect_C");

	return Clss;
}


// LibPlayerSelect_C LibPlayerSelect.Default__LibPlayerSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibPlayerSelect_C* ULibPlayerSelect_C::GetDefaultObj()
{
	static class ULibPlayerSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibPlayerSelect_C*>(ULibPlayerSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibPlayerSelect.LibPlayerSelect_C.GetHunterPattern
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPLAYER_SELECT_FB_PATTERNPattern                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibPlayerSelect_C::GetHunterPattern(class UObject* __WorldContext, enum class EPLAYER_SELECT_FB_PATTERN* Pattern)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibPlayerSelect_C", "GetHunterPattern");

	Params::ULibPlayerSelect_C_GetHunterPattern_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Pattern != nullptr)
		*Pattern = Parms.Pattern;

}


// Function LibPlayerSelect.LibPlayerSelect_C.GetPlayerSelectFBDrawSize
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   DrawSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibPlayerSelect_C::GetPlayerSelectFBDrawSize(enum class EPlayableCharacterID PlayerID, class UObject* __WorldContext, struct FVector2D* DrawSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibPlayerSelect_C", "GetPlayerSelectFBDrawSize");

	Params::ULibPlayerSelect_C_GetPlayerSelectFBDrawSize_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DrawSize != nullptr)
		*DrawSize = std::move(Parms.DrawSize);

}


// Function LibPlayerSelect.LibPlayerSelect_C.GetUnReleaseStage
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Label                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibPlayerSelect_C::GetUnReleaseStage(class UObject* __WorldContext, class FName* Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibPlayerSelect_C", "GetUnReleaseStage");

	Params::ULibPlayerSelect_C_GetUnReleaseStage_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Label != nullptr)
		*Label = Parms.Label;

}


// Function LibPlayerSelect.LibPlayerSelect_C.GetBlankStage
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Label                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibPlayerSelect_C::GetBlankStage(class UObject* __WorldContext, class FName* Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibPlayerSelect_C", "GetBlankStage");

	Params::ULibPlayerSelect_C_GetBlankStage_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Label != nullptr)
		*Label = Parms.Label;

}


// Function LibPlayerSelect.LibPlayerSelect_C.GetPlayerSelectSelect
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNight                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FlipbookName                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibPlayerSelect_C::GetPlayerSelectSelect(enum class EPlayableCharacterID PlayerID, bool IsNight, class UObject* __WorldContext, class FName* FlipbookName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibPlayerSelect_C", "GetPlayerSelectSelect");

	Params::ULibPlayerSelect_C_GetPlayerSelectSelect_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.IsNight = IsNight;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FlipbookName != nullptr)
		*FlipbookName = Parms.FlipbookName;

}


// Function LibPlayerSelect.LibPlayerSelect_C.GetPlayerSelectFocus
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FlipbookName                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibPlayerSelect_C::GetPlayerSelectFocus(enum class EPlayableCharacterID PlayerID, class UObject* __WorldContext, class FName* FlipbookName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibPlayerSelect_C", "GetPlayerSelectFocus");

	Params::ULibPlayerSelect_C_GetPlayerSelectFocus_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FlipbookName != nullptr)
		*FlipbookName = Parms.FlipbookName;

}


// Function LibPlayerSelect.LibPlayerSelect_C.GetPlayerSelectWait
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FlipbookName                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibPlayerSelect_C::GetPlayerSelectWait(enum class EPlayableCharacterID PlayerID, class UObject* __WorldContext, class FName* FlipbookName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibPlayerSelect_C", "GetPlayerSelectWait");

	Params::ULibPlayerSelect_C_GetPlayerSelectWait_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FlipbookName != nullptr)
		*FlipbookName = Parms.FlipbookName;

}

}


