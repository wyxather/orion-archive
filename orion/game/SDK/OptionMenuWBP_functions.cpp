#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass OptionMenuWBP.OptionMenuWBP_C
// (None)

class UClass* UOptionMenuWBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptionMenuWBP_C");

	return Clss;
}


// OptionMenuWBP_C OptionMenuWBP.Default__OptionMenuWBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOptionMenuWBP_C* UOptionMenuWBP_C::GetDefaultObj()
{
	static class UOptionMenuWBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptionMenuWBP_C*>(UOptionMenuWBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OptionMenuWBP.OptionMenuWBP_C.GetCursorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::GetCursorPosition(struct FVector2D* Position, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetCursorPosition");

	Params::UOptionMenuWBP_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function OptionMenuWBP.OptionMenuWBP_C.CursorRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuDecide                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::CursorRight(bool* MenuDecide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "CursorRight");

	Params::UOptionMenuWBP_C_CursorRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuDecide != nullptr)
		*MenuDecide = Parms.MenuDecide;

}


// Function OptionMenuWBP.OptionMenuWBP_C.CursorLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuCancel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::CursorLeft(bool* MenuCancel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "CursorLeft");

	Params::UOptionMenuWBP_C_CursorLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuCancel != nullptr)
		*MenuCancel = Parms.MenuCancel;

}


// Function OptionMenuWBP.OptionMenuWBP_C.DecideMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NextState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::DecideMenu(bool* NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "DecideMenu");

	Params::UOptionMenuWBP_C_DecideMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextState != nullptr)
		*NextState = Parms.NextState;

}


// Function OptionMenuWBP.OptionMenuWBP_C.CancelMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::CancelMenu(bool* ReturnState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "CancelMenu");

	Params::UOptionMenuWBP_C_CancelMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnState != nullptr)
		*ReturnState = Parms.ReturnState;

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetMenuRelativePos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   RelativePos                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::GetMenuRelativePos(struct FVector2D* RelativePos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetMenuRelativePos");

	Params::UOptionMenuWBP_C_GetMenuRelativePos_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RelativePos != nullptr)
		*RelativePos = std::move(Parms.RelativePos);

}


// Function OptionMenuWBP.OptionMenuWBP_C.UpdateWindowResolution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::UpdateWindowResolution()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "UpdateWindowResolution");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.UpdateFrameRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::UpdateFrameRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "UpdateFrameRate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetItemIndexFromWindowMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWindowMode             WindowMode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::GetItemIndexFromWindowMode(enum class EWindowMode WindowMode, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetItemIndexFromWindowMode");

	Params::UOptionMenuWBP_C_GetItemIndexFromWindowMode_Params Parms{};

	Parms.WindowMode = WindowMode;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function OptionMenuWBP.OptionMenuWBP_C.SetupHeaderUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::SetupHeaderUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "SetupHeaderUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ResetGuideData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ResetGuideData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ResetGuideData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ApplyFinishDialogCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::ApplyFinishDialogCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ApplyFinishDialogCallback");

	Params::UOptionMenuWBP_C_ApplyFinishDialogCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.StartApplyParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::StartApplyParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "StartApplyParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ApplyDialogOpenFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ApplyDialogOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ApplyDialogOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OpenApplyDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OpenApplyDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OpenApplyDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.IsModifired
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Modifired                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::IsModifired(bool* Modifired)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "IsModifired");

	Params::UOptionMenuWBP_C_IsModifired_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Modifired != nullptr)
		*Modifired = Parms.Modifired;

}


// Function OptionMenuWBP.OptionMenuWBP_C.IsIgnoreInputLeftRight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CursorIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Ignore                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::IsIgnoreInputLeftRight(int32 CursorIndex, bool* Ignore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "IsIgnoreInputLeftRight");

	Params::UOptionMenuWBP_C_IsIgnoreInputLeftRight_Params Parms{};

	Parms.CursorIndex = CursorIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Ignore != nullptr)
		*Ignore = Parms.Ignore;

}


