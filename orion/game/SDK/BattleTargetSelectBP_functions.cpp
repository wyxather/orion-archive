#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattleTargetSelectBP.BattleTargetSelectBP_C
// (Actor)

class UClass* ABattleTargetSelectBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleTargetSelectBP_C");

	return Clss;
}


// BattleTargetSelectBP_C BattleTargetSelectBP.Default__BattleTargetSelectBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABattleTargetSelectBP_C* ABattleTargetSelectBP_C::GetDefaultObj()
{
	static class ABattleTargetSelectBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABattleTargetSelectBP_C*>(ABattleTargetSelectBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.MakeCatapultAttributeList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       AttributeList                                                    (Parm, OutParm)

void ABattleTargetSelectBP_C::MakeCatapultAttributeList(TArray<bool>* AttributeList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "MakeCatapultAttributeList");

	Params::ABattleTargetSelectBP_C_MakeCatapultAttributeList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AttributeList != nullptr)
		*AttributeList = std::move(Parms.AttributeList);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SearchPriorityTargetByDiseaseType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>CharacterList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PriorityTargetIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTargetSelectBP_C::SearchPriorityTargetByDiseaseType(TArray<class ABattleCharacterBase*>& CharacterList, enum class EDISEASE_TYPE DiseaseType, int32* PriorityTargetIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "SearchPriorityTargetByDiseaseType");

	Params::ABattleTargetSelectBP_C_SearchPriorityTargetByDiseaseType_Params Parms{};

	Parms.CharacterList = CharacterList;
	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	if (PriorityTargetIndex != nullptr)
		*PriorityTargetIndex = Parms.PriorityTargetIndex;

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SearchPriorityTargetByDiseaseCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>CharacterList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EDISEASE_CATEGORY       DiseaseCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PriorityTargetIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTargetSelectBP_C::SearchPriorityTargetByDiseaseCategory(TArray<class ABattleCharacterBase*>& CharacterList, enum class EDISEASE_CATEGORY DiseaseCategory, int32* PriorityTargetIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "SearchPriorityTargetByDiseaseCategory");

	Params::ABattleTargetSelectBP_C_SearchPriorityTargetByDiseaseCategory_Params Parms{};

	Parms.CharacterList = CharacterList;
	Parms.DiseaseCategory = DiseaseCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (PriorityTargetIndex != nullptr)
		*PriorityTargetIndex = Parms.PriorityTargetIndex;

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.CheckDiseaseRecovery
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAilmentHandler>     AilmentList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EAILMENT_REMOVE_DISEASE_TYPETargetDisease                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EDISEASE_TYPE>   DiseaseTypeList                                                  (Parm, OutParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTargetSelectBP_C::CheckDiseaseRecovery(TArray<struct FAilmentHandler>& AilmentList, enum class EAILMENT_REMOVE_DISEASE_TYPE* TargetDisease, TArray<enum class EDISEASE_TYPE>* DiseaseTypeList, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "CheckDiseaseRecovery");

	Params::ABattleTargetSelectBP_C_CheckDiseaseRecovery_Params Parms{};

	Parms.AilmentList = AilmentList;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetDisease != nullptr)
		*TargetDisease = Parms.TargetDisease;

	if (DiseaseTypeList != nullptr)
		*DiseaseTypeList = std::move(Parms.DiseaseTypeList);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.UpdateCursorFunc
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleTargetSelectBP_C::UpdateCursorFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "UpdateCursorFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.GetScatterTargetSelectCount
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        WorkTarget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTargetSelectBP_C::GetScatterTargetSelectCount(class ABattleCharacterBase* WorkTarget, int32* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "GetScatterTargetSelectCount");

	Params::ABattleTargetSelectBP_C_GetScatterTargetSelectCount_Params Parms{};

	Parms.WorkTarget = WorkTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.IsEmptyScatterTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEmpty                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTargetSelectBP_C::IsEmptyScatterTarget(bool* IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "IsEmptyScatterTarget");

	Params::ABattleTargetSelectBP_C_IsEmptyScatterTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.CancelScatterTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleTargetSelectBP_C::CancelScatterTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "CancelScatterTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.DecideScatterTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ScatterCountMax                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTargetSelectBP_C::DecideScatterTarget(bool* ScatterCountMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "DecideScatterTarget");

	Params::ABattleTargetSelectBP_C_DecideScatterTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ScatterCountMax != nullptr)
		*ScatterCountMax = Parms.ScatterCountMax;

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.CheckPOTRecovery
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAilmentHandler>     AilmentList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTargetSelectBP_C::CheckPOTRecovery(TArray<struct FAilmentHandler>& AilmentList, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "CheckPOTRecovery");

	Params::ABattleTargetSelectBP_C_CheckPOTRecovery_Params Parms{};

	Parms.AilmentList = AilmentList;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.FixupTargetOrder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCameraBP_C*           BattleCamera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTargetSelectBP_C::FixupTargetOrder(class ABattleCameraBP_C* BattleCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "FixupTargetOrder");

	Params::ABattleTargetSelectBP_C_FixupTargetOrder_Params Parms{};

	Parms.BattleCamera = BattleCamera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SortBattleTargetByCamera
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>TargetList                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABattleCameraBP_C*           BattleCamera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>SortedList                                                       (Parm, OutParm)

