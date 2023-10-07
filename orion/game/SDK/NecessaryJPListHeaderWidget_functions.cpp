#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass NecessaryJPListHeaderWidget.NecessaryJPListHeaderWidget_C
// (None)

class UClass* UNecessaryJPListHeaderWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NecessaryJPListHeaderWidget_C");

	return Clss;
}


// NecessaryJPListHeaderWidget_C NecessaryJPListHeaderWidget.Default__NecessaryJPListHeaderWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNecessaryJPListHeaderWidget_C* UNecessaryJPListHeaderWidget_C::GetDefaultObj()
{
	static class UNecessaryJPListHeaderWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNecessaryJPListHeaderWidget_C*>(UNecessaryJPListHeaderWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NecessaryJPListHeaderWidget.NecessaryJPListHeaderWidget_C.SetExtraJobAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJobData                    JobData                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UNecessaryJPListHeaderWidget_C::SetExtraJobAbility(const struct FJobData& JobData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NecessaryJPListHeaderWidget_C", "SetExtraJobAbility");

	Params::UNecessaryJPListHeaderWidget_C_SetExtraJobAbility_Params Parms{};

	Parms.JobData = JobData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecessaryJPListHeaderWidget.NecessaryJPListHeaderWidget_C.SetCanAcquisitionAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Acquisition                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNecessaryJPListHeaderWidget_C::SetCanAcquisitionAbility(bool Acquisition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NecessaryJPListHeaderWidget_C", "SetCanAcquisitionAbility");

	Params::UNecessaryJPListHeaderWidget_C_SetCanAcquisitionAbility_Params Parms{};

	Parms.Acquisition = Acquisition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecessaryJPListHeaderWidget.NecessaryJPListHeaderWidget_C.SetCharacterData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNecessaryJPListHeaderWidget_C::SetCharacterData(struct FSavePlayerCharacterData& CharacterData, int32 JobID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NecessaryJPListHeaderWidget_C", "SetCharacterData");

	Params::UNecessaryJPListHeaderWidget_C_SetCharacterData_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.JobID = JobID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecessaryJPListHeaderWidget.NecessaryJPListHeaderWidget_C.SetNextAcquisitionJP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AcquisitionJP                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNecessaryJPListHeaderWidget_C::SetNextAcquisitionJP(int32 AcquisitionJP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NecessaryJPListHeaderWidget_C", "SetNextAcquisitionJP");

	Params::UNecessaryJPListHeaderWidget_C_SetNextAcquisitionJP_Params Parms{};

	Parms.AcquisitionJP = AcquisitionJP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecessaryJPListHeaderWidget.NecessaryJPListHeaderWidget_C.SetupText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNecessaryJPListHeaderWidget_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NecessaryJPListHeaderWidget_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecessaryJPListHeaderWidget.NecessaryJPListHeaderWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNecessaryJPListHeaderWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NecessaryJPListHeaderWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecessaryJPListHeaderWidget.NecessaryJPListHeaderWidget_C.ExecuteUbergraph_NecessaryJPListHeaderWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNecessaryJPListHeaderWidget_C::ExecuteUbergraph_NecessaryJPListHeaderWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NecessaryJPListHeaderWidget_C", "ExecuteUbergraph_NecessaryJPListHeaderWidget");

	Params::UNecessaryJPListHeaderWidget_C_ExecuteUbergraph_NecessaryJPListHeaderWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


