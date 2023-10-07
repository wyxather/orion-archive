#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass SubJobWidget.SubJobWidget_C
// (None)

class UClass* USubJobWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubJobWidget_C");

	return Clss;
}


// SubJobWidget_C SubJobWidget.Default__SubJobWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubJobWidget_C* USubJobWidget_C::GetDefaultObj()
{
	static class USubJobWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubJobWidget_C*>(USubJobWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SubJobWidget.SubJobWidget_C.SetCursorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::SetCursorVisible(enum class ESlateVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "SetCursorVisible");

	Params::USubJobWidget_C_SetCursorVisible_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.ShowFrameCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsShowFrameCursor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubJobWidget_C::ShowFrameCursor(bool IsShowFrameCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "ShowFrameCursor");

	Params::USubJobWidget_C_ShowFrameCursor_Params Parms{};

	Parms.IsShowFrameCursor = IsShowFrameCursor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.InitializeIconScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FirstSelectJob                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::InitializeIconScale(int32 FirstSelectJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "InitializeIconScale");

	Params::USubJobWidget_C_InitializeIconScale_Params Parms{};

	Parms.FirstSelectJob = FirstSelectJob;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.GetSelectJobMaxNum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::GetSelectJobMaxNum(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "GetSelectJobMaxNum");

	Params::USubJobWidget_C_GetSelectJobMaxNum_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function SubJobWidget.SubJobWidget_C.ApplyIconScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobListItem_C*              JobIcon                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Angle                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::ApplyIconScale(class UJobListItem_C* JobIcon, float Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "ApplyIconScale");

	Params::USubJobWidget_C_ApplyIconScale_Params Parms{};

	Parms.JobIcon = JobIcon;
	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.GetIconAngleCalc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Clockwise                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float USubJobWidget_C::GetIconAngleCalc(int32 CurrentIndex, int32 NextIndex, bool Clockwise)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "GetIconAngleCalc");

	Params::USubJobWidget_C_GetIconAngleCalc_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.NextIndex = NextIndex;
	Parms.Clockwise = Clockwise;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SubJobWidget.SubJobWidget_C.GetAddAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AddAngle                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::GetAddAngle(int32 Index, float DeltaTime, float* AddAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "GetAddAngle");

	Params::USubJobWidget_C_GetAddAngle_Params Parms{};

	Parms.Index = Index;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (AddAngle != nullptr)
		*AddAngle = Parms.AddAngle;

}


// Function SubJobWidget.SubJobWidget_C.Get Icon Move Angle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MoveCursor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      ResultAngle                                                      (Parm, OutParm)

void USubJobWidget_C::Get_Icon_Move_Angle(int32 MoveCursor, TArray<float>* ResultAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "Get Icon Move Angle");

	Params::USubJobWidget_C_Get_Icon_Move_Angle_Params Parms{};

	Parms.MoveCursor = MoveCursor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultAngle != nullptr)
		*ResultAngle = std::move(Parms.ResultAngle);

}


// Function SubJobWidget.SubJobWidget_C.SetupIconPosition
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CursorIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::SetupIconPosition(int32 CursorIndex, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "SetupIconPosition");

	Params::USubJobWidget_C_SetupIconPosition_Params Parms{};

	Parms.CursorIndex = CursorIndex;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.UpdateStraightAnimationWithAngleSelectIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AddPosX                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AddPosY                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsOut                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubJobWidget_C::UpdateStraightAnimationWithAngleSelectIndex(float AddPosX, float AddPosY, float DeltaTime, int32 Index, bool IsOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "UpdateStraightAnimationWithAngleSelectIndex");

	Params::USubJobWidget_C_UpdateStraightAnimationWithAngleSelectIndex_Params Parms{};

	Parms.AddPosX = AddPosX;
	Parms.AddPosY = AddPosY;
	Parms.DeltaTime = DeltaTime;
	Parms.Index = Index;
	Parms.IsOut = IsOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.UpdateStraightAnimationWithAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AddPosX                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AddPosY                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AddAngle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsOut                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubJobWidget_C::UpdateStraightAnimationWithAngle(float AddPosX, float AddPosY, float AddAngle, int32 Index, bool IsOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "UpdateStraightAnimationWithAngle");

	Params::USubJobWidget_C_UpdateStraightAnimationWithAngle_Params Parms{};

	Parms.AddPosX = AddPosX;
	Parms.AddPosY = AddPosY;
	Parms.AddAngle = AddAngle;
	Parms.Index = Index;
	Parms.IsOut = IsOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.GetStraightAnimData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsStart                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              AddStraightPosX                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AddStraightPosY                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::GetStraightAnimData(bool IsStart, float* AddStraightPosX, float* AddStraightPosY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "GetStraightAnimData");

	Params::USubJobWidget_C_GetStraightAnimData_Params Parms{};

	Parms.IsStart = IsStart;

	UObject::ProcessEvent(Func, &Parms);

	if (AddStraightPosX != nullptr)
		*AddStraightPosX = Parms.AddStraightPosX;

	if (AddStraightPosY != nullptr)
		*AddStraightPosY = Parms.AddStraightPosY;

}