void ABattleTargetSelectBP_C::SortBattleTargetByCamera(TArray<class ABattleCharacterBase*>& TargetList, class ABattleCameraBP_C* BattleCamera, TArray<class ABattleCharacterBase*>* SortedList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "SortBattleTargetByCamera");

	Params::ABattleTargetSelectBP_C_SortBattleTargetByCamera_Params Parms{};

	Parms.TargetList = TargetList;
	Parms.BattleCamera = BattleCamera;

	UObject::ProcessEvent(Func, &Parms);

	if (SortedList != nullptr)
		*SortedList = std::move(Parms.SortedList);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SortBattleTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBaseBP_C*>TargetList                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ABattleCharacterBaseBP_C*>SortedList                                                       (Parm, OutParm)

void ABattleTargetSelectBP_C::SortBattleTarget(TArray<class ABattleCharacterBaseBP_C*>& TargetList, TArray<class ABattleCharacterBaseBP_C*>* SortedList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "SortBattleTarget");

	Params::ABattleTargetSelectBP_C_SortBattleTarget_Params Parms{};

	Parms.TargetList = TargetList;

	UObject::ProcessEvent(Func, &Parms);

	if (SortedList != nullptr)
		*SortedList = std::move(Parms.SortedList);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.GetSpecialAttributeList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AbilityLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<bool>                       AttributeList                                                    (Parm, OutParm)

void ABattleTargetSelectBP_C::GetSpecialAttributeList(class FName AbilityLabel, bool* Enable, TArray<bool>* AttributeList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "GetSpecialAttributeList");

	Params::ABattleTargetSelectBP_C_GetSpecialAttributeList_Params Parms{};

	Parms.AbilityLabel = AbilityLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

	if (AttributeList != nullptr)
		*AttributeList = std::move(Parms.AttributeList);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.AutoSelectTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleTargetSelectBP_C::AutoSelectTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "AutoSelectTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.CreateTargetCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleTargetSelectBP_C::CreateTargetCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "CreateTargetCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.InitTargetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleTargetSelectBP_C::InitTargetIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "InitTargetIndex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SetSelectTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBaseBP_C*>Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattleTargetSelectBP_C::SetSelectTarget(TArray<class ABattleCharacterBaseBP_C*>& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "SetSelectTarget");

	Params::ABattleTargetSelectBP_C_SetSelectTarget_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.InitCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleTargetSelectBP_C::InitCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "InitCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.GetSelectedIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTargetSelectBP_C::GetSelectedIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "GetSelectedIndex");

	Params::ABattleTargetSelectBP_C_GetSelectedIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SelectNext
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveSuccess                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTargetSelectBP_C::SelectNext(bool* MoveSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "SelectNext");

	Params::ABattleTargetSelectBP_C_SelectNext_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MoveSuccess != nullptr)
		*MoveSuccess = Parms.MoveSuccess;

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SelectPrev
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveSuccess                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTargetSelectBP_C::SelectPrev(bool* MoveSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "SelectPrev");

	Params::ABattleTargetSelectBP_C_SelectPrev_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MoveSuccess != nullptr)
		*MoveSuccess = Parms.MoveSuccess;

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.EndSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ResetCamera                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleTargetSelectBP_C::EndSelection(bool ResetCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "EndSelection");

	Params::ABattleTargetSelectBP_C_EndSelection_Params Parms{};

	Parms.ResetCamera = ResetCamera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.GetSelectedTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class ABattleCharacterBase*>SelectTarget                                                     (Parm, OutParm)

void ABattleTargetSelectBP_C::GetSelectedTarget(TArray<class ABattleCharacterBase*>* SelectTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "GetSelectedTarget");

	Params::ABattleTargetSelectBP_C_GetSelectedTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectTarget != nullptr)
		*SelectTarget = std::move(Parms.SelectTarget);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.DestroyTargetSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleTargetSelectBP_C::DestroyTargetSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "DestroyTargetSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.Start Selection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Boost                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTargetSelectBP_C::Start_Selection(class ABattleCharacterBaseBP_C* Enforcer, const struct FAbilityDataBase& Command, int32 Boost, class FName AbilityLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "Start Selection");

	Params::ABattleTargetSelectBP_C_Start_Selection_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.Command = Command;
	Parms.Boost = Boost;
	Parms.AbilityLabel = AbilityLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.SetupTargetSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleTargetSelectBP_C::SetupTargetSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "SetupTargetSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTargetSelectBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "ReceiveTick");

	Params::ABattleTargetSelectBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleTargetSelectBP.BattleTargetSelectBP_C.ExecuteUbergraph_BattleTargetSelectBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleTargetSelectBP_C::ExecuteUbergraph_BattleTargetSelectBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetSelectBP_C", "ExecuteUbergraph_BattleTargetSelectBP");

	Params::ABattleTargetSelectBP_C_ExecuteUbergraph_BattleTargetSelectBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


