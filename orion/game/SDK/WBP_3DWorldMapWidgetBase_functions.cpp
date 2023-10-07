#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C
// (None)

class UClass* UWBP_3DWorldMapWidgetBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_3DWorldMapWidgetBase_C");

	return Clss;
}


// WBP_3DWorldMapWidgetBase_C WBP_3DWorldMapWidgetBase.Default__WBP_3DWorldMapWidgetBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_3DWorldMapWidgetBase_C* UWBP_3DWorldMapWidgetBase_C::GetDefaultObj()
{
	static class UWBP_3DWorldMapWidgetBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_3DWorldMapWidgetBase_C*>(UWBP_3DWorldMapWidgetBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetCursorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetBase_C::GetCursorPosition(struct FVector2D* Position, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetCursorPosition");

	Params::UWBP_3DWorldMapWidgetBase_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.CursorRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuDecide                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetBase_C::CursorRight(bool* MenuDecide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "CursorRight");

	Params::UWBP_3DWorldMapWidgetBase_C_CursorRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuDecide != nullptr)
		*MenuDecide = Parms.MenuDecide;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.CursorLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuCancel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetBase_C::CursorLeft(bool* MenuCancel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "CursorLeft");

	Params::UWBP_3DWorldMapWidgetBase_C_CursorLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuCancel != nullptr)
		*MenuCancel = Parms.MenuCancel;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.DecideMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NextState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetBase_C::DecideMenu(bool* NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "DecideMenu");

	Params::UWBP_3DWorldMapWidgetBase_C_DecideMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextState != nullptr)
		*NextState = Parms.NextState;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.CancelMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetBase_C::CancelMenu(bool* ReturnState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "CancelMenu");

	Params::UWBP_3DWorldMapWidgetBase_C_CancelMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnState != nullptr)
		*ReturnState = Parms.ReturnState;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetMenuRelativePos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   RelativePos                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetMenuRelativePos(struct FVector2D* RelativePos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetMenuRelativePos");

	Params::UWBP_3DWorldMapWidgetBase_C_GetMenuRelativePos_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RelativePos != nullptr)
		*RelativePos = std::move(Parms.RelativePos);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_3DWorldMapWidgetBase_C::OnPaint(struct FPaintContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "OnPaint");

	Params::UWBP_3DWorldMapWidgetBase_C_OnPaint_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetCursorSlowScale
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   Val                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetCursorSlowScale(struct FVector2D* Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetCursorSlowScale");

	Params::UWBP_3DWorldMapWidgetBase_C_GetCursorSlowScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Val != nullptr)
		*Val = std::move(Parms.Val);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.OutFocusWorldMap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetBase_C::OutFocusWorldMap(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "OutFocusWorldMap");

	Params::UWBP_3DWorldMapWidgetBase_C_OutFocusWorldMap_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.FocusWorldMap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetBase_C::FocusWorldMap(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "FocusWorldMap");

	Params::UWBP_3DWorldMapWidgetBase_C_FocusWorldMap_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateDarkAreaEffect
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::UpdateDarkAreaEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "UpdateDarkAreaEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateWidgetFromSequencer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::UpdateWidgetFromSequencer(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "UpdateWidgetFromSequencer");

	Params::UWBP_3DWorldMapWidgetBase_C_UpdateWidgetFromSequencer_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetWorldMapActorClass
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftClassPtr<class AWorldMapActorBase>WorldMapActorClassRef                                            (Parm, OutParm, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetWorldMapActorClass(TSoftClassPtr<class AWorldMapActorBase>* WorldMapActorClassRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetWorldMapActorClass");

	Params::UWBP_3DWorldMapWidgetBase_C_GetWorldMapActorClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WorldMapActorClassRef != nullptr)
		*WorldMapActorClassRef = Parms.WorldMapActorClassRef;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SetBackgroundMode_IconOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHide                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetBase_C::SetBackgroundMode_IconOnly(bool IsHide, bool Force)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "SetBackgroundMode_IconOnly");

	Params::UWBP_3DWorldMapWidgetBase_C_SetBackgroundMode_IconOnly_Params Parms{};

	Parms.IsHide = IsHide;
	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SetBackgroundMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHide                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetBase_C::SetBackgroundMode(bool IsHide, bool Force)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "SetBackgroundMode");

	Params::UWBP_3DWorldMapWidgetBase_C_SetBackgroundMode_Params Parms{};

	Parms.IsHide = IsHide;
	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.OnOpened
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "OnOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetAutoRotateSpeed
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetAutoRotateSpeed(float* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetAutoRotateSpeed");

	Params::UWBP_3DWorldMapWidgetBase_C_GetAutoRotateSpeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.RefreshFooterGuide
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::RefreshFooterGuide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "RefreshFooterGuide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.MakeFooterGuideData
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWorldMapZoomType       ZoomType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWorldMapTable              SelectedIconData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FGuideData>          NewParam                                                         (Parm, OutParm)

void UWBP_3DWorldMapWidgetBase_C::MakeFooterGuideData(enum class EWorldMapZoomType ZoomType, const struct FWorldMapTable& SelectedIconData, TArray<struct FGuideData>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "MakeFooterGuideData");

	Params::UWBP_3DWorldMapWidgetBase_C_MakeFooterGuideData_Params Parms{};

	Parms.ZoomType = ZoomType;
	Parms.SelectedIconData = SelectedIconData;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.RotateToCenterByWorldMapLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WorldMapLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsAnimate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NotFound                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetBase_C::RotateToCenterByWorldMapLabel(class FName WorldMapLabel, bool IsAnimate, bool* NotFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "RotateToCenterByWorldMapLabel");

	Params::UWBP_3DWorldMapWidgetBase_C_RotateToCenterByWorldMapLabel_Params Parms{};

	Parms.WorldMapLabel = WorldMapLabel;
	Parms.IsAnimate = IsAnimate;

	UObject::ProcessEvent(Func, &Parms);

	if (NotFound != nullptr)
		*NotFound = Parms.NotFound;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.FastCloseWorldMap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::FastCloseWorldMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "FastCloseWorldMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.CloseWorldMapInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::CloseWorldMapInternal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "CloseWorldMapInternal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.IsClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_3DWorldMapWidgetBase_C::IsClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "IsClosed");

	Params::UWBP_3DWorldMapWidgetBase_C_IsClosed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.OnClosed
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "OnClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.CloseWorldMap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::CloseWorldMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "CloseWorldMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.OpenWorldMapInternal
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::OpenWorldMapInternal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "OpenWorldMapInternal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.OpenWorldMap
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::OpenWorldMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "OpenWorldMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateWorldMap
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::UpdateWorldMap(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "UpdateWorldMap");

	Params::UWBP_3DWorldMapWidgetBase_C_UpdateWorldMap_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.EaseFastGlobeRotateSpeed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::EaseFastGlobeRotateSpeed(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "EaseFastGlobeRotateSpeed");

	Params::UWBP_3DWorldMapWidgetBase_C_EaseFastGlobeRotateSpeed_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.EaseInputValue
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::EaseInputValue(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "EaseInputValue");

	Params::UWBP_3DWorldMapWidgetBase_C_EaseInputValue_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SaveCursorPosToWorldPos
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::SaveCursorPosToWorldPos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "SaveCursorPosToWorldPos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.ResetInputValue
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::ResetInputValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "ResetInputValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.Resotre Cursor Pos from World Pos
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::Resotre_Cursor_Pos_from_World_Pos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "Resotre Cursor Pos from World Pos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.IsSpawnedWorldMapActor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSpawned                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWorldMapActorBase*          SpawnedActor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::IsSpawnedWorldMapActor(bool* IsSpawned, class AWorldMapActorBase** SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "IsSpawnedWorldMapActor");

	Params::UWBP_3DWorldMapWidgetBase_C_IsSpawnedWorldMapActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsSpawned != nullptr)
		*IsSpawned = Parms.IsSpawned;

	if (SpawnedActor != nullptr)
		*SpawnedActor = Parms.SpawnedActor;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetFastRotateGlobeLine
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetFastRotateGlobeLine(struct FVector2D* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetFastRotateGlobeLine");

	Params::UWBP_3DWorldMapWidgetBase_C_GetFastRotateGlobeLine_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = std::move(Parms.Param);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetRotationGlobeScale
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetRotationGlobeScale(struct FVector2D* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetRotationGlobeScale");

	Params::UWBP_3DWorldMapWidgetBase_C_GetRotationGlobeScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = std::move(Parms.Param);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetFastRotationGlobeScaleMap
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetFastRotationGlobeScaleMap(struct FVector2D* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetFastRotationGlobeScaleMap");

	Params::UWBP_3DWorldMapWidgetBase_C_GetFastRotationGlobeScaleMap_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = std::move(Parms.Param);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetMaxGlobeRotation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetMaxGlobeRotation(struct FVector2D* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetMaxGlobeRotation");

	Params::UWBP_3DWorldMapWidgetBase_C_GetMaxGlobeRotation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = std::move(Parms.Param);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetCursorSpeedScale
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetCursorSpeedScale(struct FVector2D* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetCursorSpeedScale");

	Params::UWBP_3DWorldMapWidgetBase_C_GetCursorSpeedScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = std::move(Parms.Param);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetCursorMoveLimit
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetCursorMoveLimit(struct FVector2D* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetCursorMoveLimit");

	Params::UWBP_3DWorldMapWidgetBase_C_GetCursorMoveLimit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = std::move(Parms.Param);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetCursorSnapDuration
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetCursorSnapDuration(float* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetCursorSnapDuration");

	Params::UWBP_3DWorldMapWidgetBase_C_GetCursorSnapDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetCursorSnapDistance
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetCursorSnapDistance(float* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetCursorSnapDistance");

	Params::UWBP_3DWorldMapWidgetBase_C_GetCursorSnapDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.OnDeselectIcon
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::OnDeselectIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "OnDeselectIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.OnSelectIcon
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::OnSelectIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "OnSelectIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SetSetectedIcon
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorldMapIconBase*           SelectedIcon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::SetSetectedIcon(class UWorldMapIconBase* SelectedIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "SetSetectedIcon");

	Params::UWBP_3DWorldMapWidgetBase_C_SetSetectedIcon_Params Parms{};

	Parms.SelectedIcon = SelectedIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateSelectedIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::UpdateSelectedIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "UpdateSelectedIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.IsZooming
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_3DWorldMapWidgetBase_C::IsZooming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "IsZooming");

	Params::UWBP_3DWorldMapWidgetBase_C_IsZooming_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.IsFastTraveling
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_3DWorldMapWidgetBase_C::IsFastTraveling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "IsFastTraveling");

	Params::UWBP_3DWorldMapWidgetBase_C_IsFastTraveling_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SetFooter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuFooter_C*               Footer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::SetFooter(class UMenuFooter_C* Footer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "SetFooter");

	Params::UWBP_3DWorldMapWidgetBase_C_SetFooter_Params Parms{};

	Parms.Footer = Footer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SetHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuHeader_C*               Header                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::SetHeader(class UMenuHeader_C* Header)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "SetHeader");

	Params::UWBP_3DWorldMapWidgetBase_C_SetHeader_Params Parms{};

	Parms.Header = Header;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateCursorSnap
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::UpdateCursorSnap(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "UpdateCursorSnap");

	Params::UWBP_3DWorldMapWidgetBase_C_UpdateCursorSnap_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateCursorSnap_WhenFIxCursorToIcon
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::UpdateCursorSnap_WhenFIxCursorToIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "UpdateCursorSnap_WhenFIxCursorToIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetCenterPosition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UWBP_3DWorldMapWidgetBase_C::GetCenterPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetCenterPosition");

	Params::UWBP_3DWorldMapWidgetBase_C_GetCenterPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateGlobe
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::UpdateGlobe(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "UpdateGlobe");

	Params::UWBP_3DWorldMapWidgetBase_C_UpdateGlobe_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateCamera
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::UpdateCamera(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "UpdateCamera");

	Params::UWBP_3DWorldMapWidgetBase_C_UpdateCamera_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateCursorPosition
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::UpdateCursorPosition(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "UpdateCursorPosition");

	Params::UWBP_3DWorldMapWidgetBase_C_UpdateCursorPosition_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.UpdateSnapProcess
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::UpdateSnapProcess(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "UpdateSnapProcess");

	Params::UWBP_3DWorldMapWidgetBase_C_UpdateSnapProcess_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.DecideIcon
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::DecideIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "DecideIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "Tick");

	Params::UWBP_3DWorldMapWidgetBase_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.CreateMapIconInstance
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::CreateMapIconInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "CreateMapIconInstance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.OutFocusMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::OutFocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "OutFocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.FocusMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::FocusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "FocusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.OnHelpMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::OnHelpMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "OnHelpMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetRightAxisX");

	Params::UWBP_3DWorldMapWidgetBase_C_GetRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetRightAxisY");

	Params::UWBP_3DWorldMapWidgetBase_C_GetRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.RBMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::RBMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "RBMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.RightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::RightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "RightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.RightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::RightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "RightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.RBMenuRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::RBMenuRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "RBMenuRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetGamePadAxisX");

	Params::UWBP_3DWorldMapWidgetBase_C_GetGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetGamePadAxisY");

	Params::UWBP_3DWorldMapWidgetBase_C_GetGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetLeftAxisX");

	Params::UWBP_3DWorldMapWidgetBase_C_GetLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.GetLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::GetLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "GetLeftAxisY");

	Params::UWBP_3DWorldMapWidgetBase_C_GetLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SubMenu_WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::SubMenu_WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "SubMenu_WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SubMenu_WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_3DWorldMapWidgetBase_C::SubMenu_WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "SubMenu_WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SubMenu_WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::SubMenu_WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "SubMenu_WorldMapSlowCursorX");

	Params::UWBP_3DWorldMapWidgetBase_C_SubMenu_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.SubMenu_WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::SubMenu_WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "SubMenu_WorldMapSlowCursorY");

	Params::UWBP_3DWorldMapWidgetBase_C_SubMenu_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.ExecuteUbergraph_WBP_3DWorldMapWidgetBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_3DWorldMapWidgetBase_C::ExecuteUbergraph_WBP_3DWorldMapWidgetBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "ExecuteUbergraph_WBP_3DWorldMapWidgetBase");

	Params::UWBP_3DWorldMapWidgetBase_C_ExecuteUbergraph_WBP_3DWorldMapWidgetBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C.OnSelectIconEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelect                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_3DWorldMapWidgetBase_C::OnSelectIconEvent__DelegateSignature(bool IsSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapWidgetBase_C", "OnSelectIconEvent__DelegateSignature");

	Params::UWBP_3DWorldMapWidgetBase_C_OnSelectIconEvent__DelegateSignature_Params Parms{};

	Parms.IsSelect = IsSelect;

	UObject::ProcessEvent(Func, &Parms);

}

}