// Function SubJobWidget.SubJobWidget_C.UpdateStraightAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AddPosX                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AddPosY                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::UpdateStraightAnimation(float AddPosX, float AddPosY, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "UpdateStraightAnimation");

	Params::USubJobWidget_C_UpdateStraightAnimation_Params Parms{};

	Parms.AddPosX = AddPosX;
	Parms.AddPosY = AddPosY;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.GetNextIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Current                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextIndex                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::GetNextIndex(int32 Current, int32* NextIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "GetNextIndex");

	Params::USubJobWidget_C_GetNextIndex_Params Parms{};

	Parms.Current = Current;

	UObject::ProcessEvent(Func, &Parms);

	if (NextIndex != nullptr)
		*NextIndex = Parms.NextIndex;

}


// Function SubJobWidget.SubJobWidget_C.GetSelectJobItemNum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::GetSelectJobItemNum(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "GetSelectJobItemNum");

	Params::USubJobWidget_C_GetSelectJobItemNum_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function SubJobWidget.SubJobWidget_C.UpdateJobLicence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubJobWidget_C::UpdateJobLicence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "UpdateJobLicence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubJobWidget.SubJobWidget_C.GetSelectJobEquipmentCharacters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                      CharacterID                                                      (Parm, OutParm)
// bool                               NotEquip                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubJobWidget_C::GetSelectJobEquipmentCharacters(TArray<int32>* CharacterID, bool* NotEquip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "GetSelectJobEquipmentCharacters");

	Params::USubJobWidget_C_GetSelectJobEquipmentCharacters_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CharacterID != nullptr)
		*CharacterID = std::move(Parms.CharacterID);

	if (NotEquip != nullptr)
		*NotEquip = Parms.NotEquip;

}


// Function SubJobWidget.SubJobWidget_C.GetRemaingItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Num                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsZero                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubJobWidget_C::GetRemaingItems(int32* Num, bool* IsZero)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "GetRemaingItems");

	Params::USubJobWidget_C_GetRemaingItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;

	if (IsZero != nullptr)
		*IsZero = Parms.IsZero;

}


// Function SubJobWidget.SubJobWidget_C.IsEquipItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanEquip                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubJobWidget_C::IsEquipItem(int32 JobID, bool* CanEquip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "IsEquipItem");

	Params::USubJobWidget_C_IsEquipItem_Params Parms{};

	Parms.JobID = JobID;

	UObject::ProcessEvent(Func, &Parms);

	if (CanEquip != nullptr)
		*CanEquip = Parms.CanEquip;

}


// Function SubJobWidget.SubJobWidget_C.GetReleaseFlag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Release                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubJobWidget_C::GetReleaseFlag(int32 JobID, bool* Release)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "GetReleaseFlag");

	Params::USubJobWidget_C_GetReleaseFlag_Params Parms{};

	Parms.JobID = JobID;

	UObject::ProcessEvent(Func, &Parms);

	if (Release != nullptr)
		*Release = Parms.Release;

}


// Function SubJobWidget.SubJobWidget_C.UpdateJobCalcData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubJobWidget_C::UpdateJobCalcData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "UpdateJobCalcData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubJobWidget.SubJobWidget_C.CreateJobCalcData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubJobWidget_C::CreateJobCalcData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "CreateJobCalcData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubJobWidget.SubJobWidget_C.Setup Widget New
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsPlaySelectAction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubJobWidget_C::Setup_Widget_New(struct FSavePlayerCharacterData& CharacterData, bool IsPlaySelectAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "Setup Widget New");

	Params::USubJobWidget_C_Setup_Widget_New_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.IsPlaySelectAction = IsPlaySelectAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.PlayCursorSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubJobWidget_C::PlayCursorSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "PlayCursorSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubJobWidget.SubJobWidget_C.SetSelectIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::SetSelectIcon(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "SetSelectIcon");

	Params::USubJobWidget_C_SetSelectIcon_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.SetFocusIconSelectMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubJobWidget_C::SetFocusIconSelectMode(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "SetFocusIconSelectMode");

	Params::USubJobWidget_C_SetFocusIconSelectMode_Params Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.GetSelectJobEquipmentCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::GetSelectJobEquipmentCharacter(int32* CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "GetSelectJobEquipmentCharacter");

	Params::USubJobWidget_C_GetSelectJobEquipmentCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CharacterID != nullptr)
		*CharacterID = Parms.CharacterID;

}


