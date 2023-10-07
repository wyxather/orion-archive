#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C
// (None)

class UClass* UWBP_3DPlayerSelectWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_3DPlayerSelectWidget_C");

	return Clss;
}


// WBP_3DPlayerSelectWidget_C WBP_3DPlayerSelectWidget.Default__WBP_3DPlayerSelectWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_3DPlayerSelectWidget_C* UWBP_3DPlayerSelectWidget_C::GetDefaultObj()
{
	static class UWBP_3DPlayerSelectWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_3DPlayerSelectWidget_C*>(UWBP_3DPlayerSelectWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.UpdateGlobe
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectWidget_C::UpdateGlobe(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "UpdateGlobe");

	Params::UWBP_3DPlayerSelectWidget_C_UpdateGlobe_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.IsClosing
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_3DPlayerSelectWidget_C::IsClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "IsClosing");

	Params::UWBP_3DPlayerSelectWidget_C_IsClosing_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.IsOpening
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_3DPlayerSelectWidget_C::IsOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "IsOpening");

	Params::UWBP_3DPlayerSelectWidget_C_IsOpening_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.UpdateTimeZone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETimeZoneType           TimeZone                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectWidget_C::UpdateTimeZone(enum class ETimeZoneType TimeZone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "UpdateTimeZone");

	Params::UWBP_3DPlayerSelectWidget_C_UpdateTimeZone_Params Parms{};

	Parms.TimeZone = TimeZone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.OnClosedConfrimDialog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectWidget_C::OnClosedConfrimDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "OnClosedConfrimDialog");

	Params::UWBP_3DPlayerSelectWidget_C_OnClosedConfrimDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "Tick");

	Params::UWBP_3DPlayerSelectWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.GetIconByPlayerSwitchOrder
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorldMapIconBase*           Array_Element                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectWidget_C::GetIconByPlayerSwitchOrder(int32 Index, class UWorldMapIconBase** Array_Element)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "GetIconByPlayerSwitchOrder");

	Params::UWBP_3DPlayerSelectWidget_C_GetIconByPlayerSwitchOrder_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Array_Element != nullptr)
		*Array_Element = Parms.Array_Element;

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.GetAutoRotateSpeed
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectWidget_C::GetAutoRotateSpeed(float* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "GetAutoRotateSpeed");

	Params::UWBP_3DPlayerSelectWidget_C_GetAutoRotateSpeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.CloseWorldMapInternal
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectWidget_C::CloseWorldMapInternal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "CloseWorldMapInternal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.OpenWorldMapInternal
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectWidget_C::OpenWorldMapInternal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "OpenWorldMapInternal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.GetCursorSnapDuration
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectWidget_C::GetCursorSnapDuration(float* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "GetCursorSnapDuration");

	Params::UWBP_3DPlayerSelectWidget_C_GetCursorSnapDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.GetCursorSnapDistance
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectWidget_C::GetCursorSnapDistance(float* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "GetCursorSnapDistance");

	Params::UWBP_3DPlayerSelectWidget_C_GetCursorSnapDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.FastCloseWorldMap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectWidget_C::FastCloseWorldMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "FastCloseWorldMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.OnEndFadeOut
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectWidget_C::OnEndFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "OnEndFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.OnClosed
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectWidget_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "OnClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.Get Current Normalized TIme
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWBP_3DPlayerSelectWidget_C::Get_Current_Normalized_TIme()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "Get Current Normalized TIme");

	Params::UWBP_3DPlayerSelectWidget_C_Get_Current_Normalized_TIme_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.SetCurrentNormalizedTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentNormalizedTIme                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectWidget_C::SetCurrentNormalizedTime(float CurrentNormalizedTIme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "SetCurrentNormalizedTime");

	Params::UWBP_3DPlayerSelectWidget_C_SetCurrentNormalizedTime_Params Parms{};

	Parms.CurrentNormalizedTIme = CurrentNormalizedTIme;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.GetFastRotateGlobeLine
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectWidget_C::GetFastRotateGlobeLine(struct FVector2D* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "GetFastRotateGlobeLine");

	Params::UWBP_3DPlayerSelectWidget_C_GetFastRotateGlobeLine_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = std::move(Parms.Param);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.SwitchSelectCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DPlayerSelectWidget_C::SwitchSelectCharacter(bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "SwitchSelectCharacter");

	Params::UWBP_3DPlayerSelectWidget_C_SwitchSelectCharacter_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.OnDeselectIcon
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectWidget_C::OnDeselectIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "OnDeselectIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.OnSelectIcon
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectWidget_C::OnSelectIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "OnSelectIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.CloseWorldMap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectWidget_C::CloseWorldMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "CloseWorldMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.CancelMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DPlayerSelectWidget_C::CancelMenu(bool* ReturnState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "CancelMenu");

	Params::UWBP_3DPlayerSelectWidget_C_CancelMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnState != nullptr)
		*ReturnState = Parms.ReturnState;

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.GetIsEndPlayerSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               GetIsFinishedPlayerSelect                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DPlayerSelectWidget_C::GetIsEndPlayerSelect(bool* GetIsFinishedPlayerSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "GetIsEndPlayerSelect");

	Params::UWBP_3DPlayerSelectWidget_C_GetIsEndPlayerSelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GetIsFinishedPlayerSelect != nullptr)
		*GetIsFinishedPlayerSelect = Parms.GetIsFinishedPlayerSelect;

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.GetSelectedPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EPlayableCharacterID    Player_Chara_Id                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectWidget_C::GetSelectedPlayer(enum class EPlayableCharacterID* Player_Chara_Id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "GetSelectedPlayer");

	Params::UWBP_3DPlayerSelectWidget_C_GetSelectedPlayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Player_Chara_Id != nullptr)
		*Player_Chara_Id = Parms.Player_Chara_Id;

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.DecideIcon
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectWidget_C::DecideIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "DecideIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.CreateMapIconInstance
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectWidget_C::CreateMapIconInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "CreateMapIconInstance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.RBMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectWidget_C::RBMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "RBMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.LBMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectWidget_C::LBMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "LBMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.ExecuteUbergraph_WBP_3DPlayerSelectWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DPlayerSelectWidget_C::ExecuteUbergraph_WBP_3DPlayerSelectWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "ExecuteUbergraph_WBP_3DPlayerSelectWidget");

	Params::UWBP_3DPlayerSelectWidget_C_ExecuteUbergraph_WBP_3DPlayerSelectWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C.OnDecidePlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DPlayerSelectWidget_C::OnDecidePlayer__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DPlayerSelectWidget_C", "OnDecidePlayer__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


