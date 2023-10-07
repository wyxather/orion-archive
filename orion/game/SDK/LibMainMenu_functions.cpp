#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibMainMenu.LibMainMenu_C
// (None)

class UClass* ULibMainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibMainMenu_C");

	return Clss;
}


// LibMainMenu_C LibMainMenu.Default__LibMainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibMainMenu_C* ULibMainMenu_C::GetDefaultObj()
{
	static class ULibMainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibMainMenu_C*>(ULibMainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibMainMenu.LibMainMenu_C.GetMainMenuList
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMainMenuList_C*             MainMenuList                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibMainMenu_C::GetMainMenuList(class UObject* __WorldContext, class UMainMenuList_C** MainMenuList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibMainMenu_C", "GetMainMenuList");

	Params::ULibMainMenu_C_GetMainMenuList_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (MainMenuList != nullptr)
		*MainMenuList = Parms.MainMenuList;

}


// Function LibMainMenu.LibMainMenu_C.IsRunningMainMenu
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULibMainMenu_C::IsRunningMainMenu(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibMainMenu_C", "IsRunningMainMenu");

	Params::ULibMainMenu_C_IsRunningMainMenu_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LibMainMenu.LibMainMenu_C.SetMapCharacterVisible
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFastTraveling                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibMainMenu_C::SetMapCharacterVisible(bool IsFastTraveling, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibMainMenu_C", "SetMapCharacterVisible");

	Params::ULibMainMenu_C_SetMapCharacterVisible_Params Parms{};

	Parms.IsFastTraveling = IsFastTraveling;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibMainMenu.LibMainMenu_C.SetFieldMapHidden
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibMainMenu_C::SetFieldMapHidden(bool IsHidden, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibMainMenu_C", "SetFieldMapHidden");

	Params::ULibMainMenu_C_SetFieldMapHidden_Params Parms{};

	Parms.IsHidden = IsHidden;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibMainMenu.LibMainMenu_C.GetEqpIconName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        IconName                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibMainMenu_C::GetEqpIconName(int32 ID, class UObject* __WorldContext, class FName* IconName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibMainMenu_C", "GetEqpIconName");

	Params::ULibMainMenu_C_GetEqpIconName_Params Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IconName != nullptr)
		*IconName = Parms.IconName;

}


// Function LibMainMenu.LibMainMenu_C.OpenMainMenuCommon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMainMenuBase*               MainMenuBase                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibMainMenu_C::OpenMainMenuCommon(class UObject* __WorldContext, class UMainMenuBase** MainMenuBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibMainMenu_C", "OpenMainMenuCommon");

	Params::ULibMainMenu_C_OpenMainMenuCommon_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (MainMenuBase != nullptr)
		*MainMenuBase = Parms.MainMenuBase;

}


// Function LibMainMenu.LibMainMenu_C.CheckLearningHealSkill
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    SaveCharacterData                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FJobData                    JobData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LEARNING                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibMainMenu_C::CheckLearningHealSkill(struct FSavePlayerCharacterData& SaveCharacterData, struct FJobData& JobData, class UObject* __WorldContext, bool* LEARNING)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibMainMenu_C", "CheckLearningHealSkill");

	Params::ULibMainMenu_C_CheckLearningHealSkill_Params Parms{};

	Parms.SaveCharacterData = SaveCharacterData;
	Parms.JobData = JobData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (LEARNING != nullptr)
		*LEARNING = Parms.LEARNING;

}


// Function LibMainMenu.LibMainMenu_C.IsChacterLearningHealSkill
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LEARNING                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibMainMenu_C::IsChacterLearningHealSkill(const struct FSavePlayerCharacterData& CharacterData, class UObject* __WorldContext, bool* LEARNING)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibMainMenu_C", "IsChacterLearningHealSkill");

	Params::ULibMainMenu_C_IsChacterLearningHealSkill_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (LEARNING != nullptr)
		*LEARNING = Parms.LEARNING;

}


// Function LibMainMenu.LibMainMenu_C.CloseMainMenu
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FastClose                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsClose                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibMainMenu_C::CloseMainMenu(bool FastClose, class UObject* __WorldContext, bool* IsClose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibMainMenu_C", "CloseMainMenu");

	Params::ULibMainMenu_C_CloseMainMenu_Params Parms{};

	Parms.FastClose = FastClose;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsClose != nullptr)
		*IsClose = Parms.IsClose;

}


// Function LibMainMenu.LibMainMenu_C.OpenMainMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FastWorldMap                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibMainMenu_C::OpenMainMenu(bool FastWorldMap, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibMainMenu_C", "OpenMainMenu");

	Params::ULibMainMenu_C_OpenMainMenu_Params Parms{};

	Parms.FastWorldMap = FastWorldMap;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibMainMenu.LibMainMenu_C.CombineAilmentData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMainMenuAilmentData>CombineTarget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMainMenuAilmentData        CombineData                                                      (Parm, OutParm, HasGetValueTypeHash)

void ULibMainMenu_C::CombineAilmentData(TArray<struct FMainMenuAilmentData>& CombineTarget, class UObject* __WorldContext, struct FMainMenuAilmentData* CombineData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibMainMenu_C", "CombineAilmentData");

	Params::ULibMainMenu_C_CombineAilmentData_Params Parms{};

	Parms.CombineTarget = CombineTarget;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CombineData != nullptr)
		*CombineData = std::move(Parms.CombineData);

}


// Function LibMainMenu.LibMainMenu_C.GetCharacterAilmentData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMainMenuAilmentData        NewParam                                                         (Parm, OutParm, HasGetValueTypeHash)

void ULibMainMenu_C::GetCharacterAilmentData(struct FSavePlayerCharacterData& CharacterData, class UObject* __WorldContext, struct FMainMenuAilmentData* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibMainMenu_C", "GetCharacterAilmentData");

	Params::ULibMainMenu_C_GetCharacterAilmentData_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}

}


