#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibMissionRecord.LibMissionRecord_C
// (None)

class UClass* ULibMissionRecord_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibMissionRecord_C");

	return Clss;
}


// LibMissionRecord_C LibMissionRecord.Default__LibMissionRecord_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibMissionRecord_C* ULibMissionRecord_C::GetDefaultObj()
{
	static class ULibMissionRecord_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibMissionRecord_C*>(ULibMissionRecord_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibMissionRecord.LibMissionRecord_C.GetExtraStoryHeaderTitleByExtraStoryCategory
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEXTRA_STORY_CATEGORY   ExtraStory                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TextLabel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibMissionRecord_C::GetExtraStoryHeaderTitleByExtraStoryCategory(enum class EEXTRA_STORY_CATEGORY ExtraStory, class UObject* __WorldContext, class FName* TextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibMissionRecord_C", "GetExtraStoryHeaderTitleByExtraStoryCategory");

	Params::ULibMissionRecord_C_GetExtraStoryHeaderTitleByExtraStoryCategory_Params Parms{};

	Parms.ExtraStory = ExtraStory;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (TextLabel != nullptr)
		*TextLabel = Parms.TextLabel;

}


// Function LibMissionRecord.LibMissionRecord_C.GetMainStoryHeaderTitleByPlayerId
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TextLabel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibMissionRecord_C::GetMainStoryHeaderTitleByPlayerId(enum class EPlayableCharacterID PlayerID, class UObject* __WorldContext, class FName* TextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibMissionRecord_C", "GetMainStoryHeaderTitleByPlayerId");

	Params::ULibMissionRecord_C_GetMainStoryHeaderTitleByPlayerId_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (TextLabel != nullptr)
		*TextLabel = Parms.TextLabel;

}

}


