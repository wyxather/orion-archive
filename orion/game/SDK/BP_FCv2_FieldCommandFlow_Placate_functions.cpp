#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C
// (Actor)

class UClass* ABP_FCv2_FieldCommandFlow_Placate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FCv2_FieldCommandFlow_Placate_C");

	return Clss;
}


// BP_FCv2_FieldCommandFlow_Placate_C BP_FCv2_FieldCommandFlow_Placate.Default__BP_FCv2_FieldCommandFlow_Placate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FCv2_FieldCommandFlow_Placate_C* ABP_FCv2_FieldCommandFlow_Placate_C::GetDefaultObj()
{
	static class ABP_FCv2_FieldCommandFlow_Placate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FCv2_FieldCommandFlow_Placate_C*>(ABP_FCv2_FieldCommandFlow_Placate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.GetRunningStatus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString ABP_FCv2_FieldCommandFlow_Placate_C::GetRunningStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Placate_C", "GetRunningStatus");

	Params::ABP_FCv2_FieldCommandFlow_Placate_C_GetRunningStatus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.OnFinishFieldCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlow_Placate_C::OnFinishFieldCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Placate_C", "OnFinishFieldCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.IsAvailable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNpcPropertyComponent*       TargetNpc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlow_Placate_C::IsAvailable(class UNpcPropertyComponent* TargetNpc, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Placate_C", "IsAvailable");

	Params::ABP_FCv2_FieldCommandFlow_Placate_C_IsAvailable_Params Parms{};

	Parms.TargetNpc = TargetNpc;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.ComsumeItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNPCLeadDataBase            NPCLeadDataBase                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_FCv2_FieldCommandFlow_Placate_C::ComsumeItems(struct FNPCLeadDataBase& NPCLeadDataBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Placate_C", "ComsumeItems");

	Params::ABP_FCv2_FieldCommandFlow_Placate_C_ComsumeItems_Params Parms{};

	Parms.NPCLeadDataBase = NPCLeadDataBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.UpdateFlow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInterruptPlay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESequenceResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlow_Placate_C::UpdateFlow(bool IsInterruptPlay, enum class ESequenceResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Placate_C", "UpdateFlow");

	Params::ABP_FCv2_FieldCommandFlow_Placate_C_UpdateFlow_Params Parms{};

	Parms.IsInterruptPlay = IsInterruptPlay;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.PreProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlow_Placate_C::PreProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Placate_C", "PreProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.ExecFollowFromEvent
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_FCv2_FieldCommandFlow_Placate_C::ExecFollowFromEvent(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Placate_C", "ExecFollowFromEvent");

	Params::ABP_FCv2_FieldCommandFlow_Placate_C_ExecFollowFromEvent_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.GrabStateSnapshot_Internal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm)

TMap<class FString, class FString> ABP_FCv2_FieldCommandFlow_Placate_C::GrabStateSnapshot_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Placate_C", "GrabStateSnapshot_Internal");

	Params::ABP_FCv2_FieldCommandFlow_Placate_C_GrabStateSnapshot_Internal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.GetState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EFCV2_SequenceState_PlacateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EFCV2_SequenceState_Placate ABP_FCv2_FieldCommandFlow_Placate_C::GetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Placate_C", "GetState");

	Params::ABP_FCv2_FieldCommandFlow_Placate_C_GetState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFCV2_SequenceState_PlacateState                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlow_Placate_C::SetState(enum class EFCV2_SequenceState_Placate State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Placate_C", "SetState");

	Params::ABP_FCv2_FieldCommandFlow_Placate_C_SetState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.HasRequiredItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlow_Placate_C::HasRequiredItem(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Placate_C", "HasRequiredItem");

	Params::ABP_FCv2_FieldCommandFlow_Placate_C_HasRequiredItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlow_Placate_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Placate_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlow_Placate.BP_FCv2_FieldCommandFlow_Placate_C.ExecuteUbergraph_BP_FCv2_FieldCommandFlow_Placate
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlow_Placate_C::ExecuteUbergraph_BP_FCv2_FieldCommandFlow_Placate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Placate_C", "ExecuteUbergraph_BP_FCv2_FieldCommandFlow_Placate");

	Params::ABP_FCv2_FieldCommandFlow_Placate_C_ExecuteUbergraph_BP_FCv2_FieldCommandFlow_Placate_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