// Function OptionMenuWBP.OptionMenuWBP_C.TemporarySetKeyConfigParam_Inner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSKeyConfigElement     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::TemporarySetKeyConfigParam_Inner(enum class EKSKeyConfigElement Type, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "TemporarySetKeyConfigParam_Inner");

	Params::UOptionMenuWBP_C_TemporarySetKeyConfigParam_Inner_Params Parms{};

	Parms.Type = Type;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetKeyNameFromTemporary
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EKSKeyConfigElement     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        KeyName                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::GetKeyNameFromTemporary(enum class EKSKeyConfigElement Type, class FName* KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetKeyNameFromTemporary");

	Params::UOptionMenuWBP_C_GetKeyNameFromTemporary_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (KeyName != nullptr)
		*KeyName = Parms.KeyName;

}


// Function OptionMenuWBP.OptionMenuWBP_C.InitializePreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::InitializePreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "InitializePreset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.SetModified
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Modified                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ModifiedKeyConfig                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::SetModified(bool Modified, bool ModifiedKeyConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "SetModified");

	Params::UOptionMenuWBP_C_SetModified_Params Parms{};

	Parms.Modified = Modified;
	Parms.ModifiedKeyConfig = ModifiedKeyConfig;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.RefreshOptionParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::RefreshOptionParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "RefreshOptionParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ApplyConfirmDialogCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::ApplyConfirmDialogCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ApplyConfirmDialogCallback");

	Params::UOptionMenuWBP_C_ApplyConfirmDialogCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.Open Apply Confirm Dialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::Open_Apply_Confirm_Dialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "Open Apply Confirm Dialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.TemporaryGetKeyConfigParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EKSKeyConfigElement     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::TemporaryGetKeyConfigParam(enum class EKSKeyConfigElement Type, int32* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "TemporaryGetKeyConfigParam");

	Params::UOptionMenuWBP_C_TemporaryGetKeyConfigParam_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function OptionMenuWBP.OptionMenuWBP_C.TemporarySetKeyConfigParam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSKeyConfigElement     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsApply                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::TemporarySetKeyConfigParam(enum class EKSKeyConfigElement Type, const struct FKey& Value, bool* IsApply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "TemporarySetKeyConfigParam");

	Params::UOptionMenuWBP_C_TemporarySetKeyConfigParam_Params Parms{};

	Parms.Type = Type;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	if (IsApply != nullptr)
		*IsApply = Parms.IsApply;

}


// Function OptionMenuWBP.OptionMenuWBP_C.ResetGraphicsOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ResetGraphicsOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ResetGraphicsOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ResetSoundOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ResetSoundOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ResetSoundOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ResetGameOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ResetGameOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ResetGameOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.IsEnablePreset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::IsEnablePreset(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "IsEnablePreset");

	Params::UOptionMenuWBP_C_IsEnablePreset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function OptionMenuWBP.OptionMenuWBP_C.TemporaryGetFlag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EKSSaveDataFlagType     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Flag                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::TemporaryGetFlag(enum class EKSSaveDataFlagType Type, bool* Flag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "TemporaryGetFlag");

	Params::UOptionMenuWBP_C_TemporaryGetFlag_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Flag != nullptr)
		*Flag = Parms.Flag;

}


