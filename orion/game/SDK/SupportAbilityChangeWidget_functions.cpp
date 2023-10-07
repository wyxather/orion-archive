#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass SupportAbilityChangeWidget.SupportAbilityChangeWidget_C
// (None)

class UClass* USupportAbilityChangeWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SupportAbilityChangeWidget_C");

	return Clss;
}


// SupportAbilityChangeWidget_C SupportAbilityChangeWidget.Default__SupportAbilityChangeWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USupportAbilityChangeWidget_C* USupportAbilityChangeWidget_C::GetDefaultObj()
{
	static class USupportAbilityChangeWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USupportAbilityChangeWidget_C*>(USupportAbilityChangeWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.HelpScrollAxisEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::HelpScrollAxisEvent(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "HelpScrollAxisEvent");

	Params::USupportAbilityChangeWidget_C_HelpScrollAxisEvent_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.Init
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USupportAbilityChangeWidget_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "Init");

	Params::USupportAbilityChangeWidget_C_Init_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.PlusButtonEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::PlusButtonEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "PlusButtonEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.YButtonEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::YButtonEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "YButtonEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ChangeStateChangeSupportAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::ChangeStateChangeSupportAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "ChangeStateChangeSupportAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.GetNextEmptySupportSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NextSlot                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::GetNextEmptySupportSlot(int32* NextSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "GetNextEmptySupportSlot");

	Params::USupportAbilityChangeWidget_C_GetNextEmptySupportSlot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextSlot != nullptr)
		*NextSlot = Parms.NextSlot;

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ChangePlayerSubjobChangeNone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::ChangePlayerSubjobChangeNone(int32 CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "ChangePlayerSubjobChangeNone");

	Params::USupportAbilityChangeWidget_C_ChangePlayerSubjobChangeNone_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ChangeCharacterCommon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Increment                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportAbilityChangeWidget_C::ChangeCharacterCommon(bool Increment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "ChangeCharacterCommon");

	Params::USupportAbilityChangeWidget_C_ChangeCharacterCommon_Params Parms{};

	Parms.Increment = Increment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.LShoulderEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::LShoulderEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "LShoulderEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.RShoulderEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::RShoulderEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "RShoulderEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ChangeStateCommon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::ChangeStateCommon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "ChangeStateCommon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.SetAbilityComparisionParameter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              AbilitySlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::SetAbilityComparisionParameter(struct FSavePlayerCharacterData& CharacterData, int32 AbilitySlot, int32 AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "SetAbilityComparisionParameter");

	Params::USupportAbilityChangeWidget_C_SetAbilityComparisionParameter_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.AbilitySlot = AbilitySlot;
	Parms.AbilityID = AbilityID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.GetSupportAbilityIDFromAbiliyList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              AbilityID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::GetSupportAbilityIDFromAbiliyList(int32 ItemIndex, bool* IsSuccess, int32* AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "GetSupportAbilityIDFromAbiliyList");

	Params::USupportAbilityChangeWidget_C_GetSupportAbilityIDFromAbiliyList_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

	if (AbilityID != nullptr)
		*AbilityID = Parms.AbilityID;

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.CalcCollectionParam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterParam             BaseParam                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FCharacterParam             JobRevision                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// TArray<int32>                      CollectionParam                                                  (Parm, OutParm)

void USupportAbilityChangeWidget_C::CalcCollectionParam(const struct FCharacterParam& BaseParam, const struct FCharacterParam& JobRevision, TArray<int32>* CollectionParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "CalcCollectionParam");

	Params::USupportAbilityChangeWidget_C_CalcCollectionParam_Params Parms{};

	Parms.BaseParam = BaseParam;
	Parms.JobRevision = JobRevision;

	UObject::ProcessEvent(Func, &Parms);

	if (CollectionParam != nullptr)
		*CollectionParam = std::move(Parms.CollectionParam);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.CloseAbilityWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::CloseAbilityWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "CloseAbilityWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ResetAfterParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::ResetAfterParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "ResetAfterParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ChangeSupportAbilityEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdx                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::ChangeSupportAbilityEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "ChangeSupportAbilityEvent");

	Params::USupportAbilityChangeWidget_C_ChangeSupportAbilityEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdx = ItemIdx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.CloseSupportAbilityList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::CloseSupportAbilityList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "CloseSupportAbilityList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.CreateSupportAbilityListItem
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>ListItem                                                         (Parm, OutParm)
// TArray<class FName>                ShowAbilityList                                                  (Parm, OutParm)
// int32                              EquipCount                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::CreateSupportAbilityListItem(TArray<struct FMJListWidgetItemData>* ListItem, TArray<class FName>* ShowAbilityList, int32* EquipCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "CreateSupportAbilityListItem");

	Params::USupportAbilityChangeWidget_C_CreateSupportAbilityListItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListItem != nullptr)
		*ListItem = std::move(Parms.ListItem);

	if (ShowAbilityList != nullptr)
		*ShowAbilityList = std::move(Parms.ShowAbilityList);

	if (EquipCount != nullptr)
		*EquipCount = Parms.EquipCount;

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.CreateSupportAbilityListCategory
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FListWidgetCategory         ListWidgetCategoryData                                           (Parm, OutParm)