// Function SubJobWidget.SubJobWidget_C.IsPermission
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Permission                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubJobWidget_C::IsPermission(int32 JobID, bool* Permission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "IsPermission");

	Params::USubJobWidget_C_IsPermission_Params Parms{};

	Parms.JobID = JobID;

	UObject::ProcessEvent(Func, &Parms);

	if (Permission != nullptr)
		*Permission = Parms.Permission;

}


// Function SubJobWidget.SubJobWidget_C.FinishIconAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubJobWidget_C::FinishIconAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "FinishIconAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubJobWidget.SubJobWidget_C.IsIconAnimationPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlayingAnimation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubJobWidget_C::IsIconAnimationPlaying(bool* IsPlayingAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "IsIconAnimationPlaying");

	Params::USubJobWidget_C_IsIconAnimationPlaying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlayingAnimation != nullptr)
		*IsPlayingAnimation = Parms.IsPlayingAnimation;

}


// Function SubJobWidget.SubJobWidget_C.StartIconAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MoveCursor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::StartIconAnimation(int32 MoveCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "StartIconAnimation");

	Params::USubJobWidget_C_StartIconAnimation_Params Parms{};

	Parms.MoveCursor = MoveCursor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.UpdateIconAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFinish                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubJobWidget_C::UpdateIconAnimation(float DeltaTime, bool* IsFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "UpdateIconAnimation");

	Params::USubJobWidget_C_UpdateIconAnimation_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFinish != nullptr)
		*IsFinish = Parms.IsFinish;

}


// Function SubJobWidget.SubJobWidget_C.Get Icon Move Angle Old
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MoveCursor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ResultAngle                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::Get_Icon_Move_Angle_Old(int32 MoveCursor, float* ResultAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "Get Icon Move Angle Old");

	Params::USubJobWidget_C_Get_Icon_Move_Angle_Old_Params Parms{};

	Parms.MoveCursor = MoveCursor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultAngle != nullptr)
		*ResultAngle = Parms.ResultAngle;

}


// Function SubJobWidget.SubJobWidget_C.GetIconStartAngle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                      ResultData                                                       (Parm, OutParm)

void USubJobWidget_C::GetIconStartAngle(TArray<float>* ResultData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "GetIconStartAngle");

	Params::USubJobWidget_C_GetIconStartAngle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ResultData != nullptr)
		*ResultData = std::move(Parms.ResultData);

}


// Function SubJobWidget.SubJobWidget_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubJobWidget_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubJobWidget.SubJobWidget_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubJobWidget_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubJobWidget.SubJobWidget_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubJobWidget_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubJobWidget.SubJobWidget_C.GetSelectJob
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              IsSelectJobID                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::GetSelectJob(int32* IsSelectJobID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "GetSelectJob");

	Params::USubJobWidget_C_GetSelectJob_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsSelectJobID != nullptr)
		*IsSelectJobID = Parms.IsSelectJobID;

}


// Function SubJobWidget.SubJobWidget_C.SetCenterUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubJobWidget_C::SetCenterUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "SetCenterUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubJobWidget.SubJobWidget_C.SetupIconPosition_old
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CursorIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AddAngle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::SetupIconPosition_old(int32 CursorIndex, float AddAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "SetupIconPosition_old");

	Params::USubJobWidget_C_SetupIconPosition_old_Params Parms{};

	Parms.CursorIndex = CursorIndex;
	Parms.AddAngle = AddAngle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.CreateSubJobImage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubJobWidget_C::CreateSubJobImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "CreateSubJobImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubJobWidget.SubJobWidget_C.SetupText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubJobWidget_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubJobWidget.SubJobWidget_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubJobWidget_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "OutFocus");

	Params::USubJobWidget_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubJobWidget_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubJobWidget.SubJobWidget_C.Setup Widget Old DEPLECATED
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USubJobWidget_C::Setup_Widget_Old_DEPLECATED(struct FSavePlayerCharacterData& CharacterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "Setup Widget Old DEPLECATED");

	Params::USubJobWidget_C_Setup_Widget_Old_DEPLECATED_Params Parms{};

	Parms.CharacterData = CharacterData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USubJobWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubJobWidget.SubJobWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "Tick");

	Params::USubJobWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "OnAnimationFinished");

	Params::USubJobWidget_C_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubJobWidget.SubJobWidget_C.ExecuteUbergraph_SubJobWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubJobWidget_C::ExecuteUbergraph_SubJobWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubJobWidget_C", "ExecuteUbergraph_SubJobWidget");

	Params::USubJobWidget_C_ExecuteUbergraph_SubJobWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