// Function OptionMenuWBP.OptionMenuWBP_C.TemporaryGetParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EKSSaveDataParamType    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::TemporaryGetParam(enum class EKSSaveDataParamType Type, int32* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "TemporaryGetParam");

	Params::UOptionMenuWBP_C_TemporaryGetParam_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function OptionMenuWBP.OptionMenuWBP_C.ApplySystemDataToTempraryData
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOPTION_ITEM_KIND       OptionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::ApplySystemDataToTempraryData(enum class EOPTION_ITEM_KIND OptionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ApplySystemDataToTempraryData");

	Params::UOptionMenuWBP_C_ApplySystemDataToTempraryData_Params Parms{};

	Parms.OptionType = OptionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.TemporarySetFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSSaveDataFlagType     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::TemporarySetFlag(enum class EKSSaveDataFlagType Type, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "TemporarySetFlag");

	Params::UOptionMenuWBP_C_TemporarySetFlag_Params Parms{};

	Parms.Type = Type;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.TemporarySetParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSSaveDataParamType    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::TemporarySetParam(enum class EKSSaveDataParamType Type, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "TemporarySetParam");

	Params::UOptionMenuWBP_C_TemporarySetParam_Params Parms{};

	Parms.Type = Type;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.InitializeTemporarySaveData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::InitializeTemporarySaveData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "InitializeTemporarySaveData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.RestoreOtherGraphicsSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::RestoreOtherGraphicsSetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "RestoreOtherGraphicsSetting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.SetGraphicsSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::SetGraphicsSetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "SetGraphicsSetting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.RunAutoGraphicsSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::RunAutoGraphicsSetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "RunAutoGraphicsSetting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.CheckPresetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::CheckPresetEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "CheckPresetEnable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.Apply Graphics Preset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::Apply_Graphics_Preset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "Apply Graphics Preset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ApplyOptionTemporaryData_Inner
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOPTION_ITEM_KIND       OptionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::ApplyOptionTemporaryData_Inner(enum class EOPTION_ITEM_KIND OptionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ApplyOptionTemporaryData_Inner");

	Params::UOptionMenuWBP_C_ApplyOptionTemporaryData_Inner_Params Parms{};

	Parms.OptionType = OptionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ApplyLetterSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ApplyLetterSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ApplyLetterSize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetWindowModeFromItemIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             WindowMode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::GetWindowModeFromItemIndex(int32 Index, enum class EWindowMode* WindowMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetWindowModeFromItemIndex");

	Params::UOptionMenuWBP_C_GetWindowModeFromItemIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (WindowMode != nullptr)
		*WindowMode = Parms.WindowMode;

}


// Function OptionMenuWBP.OptionMenuWBP_C.SetWindowResolution
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::SetWindowResolution()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "SetWindowResolution");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnFinishSystemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              UserIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccesss                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::OnFinishSystemData(const class FString& SlotName, int32 UserIndex, bool IsSuccesss)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnFinishSystemData");

	Params::UOptionMenuWBP_C_OnFinishSystemData_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;
	Parms.IsSuccesss = IsSuccesss;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnResetOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnResetOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnResetOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetCategoryDescriptionText
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UOptionMenuWBP_C::GetCategoryDescriptionText(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetCategoryDescriptionText");

	Params::UOptionMenuWBP_C_GetCategoryDescriptionText_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetCategoryName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TextLabel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::GetCategoryName(int32 Category, class FName* TextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetCategoryName");

	Params::UOptionMenuWBP_C_GetCategoryName_Params Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

	if (TextLabel != nullptr)
		*TextLabel = Parms.TextLabel;

}


// Function OptionMenuWBP.OptionMenuWBP_C.Refresh Title Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::Refresh_Title_Icon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "Refresh Title Icon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ResetToDefaultKeyConfig
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSKeyConfigType        Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::ResetToDefaultKeyConfig(enum class EKSKeyConfigType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ResetToDefaultKeyConfig");

	Params::UOptionMenuWBP_C_ResetToDefaultKeyConfig_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ApplyKeyConfigToSystemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ApplyKeyConfigToSystemData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ApplyKeyConfigToSystemData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.CanDisplayKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CanDisplay                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::CanDisplayKey(const struct FKey& Key, bool* CanDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "CanDisplayKey");

	Params::UOptionMenuWBP_C_CanDisplayKey_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

	if (CanDisplay != nullptr)
		*CanDisplay = Parms.CanDisplay;

}


// Function OptionMenuWBP.OptionMenuWBP_C.UpdateKeyConfig
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::UpdateKeyConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "UpdateKeyConfig");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ReflectionKeyConfigInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ReflectionKeyConfigInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ReflectionKeyConfigInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.Get Key Config Element From Option Iten Kind
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EOPTION_ITEM_KIND       Kind                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSKeyConfigElement     NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::Get_Key_Config_Element_From_Option_Iten_Kind(enum class EOPTION_ITEM_KIND Kind, enum class EKSKeyConfigElement* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "Get Key Config Element From Option Iten Kind");

	Params::UOptionMenuWBP_C_Get_Key_Config_Element_From_Option_Iten_Kind_Params Parms{};

	Parms.Kind = Kind;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function OptionMenuWBP.OptionMenuWBP_C.ResetCategoryFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ResetCategoryFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ResetCategoryFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.PreparePartsWidgetAll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::PreparePartsWidgetAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "PreparePartsWidgetAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetOptionMenuList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                MenuList                                                         (Parm, OutParm)

void UOptionMenuWBP_C::GetOptionMenuList(int32 Index, TArray<class FName>* MenuList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetOptionMenuList");

	Params::UOptionMenuWBP_C_GetOptionMenuList_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (MenuList != nullptr)
		*MenuList = std::move(Parms.MenuList);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ClearList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ClearList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ClearList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.UpdateOptionMenuItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::UpdateOptionMenuItem(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "UpdateOptionMenuItem");

	Params::UOptionMenuWBP_C_UpdateOptionMenuItem_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.FocusCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCategoryPos                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::FocusCategory(int32 NewCategoryPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "FocusCategory");

	Params::UOptionMenuWBP_C_FocusCategory_Params Parms{};

	Parms.NewCategoryPos = NewCategoryPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OutFocusCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::OutFocusCategory(int32 SelectID, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OutFocusCategory");

	Params::UOptionMenuWBP_C_OutFocusCategory_Params Parms{};

	Parms.SelectID = SelectID;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.UpdateCategoryFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NextPos                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::UpdateCategoryFocus(int32 NextPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "UpdateCategoryFocus");

	Params::UOptionMenuWBP_C_UpdateCategoryFocus_Params Parms{};

	Parms.NextPos = NextPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ChangeCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::ChangeCategory(bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ChangeCategory");

	Params::UOptionMenuWBP_C_ChangeCategory_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.InputDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::InputDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "InputDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.InputUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::InputUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "InputUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.AddCategoryPart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FListWidgetCategory         CategoryData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionMenuWBP_C::AddCategoryPart(const struct FListWidgetCategory& CategoryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "AddCategoryPart");

	Params::UOptionMenuWBP_C_AddCategoryPart_Params Parms{};

	Parms.CategoryData = CategoryData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.AddCategoryTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::AddCategoryTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "AddCategoryTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.InitCategoryTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::InitCategoryTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "InitCategoryTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.SetFromTitleScene
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FromTitleScene                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UOptionMenuWBP_C::SetFromTitleScene(bool FromTitleScene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "SetFromTitleScene");

	Params::UOptionMenuWBP_C_SetFromTitleScene_Params Parms{};

	Parms.FromTitleScene = FromTitleScene;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionMenuWBP.OptionMenuWBP_C.IsSaving
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Saving                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::IsSaving(bool* Saving)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "IsSaving");

	Params::UOptionMenuWBP_C_IsSaving_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Saving != nullptr)
		*Saving = Parms.Saving;

}


// Function OptionMenuWBP.OptionMenuWBP_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UOptionMenuWBP_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "SetReference");

	Params::UOptionMenuWBP_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionMenuWBP.OptionMenuWBP_C.Init
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UOptionMenuWBP_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "Init");

	Params::UOptionMenuWBP_C_Init_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionMenuWBP.OptionMenuWBP_C.RefreshVoiceResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::RefreshVoiceResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "RefreshVoiceResource");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetOptionItemWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EOPTION_ITEM_KIND       OptionKind                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMJListItemWidget*           Value                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::GetOptionItemWidget(enum class EOPTION_ITEM_KIND OptionKind, class UMJListItemWidget** Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetOptionItemWidget");

	Params::UOptionMenuWBP_C_GetOptionItemWidget_Params Parms{};

	Parms.OptionKind = OptionKind;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function OptionMenuWBP.OptionMenuWBP_C.RefreshAllOptionItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::RefreshAllOptionItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "RefreshAllOptionItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.IsClosingState
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UOptionMenuWBP_C::IsClosingState(int32 State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "IsClosingState");

	Params::UOptionMenuWBP_C_IsClosingState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionMenuWBP.OptionMenuWBP_C.Set Guide UI
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::Set_Guide_UI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "Set Guide UI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnDecideOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnDecideOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnDecideOption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.UpdateAllText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::UpdateAllText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "UpdateAllText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ApplyOptionToTemporaryData
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOPTION_ITEM_KIND       OptionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Apply                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::ApplyOptionToTemporaryData(enum class EOPTION_ITEM_KIND OptionType, bool* Apply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ApplyOptionToTemporaryData");

	Params::UOptionMenuWBP_C_ApplyOptionToTemporaryData_Params Parms{};

	Parms.OptionType = OptionType;

	UObject::ProcessEvent(Func, &Parms);

	if (Apply != nullptr)
		*Apply = Parms.Apply;

}


// Function OptionMenuWBP.OptionMenuWBP_C.ApplyAllOptionToExWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ApplyAllOptionToExWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ApplyAllOptionToExWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ApplyOptionToExWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOPTION_ITEM_KIND       OptionId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::ApplyOptionToExWidget(enum class EOPTION_ITEM_KIND OptionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ApplyOptionToExWidget");

	Params::UOptionMenuWBP_C_ApplyOptionToExWidget_Params Parms{};

	Parms.OptionId = OptionId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.SendLRToExWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::SendLRToExWidget(bool IsLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "SendLRToExWidget");

	Params::UOptionMenuWBP_C_SendLRToExWidget_Params Parms{};

	Parms.IsLeft = IsLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.MoveCursor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ToUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::MoveCursor(bool ToUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "MoveCursor");

	Params::UOptionMenuWBP_C_MoveCursor_Params Parms{};

	Parms.ToUp = ToUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Anim                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::PlayAnim(class UWidgetAnimation* Anim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "PlayAnim");

	Params::UOptionMenuWBP_C_PlayAnim_Params Parms{};

	Parms.Anim = Anim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ResetFocus
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ResetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ResetFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OutFocusItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::OutFocusItem(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OutFocusItem");

	Params::UOptionMenuWBP_C_OutFocusItem_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.FocusItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::FocusItem(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "FocusItem");

	Params::UOptionMenuWBP_C_FocusItem_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.SetCursorPos
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewPos                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::SetCursorPos(int32 NewPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "SetCursorPos");

	Params::UOptionMenuWBP_C_SetCursorPos_Params Parms{};

	Parms.NewPos = NewPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.IsPlayingAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::IsPlayingAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "IsPlayingAnim");

	Params::UOptionMenuWBP_C_IsPlayingAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function OptionMenuWBP.OptionMenuWBP_C.SetupMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::SetupMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "SetupMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetCurrentState_Local
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EOPTION_MENU_STATE      CurrentState                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::GetCurrentState_Local(enum class EOPTION_MENU_STATE* CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetCurrentState_Local");

	Params::UOptionMenuWBP_C_GetCurrentState_Local_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentState != nullptr)
		*CurrentState = Parms.CurrentState;

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnEndState_Local
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOPTION_MENU_STATE      CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOPTION_MENU_STATE      NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::OnEndState_Local(enum class EOPTION_MENU_STATE CurrentState, enum class EOPTION_MENU_STATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnEndState_Local");

	Params::UOptionMenuWBP_C_OnEndState_Local_Params Parms{};

	Parms.CurrentState = CurrentState;
	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnBginState_Local
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOPTION_MENU_STATE      PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOPTION_MENU_STATE      CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::OnBginState_Local(enum class EOPTION_MENU_STATE PrevState, enum class EOPTION_MENU_STATE CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnBginState_Local");

	Params::UOptionMenuWBP_C_OnBginState_Local_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnUpdate_Local
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOPTION_MENU_STATE      CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::OnUpdate_Local(enum class EOPTION_MENU_STATE CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnUpdate_Local");

	Params::UOptionMenuWBP_C_OnUpdate_Local_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.SetNextState_Local
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOPTION_MENU_STATE      NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::SetNextState_Local(enum class EOPTION_MENU_STATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "SetNextState_Local");

	Params::UOptionMenuWBP_C_SetNextState_Local_Params Parms{};

	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UOptionMenuWBP_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "IsRunning");

	Params::UOptionMenuWBP_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionMenuWBP.OptionMenuWBP_C.CloseMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OpenMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OpenMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OpenMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ChangeInputMode");

	Params::UOptionMenuWBP_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnRightAxisX");

	Params::UOptionMenuWBP_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnRightAxisY");

	Params::UOptionMenuWBP_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnLeftAxisX");

	Params::UOptionMenuWBP_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnLeftAxisY");

	Params::UOptionMenuWBP_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnGamePadAxisX");

	Params::UOptionMenuWBP_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnGamePadAxisY");

	Params::UOptionMenuWBP_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenuWBP_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnListPaging");

	Params::UOptionMenuWBP_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "WorldMapSlowCursorX");

	Params::UOptionMenuWBP_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "WorldMapSlowCursorY");

	Params::UOptionMenuWBP_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "HelpScrollAxis");

	Params::UOptionMenuWBP_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OutFocusMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OutFocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OutFocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.FocusMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::FocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "FocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnHelpMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnHelpMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnHelpMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::GetRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetRightAxisX");

	Params::UOptionMenuWBP_C_GetRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::GetRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetRightAxisY");

	Params::UOptionMenuWBP_C_GetRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.RBMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::RBMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "RBMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::GetLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetLeftAxisX");

	Params::UOptionMenuWBP_C_GetLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::GetLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetLeftAxisY");

	Params::UOptionMenuWBP_C_GetLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.RightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::RightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "RightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.RightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::RightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "RightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.RBMenuRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::RBMenuRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "RBMenuRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::GetGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetGamePadAxisX");

	Params::UOptionMenuWBP_C_GetGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.GetGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::GetGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "GetGamePadAxisY");

	Params::UOptionMenuWBP_C_GetGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.SubMenu_WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::SubMenu_WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "SubMenu_WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.SubMenu_WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::SubMenu_WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "SubMenu_WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.SubMenu_WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::SubMenu_WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "SubMenu_WorldMapSlowCursorX");

	Params::UOptionMenuWBP_C_SubMenu_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.SubMenu_WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::SubMenu_WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "SubMenu_WorldMapSlowCursorY");

	Params::UOptionMenuWBP_C_SubMenu_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnUpdateState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::OnUpdateState(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnUpdateState");

	Params::UOptionMenuWBP_C_OnUpdateState_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnBeginState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::OnBeginState(int32 PrevState, int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnBeginState");

	Params::UOptionMenuWBP_C_OnBeginState_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnEndState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::OnEndState(int32 CurrentState, int32 NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnEndState");

	Params::UOptionMenuWBP_C_OnEndState_Params Parms{};

	Parms.CurrentState = CurrentState;
	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionMenuWBP.OptionMenuWBP_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionMenuWBP_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionMenuWBP.OptionMenuWBP_C.ExecuteUbergraph_OptionMenuWBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenuWBP_C::ExecuteUbergraph_OptionMenuWBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("OptionMenuWBP_C", "ExecuteUbergraph_OptionMenuWBP");

	Params::UOptionMenuWBP_C_ExecuteUbergraph_OptionMenuWBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


