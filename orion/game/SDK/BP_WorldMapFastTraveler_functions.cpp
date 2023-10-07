#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C
// (Actor)

class UClass* ABP_WorldMapFastTraveler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WorldMapFastTraveler_C");

	return Clss;
}


// BP_WorldMapFastTraveler_C BP_WorldMapFastTraveler.Default__BP_WorldMapFastTraveler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WorldMapFastTraveler_C* ABP_WorldMapFastTraveler_C::GetDefaultObj()
{
	static class ABP_WorldMapFastTraveler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WorldMapFastTraveler_C*>(ABP_WorldMapFastTraveler_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.ResetBanMissionRecordFlag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WorldMapFastTraveler_C::ResetBanMissionRecordFlag(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "ResetBanMissionRecordFlag");

	Params::ABP_WorldMapFastTraveler_C_ResetBanMissionRecordFlag_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.OnFadeEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WorldMapFastTraveler_C::OnFadeEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "OnFadeEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.IsPossibleFastTravel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FWorldMapTable              WorldMapData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_WorldMapFastTraveler_C::IsPossibleFastTravel(struct FWorldMapTable& WorldMapData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "IsPossibleFastTravel");

	Params::ABP_WorldMapFastTraveler_C_IsPossibleFastTravel_Params Parms{};

	Parms.WorldMapData = WorldMapData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.ExecFastTravelIfPossible
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWorldMapTable              DestinationData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// FDelegateProperty_                 OnCloseConfirmDialog                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// FDelegateProperty_                 OnCloseFailedDialog                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// enum class EJudgeFastTravelAvailableResponseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EJudgeFastTravelAvailableResponse ABP_WorldMapFastTraveler_C::ExecFastTravelIfPossible(struct FWorldMapTable& DestinationData, FDelegateProperty_& OnCloseConfirmDialog, FDelegateProperty_& OnCloseFailedDialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "ExecFastTravelIfPossible");

	Params::ABP_WorldMapFastTraveler_C_ExecFastTravelIfPossible_Params Parms{};

	Parms.DestinationData = DestinationData;
	Parms.OnCloseConfirmDialog = OnCloseConfirmDialog;
	Parms.OnCloseFailedDialog = OnCloseFailedDialog;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.CanFastTravelSomeWhere
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, class UWorldMapIconBase*>Icons                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_WorldMapFastTraveler_C::CanFastTravelSomeWhere(TMap<class FName, class UWorldMapIconBase*>& Icons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "CanFastTravelSomeWhere");

	Params::ABP_WorldMapFastTraveler_C_CanFastTravelSomeWhere_Params Parms{};

	Parms.Icons = Icons;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.CanFastTravel
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWorldMapTable              WorldMapData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EJudgeFastTravelAvailableResponseResponse                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_WorldMapFastTraveler_C::CanFastTravel(const struct FWorldMapTable& WorldMapData, enum class EJudgeFastTravelAvailableResponse* Response, class FString* Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "CanFastTravel");

	Params::ABP_WorldMapFastTraveler_C_CanFastTravel_Params Parms{};

	Parms.WorldMapData = WorldMapData;

	UObject::ProcessEvent(Func, &Parms);

	if (Response != nullptr)
		*Response = Parms.Response;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.Is Restriction By Main Story
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FWorldMapTable              WorldMapTable                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Restriction                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WorldMapFastTraveler_C::Is_Restriction_By_Main_Story(struct FWorldMapTable& WorldMapTable, bool* Restriction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "Is Restriction By Main Story");

	Params::ABP_WorldMapFastTraveler_C_Is_Restriction_By_Main_Story_Params Parms{};

	Parms.WorldMapTable = WorldMapTable;

	UObject::ProcessEvent(Func, &Parms);

	if (Restriction != nullptr)
		*Restriction = Parms.Restriction;

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.Is Restriction by Follow Field Command
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Restriction                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WorldMapFastTraveler_C::Is_Restriction_by_Follow_Field_Command(bool* Restriction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "Is Restriction by Follow Field Command");

	Params::ABP_WorldMapFastTraveler_C_Is_Restriction_by_Follow_Field_Command_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Restriction != nullptr)
		*Restriction = Parms.Restriction;

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.OnStartFieldMainSequence
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WorldMapFastTraveler_C::OnStartFieldMainSequence(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "OnStartFieldMainSequence");

	Params::ABP_WorldMapFastTraveler_C_OnStartFieldMainSequence_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.OnClosedFailedDialog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WorldMapFastTraveler_C::OnClosedFailedDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "OnClosedFailedDialog");

	Params::ABP_WorldMapFastTraveler_C_OnClosedFailedDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.OpenFailedDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WorldMapFastTraveler_C::OpenFailedDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "OpenFailedDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.OpenConfirmDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WorldMapFastTraveler_C::OpenConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "OpenConfirmDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.FastTravelRestrictionAtPrologue
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FWorldMapTable              WorldMapData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Restriction                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WorldMapFastTraveler_C::FastTravelRestrictionAtPrologue(const struct FWorldMapTable& WorldMapData, bool* Restriction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "FastTravelRestrictionAtPrologue");

	Params::ABP_WorldMapFastTraveler_C_FastTravelRestrictionAtPrologue_Params Parms{};

	Parms.WorldMapData = WorldMapData;

	UObject::ProcessEvent(Func, &Parms);

	if (Restriction != nullptr)
		*Restriction = Parms.Restriction;

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.IsVisitedLevel
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FWorldMapTable              WorldMapTable                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsVisitedMap                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WorldMapFastTraveler_C::IsVisitedLevel(const struct FWorldMapTable& WorldMapTable, bool* IsVisitedMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "IsVisitedLevel");

	Params::ABP_WorldMapFastTraveler_C_IsVisitedLevel_Params Parms{};

	Parms.WorldMapTable = WorldMapTable;

	UObject::ProcessEvent(Func, &Parms);

	if (IsVisitedMap != nullptr)
		*IsVisitedMap = Parms.IsVisitedMap;

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.OnStartFastTravel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WorldMapFastTraveler_C::OnStartFastTravel(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "OnStartFastTravel");

	Params::ABP_WorldMapFastTraveler_C_OnStartFastTravel_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.OnClosedConfrimDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WorldMapFastTraveler_C::OnClosedConfrimDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "OnClosedConfrimDialog");

	Params::ABP_WorldMapFastTraveler_C_OnClosedConfrimDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_WorldMapFastTraveler_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WorldMapFastTraveler.BP_WorldMapFastTraveler_C.ExecuteUbergraph_BP_WorldMapFastTraveler
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WorldMapFastTraveler_C::ExecuteUbergraph_BP_WorldMapFastTraveler(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_WorldMapFastTraveler_C", "ExecuteUbergraph_BP_WorldMapFastTraveler");

	Params::ABP_WorldMapFastTraveler_C_ExecuteUbergraph_BP_WorldMapFastTraveler_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


