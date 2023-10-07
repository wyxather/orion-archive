#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C
// (Actor)

class UClass* ABP_FCv2_FieldCommandFlow_Lure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FCv2_FieldCommandFlow_Lure_C");

	return Clss;
}


// BP_FCv2_FieldCommandFlow_Lure_C BP_FCv2_FieldCommandFlow_Lure.Default__BP_FCv2_FieldCommandFlow_Lure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FCv2_FieldCommandFlow_Lure_C* ABP_FCv2_FieldCommandFlow_Lure_C::GetDefaultObj()
{
	static class ABP_FCv2_FieldCommandFlow_Lure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FCv2_FieldCommandFlow_Lure_C*>(ABP_FCv2_FieldCommandFlow_Lure_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.PostProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlow_Lure_C::PostProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Lure_C", "PostProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.GetRunningStatus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString ABP_FCv2_FieldCommandFlow_Lure_C::GetRunningStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Lure_C", "GetRunningStatus");

	Params::ABP_FCv2_FieldCommandFlow_Lure_C_GetRunningStatus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.OnFinishFieldCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlow_Lure_C::OnFinishFieldCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Lure_C", "OnFinishFieldCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.IsAvailable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNpcPropertyComponent*       TargetNpc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlow_Lure_C::IsAvailable(class UNpcPropertyComponent* TargetNpc, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Lure_C", "IsAvailable");

	Params::ABP_FCv2_FieldCommandFlow_Lure_C_IsAvailable_Params Parms{};

	Parms.TargetNpc = TargetNpc;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.Draw
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_FCv2_FieldCommandFlow_Lure_C::Draw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Lure_C", "Draw");

	Params::ABP_FCv2_FieldCommandFlow_Lure_C_Draw_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.UpdateFlow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInterruptPlay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESequenceResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlow_Lure_C::UpdateFlow(bool IsInterruptPlay, enum class ESequenceResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Lure_C", "UpdateFlow");

	Params::ABP_FCv2_FieldCommandFlow_Lure_C_UpdateFlow_Params Parms{};

	Parms.IsInterruptPlay = IsInterruptPlay;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.GrabStateSnapshot_Internal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm)

TMap<class FString, class FString> ABP_FCv2_FieldCommandFlow_Lure_C::GrabStateSnapshot_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Lure_C", "GrabStateSnapshot_Internal");

	Params::ABP_FCv2_FieldCommandFlow_Lure_C_GrabStateSnapshot_Internal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.PreProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlow_Lure_C::PreProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Lure_C", "PreProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.ExecFollowFromEvent
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_FCv2_FieldCommandFlow_Lure_C::ExecFollowFromEvent(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Lure_C", "ExecFollowFromEvent");

	Params::ABP_FCv2_FieldCommandFlow_Lure_C_ExecFollowFromEvent_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.SetState
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFCV2_SequenceState_LureNewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlow_Lure_C::SetState(enum class EFCV2_SequenceState_Lure NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Lure_C", "SetState");

	Params::ABP_FCv2_FieldCommandFlow_Lure_C_SetState_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.GetState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EFCV2_SequenceState_LureReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EFCV2_SequenceState_Lure ABP_FCv2_FieldCommandFlow_Lure_C::GetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Lure_C", "GetState");

	Params::ABP_FCv2_FieldCommandFlow_Lure_C_GetState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlow_Lure.BP_FCv2_FieldCommandFlow_Lure_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlow_Lure_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Lure_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


