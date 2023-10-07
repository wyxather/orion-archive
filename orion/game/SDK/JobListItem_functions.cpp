#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass JobListItem.JobListItem_C
// (None)

class UClass* UJobListItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JobListItem_C");

	return Clss;
}


// JobListItem_C JobListItem.Default__JobListItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJobListItem_C* UJobListItem_C::GetDefaultObj()
{
	static class UJobListItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJobListItem_C*>(UJobListItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JobListItem.JobListItem_C.Set UIFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Focus                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobListItem_C::Set_UIFocus(bool Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobListItem_C", "Set UIFocus");

	Params::UJobListItem_C_Set_UIFocus_Params Parms{};

	Parms.Focus = Focus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobListItem.JobListItem_C.GetLockMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsLockMode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobListItem_C::GetLockMode(bool* IsLockMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobListItem_C", "GetLockMode");

	Params::UJobListItem_C_GetLockMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsLockMode != nullptr)
		*IsLockMode = Parms.IsLockMode;

}


// Function JobListItem.JobListItem_C.SetLockMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLock                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobListItem_C::SetLockMode(bool IsLock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobListItem_C", "SetLockMode");

	Params::UJobListItem_C_SetLockMode_Params Parms{};

	Parms.IsLock = IsLock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobListItem.JobListItem_C.SetUnacquiredMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobListItem_C::SetUnacquiredMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobListItem_C", "SetUnacquiredMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobListItem.JobListItem_C.SetSelectMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobListItem_C::SetSelectMode(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobListItem_C", "SetSelectMode");

	Params::UJobListItem_C_SetSelectMode_Params Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobListItem.JobListItem_C.SetFlipbook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPLAYER_JOB_FB_TYPE     JobFBType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJOB_TYPE               Job_ID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobListItem_C::SetFlipbook(int32 CharacterID, enum class EPLAYER_JOB_FB_TYPE JobFBType, enum class EJOB_TYPE Job_ID, bool IsLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobListItem_C", "SetFlipbook");

	Params::UJobListItem_C_SetFlipbook_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.JobFBType = JobFBType;
	Parms.Job_ID = Job_ID;
	Parms.IsLoop = IsLoop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobListItem.JobListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJobListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobListItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobListItem.JobListItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobListItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobListItem_C", "Tick");

	Params::UJobListItem_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobListItem.JobListItem_C.ExecuteUbergraph_JobListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobListItem_C::ExecuteUbergraph_JobListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobListItem_C", "ExecuteUbergraph_JobListItem");

	Params::UJobListItem_C_ExecuteUbergraph_JobListItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


