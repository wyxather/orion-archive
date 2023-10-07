#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass EquipmentMenuWidget.EquipmentMenuWidget_C
// (None)

class UClass* UEquipmentMenuWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EquipmentMenuWidget_C");

	return Clss;
}


// EquipmentMenuWidget_C EquipmentMenuWidget.Default__EquipmentMenuWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEquipmentMenuWidget_C* UEquipmentMenuWidget_C::GetDefaultObj()
{
	static class UEquipmentMenuWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEquipmentMenuWidget_C*>(UEquipmentMenuWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetCursorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::GetCursorPosition(struct FVector2D* Position, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "GetCursorPosition");

	Params::UEquipmentMenuWidget_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CursorRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuDecide                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::CursorRight(bool* MenuDecide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CursorRight");

	Params::UEquipmentMenuWidget_C_CursorRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuDecide != nullptr)
		*MenuDecide = Parms.MenuDecide;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CursorLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuCancel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::CursorLeft(bool* MenuCancel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CursorLeft");

	Params::UEquipmentMenuWidget_C_CursorLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuCancel != nullptr)
		*MenuCancel = Parms.MenuCancel;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.DecideMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NextState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::DecideMenu(bool* NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "DecideMenu");

	Params::UEquipmentMenuWidget_C_DecideMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextState != nullptr)
		*NextState = Parms.NextState;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CancelMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::CancelMenu(bool* ReturnState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CancelMenu");

	Params::UEquipmentMenuWidget_C_CancelMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnState != nullptr)
		*ReturnState = Parms.ReturnState;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetMenuRelativePos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   RelativePos                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::GetMenuRelativePos(struct FVector2D* RelativePos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "GetMenuRelativePos");

	Params::UEquipmentMenuWidget_C_GetMenuRelativePos_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RelativePos != nullptr)
		*RelativePos = std::move(Parms.RelativePos);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ApplyDuplicationSkipFlag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FEquipmentRecommendedCalcData>SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FEquipmentRecommendedCalcData>DuplicationList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipmentMenuWidget_C::ApplyDuplicationSkipFlag(TArray<struct FEquipmentRecommendedCalcData>& SelectedItem, TArray<struct FEquipmentRecommendedCalcData>& DuplicationList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "ApplyDuplicationSkipFlag");

	Params::UEquipmentMenuWidget_C_ApplyDuplicationSkipFlag_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.DuplicationList = DuplicationList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SetCategoryGuide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::SetCategoryGuide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SetCategoryGuide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Chara RecomenndedEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEQUIPMENT_RECOMENNDED_TYPERecomenndedType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::Chara_RecomenndedEquipment(enum class EEQUIPMENT_RECOMENNDED_TYPE RecomenndedType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "Chara RecomenndedEquipment");

	Params::UEquipmentMenuWidget_C_Chara_RecomenndedEquipment_Params Parms{};

	Parms.RecomenndedType = RecomenndedType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UpdateNextEquipAilment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BeforeEquipItemLabel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AfterItemLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::UpdateNextEquipAilment(class FName BeforeEquipItemLabel, class FName AfterItemLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "UpdateNextEquipAilment");

	Params::UEquipmentMenuWidget_C_UpdateNextEquipAilment_Params Parms{};

	Parms.BeforeEquipItemLabel = BeforeEquipItemLabel;
	Parms.AfterItemLabel = AfterItemLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UpdateCurrentEquipAilment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::UpdateCurrentEquipAilment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "UpdateCurrentEquipAilment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CloseRecommendedWidget_Inner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::CloseRecommendedWidget_Inner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CloseRecommendedWidget_Inner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ChangeCategoryCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlus                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::ChangeCategoryCallback(bool IsPlus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "ChangeCategoryCallback");

	Params::UEquipmentMenuWidget_C_ChangeCategoryCallback_Params Parms{};

	Parms.IsPlus = IsPlus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.InitializeRecommendedWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::InitializeRecommendedWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "InitializeRecommendedWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.AddEquipmentList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FEquipmentRecommendedData>OutRecommendedEquipList                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              ItemNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::AddEquipmentList(TArray<struct FEquipmentRecommendedData>& OutRecommendedEquipList, class FName ItemId, struct FItemData& ItemData, int32 ItemNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "AddEquipmentList");

	Params::UEquipmentMenuWidget_C_AddEquipmentList_Params Parms{};

	Parms.OutRecommendedEquipList = OutRecommendedEquipList;
	Parms.ItemId = ItemId;
	Parms.ItemData = ItemData;
	Parms.ItemNum = ItemNum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnDecideAllEquipmentMenuCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::OnDecideAllEquipmentMenuCallback(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnDecideAllEquipmentMenuCallback");

	Params::UEquipmentMenuWidget_C_OnDecideAllEquipmentMenuCallback_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnClosedGuestCharaDialog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::OnClosedGuestCharaDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnClosedGuestCharaDialog");

	Params::UEquipmentMenuWidget_C_OnClosedGuestCharaDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Debug_GetStateInfoAsString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UEquipmentMenuWidget_C::Debug_GetStateInfoAsString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "Debug_GetStateInfoAsString");

	Params::UEquipmentMenuWidget_C_Debug_GetStateInfoAsString_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.RecommendedFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::RecommendedFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "RecommendedFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ChangeCharaPartMenuFromAllEquip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectPart                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::ChangeCharaPartMenuFromAllEquip(int32 PlayerID, int32 CategoryIndex, int32 SelectPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "ChangeCharaPartMenuFromAllEquip");

	Params::UEquipmentMenuWidget_C_ChangeCharaPartMenuFromAllEquip_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.CategoryIndex = CategoryIndex;
	Parms.SelectPart = SelectPart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetCharacterID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                      CharaID                                                          (Parm, OutParm)

