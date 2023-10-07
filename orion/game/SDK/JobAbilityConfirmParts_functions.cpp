#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass JobAbilityConfirmParts.JobAbilityConfirmParts_C
// (None)

class UClass* UJobAbilityConfirmParts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JobAbilityConfirmParts_C");

	return Clss;
}


// JobAbilityConfirmParts_C JobAbilityConfirmParts.Default__JobAbilityConfirmParts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJobAbilityConfirmParts_C* UJobAbilityConfirmParts_C::GetDefaultObj()
{
	static class UJobAbilityConfirmParts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJobAbilityConfirmParts_C*>(UJobAbilityConfirmParts_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JobAbilityConfirmParts.JobAbilityConfirmParts_C.SetJobPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AbilityJP                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HaveJP                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobAbilityConfirmParts_C::SetJobPoint(int32 AbilityJP, int32 HaveJP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobAbilityConfirmParts_C", "SetJobPoint");

	Params::UJobAbilityConfirmParts_C_SetJobPoint_Params Parms{};

	Parms.AbilityJP = AbilityJP;
	Parms.HaveJP = HaveJP;

	UObject::ProcessEvent(Func, &Parms);

}

}


