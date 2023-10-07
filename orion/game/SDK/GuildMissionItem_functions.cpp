#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass GuildMissionItem.GuildMissionItem_C
// (None)

class UClass* UGuildMissionItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GuildMissionItem_C");

	return Clss;
}


// GuildMissionItem_C GuildMissionItem.Default__GuildMissionItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGuildMissionItem_C* UGuildMissionItem_C::GetDefaultObj()
{
	static class UGuildMissionItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGuildMissionItem_C*>(UGuildMissionItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GuildMissionItem.GuildMissionItem_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJobLicenseData             LicenseData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               IsComplete                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMissionItem_C::Setup(const struct FJobLicenseData& LicenseData, bool IsComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMissionItem_C", "Setup");

	Params::UGuildMissionItem_C_Setup_Params Parms{};

	Parms.LicenseData = LicenseData;
	Parms.IsComplete = IsComplete;

	UObject::ProcessEvent(Func, &Parms);

}

}