void UEquipmentMenuWidget_C::GetCharacterID(TArray<int32>* CharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "GetCharacterID");

	Params::UEquipmentMenuWidget_C_GetCharacterID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CharaID != nullptr)
		*CharaID = std::move(Parms.CharaID);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.FixedEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EquipIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::FixedEquipment(int32 EquipIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "FixedEquipment");

	Params::UEquipmentMenuWidget_C_FixedEquipment_Params Parms{};

	Parms.EquipIndex = EquipIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CalcJobIncrement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJobEvalautionValueData     Evalaution                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEquipmentRecommendedData   EquipParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              Point                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::CalcJobIncrement(const struct FJobEvalautionValueData& Evalaution, const struct FEquipmentRecommendedData& EquipParam, float* Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CalcJobIncrement");

	Params::UEquipmentMenuWidget_C_CalcJobIncrement_Params Parms{};

	Parms.Evalaution = Evalaution;
	Parms.EquipParam = EquipParam;

	UObject::ProcessEvent(Func, &Parms);

	if (Point != nullptr)
		*Point = Parms.Point;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SelectedEquipmentData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FEquipmentRecommendedCalcData>CalcData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EEQUIPMENT_PART         EquipPart                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CharaID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::SelectedEquipmentData(TArray<struct FEquipmentRecommendedCalcData>& CalcData, enum class EEQUIPMENT_PART EquipPart, int32* CharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SelectedEquipmentData");

	Params::UEquipmentMenuWidget_C_SelectedEquipmentData_Params Parms{};

	Parms.CalcData = CalcData;
	Parms.EquipPart = EquipPart;

	UObject::ProcessEvent(Func, &Parms);

	if (CharaID != nullptr)
		*CharaID = Parms.CharaID;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CheckDuplication
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FEquipmentRecommendedCalcData>CalcData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        CheckLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Duplication                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FEquipmentRecommendedCalcData>Data                                                             (Parm, OutParm)

void UEquipmentMenuWidget_C::CheckDuplication(TArray<struct FEquipmentRecommendedCalcData>& CalcData, class FName CheckLabel, bool* Duplication, TArray<struct FEquipmentRecommendedCalcData>* Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CheckDuplication");

	Params::UEquipmentMenuWidget_C_CheckDuplication_Params Parms{};

	Parms.CalcData = CalcData;
	Parms.CheckLabel = CheckLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Duplication != nullptr)
		*Duplication = Parms.Duplication;

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Equip Recommended
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::Equip_Recommended()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "Equip Recommended");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CalcJobEvalaution
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJobEvalautionValueData     Evalaution                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEquipmentRecommendedData   EquipParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              EvalautionPoint                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::CalcJobEvalaution(const struct FJobEvalautionValueData& Evalaution, const struct FEquipmentRecommendedData& EquipParam, float* EvalautionPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CalcJobEvalaution");

	Params::UEquipmentMenuWidget_C_CalcJobEvalaution_Params Parms{};

	Parms.Evalaution = Evalaution;
	Parms.EquipParam = EquipParam;

	UObject::ProcessEvent(Func, &Parms);

	if (EvalautionPoint != nullptr)
		*EvalautionPoint = Parms.EvalautionPoint;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.TmpSelectedBestEquipment
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         EquipPart                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquipmentCategory      EquipCategory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EvalautionPoint                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EquipLabel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanEquip                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::TmpSelectedBestEquipment(int32 CharaID, enum class EEQUIPMENT_PART EquipPart, enum class EEquipmentCategory EquipCategory, float* EvalautionPoint, class FName* EquipLabel, bool* CanEquip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "TmpSelectedBestEquipment");

	Params::UEquipmentMenuWidget_C_TmpSelectedBestEquipment_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.EquipPart = EquipPart;
	Parms.EquipCategory = EquipCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (EvalautionPoint != nullptr)
		*EvalautionPoint = Parms.EvalautionPoint;

	if (EquipLabel != nullptr)
		*EquipLabel = Parms.EquipLabel;

	if (CanEquip != nullptr)
		*CanEquip = Parms.CanEquip;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UpdateAllCharaRecomennded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::UpdateAllCharaRecomennded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "UpdateAllCharaRecomennded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Close AllRecomennded Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::Close_AllRecomennded_Widget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "Close AllRecomennded Widget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.RecommendedCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::RecommendedCursor(bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "RecommendedCursor");

	Params::UEquipmentMenuWidget_C_RecommendedCursor_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Recomennded Callback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::Recomennded_Callback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "Recomennded Callback");

	Params::UEquipmentMenuWidget_C_Recomennded_Callback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.RecommendedCancelCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::RecommendedCancelCallback(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "RecommendedCancelCallback");

	Params::UEquipmentMenuWidget_C_RecommendedCancelCallback_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.All Recomment Equip Event
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::All_Recomment_Equip_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "All Recomment Equip Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CheckRecommendedAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::CheckRecommendedAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CheckRecommendedAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CenterDecide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EquipmentPartIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::CenterDecide(int32 EquipmentPartIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CenterDecide");

	Params::UEquipmentMenuWidget_C_CenterDecide_Params Parms{};

	Parms.EquipmentPartIndex = EquipmentPartIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SetBarMode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBar                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEquipmentMenuWidget_C::SetBarMode(bool IsBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SetBarMode");

	Params::UEquipmentMenuWidget_C_SetBarMode_Params Parms{};

	Parms.IsBar = IsBar;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.EquipRecommendedCinfirmCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::EquipRecommendedCinfirmCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "EquipRecommendedCinfirmCallback");

	Params::UEquipmentMenuWidget_C_EquipRecommendedCinfirmCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.EquipRemoveAllCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::EquipRemoveAllCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "EquipRemoveAllCallback");

	Params::UEquipmentMenuWidget_C_EquipRemoveAllCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.IsChangeStateCloseFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEquipmentMenuWidget_C::IsChangeStateCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "IsChangeStateCloseFinish");

	Params::UEquipmentMenuWidget_C_IsChangeStateCloseFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.IsChangeStateOpenFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEquipmentMenuWidget_C::IsChangeStateOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "IsChangeStateOpenFinish");

	Params::UEquipmentMenuWidget_C_IsChangeStateOpenFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Init
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEquipmentMenuWidget_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "Init");

	Params::UEquipmentMenuWidget_C_Init_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.RefreshParamUI_ByNoWeapon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::RefreshParamUI_ByNoWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "RefreshParamUI_ByNoWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.RefreshPartyList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::RefreshPartyList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "RefreshPartyList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SelectRecommendedAccessory
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEQUIPMENT_PART         EquipPart                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEquipmentRecommendedData>RecommendedList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::SelectRecommendedAccessory(enum class EEQUIPMENT_PART EquipPart, TArray<struct FEquipmentRecommendedData>& RecommendedList, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SelectRecommendedAccessory");

	Params::UEquipmentMenuWidget_C_SelectRecommendedAccessory_Params Parms{};

	Parms.EquipPart = EquipPart;
	Parms.RecommendedList = RecommendedList;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SelectRecommendedArmor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEQUIPMENT_PART         EquipPart                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEquipmentRecommendedData>RecommendedList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               SelectFromSameCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::SelectRecommendedArmor(enum class EEQUIPMENT_PART EquipPart, TArray<struct FEquipmentRecommendedData>& RecommendedList, bool SelectFromSameCategory, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SelectRecommendedArmor");

	Params::UEquipmentMenuWidget_C_SelectRecommendedArmor_Params Parms{};

	Parms.EquipPart = EquipPart;
	Parms.RecommendedList = RecommendedList;
	Parms.SelectFromSameCategory = SelectFromSameCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.EquipItem_Local
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         EquipPart                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRemove                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::EquipItem_Local(int32 CharacterID, enum class EEQUIPMENT_PART EquipPart, class FName ItemLabel, bool IsRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "EquipItem_Local");

	Params::UEquipmentMenuWidget_C_EquipItem_Local_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.EquipPart = EquipPart;
	Parms.ItemLabel = ItemLabel;
	Parms.IsRemove = IsRemove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SelectRecommendedWeapon
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEQUIPMENT_PART         EquipPart                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEquipmentRecommendedData>RecommendedList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::SelectRecommendedWeapon(enum class EEQUIPMENT_PART EquipPart, TArray<struct FEquipmentRecommendedData>& RecommendedList, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SelectRecommendedWeapon");

	Params::UEquipmentMenuWidget_C_SelectRecommendedWeapon_Params Parms{};

	Parms.EquipPart = EquipPart;
	Parms.RecommendedList = RecommendedList;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CategorizeEquipmentItems
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RemoveFixedEquip                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::CategorizeEquipmentItems(bool RemoveFixedEquip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CategorizeEquipmentItems");

	Params::UEquipmentMenuWidget_C_CategorizeEquipmentItems_Params Parms{};

	Parms.RemoveFixedEquip = RemoveFixedEquip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Equip Recommended_DEPLECATED
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::Equip_Recommended_DEPLECATED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "Equip Recommended_DEPLECATED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.IsClosingState
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEquipmentMenuWidget_C::IsClosingState(int32 State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "IsClosingState");

	Params::UEquipmentMenuWidget_C_IsClosingState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.PushRightList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::PushRightList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "PushRightList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.PushCenterList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::PushCenterList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "PushCenterList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CloseRightList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::CloseRightList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CloseRightList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CloseCenterList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlayNullCloseAnim                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::CloseCenterList(bool IsPlayNullCloseAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CloseCenterList");

	Params::UEquipmentMenuWidget_C_CloseCenterList_Params Parms{};

	Parms.IsPlayNullCloseAnim = IsPlayNullCloseAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SetGuideUI
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NotUsePlus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::SetGuideUI(bool NotUsePlus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SetGuideUI");

	Params::UEquipmentMenuWidget_C_SetGuideUI_Params Parms{};

	Parms.NotUsePlus = NotUsePlus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UpdateEquipCharacterList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::UpdateEquipCharacterList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "UpdateEquipCharacterList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UpdateSelectedCurrentWeaponName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::UpdateSelectedCurrentWeaponName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "UpdateSelectedCurrentWeaponName");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UpdateEquipListAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::UpdateEquipListAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "UpdateEquipListAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UpdateCurrentEquipmentParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::UpdateCurrentEquipmentParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "UpdateCurrentEquipmentParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UpdateEquipEffectParam_BeforeAfter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::UpdateEquipEffectParam_BeforeAfter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "UpdateEquipEffectParam_BeforeAfter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CategoryPosToCharacterId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CategoryCursorPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CharacterID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::CategoryPosToCharacterId(int32 CategoryCursorPos, int32* CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CategoryPosToCharacterId");

	Params::UEquipmentMenuWidget_C_CategoryPosToCharacterId_Params Parms{};

	Parms.CategoryCursorPos = CategoryCursorPos;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterID != nullptr)
		*CharacterID = Parms.CharacterID;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Get Equip Effect Params Int Array_DEPRICATED
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentWeaponLabel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Params                                                           (Parm, OutParm)

void UEquipmentMenuWidget_C::Get_Equip_Effect_Params_Int_Array_DEPRICATED(int32 CharacterID, class FName CurrentWeaponLabel, TArray<int32>* Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "Get Equip Effect Params Int Array_DEPRICATED");

	Params::UEquipmentMenuWidget_C_Get_Equip_Effect_Params_Int_Array_DEPRICATED_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.CurrentWeaponLabel = CurrentWeaponLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Params != nullptr)
		*Params = std::move(Parms.Params);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UpdateEquipPartList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::UpdateEquipPartList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "UpdateEquipPartList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetEquipItemData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         EquipmentPart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemData                                                         (Parm, OutParm)
// struct FItemDataForMenu            ItemDataForMenu                                                  (Parm, OutParm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::GetEquipItemData(int32 CharacterID, enum class EEQUIPMENT_PART EquipmentPart, struct FItemData* ItemData, struct FItemDataForMenu* ItemDataForMenu, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "GetEquipItemData");

	Params::UEquipmentMenuWidget_C_GetEquipItemData_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.EquipmentPart = EquipmentPart;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemData != nullptr)
		*ItemData = std::move(Parms.ItemData);

	if (ItemDataForMenu != nullptr)
		*ItemDataForMenu = std::move(Parms.ItemDataForMenu);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CreateEquipItemList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEQUIPMENT_PART         EquipmentPart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::CreateEquipItemList(enum class EEQUIPMENT_PART EquipmentPart, int32 CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CreateEquipItemList");

	Params::UEquipmentMenuWidget_C_CreateEquipItemList_Params Parms{};

	Parms.EquipmentPart = EquipmentPart;
	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CreateCategoryData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FListWidgetCategory> OutCategoryData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipmentMenuWidget_C::CreateCategoryData(TArray<struct FListWidgetCategory>& OutCategoryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CreateCategoryData");

	Params::UEquipmentMenuWidget_C_CreateCategoryData_Params Parms{};

	Parms.OutCategoryData = OutCategoryData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SwitchToCenterList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::SwitchToCenterList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SwitchToCenterList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SwitchToRightList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::SwitchToRightList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SwitchToRightList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ListEvent_Right
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::ListEvent_Right(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "ListEvent_Right");

	Params::UEquipmentMenuWidget_C_ListEvent_Right_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ListEvent_Center
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::ListEvent_Center(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "ListEvent_Center");

	Params::UEquipmentMenuWidget_C_ListEvent_Center_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.IsPlayingAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::IsPlayingAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "IsPlayingAnim");

	Params::UEquipmentMenuWidget_C_IsPlayingAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SetupMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::SetupMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SetupMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CreateEquipPartList
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>OutItemList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FName>                OutEquippedList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipmentMenuWidget_C::CreateEquipPartList(TArray<struct FMJListWidgetItemData>& OutItemList, TArray<class FName>& OutEquippedList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CreateEquipPartList");

	Params::UEquipmentMenuWidget_C_CreateEquipPartList_Params Parms{};

	Parms.OutItemList = OutItemList;
	Parms.OutEquippedList = OutEquippedList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetCurrentState_Local
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEQUIPMENT_MENU_STATE   CurrentState                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::GetCurrentState_Local(enum class EEQUIPMENT_MENU_STATE* CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "GetCurrentState_Local");

	Params::UEquipmentMenuWidget_C_GetCurrentState_Local_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentState != nullptr)
		*CurrentState = Parms.CurrentState;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnEndState_Local
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEQUIPMENT_MENU_STATE   CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_MENU_STATE   NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::OnEndState_Local(enum class EEQUIPMENT_MENU_STATE CurrentState, enum class EEQUIPMENT_MENU_STATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnEndState_Local");

	Params::UEquipmentMenuWidget_C_OnEndState_Local_Params Parms{};

	Parms.CurrentState = CurrentState;
	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnBeginState_Local
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEQUIPMENT_MENU_STATE   PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_MENU_STATE   CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::OnBeginState_Local(enum class EEQUIPMENT_MENU_STATE PrevState, enum class EEQUIPMENT_MENU_STATE CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnBeginState_Local");

	Params::UEquipmentMenuWidget_C_OnBeginState_Local_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnUpdate_Local
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEQUIPMENT_MENU_STATE   CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::OnUpdate_Local(enum class EEQUIPMENT_MENU_STATE CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnUpdate_Local");

	Params::UEquipmentMenuWidget_C_OnUpdate_Local_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SetNextState_Local
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEQUIPMENT_MENU_STATE   NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::SetNextState_Local(enum class EEQUIPMENT_MENU_STATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SetNextState_Local");

	Params::UEquipmentMenuWidget_C_SetNextState_Local_Params Parms{};

	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEquipmentMenuWidget_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "IsRunning");

	Params::UEquipmentMenuWidget_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.Close Menu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlayNullCloseAnim                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::Close_Menu(bool IsPlayNullCloseAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "Close Menu");

	Params::UEquipmentMenuWidget_C_Close_Menu_Params Parms{};

	Parms.IsPlayNullCloseAnim = IsPlayNullCloseAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OpenMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OpenMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OpenMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnRightAxisX");

	Params::UEquipmentMenuWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnRightAxisY");

	Params::UEquipmentMenuWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnLeftAxisX");

	Params::UEquipmentMenuWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnLeftAxisY");

	Params::UEquipmentMenuWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnGamePadAxisX");

	Params::UEquipmentMenuWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnGamePadAxisY");

	Params::UEquipmentMenuWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentMenuWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnListPaging");

	Params::UEquipmentMenuWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "WorldMapSlowCursorX");

	Params::UEquipmentMenuWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "WorldMapSlowCursorY");

	Params::UEquipmentMenuWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "HelpScrollAxis");

	Params::UEquipmentMenuWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OutFocusMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OutFocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OutFocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.FocusMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::FocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "FocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnHelpMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnHelpMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnHelpMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::GetRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "GetRightAxisX");

	Params::UEquipmentMenuWidget_C_GetRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::GetRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "GetRightAxisY");

	Params::UEquipmentMenuWidget_C_GetRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.RBMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::RBMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "RBMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::GetLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "GetLeftAxisX");

	Params::UEquipmentMenuWidget_C_GetLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::GetLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "GetLeftAxisY");

	Params::UEquipmentMenuWidget_C_GetLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.RightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::RightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "RightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.RightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::RightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "RightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.RBMenuRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::RBMenuRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "RBMenuRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::GetGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "GetGamePadAxisX");

	Params::UEquipmentMenuWidget_C_GetGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.GetGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::GetGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "GetGamePadAxisY");

	Params::UEquipmentMenuWidget_C_GetGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SubMenu_WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::SubMenu_WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SubMenu_WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SubMenu_WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::SubMenu_WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SubMenu_WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SubMenu_WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::SubMenu_WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SubMenu_WorldMapSlowCursorX");

	Params::UEquipmentMenuWidget_C_SubMenu_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.SubMenu_WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::SubMenu_WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "SubMenu_WorldMapSlowCursorY");

	Params::UEquipmentMenuWidget_C_SubMenu_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnUpdateState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::OnUpdateState(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnUpdateState");

	Params::UEquipmentMenuWidget_C_OnUpdateState_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnBeginState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::OnBeginState(int32 PrevState, int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnBeginState");

	Params::UEquipmentMenuWidget_C_OnBeginState_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnEndState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::OnEndState(int32 CurrentState, int32 NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnEndState");

	Params::UEquipmentMenuWidget_C_OnEndState_Params Parms{};

	Parms.CurrentState = CurrentState;
	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEquipmentMenuWidget_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentMenuWidget.EquipmentMenuWidget_C.ExecuteUbergraph_EquipmentMenuWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentMenuWidget_C::ExecuteUbergraph_EquipmentMenuWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EquipmentMenuWidget_C", "ExecuteUbergraph_EquipmentMenuWidget");

	Params::UEquipmentMenuWidget_C_ExecuteUbergraph_EquipmentMenuWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