void USupportAbilityChangeWidget_C::CreateSupportAbilityListCategory(struct FListWidgetCategory* ListWidgetCategoryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "CreateSupportAbilityListCategory");

	Params::USupportAbilityChangeWidget_C_CreateSupportAbilityListCategory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListWidgetCategoryData != nullptr)
		*ListWidgetCategoryData = std::move(Parms.ListWidgetCategoryData);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OpenSupportAbilityList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayAnimation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportAbilityChangeWidget_C::OpenSupportAbilityList(bool PlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OpenSupportAbilityList");

	Params::USupportAbilityChangeWidget_C_OpenSupportAbilityList_Params Parms{};

	Parms.PlayAnimation = PlayAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.CharacterDataUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::CharacterDataUpdate(int32 CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "CharacterDataUpdate");

	Params::USupportAbilityChangeWidget_C_CharacterDataUpdate_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.SetupCharacterParameter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void USupportAbilityChangeWidget_C::SetupCharacterParameter(const struct FSavePlayerCharacterData& CharacterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "SetupCharacterParameter");

	Params::USupportAbilityChangeWidget_C_SetupCharacterParameter_Params Parms{};

	Parms.CharacterData = CharacterData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ChangeStateSupportAbility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::ChangeStateSupportAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "ChangeStateSupportAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.SetupDefaultFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::SetupDefaultFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "SetupDefaultFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ChangeStateSelectCharacter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::ChangeStateSelectCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "ChangeStateSelectCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.NowSelectCategoryFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportAbilityChangeWidget_C::NowSelectCategoryFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "NowSelectCategoryFocus");

	Params::USupportAbilityChangeWidget_C_NowSelectCategoryFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.NowSelectCategoryDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::NowSelectCategoryDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "NowSelectCategoryDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.AddIntArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                      Base                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      Add                                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      Result                                                           (Parm, OutParm)

void USupportAbilityChangeWidget_C::AddIntArray(TArray<int32>& Base, TArray<int32>& Add, TArray<int32>* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "AddIntArray");

	Params::USupportAbilityChangeWidget_C_AddIntArray_Params Parms{};

	Parms.Base = Base;
	Parms.Add = Add;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.SetupText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.CancelEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::CancelEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "CancelEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.DecideEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::DecideEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "DecideEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.CursorDownEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::CursorDownEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "CursorDownEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.CursorUpEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::CursorUpEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "CursorUpEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.TickEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::TickEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "TickEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USupportAbilityChangeWidget_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "IsRunning");

	Params::USupportAbilityChangeWidget_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.SetupPlayerData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void USupportAbilityChangeWidget_C::SetupPlayerData(const struct FSavePlayerCharacterData& CharacterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "SetupPlayerData");

	Params::USupportAbilityChangeWidget_C_SetupPlayerData_Params Parms{};

	Parms.CharacterData = CharacterData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.UpdateCategoryCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCursor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::UpdateCategoryCursor(int32 NewCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "UpdateCategoryCursor");

	Params::USupportAbilityChangeWidget_C_UpdateCategoryCursor_Params Parms{};

	Parms.NewCursor = NewCursor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.SetupCategoryWidget
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::SetupCategoryWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "SetupCategoryWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OpenAbilityStatus
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSavePlayerCharacterData>CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UListWidget_C*               SupportAbilitySelectList                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::OpenAbilityStatus(TArray<struct FSavePlayerCharacterData>& CharacterData, class UListWidget_C*& SupportAbilitySelectList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OpenAbilityStatus");

	Params::USupportAbilityChangeWidget_C_OpenAbilityStatus_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.SupportAbilitySelectList = SupportAbilitySelectList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnRightAxisX");

	Params::USupportAbilityChangeWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnRightAxisY");

	Params::USupportAbilityChangeWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnLeftAxisX");

	Params::USupportAbilityChangeWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnLeftAxisY");

	Params::USupportAbilityChangeWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnGamePadAxisX");

	Params::USupportAbilityChangeWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnGamePadAxisY");

	Params::USupportAbilityChangeWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportAbilityChangeWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnListPaging");

	Params::USupportAbilityChangeWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "WorldMapSlowCursorX");

	Params::USupportAbilityChangeWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "WorldMapSlowCursorY");

	Params::USupportAbilityChangeWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "HelpScrollAxis");

	Params::USupportAbilityChangeWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "Tick");

	Params::USupportAbilityChangeWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USupportAbilityChangeWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SupportAbilityChangeWidget.SupportAbilityChangeWidget_C.ExecuteUbergraph_SupportAbilityChangeWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USupportAbilityChangeWidget_C::ExecuteUbergraph_SupportAbilityChangeWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SupportAbilityChangeWidget_C", "ExecuteUbergraph_SupportAbilityChangeWidget");

	Params::USupportAbilityChangeWidget_C_ExecuteUbergraph_SupportAbilityChangeWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


