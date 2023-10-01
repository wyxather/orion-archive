// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxUI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxUI.GbxGFxMovie.TranslateWorldToLocal
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                 LocationWorldSpace             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               OutPositionLocal               (Parm, OutParm, IsPlainOldData)
// bool                           bPlayerViewportRelative        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseMovieDimensions            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGFxMovie::TranslateWorldToLocal(const struct FVector& LocationWorldSpace, bool bPlayerViewportRelative, bool bUseMovieDimensions, struct FVector2D* OutPositionLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.TranslateWorldToLocal");

	UGbxGFxMovie_TranslateWorldToLocal_Params params;
	params.LocationWorldSpace = LocationWorldSpace;
	params.bPlayerViewportRelative = bPlayerViewportRelative;
	params.bUseMovieDimensions = bUseMovieDimensions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPositionLocal != nullptr)
		*OutPositionLocal = params.OutPositionLocal;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMovie.TranslateToScreen
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D               Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGbxGFxMovie::TranslateToScreen(const struct FVector2D& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.TranslateToScreen");

	UGbxGFxMovie_TranslateToScreen_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMovie.TranslateScreenToLocal
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D               Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bUseMovieDimensions            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGbxGFxMovie::TranslateScreenToLocal(const struct FVector2D& Point, bool bUseMovieDimensions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.TranslateScreenToLocal");

	UGbxGFxMovie_TranslateScreenToLocal_Params params;
	params.Point = Point;
	params.bUseMovieDimensions = bUseMovieDimensions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMovie.TranslateRectToScreen
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FBox2D                  Rect                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBox2D                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBox2D UGbxGFxMovie::TranslateRectToScreen(const struct FBox2D& Rect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.TranslateRectToScreen");

	UGbxGFxMovie_TranslateRectToScreen_Params params;
	params.Rect = Rect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMovie.SpawnMovie
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AGbxPlayerController*    NewGPCOwner                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  RenderTarget                   (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxMovie::SpawnMovie(class AGbxPlayerController* NewGPCOwner, class UTextureRenderTarget2D* RenderTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.SpawnMovie");

	UGbxGFxMovie_SpawnMovie_Params params;
	params.NewGPCOwner = NewGPCOwner;
	params.RenderTarget = RenderTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMovie.SpawnGbxGFxMovie
// (Final, Native, Static, Public, BlueprintCallable, Const)
// Parameters:
// class AGbxPlayerController*    GbxPlayerController            (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  MovieClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxGFxMovie*            ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxGFxMovie* UGbxGFxMovie::STATIC_SpawnGbxGFxMovie(class AGbxPlayerController* GbxPlayerController, class UClass* MovieClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.SpawnGbxGFxMovie");

	UGbxGFxMovie_SpawnGbxGFxMovie_Params params;
	params.GbxPlayerController = GbxPlayerController;
	params.MovieClass = MovieClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMovie.SetViewportToPlayerScreen
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxMovie::SetViewportToPlayerScreen(class AGbxPlayerController* pc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.SetViewportToPlayerScreen");

	UGbxGFxMovie_SetViewportToPlayerScreen_Params params;
	params.pc = pc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMovie.SetOffsetDisplayTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGbxGFxMovie::SetOffsetDisplayTransform(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.SetOffsetDisplayTransform");

	UGbxGFxMovie_SetOffsetDisplayTransform_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMovie.SetBaseDisplayTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGbxGFxMovie::SetBaseDisplayTransform(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.SetBaseDisplayTransform");

	UGbxGFxMovie_SetBaseDisplayTransform_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMovie.SetAudioEnabled
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxMovie::SetAudioEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.SetAudioEnabled");

	UGbxGFxMovie_SetAudioEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMovie.SetAnchor
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FGbxGFxAnchor           Anchor                         (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxMovie::SetAnchor(const struct FGbxGFxAnchor& Anchor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.SetAnchor");

	UGbxGFxMovie_SetAnchor_Params params;
	params.Anchor = Anchor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMovie.RunUIEventAudio
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ProviderHistory                (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGFxMovie::RunUIEventAudio(const struct FName& EventName, const class FString& ProviderHistory)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.RunUIEventAudio");

	UGbxGFxMovie_RunUIEventAudio_Params params;
	params.EventName = EventName;
	params.ProviderHistory = ProviderHistory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMovie.GetViewportOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGbxGFxMovie::GetViewportOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetViewportOffset");

	UGbxGFxMovie_GetViewportOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMovie.GetViewportDimensions
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGbxGFxMovie::GetViewportDimensions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetViewportDimensions");

	UGbxGFxMovie_GetViewportDimensions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMovie.GetStageDimensions
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGbxGFxMovie::GetStageDimensions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetStageDimensions");

	UGbxGFxMovie_GetStageDimensions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMovie.GetOwningPlayerPawn
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* UGbxGFxMovie::GetOwningPlayerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetOwningPlayerPawn");

	UGbxGFxMovie_GetOwningPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMovie.GetOwningPlayerController
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AGbxPlayerController*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGbxPlayerController* UGbxGFxMovie::GetOwningPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetOwningPlayerController");

	UGbxGFxMovie_GetOwningPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMovie.GetOffsetDisplayTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGbxGFxMovie::GetOffsetDisplayTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetOffsetDisplayTransform");

	UGbxGFxMovie_GetOffsetDisplayTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMovie.GetMovieDimensions
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGbxGFxMovie::GetMovieDimensions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetMovieDimensions");

	UGbxGFxMovie_GetMovieDimensions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMovie.GetBaseDisplayTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGbxGFxMovie::GetBaseDisplayTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetBaseDisplayTransform");

	UGbxGFxMovie_GetBaseDisplayTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMovie.extTransitionComplete
// (Final, Native, Public, Const)

void UGbxGFxMovie::extTransitionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.extTransitionComplete");

	UGbxGFxMovie_extTransitionComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMovie.extAnimationFinished
// (Native, Public, Const)
// Parameters:
// class FString                  TargetName                     (Parm, ZeroConstructor)

void UGbxGFxMovie::extAnimationFinished(const class FString& TargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.extAnimationFinished");

	UGbxGFxMovie_extAnimationFinished_Params params;
	params.TargetName = TargetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMovie.ApplyNewAudioSettings
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UDataTable*              NewDataTable                   (Parm, ZeroConstructor, IsPlainOldData)
// EUIAudioSettingOperation       MergeOperation                 (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxMovie::ApplyNewAudioSettings(class UDataTable* NewDataTable, EUIAudioSettingOperation MergeOperation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.ApplyNewAudioSettings");

	UGbxGFxMovie_ApplyNewAudioSettings_Params params;
	params.NewDataTable = NewDataTable;
	params.MergeOperation = MergeOperation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMenu.SetWidgetAdjacency
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TScriptInterface<class UGbxFocusableWidget> Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxFocusableWidgetAdjacencyInfo AdjacencyInfo                  (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxMenu::SetWidgetAdjacency(const TScriptInterface<class UGbxFocusableWidget>& Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.SetWidgetAdjacency");

	UGbxGFxMenu_SetWidgetAdjacency_Params params;
	params.Widget = Widget;
	params.AdjacencyInfo = AdjacencyInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMenu.SetFocusedWidget
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// TScriptInterface<class UGbxFocusableWidget> WidgetToFocus                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromMouse                     (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxMenu::SetFocusedWidget(const TScriptInterface<class UGbxFocusableWidget>& WidgetToFocus, bool bFromMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.SetFocusedWidget");

	UGbxGFxMenu_SetFocusedWidget_Params params;
	params.WidgetToFocus = WidgetToFocus;
	params.bFromMouse = bFromMouse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMenu.SetFocusableWidgetAdjancency
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// TScriptInterface<class UGbxFocusableWidget> Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentUp                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentDown                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentLeft                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentRight                  (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxMenu::SetFocusableWidgetAdjancency(const TScriptInterface<class UGbxFocusableWidget>& Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.SetFocusableWidgetAdjancency");

	UGbxGFxMenu_SetFocusableWidgetAdjancency_Params params;
	params.Widget = Widget;
	params.AdjacentUp = AdjacentUp;
	params.AdjacentDown = AdjacentDown;
	params.AdjacentLeft = AdjacentLeft;
	params.AdjacentRight = AdjacentRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMenu.RegisterFocusableWidgetWithAdjacency
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// TScriptInterface<class UGbxFocusableWidget> Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentUp                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentDown                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentLeft                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentRight                  (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxMenu::RegisterFocusableWidgetWithAdjacency(const TScriptInterface<class UGbxFocusableWidget>& Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.RegisterFocusableWidgetWithAdjacency");

	UGbxGFxMenu_RegisterFocusableWidgetWithAdjacency_Params params;
	params.Widget = Widget;
	params.AdjacentUp = AdjacentUp;
	params.AdjacentDown = AdjacentDown;
	params.AdjacentLeft = AdjacentLeft;
	params.AdjacentRight = AdjacentRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMenu.RegisterFocusableWidget
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TScriptInterface<class UGbxFocusableWidget> Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxFocusableWidgetAdjacencyInfo AdjacencyInfo                  (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxMenu::RegisterFocusableWidget(const TScriptInterface<class UGbxFocusableWidget>& Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.RegisterFocusableWidget");

	UGbxGFxMenu_RegisterFocusableWidget_Params params;
	params.Widget = Widget;
	params.AdjacencyInfo = AdjacencyInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMenu.MenuStack_Clear
// (Final, Native, Public, BlueprintCallable, Const)

void UGbxGFxMenu::MenuStack_Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.MenuStack_Clear");

	UGbxGFxMenu_MenuStack_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMenu.IsWidgetFocused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WidgetInQuestion               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGFxMenu::IsWidgetFocused(class UObject* WidgetInQuestion)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.IsWidgetFocused");

	UGbxGFxMenu_IsWidgetFocused_Params params;
	params.WidgetInQuestion = WidgetInQuestion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxMenu.GetFocusedWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGbxGFxMenu::GetFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.GetFocusedWidget");

	UGbxGFxMenu_GetFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxHUDWidget.extInitAnimationFinished
// (Native, Public, Const)

void UGbxGFxHUDWidget::extInitAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxHUDWidget.extInitAnimationFinished");

	UGbxGFxHUDWidget_extInitAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxHUDWidget.extHideAnimationFinished
// (Native, Public, Const)

void UGbxGFxHUDWidget::extHideAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxHUDWidget.extHideAnimationFinished");

	UGbxGFxHUDWidget_extHideAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUserWidget.SetLabelText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   LabelText                      (Parm)

void UGbxUserWidget::SetLabelText(const struct FText& LabelText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.SetLabelText");

	UGbxUserWidget_SetLabelText_Params params;
	params.LabelText = LabelText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUserWidget.OnFocusableWidgetUnhovered
// (Native, Public)

void UGbxUserWidget::OnFocusableWidgetUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.OnFocusableWidgetUnhovered");

	UGbxUserWidget_OnFocusableWidgetUnhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUserWidget.OnFocusableWidgetReleased
// (Native, Public)

void UGbxUserWidget::OnFocusableWidgetReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.OnFocusableWidgetReleased");

	UGbxUserWidget_OnFocusableWidgetReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUserWidget.OnFocusableWidgetPressed
// (Native, Public)

void UGbxUserWidget::OnFocusableWidgetPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.OnFocusableWidgetPressed");

	UGbxUserWidget_OnFocusableWidgetPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUserWidget.OnFocusableWidgetHovered
// (Native, Public)

void UGbxUserWidget::OnFocusableWidgetHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.OnFocusableWidgetHovered");

	UGbxUserWidget_OnFocusableWidgetHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUserWidget.OnFocusableWidgetClicked
// (Native, Public)

void UGbxUserWidget::OnFocusableWidgetClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.OnFocusableWidgetClicked");

	UGbxUserWidget_OnFocusableWidgetClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUserWidget.IsRegisteredAsFocusableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxUserWidget::IsRegisteredAsFocusableWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.IsRegisteredAsFocusableWidget");

	UGbxUserWidget_IsRegisteredAsFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUserWidget.IsFocusableWidgetStateHovered
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EGbxFocusableWidgetState       State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxUserWidget::STATIC_IsFocusableWidgetStateHovered(EGbxFocusableWidgetState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.IsFocusableWidgetStateHovered");

	UGbxUserWidget_IsFocusableWidgetStateHovered_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUserWidget.IsFocusableWidgetStateFocused
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EGbxFocusableWidgetState       State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxUserWidget::STATIC_IsFocusableWidgetStateFocused(EGbxFocusableWidgetState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.IsFocusableWidgetStateFocused");

	UGbxUserWidget_IsFocusableWidgetStateFocused_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUserWidget.HandleFocusableWidgetStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxFocusableWidgetState       NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBecameFocused                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLostFocus                     (Parm, ZeroConstructor, IsPlainOldData)

void UGbxUserWidget::HandleFocusableWidgetStateChanged(EGbxFocusableWidgetState NewState, bool bBecameFocused, bool bLostFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.HandleFocusableWidgetStateChanged");

	UGbxUserWidget_HandleFocusableWidgetStateChanged_Params params;
	params.NewState = NewState;
	params.bBecameFocused = bBecameFocused;
	params.bLostFocus = bLostFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUserWidget.GotoAndStop
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime              StopTime                       (ConstParm, Parm)
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxUserWidget::GotoAndStop(const struct FFrameTime& StopTime, class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.GotoAndStop");

	UGbxUserWidget_GotoAndStop_Params params;
	params.StopTime = StopTime;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUserWidget.GetAllChildWidgetsOfClass
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  TargetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UWidget*>         OutputArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGbxUserWidget::GetAllChildWidgetsOfClass(class UClass* TargetClass, TArray<class UWidget*>* OutputArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.GetAllChildWidgetsOfClass");

	UGbxUserWidget_GetAllChildWidgetsOfClass_Params params;
	params.TargetClass = TargetClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputArray != nullptr)
		*OutputArray = params.OutputArray;
}


// Function GbxUI.GbxUmgMenu.SetWidgetAdjacency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxFocusableWidgetAdjacencyInfo AdjacencyInfo                  (ConstParm, Parm)

void UGbxUmgMenu::SetWidgetAdjacency(class UObject* Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.SetWidgetAdjacency");

	UGbxUmgMenu_SetWidgetAdjacency_Params params;
	params.Widget = Widget;
	params.AdjacencyInfo = AdjacencyInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.SetSlateFocusedWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxUmgMenu::SetSlateFocusedWidget(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.SetSlateFocusedWidget");

	UGbxUmgMenu_SetSlateFocusedWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.SetHintBarContainer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGbxHintBarWidgetContainer> InContainer                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UGbxUmgMenu::SetHintBarContainer(const TScriptInterface<class UGbxHintBarWidgetContainer>& InContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.SetHintBarContainer");

	UGbxUmgMenu_SetHintBarContainer_Params params;
	params.InContainer = InContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.SetFocusedWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromMouse                     (Parm, ZeroConstructor, IsPlainOldData)

void UGbxUmgMenu::SetFocusedWidget(class UObject* Widget, bool bFromMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.SetFocusedWidget");

	UGbxUmgMenu_SetFocusedWidget_Params params;
	params.Widget = Widget;
	params.bFromMouse = bFromMouse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.SetFocusableWidgetAdjancency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentUp                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentDown                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentLeft                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentRight                  (Parm, ZeroConstructor, IsPlainOldData)

void UGbxUmgMenu::SetFocusableWidgetAdjancency(class UObject* Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.SetFocusableWidgetAdjancency");

	UGbxUmgMenu_SetFocusableWidgetAdjancency_Params params;
	params.Widget = Widget;
	params.AdjacentUp = AdjacentUp;
	params.AdjacentDown = AdjacentDown;
	params.AdjacentLeft = AdjacentLeft;
	params.AdjacentRight = AdjacentRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.RegisterStagePlacedHint
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGbxHintWidget> InHintWidget                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   InInputAction                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGbxUmgMenu::RegisterStagePlacedHint(const TScriptInterface<class UGbxHintWidget>& InHintWidget, const struct FName& InInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.RegisterStagePlacedHint");

	UGbxUmgMenu_RegisterStagePlacedHint_Params params;
	params.InHintWidget = InHintWidget;
	params.InInputAction = InInputAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.RegisterFocusableWidgetWithAdjacency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentUp                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentDown                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentLeft                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AdjacentRight                  (Parm, ZeroConstructor, IsPlainOldData)

void UGbxUmgMenu::RegisterFocusableWidgetWithAdjacency(class UObject* Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.RegisterFocusableWidgetWithAdjacency");

	UGbxUmgMenu_RegisterFocusableWidgetWithAdjacency_Params params;
	params.Widget = Widget;
	params.AdjacentUp = AdjacentUp;
	params.AdjacentDown = AdjacentDown;
	params.AdjacentLeft = AdjacentLeft;
	params.AdjacentRight = AdjacentRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.RegisterFocusableWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxFocusableWidgetAdjacencyInfo AdjacencyInfo                  (Parm)

void UGbxUmgMenu::RegisterFocusableWidget(class UObject* Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.RegisterFocusableWidget");

	UGbxUmgMenu_RegisterFocusableWidget_Params params;
	params.Widget = Widget;
	params.AdjacencyInfo = AdjacencyInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.PopulateHintBar
// (Native, Public, BlueprintCallable)

void UGbxUmgMenu::PopulateHintBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.PopulateHintBar");

	UGbxUmgMenu_PopulateHintBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.NavigateBack
// (Final, Native, Public, BlueprintCallable)

void UGbxUmgMenu::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.NavigateBack");

	UGbxUmgMenu_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.MenuStack_SwitchTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxMenuData*            MenuDataIn                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGbxUmgMenu::MenuStack_SwitchTo(class UGbxMenuData* MenuDataIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.MenuStack_SwitchTo");

	UGbxUmgMenu_MenuStack_SwitchTo_Params params;
	params.MenuDataIn = MenuDataIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUmgMenu.MenuStack_Push
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxMenuData*            MenuDataIn                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGbxUmgMenu::MenuStack_Push(class UGbxMenuData* MenuDataIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.MenuStack_Push");

	UGbxUmgMenu_MenuStack_Push_Params params;
	params.MenuDataIn = MenuDataIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUmgMenu.MenuStack_PopToSwitchTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Menu                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxMenuData*            MenuDataIn                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGbxUmgMenu::MenuStack_PopToSwitchTo(class UObject* Menu, class UGbxMenuData* MenuDataIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.MenuStack_PopToSwitchTo");

	UGbxUmgMenu_MenuStack_PopToSwitchTo_Params params;
	params.Menu = Menu;
	params.MenuDataIn = MenuDataIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUmgMenu.MenuStack_PopTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Menu                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGbxUmgMenu::MenuStack_PopTo(class UObject* Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.MenuStack_PopTo");

	UGbxUmgMenu_MenuStack_PopTo_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.MenuStack_Pop
// (Final, Native, Public, BlueprintCallable)

void UGbxUmgMenu::MenuStack_Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.MenuStack_Pop");

	UGbxUmgMenu_MenuStack_Pop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.MenuStack_Clear
// (Final, Native, Public, BlueprintCallable)

void UGbxUmgMenu::MenuStack_Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.MenuStack_Clear");

	UGbxUmgMenu_MenuStack_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.IsWidgetFocused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WidgetInQuestion               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxUmgMenu::IsWidgetFocused(class UObject* WidgetInQuestion)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.IsWidgetFocused");

	UGbxUmgMenu_IsWidgetFocused_Params params;
	params.WidgetInQuestion = WidgetInQuestion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUmgMenu.IsActiveMenuOnStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxUmgMenu::IsActiveMenuOnStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.IsActiveMenuOnStack");

	UGbxUmgMenu_IsActiveMenuOnStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUmgMenu.HandleMenuInputDeviceChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxMenuInputDevice            NewInputDevice                 (Parm, ZeroConstructor, IsPlainOldData)

void UGbxUmgMenu::HandleMenuInputDeviceChanged(EGbxMenuInputDevice NewInputDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.HandleMenuInputDeviceChanged");

	UGbxUmgMenu_HandleMenuInputDeviceChanged_Params params;
	params.NewInputDevice = NewInputDevice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.HandleMenuInputAction
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   InputAction                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ControllerId                   (Parm, ZeroConstructor, IsPlainOldData)

void UGbxUmgMenu::HandleMenuInputAction(const struct FName& InputAction, int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.HandleMenuInputAction");

	UGbxUmgMenu_HandleMenuInputAction_Params params;
	params.InputAction = InputAction;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.HandleMenuInit
// (Event, Public, BlueprintEvent)

void UGbxUmgMenu::HandleMenuInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.HandleMenuInit");

	UGbxUmgMenu_HandleMenuInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.HandleMenuDeinit
// (Event, Public, BlueprintEvent)

void UGbxUmgMenu::HandleMenuDeinit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.HandleMenuDeinit");

	UGbxUmgMenu_HandleMenuDeinit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.HandleMenuDeactivate
// (Event, Public, BlueprintEvent)

void UGbxUmgMenu::HandleMenuDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.HandleMenuDeactivate");

	UGbxUmgMenu_HandleMenuDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.HandleMenuAspectRatioChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          NewAspectRatio                 (Parm, ZeroConstructor, IsPlainOldData)

void UGbxUmgMenu::HandleMenuAspectRatioChanged(float NewAspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.HandleMenuAspectRatioChanged");

	UGbxUmgMenu_HandleMenuAspectRatioChanged_Params params;
	params.NewAspectRatio = NewAspectRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.HandleMenuActivate
// (Event, Public, BlueprintEvent)

void UGbxUmgMenu::HandleMenuActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.HandleMenuActivate");

	UGbxUmgMenu_HandleMenuActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUmgMenu.GetListItemFactory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxListItemFactory*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxListItemFactory* UGbxUmgMenu::GetListItemFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.GetListItemFactory");

	UGbxUmgMenu_GetListItemFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUmgMenu.GetFocusedWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGbxUmgMenu::GetFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.GetFocusedWidget");

	UGbxUmgMenu_GetFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUmgMenu.GetCurrentInputDevice
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGbxMenuInputDevice            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxMenuInputDevice UGbxUmgMenu::GetCurrentInputDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.GetCurrentInputDevice");

	UGbxUmgMenu_GetCurrentInputDevice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxObject.SetOffsetDisplayTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGbxGFxObject::SetOffsetDisplayTransform(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxObject.SetOffsetDisplayTransform");

	UGbxGFxObject_SetOffsetDisplayTransform_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxObject.SetBaseDisplayTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGbxGFxObject::SetBaseDisplayTransform(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxObject.SetBaseDisplayTransform");

	UGbxGFxObject_SetBaseDisplayTransform_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxObject.RotateAboutPoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          Degrees                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGbxGFxObject::RotateAboutPoint(float Degrees, const struct FVector2D& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxObject.RotateAboutPoint");

	UGbxGFxObject_RotateAboutPoint_Params params;
	params.Degrees = Degrees;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxObject.GetOffsetDisplayTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGbxGFxObject::GetOffsetDisplayTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxObject.GetOffsetDisplayTransform");

	UGbxGFxObject_GetOffsetDisplayTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxObject.GetBaseDisplayTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGbxGFxObject::GetBaseDisplayTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxObject.GetBaseDisplayTransform");

	UGbxGFxObject_GetBaseDisplayTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxButton.SetLockedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGbxGFxButtonLockedState       InLockedState                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldRefresh                 (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxButton::SetLockedState(EGbxGFxButtonLockedState InLockedState, bool bShouldRefresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.SetLockedState");

	UGbxGFxButton_SetLockedState_Params params;
	params.InLockedState = InLockedState;
	params.bShouldRefresh = bShouldRefresh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxButton.SetLabelText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bForceUpdate                   (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxButton::SetLabelText(const struct FText& Text, bool bForceUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.SetLabelText");

	UGbxGFxButton_SetLabelText_Params params;
	params.Text = Text;
	params.bForceUpdate = bForceUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxButton.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGbxGFxButtonCheckedState      InCheckedState                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldRefresh                 (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxButton::SetCheckedState(EGbxGFxButtonCheckedState InCheckedState, bool bShouldRefresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.SetCheckedState");

	UGbxGFxButton_SetCheckedState_Params params;
	params.InCheckedState = InCheckedState;
	params.bShouldRefresh = bShouldRefresh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxButton.SetButtonType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGbxGFxButtonType              InButtonType                   (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxButton::SetButtonType(EGbxGFxButtonType InButtonType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.SetButtonType");

	UGbxGFxButton_SetButtonType_Params params;
	params.InButtonType = InButtonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxButton.RefreshView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGbxFocusableWidgetState       PrevState                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxButton::RefreshView(EGbxFocusableWidgetState PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.RefreshView");

	UGbxGFxButton_RefreshView_Params params;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxButton.K2_HandleFocusableWidgetStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxFocusableWidgetState       NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBecameFocused                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLostFocus                     (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxButton::K2_HandleFocusableWidgetStateChanged(EGbxFocusableWidgetState NewState, bool bBecameFocused, bool bLostFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.K2_HandleFocusableWidgetStateChanged");

	UGbxGFxButton_K2_HandleFocusableWidgetStateChanged_Params params;
	params.NewState = NewState;
	params.bBecameFocused = bBecameFocused;
	params.bLostFocus = bLostFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxButton.IsRegisteredAsFocusableWidget
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGFxButton::IsRegisteredAsFocusableWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsRegisteredAsFocusableWidget");

	UGbxGFxButton_IsRegisteredAsFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxButton.IsLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGFxButton::IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsLocked");

	UGbxGFxButton_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateUp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EGbxFocusableWidgetState       State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGFxButton::STATIC_IsFocusableWidgetStateUp(EGbxFocusableWidgetState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsFocusableWidgetStateUp");

	UGbxGFxButton_IsFocusableWidgetStateUp_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateHovered
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EGbxFocusableWidgetState       State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGFxButton::STATIC_IsFocusableWidgetStateHovered(EGbxFocusableWidgetState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsFocusableWidgetStateHovered");

	UGbxGFxButton_IsFocusableWidgetStateHovered_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateFocused
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EGbxFocusableWidgetState       State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGFxButton::STATIC_IsFocusableWidgetStateFocused(EGbxFocusableWidgetState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsFocusableWidgetStateFocused");

	UGbxGFxButton_IsFocusableWidgetStateFocused_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDown
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EGbxFocusableWidgetState       State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGFxButton::STATIC_IsFocusableWidgetStateDown(EGbxFocusableWidgetState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDown");

	UGbxGFxButton_IsFocusableWidgetStateDown_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDisabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EGbxFocusableWidgetState       State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGFxButton::STATIC_IsFocusableWidgetStateDisabled(EGbxFocusableWidgetState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDisabled");

	UGbxGFxButton_IsFocusableWidgetStateDisabled_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxButton.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGFxButton::IsChecked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsChecked");

	UGbxGFxButton_IsChecked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxButton.GetLockedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGbxGFxButtonLockedState       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxGFxButtonLockedState UGbxGFxButton::GetLockedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.GetLockedState");

	UGbxGFxButton_GetLockedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxButton.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGbxGFxButtonCheckedState      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxGFxButtonCheckedState UGbxGFxButton::GetCheckedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.GetCheckedState");

	UGbxGFxButton_GetCheckedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxButton.GetButtonType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGbxGFxButtonType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxGFxButtonType UGbxGFxButton::GetButtonType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.GetButtonType");

	UGbxGFxButton_GetButtonType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction GbxUI.GbxGFxButton.GbxGFxButtonEvent__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// class UGbxGFxButton*           BUTTON                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxButton::GbxGFxButtonEvent__DelegateSignature(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxUI.GbxGFxButton.GbxGFxButtonEvent__DelegateSignature");

	UGbxGFxButton_GbxGFxButtonEvent__DelegateSignature_Params params;
	params.BUTTON = BUTTON;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxListItemSpinner.OnSpinnerValueUpdated
// (Final, Native, Private)

void UGbxGFxListItemSpinner::OnSpinnerValueUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxListItemSpinner.OnSpinnerValueUpdated");

	UGbxGFxListItemSpinner_OnSpinnerValueUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxProgressBar.SetPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxProgressBar::SetPercent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.SetPercent");

	UGbxGFxProgressBar_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxProgressBar.SetMaxValueText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxProgressBar::SetMaxValueText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.SetMaxValueText");

	UGbxGFxProgressBar_SetMaxValueText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxProgressBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (Parm, IsPlainOldData)

void UGbxGFxProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.SetFillColorAndOpacity");

	UGbxGFxProgressBar_SetFillColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxProgressBar.SetCurrentValueText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxProgressBar::SetCurrentValueText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.SetCurrentValueText");

	UGbxGFxProgressBar_SetCurrentValueText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxProgressBar.PassedPercentThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Threshold                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          OldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncreasing                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDecreasing                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGFxProgressBar::STATIC_PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.PassedPercentThreshold");

	UGbxGFxProgressBar_PassedPercentThreshold_Params params;
	params.Threshold = Threshold;
	params.OldValue = OldValue;
	params.CurrentValue = CurrentValue;
	params.bIncreasing = bIncreasing;
	params.bDecreasing = bDecreasing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxProgressBar.InterpolateToPercentWithInterpolator
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxProgressBarInterpolator Interpolator                   (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxProgressBar::InterpolateToPercentWithInterpolator(float InPercent, const struct FGbxProgressBarInterpolator& Interpolator)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.InterpolateToPercentWithInterpolator");

	UGbxGFxProgressBar_InterpolateToPercentWithInterpolator_Params params;
	params.InPercent = InPercent;
	params.Interpolator = Interpolator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxProgressBar.InterpolateToPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxProgressBar::InterpolateToPercent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.InterpolateToPercent");

	UGbxGFxProgressBar_InterpolateToPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxProgressBar.HandlePercentChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          OldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInterpolating               (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxProgressBarInterpolator ActiveInterpolator             (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxProgressBar::HandlePercentChanged(float OldValue, float CurrentValue, bool bIsInterpolating, const struct FGbxProgressBarInterpolator& ActiveInterpolator)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.HandlePercentChanged");

	UGbxGFxProgressBar_HandlePercentChanged_Params params;
	params.OldValue = OldValue;
	params.CurrentValue = CurrentValue;
	params.bIsInterpolating = bIsInterpolating;
	params.ActiveInterpolator = ActiveInterpolator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxProgressBar.HandleEnterPercentRange
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   RangeName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UGbxGFxProgressBar::HandleEnterPercentRange(const struct FName& RangeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.HandleEnterPercentRange");

	UGbxGFxProgressBar_HandleEnterPercentRange_Params params;
	params.RangeName = RangeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxProgressBar.GetPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxGFxProgressBar::GetPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.GetPercent");

	UGbxGFxProgressBar_GetPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxProgressBar.EnteredPercentRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          RangeMin                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeMax                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          OldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncreasing                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDecreasing                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGFxProgressBar::STATIC_EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.EnteredPercentRange");

	UGbxGFxProgressBar_EnteredPercentRange_Params params;
	params.RangeMin = RangeMin;
	params.RangeMax = RangeMax;
	params.OldValue = OldValue;
	params.CurrentValue = CurrentValue;
	params.bIncreasing = bIncreasing;
	params.bDecreasing = bDecreasing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxGFxGridScrollingList.OnScrollBarPositionUpdated
// (Final, Native, Protected)
// Parameters:
// float                          SliderPercentage               (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxGridScrollingList::OnScrollBarPositionUpdated(float SliderPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxGridScrollingList.OnScrollBarPositionUpdated");

	UGbxGFxGridScrollingList_OnScrollBarPositionUpdated_Params params;
	params.SliderPercentage = SliderPercentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxListItemNumber.OnSliderUpdated
// (Final, Native, Private)
// Parameters:
// float                          SliderPct                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxListItemNumber::OnSliderUpdated(float SliderPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxListItemNumber.OnSliderUpdated");

	UGbxGFxListItemNumber_OnSliderUpdated_Params params;
	params.SliderPct = SliderPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUDContainer.HandleInit
// (Event, Public, BlueprintEvent)

void UGbxHUDContainer::HandleInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDContainer.HandleInit");

	UGbxHUDContainer_HandleInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUDContainer.HandleDeinit
// (Event, Public, BlueprintEvent)

void UGbxHUDContainer::HandleDeinit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDContainer.HandleDeinit");

	UGbxHUDContainer_HandleDeinit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUDContainer.HandleDeactivate
// (Event, Public, BlueprintEvent)

void UGbxHUDContainer::HandleDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDContainer.HandleDeactivate");

	UGbxHUDContainer_HandleDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUDContainer.HandleActivate
// (Event, Public, BlueprintEvent)

void UGbxHUDContainer::HandleActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDContainer.HandleActivate");

	UGbxHUDContainer_HandleActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUDWidget.HandleInit
// (Event, Public, BlueprintEvent)

void UGbxHUDWidget::HandleInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDWidget.HandleInit");

	UGbxHUDWidget_HandleInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUDWidget.HandleDeinit
// (Event, Public, BlueprintEvent)

void UGbxHUDWidget::HandleDeinit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDWidget.HandleDeinit");

	UGbxHUDWidget_HandleDeinit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUDWidget.HandleDeactivate
// (Event, Public, BlueprintEvent)

void UGbxHUDWidget::HandleDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDWidget.HandleDeactivate");

	UGbxHUDWidget_HandleDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUDWidget.HandleActivate
// (Event, Public, BlueprintEvent)

void UGbxHUDWidget::HandleActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDWidget.HandleActivate");

	UGbxHUDWidget_HandleActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxListItem.GetItemIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGbxListItem::GetItemIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItem.GetItemIndex");

	UGbxListItem_GetItemIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxHUD.SwitchToHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxHUDStateData*        State                          (Parm, ZeroConstructor, IsPlainOldData)

void AGbxHUD::STATIC_SwitchToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.SwitchToHUDState");

	AGbxHUD_SwitchToHUDState_Params params;
	params.PlayerController = PlayerController;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUD.SetHUDContainer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxHUDData*             ContainerDefinition            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AGbxHUD::STATIC_SetHUDContainer(class AGbxPlayerController* PlayerController, class UGbxHUDData* ContainerDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.SetHUDContainer");

	AGbxHUD_SetHUDContainer_Params params;
	params.PlayerController = PlayerController;
	params.ContainerDefinition = ContainerDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUD.PushHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxHUDStateData*        State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowDuplicatePush            (Parm, ZeroConstructor, IsPlainOldData)

void AGbxHUD::STATIC_PushHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State, bool bAllowDuplicatePush)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.PushHUDState");

	AGbxHUD_PushHUDState_Params params;
	params.PlayerController = PlayerController;
	params.State = State;
	params.bAllowDuplicatePush = bAllowDuplicatePush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUD.PopToSwitchToHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxHUDStateData*        PopToState                     (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxHUDStateData*        SwitchToState                  (Parm, ZeroConstructor, IsPlainOldData)

void AGbxHUD::STATIC_PopToSwitchToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* PopToState, class UGbxHUDStateData* SwitchToState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.PopToSwitchToHUDState");

	AGbxHUD_PopToSwitchToHUDState_Params params;
	params.PlayerController = PlayerController;
	params.PopToState = PopToState;
	params.SwitchToState = SwitchToState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUD.PopToHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxHUDStateData*        State                          (Parm, ZeroConstructor, IsPlainOldData)

void AGbxHUD::STATIC_PopToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.PopToHUDState");

	AGbxHUD_PopToHUDState_Params params;
	params.PlayerController = PlayerController;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUD.PopSpecifiedHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxHUDStateData*        State                          (Parm, ZeroConstructor, IsPlainOldData)

void AGbxHUD::STATIC_PopSpecifiedHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.PopSpecifiedHUDState");

	AGbxHUD_PopSpecifiedHUDState_Params params;
	params.PlayerController = PlayerController;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUD.PopHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void AGbxHUD::STATIC_PopHUDState(class AGbxPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.PopHUDState");

	AGbxHUD_PopHUDState_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUD.OnPrimaryCharacterChanged
// (Final, Native, Protected)
// Parameters:
// class AGbxCharacter*           Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AGbxHUD::OnPrimaryCharacterChanged(class AGbxCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.OnPrimaryCharacterChanged");

	AGbxHUD_OnPrimaryCharacterChanged_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUD.OnPawnChanged
// (Native, Protected)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   OldPawn                        (Parm, ZeroConstructor, IsPlainOldData)

void AGbxHUD::OnPawnChanged(class APawn* Pawn, class APawn* OldPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.OnPawnChanged");

	AGbxHUD_OnPawnChanged_Params params;
	params.Pawn = Pawn;
	params.OldPawn = OldPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUD.GotoPreviousHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void AGbxHUD::STATIC_GotoPreviousHUDState(class AGbxPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.GotoPreviousHUDState");

	AGbxHUD_GotoPreviousHUDState_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUD.GotoHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxHUDStateData*        State                          (Parm, ZeroConstructor, IsPlainOldData)

void AGbxHUD::STATIC_GotoHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.GotoHUDState");

	AGbxHUD_GotoHUDState_Params params;
	params.PlayerController = PlayerController;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUD.GetCurrentHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxHUDStateData*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxHUDStateData* AGbxHUD::STATIC_GetCurrentHUDState(class AGbxPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.GetCurrentHUDState");

	AGbxHUD_GetCurrentHUDState_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxHUD.ClearToDefaultHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void AGbxHUD::STATIC_ClearToDefaultHUDState(class AGbxPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.ClearToDefaultHUDState");

	AGbxHUD_ClearToDefaultHUDState_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHUD.ClearHUDStates
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void AGbxHUD::STATIC_ClearHUDStates(class AGbxPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.ClearHUDStates");

	AGbxHUD_ClearHUDStates_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUILibrary.SendTextToDebugHUD
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)
// int                            TextSize                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxUILibrary::STATIC_SendTextToDebugHUD(class UObject* WorldContextObject, const struct FText& Text, const struct FLinearColor& Color, int TextSize, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.SendTextToDebugHUD");

	UGbxUILibrary_SendTextToDebugHUD_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Text = Text;
	params.Color = Color;
	params.TextSize = TextSize;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUILibrary.PlayFullScreenMovie
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    GbxPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayOnceAndDestroy            (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxFullScreenMovie*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxFullScreenMovie* UGbxUILibrary::STATIC_PlayFullScreenMovie(class AGbxPlayerController* GbxPC, class UMediaSource* MediaSource, bool bPlayOnceAndDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.PlayFullScreenMovie");

	UGbxUILibrary_PlayFullScreenMovie_Params params;
	params.GbxPC = GbxPC;
	params.MediaSource = MediaSource;
	params.bPlayOnceAndDestroy = bPlayOnceAndDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILibrary.CreateTextListItemWithDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGbxList> OwningList                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LabelText                      (Parm)
// struct FScriptDelegate         ClickedDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         SelectedDelegate               (Parm, ZeroConstructor)
// class UGbxListItemText*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItemText* UGbxUILibrary::STATIC_CreateTextListItemWithDelegates(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText, const struct FScriptDelegate& ClickedDelegate, const struct FScriptDelegate& SelectedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateTextListItemWithDelegates");

	UGbxUILibrary_CreateTextListItemWithDelegates_Params params;
	params.OwningList = OwningList;
	params.OwningPlayer = OwningPlayer;
	params.LabelText = LabelText;
	params.ClickedDelegate = ClickedDelegate;
	params.SelectedDelegate = SelectedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILibrary.CreateTextListItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGbxList> OwningList                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LabelText                      (Parm)
// class UGbxListItemText*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItemText* UGbxUILibrary::STATIC_CreateTextListItem(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateTextListItem");

	UGbxUILibrary_CreateTextListItem_Params params;
	params.OwningList = OwningList;
	params.OwningPlayer = OwningPlayer;
	params.LabelText = LabelText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILibrary.CreateNumberListItemWithDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGbxList> OwningList                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LabelText                      (Parm)
// float                          InitialValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          SliderMin                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          SliderMax                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          SliderStep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ChangedDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         SelectedDelegate               (Parm, ZeroConstructor)
// class UGbxListItemNumber*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItemNumber* UGbxUILibrary::STATIC_CreateNumberListItemWithDelegates(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, const struct FScriptDelegate& ChangedDelegate, const struct FScriptDelegate& SelectedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateNumberListItemWithDelegates");

	UGbxUILibrary_CreateNumberListItemWithDelegates_Params params;
	params.OwningList = OwningList;
	params.OwningPlayer = OwningPlayer;
	params.LabelText = LabelText;
	params.InitialValue = InitialValue;
	params.SliderMin = SliderMin;
	params.SliderMax = SliderMax;
	params.SliderStep = SliderStep;
	params.ChangedDelegate = ChangedDelegate;
	params.SelectedDelegate = SelectedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILibrary.CreateNumberListItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGbxList> OwningList                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LabelText                      (Parm)
// float                          InitialValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          SliderMin                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          SliderMax                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          SliderStep                     (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxListItemNumber*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItemNumber* UGbxUILibrary::STATIC_CreateNumberListItem(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateNumberListItem");

	UGbxUILibrary_CreateNumberListItem_Params params;
	params.OwningList = OwningList;
	params.OwningPlayer = OwningPlayer;
	params.LabelText = LabelText;
	params.InitialValue = InitialValue;
	params.SliderMin = SliderMin;
	params.SliderMax = SliderMax;
	params.SliderStep = SliderStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILibrary.CreateListItemWithDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGbxList> OwningList                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ClickedDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         SelectedDelegate               (Parm, ZeroConstructor)
// class UGbxListItem*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItem* UGbxUILibrary::STATIC_CreateListItemWithDelegates(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, class UClass* ItemClass, const struct FScriptDelegate& ClickedDelegate, const struct FScriptDelegate& SelectedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateListItemWithDelegates");

	UGbxUILibrary_CreateListItemWithDelegates_Params params;
	params.OwningList = OwningList;
	params.OwningPlayer = OwningPlayer;
	params.ItemClass = ItemClass;
	params.ClickedDelegate = ClickedDelegate;
	params.SelectedDelegate = SelectedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILibrary.CreateListItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGbxList> OwningList                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxListItem*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItem* UGbxUILibrary::STATIC_CreateListItem(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateListItem");

	UGbxUILibrary_CreateListItem_Params params;
	params.OwningList = OwningList;
	params.OwningPlayer = OwningPlayer;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILibrary.CreateDefaultListItemWithDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGbxList> OwningList                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ClickedDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         SelectedDelegate               (Parm, ZeroConstructor)
// class UGbxListItem*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItem* UGbxUILibrary::STATIC_CreateDefaultListItemWithDelegates(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FScriptDelegate& ClickedDelegate, const struct FScriptDelegate& SelectedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateDefaultListItemWithDelegates");

	UGbxUILibrary_CreateDefaultListItemWithDelegates_Params params;
	params.OwningList = OwningList;
	params.OwningPlayer = OwningPlayer;
	params.ClickedDelegate = ClickedDelegate;
	params.SelectedDelegate = SelectedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILibrary.CreateDefaultListItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGbxList> OwningList                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxListItem*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItem* UGbxUILibrary::STATIC_CreateDefaultListItem(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateDefaultListItem");

	UGbxUILibrary_CreateDefaultListItem_Params params;
	params.OwningList = OwningList;
	params.OwningPlayer = OwningPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILibrary.CreateComboBoxListItemWithDelegates
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGbxList> OwningList                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LabelText                      (Parm)
// TArray<struct FText>           Items                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            InitialIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ChangedDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         SelectedDelegate               (Parm, ZeroConstructor)
// class UGbxListItemComboBox*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItemComboBox* UGbxUILibrary::STATIC_CreateComboBoxListItemWithDelegates(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText, TArray<struct FText> Items, int InitialIndex, const struct FScriptDelegate& ChangedDelegate, const struct FScriptDelegate& SelectedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateComboBoxListItemWithDelegates");

	UGbxUILibrary_CreateComboBoxListItemWithDelegates_Params params;
	params.OwningList = OwningList;
	params.OwningPlayer = OwningPlayer;
	params.LabelText = LabelText;
	params.Items = Items;
	params.InitialIndex = InitialIndex;
	params.ChangedDelegate = ChangedDelegate;
	params.SelectedDelegate = SelectedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILibrary.CreateComboBoxListItem
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGbxList> OwningList                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LabelText                      (Parm)
// TArray<struct FText>           Items                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            InitialIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxListItemComboBox*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItemComboBox* UGbxUILibrary::STATIC_CreateComboBoxListItem(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText, TArray<struct FText> Items, int InitialIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateComboBoxListItem");

	UGbxUILibrary_CreateComboBoxListItem_Params params;
	params.OwningList = OwningList;
	params.OwningPlayer = OwningPlayer;
	params.LabelText = LabelText;
	params.Items = Items;
	params.InitialIndex = InitialIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILibrary.CreateBooleanListItemWithDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGbxList> OwningList                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LabelText                      (Parm)
// bool                           InitialValue                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ChangedDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         SelectedDelegate               (Parm, ZeroConstructor)
// class UGbxListItemBoolean*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItemBoolean* UGbxUILibrary::STATIC_CreateBooleanListItemWithDelegates(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText, bool InitialValue, const struct FScriptDelegate& ChangedDelegate, const struct FScriptDelegate& SelectedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateBooleanListItemWithDelegates");

	UGbxUILibrary_CreateBooleanListItemWithDelegates_Params params;
	params.OwningList = OwningList;
	params.OwningPlayer = OwningPlayer;
	params.LabelText = LabelText;
	params.InitialValue = InitialValue;
	params.ChangedDelegate = ChangedDelegate;
	params.SelectedDelegate = SelectedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILibrary.CreateBooleanListItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGbxList> OwningList                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LabelText                      (Parm)
// bool                           InitialValue                   (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxListItemBoolean*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItemBoolean* UGbxUILibrary::STATIC_CreateBooleanListItem(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText, bool InitialValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateBooleanListItem");

	UGbxUILibrary_CreateBooleanListItem_Params params;
	params.OwningList = OwningList;
	params.OwningPlayer = OwningPlayer;
	params.LabelText = LabelText;
	params.InitialValue = InitialValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILibrary.AbbreviateNumberText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ValueToFormat                  (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UGbxUILibrary::STATIC_AbbreviateNumberText(float ValueToFormat)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.AbbreviateNumberText");

	UGbxUILibrary_AbbreviateNumberText_Params params;
	params.ValueToFormat = ValueToFormat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxCascadingList.SetActiveList
// (Final, Native, Private)
// Parameters:
// class UGbxGridListWidget*      List                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxCascadingList::SetActiveList(class UGbxGridListWidget* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.SetActiveList");

	UGbxCascadingList_SetActiveList_Params params;
	params.List = List;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxCascadingList.PushItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGbxCascadingListItemData> Items                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGbxCascadingList::PushItems(TArray<struct FGbxCascadingListItemData> Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.PushItems");

	UGbxCascadingList_PushItems_Params params;
	params.Items = Items;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxCascadingList.Pop
// (Final, Native, Public, BlueprintCallable)

void UGbxCascadingList::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.Pop");

	UGbxCascadingList_Pop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxCascadingList.OnShiftListsForward
// (Event, Public, BlueprintEvent)

void UGbxCascadingList::OnShiftListsForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.OnShiftListsForward");

	UGbxCascadingList_OnShiftListsForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxCascadingList.OnShiftListsBack
// (Event, Public, BlueprintEvent)

void UGbxCascadingList::OnShiftListsBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.OnShiftListsBack");

	UGbxCascadingList_OnShiftListsBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxCascadingList.OnItemSelected_Internal
// (Final, Native, Private)
// Parameters:
// class UGbxListItem*            Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxCascadingList::OnItemSelected_Internal(class UGbxListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.OnItemSelected_Internal");

	UGbxCascadingList_OnItemSelected_Internal_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxCascadingList.OnItemClicked_Internal
// (Final, Native, Private)
// Parameters:
// class UGbxListItem*            Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxCascadingList::OnItemClicked_Internal(class UGbxListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.OnItemClicked_Internal");

	UGbxCascadingList_OnItemClicked_Internal_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxCascadingList.HasItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCascadingList::HasItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.HasItems");

	UGbxCascadingList_HasItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxCascadingList.GetStackDepth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGbxCascadingList::GetStackDepth()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.GetStackDepth");

	UGbxCascadingList_GetStackDepth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxCascadingList.Clear
// (Final, Native, Public, BlueprintCallable)

void UGbxCascadingList::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.Clear");

	UGbxCascadingList_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxComboBoxDropdownMenu.OnChoiceClicked
// (Final, Native, Public)
// Parameters:
// class UGbxListItem*            ListItem                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxComboBoxDropdownMenu::OnChoiceClicked(class UGbxListItem* ListItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxComboBoxDropdownMenu.OnChoiceClicked");

	UGbxComboBoxDropdownMenu_OnChoiceClicked_Params params;
	params.ListItem = ListItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxComboBoxDropdownMenu.DismissWithoutChanging
// (Final, Native, Public, BlueprintCallable)

void UGbxComboBoxDropdownMenu::DismissWithoutChanging()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxComboBoxDropdownMenu.DismissWithoutChanging");

	UGbxComboBoxDropdownMenu_DismissWithoutChanging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxComboBox.OnComboBoxClicked
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UGbxUserWidget*          Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxComboBox::OnComboBoxClicked(class UGbxUserWidget* Widget, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxComboBox.OnComboBoxClicked");

	UGbxComboBox_OnComboBoxClicked_Params params;
	params.Widget = Widget;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxComboBox.GetCurentChoiceReferenceIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGbxComboBox::GetCurentChoiceReferenceIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxComboBox.GetCurentChoiceReferenceIndex");

	UGbxComboBox_GetCurentChoiceReferenceIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxCoreDialogBoxHelpers.ShowYesNoDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   HeaderText                     (ConstParm, Parm)
// struct FText                   MessageText                    (ConstParm, Parm)
// bool                           bAnyUserCanInteract            (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDialogBox*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxDialogBox* UGbxCoreDialogBoxHelpers::STATIC_ShowYesNoDialog(class AGbxPlayerController* pc, const struct FText& HeaderText, const struct FText& MessageText, bool bAnyUserCanInteract)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCoreDialogBoxHelpers.ShowYesNoDialog");

	UGbxCoreDialogBoxHelpers_ShowYesNoDialog_Params params;
	params.pc = pc;
	params.HeaderText = HeaderText;
	params.MessageText = MessageText;
	params.bAnyUserCanInteract = bAnyUserCanInteract;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxCoreDialogBoxHelpers.ShowOkayDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   HeaderText                     (ConstParm, Parm)
// struct FText                   MessageText                    (ConstParm, Parm)
// bool                           bAnyUserCanInteract            (Parm, ZeroConstructor, IsPlainOldData)
// EGbxDialogBoxHelpersDialogTemplate Template                       (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDialogBox*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxDialogBox* UGbxCoreDialogBoxHelpers::STATIC_ShowOkayDialog(class AGbxPlayerController* pc, const struct FText& HeaderText, const struct FText& MessageText, bool bAnyUserCanInteract, EGbxDialogBoxHelpersDialogTemplate Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCoreDialogBoxHelpers.ShowOkayDialog");

	UGbxCoreDialogBoxHelpers_ShowOkayDialog_Params params;
	params.pc = pc;
	params.HeaderText = HeaderText;
	params.MessageText = MessageText;
	params.bAnyUserCanInteract = bAnyUserCanInteract;
	params.Template = Template;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxCoreDialogBoxHelpers.ShowDialog
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxDialogBoxInfo       DialogBoxInfo                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UGbxDialogBox*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxDialogBox* UGbxCoreDialogBoxHelpers::STATIC_ShowDialog(class AGbxPlayerController* pc, const struct FGbxDialogBoxInfo& DialogBoxInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCoreDialogBoxHelpers.ShowDialog");

	UGbxCoreDialogBoxHelpers_ShowDialog_Params params;
	params.pc = pc;
	params.DialogBoxInfo = DialogBoxInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxCoreDialogBoxHelpers.ShowConfirmCancelDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   HeaderText                     (ConstParm, Parm)
// struct FText                   MessageText                    (ConstParm, Parm)
// bool                           bAnyUserCanInteract            (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDialogBox*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxDialogBox* UGbxCoreDialogBoxHelpers::STATIC_ShowConfirmCancelDialog(class AGbxPlayerController* pc, const struct FText& HeaderText, const struct FText& MessageText, bool bAnyUserCanInteract)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCoreDialogBoxHelpers.ShowConfirmCancelDialog");

	UGbxCoreDialogBoxHelpers_ShowConfirmCancelDialog_Params params;
	params.pc = pc;
	params.HeaderText = HeaderText;
	params.MessageText = MessageText;
	params.bAnyUserCanInteract = bAnyUserCanInteract;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxCoreDialogBoxHelpers.ShowBlockingDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   HeaderText                     (ConstParm, Parm)
// struct FText                   MessageText                    (ConstParm, Parm)
// bool                           bBlocksAllUsers                (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDialogBox*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxDialogBox* UGbxCoreDialogBoxHelpers::STATIC_ShowBlockingDialog(class AGbxPlayerController* pc, const struct FText& HeaderText, const struct FText& MessageText, bool bBlocksAllUsers)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCoreDialogBoxHelpers.ShowBlockingDialog");

	UGbxCoreDialogBoxHelpers_ShowBlockingDialog_Params params;
	params.pc = pc;
	params.HeaderText = HeaderText;
	params.MessageText = MessageText;
	params.bBlocksAllUsers = bBlocksAllUsers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxMenuSwitcher.SwitchToPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SubMenuId                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxMenuSwitcher::SwitchToPage(const struct FName& SubMenuId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuSwitcher.SwitchToPage");

	UGbxMenuSwitcher_SwitchToPage_Params params;
	params.SubMenuId = SubMenuId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxMenuSwitcher.PrevPage
// (Final, Native, Public, BlueprintCallable)

void UGbxMenuSwitcher::PrevPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuSwitcher.PrevPage");

	UGbxMenuSwitcher_PrevPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxMenuSwitcher.NextPage
// (Final, Native, Public, BlueprintCallable)

void UGbxMenuSwitcher::NextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuSwitcher.NextPage");

	UGbxMenuSwitcher_NextPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxMenuSwitcher.GetCurrentSubmenuId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UGbxMenuSwitcher::GetCurrentSubmenuId()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuSwitcher.GetCurrentSubmenuId");

	UGbxMenuSwitcher_GetCurrentSubmenuId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxDebugMenu.OnCloseClicked
// (Final, Native, Public)

void UGbxDebugMenu::OnCloseClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDebugMenu.OnCloseClicked");

	UGbxDebugMenu_OnCloseClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxDebugMenu.OnCategorySelected
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UGbxUserWidget*          Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxDebugMenu::OnCategorySelected(class UGbxUserWidget* Widget, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDebugMenu.OnCategorySelected");

	UGbxDebugMenu_OnCategorySelected_Params params;
	params.Widget = Widget;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxDebugRumbleMenu.OnSliderValueChanged
// (Final, Native, Protected)
// Parameters:
// class UGbxListItem*            Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxDebugRumbleMenu::OnSliderValueChanged(class UGbxListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDebugRumbleMenu.OnSliderValueChanged");

	UGbxDebugRumbleMenu_OnSliderValueChanged_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxDialogBox.UpdateText
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   NewHeaderText                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   NewBodyText                    (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxDialogBox::UpdateText(const struct FText& NewHeaderText, const struct FText& NewBodyText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.UpdateText");

	UGbxDialogBox_UpdateText_Params params;
	params.NewHeaderText = NewHeaderText;
	params.NewBodyText = NewBodyText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxDialogBox.SetupDialog
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGbxDialogBoxInfo       DialogBoxInfo                  (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxDialogBox::SetupDialog(const struct FGbxDialogBoxInfo& DialogBoxInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.SetupDialog");

	UGbxDialogBox_SetupDialog_Params params;
	params.DialogBoxInfo = DialogBoxInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxDialogBox.SetHeaderTextFormatArg
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  ArgName                        (Parm, ZeroConstructor)
// struct FText                   ReplacementText                (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxDialogBox::SetHeaderTextFormatArg(const class FString& ArgName, const struct FText& ReplacementText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.SetHeaderTextFormatArg");

	UGbxDialogBox_SetHeaderTextFormatArg_Params params;
	params.ArgName = ArgName;
	params.ReplacementText = ReplacementText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxDialogBox.SetHeaderText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   NewText                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bClearFormatArgs               (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDialogBox::SetHeaderText(const struct FText& NewText, bool bClearFormatArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.SetHeaderText");

	UGbxDialogBox_SetHeaderText_Params params;
	params.NewText = NewText;
	params.bClearFormatArgs = bClearFormatArgs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxDialogBox.SetBodyTextFormatArg
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  ArgName                        (Parm, ZeroConstructor)
// struct FText                   ReplacementText                (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxDialogBox::SetBodyTextFormatArg(const class FString& ArgName, const struct FText& ReplacementText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.SetBodyTextFormatArg");

	UGbxDialogBox_SetBodyTextFormatArg_Params params;
	params.ArgName = ArgName;
	params.ReplacementText = ReplacementText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxDialogBox.SetBodyText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   NewText                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bClearFormatArgs               (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDialogBox::SetBodyText(const struct FText& NewText, bool bClearFormatArgs)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.SetBodyText");

	UGbxDialogBox_SetBodyText_Params params;
	params.NewText = NewText;
	params.bClearFormatArgs = bClearFormatArgs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxDialogBox.OnChoiceClicked
// (Final, Native, Private)
// Parameters:
// class UGbxListItem*            ClickedItem                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxDialogBox::OnChoiceClicked(class UGbxListItem* ClickedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.OnChoiceClicked");

	UGbxDialogBox_OnChoiceClicked_Params params;
	params.ClickedItem = ClickedItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxDialogBox.Dismiss
// (Final, Native, Public, BlueprintCallable)

void UGbxDialogBox::Dismiss()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.Dismiss");

	UGbxDialogBox_Dismiss_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxFocusableWidget.SetFocusableWidgetEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxFocusableWidget::SetFocusableWidgetEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxFocusableWidget.SetFocusableWidgetEnabled");

	UGbxFocusableWidget_SetFocusableWidgetEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxFocusableWidget.IsFocusableWidgetFocused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxFocusableWidget::IsFocusableWidgetFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxFocusableWidget.IsFocusableWidgetFocused");

	UGbxFocusableWidget_IsFocusableWidgetFocused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxFocusableWidget.IsFocusableWidgetEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxFocusableWidget::IsFocusableWidgetEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxFocusableWidget.IsFocusableWidgetEnabled");

	UGbxFocusableWidget_IsFocusableWidgetEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxFocusableWidget.GetFocusableWidgetState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGbxFocusableWidgetState       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxFocusableWidgetState UGbxFocusableWidget::GetFocusableWidgetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxFocusableWidget.GetFocusableWidgetState");

	UGbxFocusableWidget_GetFocusableWidgetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxFullScreenMovie.OnMovieFinishedPlaying
// (Final, Native, Public)

void UGbxFullScreenMovie::OnMovieFinishedPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxFullScreenMovie.OnMovieFinishedPlaying");

	UGbxFullScreenMovie_OnMovieFinishedPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxContextualMenu.OnSelectionChanged
// (Final, Native, Private, Const)
// Parameters:
// class UGbxGFxListCell*         Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxContextualMenu::OnSelectionChanged(class UGbxGFxListCell* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxContextualMenu.OnSelectionChanged");

	UGbxGFxContextualMenu_OnSelectionChanged_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxContextualMenu.OnContextualMenuItemClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxContextualMenu::OnContextualMenuItemClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxContextualMenu.OnContextualMenuItemClicked");

	UGbxGFxContextualMenu_OnContextualMenuItemClicked_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxDragDropManager.OnDropButtonUnhovered
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UGbxGFxButton*           UnhoveredButton                (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxDragDropManager::OnDropButtonUnhovered(class UGbxGFxButton* UnhoveredButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxDragDropManager.OnDropButtonUnhovered");

	UGbxGFxDragDropManager_OnDropButtonUnhovered_Params params;
	params.UnhoveredButton = UnhoveredButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxDragDropManager.OnDropButtonHovered
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UGbxGFxButton*           HoveredButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxDragDropManager::OnDropButtonHovered(class UGbxGFxButton* HoveredButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxDragDropManager.OnDropButtonHovered");

	UGbxGFxDragDropManager_OnDropButtonHovered_Params params;
	params.HoveredButton = HoveredButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxDropDownList.OnEntryClicked
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UGbxGFxButton*           BUTTON                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxDropDownList::OnEntryClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxDropDownList.OnEntryClicked");

	UGbxGFxDropDownList_OnEntryClicked_Params params;
	params.BUTTON = BUTTON;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxDropDownList.OnDropDownButtonClicked
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UGbxGFxButton*           BUTTON                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxDropDownList::OnDropDownButtonClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxDropDownList.OnDropDownButtonClicked");

	UGbxGFxDropDownList_OnDropDownButtonClicked_Params params;
	params.BUTTON = BUTTON;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxHintWidget.OnThisHintClicked
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UGbxGFxButton*           BUTTON                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxHintWidget::OnThisHintClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxHintWidget.OnThisHintClicked");

	UGbxGFxHintWidget_OnThisHintClicked_Params params;
	params.BUTTON = BUTTON;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxListItemComboBox.OnSelectionUpdated
// (Final, Native, Private)
// Parameters:
// class UGbxGFxListCell*         Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxListItemComboBox::OnSelectionUpdated(class UGbxGFxListCell* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxListItemComboBox.OnSelectionUpdated");

	UGbxGFxListItemComboBox_OnSelectionUpdated_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxListItemComboBox.OnOwningListSelectionChanged
// (Final, Native, Private)
// Parameters:
// class UGbxGFxListCell*         Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxListItemComboBox::OnOwningListSelectionChanged(class UGbxGFxListCell* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxListItemComboBox.OnOwningListSelectionChanged");

	UGbxGFxListItemComboBox_OnOwningListSelectionChanged_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxListItemComboBox.OnDropDownButtonClicked
// (Final, Native, Private)

void UGbxGFxListItemComboBox::OnDropDownButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxListItemComboBox.OnDropDownButtonClicked");

	UGbxGFxListItemComboBox_OnDropDownButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMediaPlayer.OnMovieTracksChanged
// (Final, Native, Private)

void UGbxGFxMediaPlayer::OnMovieTracksChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMovieTracksChanged");

	UGbxGFxMediaPlayer_OnMovieTracksChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMediaPlayer.OnMovieSeekCompleted
// (Final, Native, Private)

void UGbxGFxMediaPlayer::OnMovieSeekCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMovieSeekCompleted");

	UGbxGFxMediaPlayer_OnMovieSeekCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMediaPlayer.OnMoviePlaybackSuspended
// (Final, Native, Private)

void UGbxGFxMediaPlayer::OnMoviePlaybackSuspended()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMoviePlaybackSuspended");

	UGbxGFxMediaPlayer_OnMoviePlaybackSuspended_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMediaPlayer.OnMoviePlaybackResumed
// (Final, Native, Private)

void UGbxGFxMediaPlayer::OnMoviePlaybackResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMoviePlaybackResumed");

	UGbxGFxMediaPlayer_OnMoviePlaybackResumed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpenFailed
// (Final, Native, Private)
// Parameters:
// class FString                  FailedUrl                      (Parm, ZeroConstructor)

void UGbxGFxMediaPlayer::OnMovieMediaOpenFailed(const class FString& FailedUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpenFailed");

	UGbxGFxMediaPlayer_OnMovieMediaOpenFailed_Params params;
	params.FailedUrl = FailedUrl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpened
// (Final, Native, Private)
// Parameters:
// class FString                  OpenedUrl                      (Parm, ZeroConstructor)

void UGbxGFxMediaPlayer::OnMovieMediaOpened(const class FString& OpenedUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpened");

	UGbxGFxMediaPlayer_OnMovieMediaOpened_Params params;
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaClosed
// (Final, Native, Private)

void UGbxGFxMediaPlayer::OnMovieMediaClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaClosed");

	UGbxGFxMediaPlayer_OnMovieMediaClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMediaPlayer.OnMovieEndReached
// (Final, Native, Private)

void UGbxGFxMediaPlayer::OnMovieEndReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMovieEndReached");

	UGbxGFxMediaPlayer_OnMovieEndReached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxUI.GbxGFxMediaPlayer.GbxGFxMediaPlayerEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGbxGFxMediaPlayer::GbxGFxMediaPlayerEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxUI.GbxGFxMediaPlayer.GbxGFxMediaPlayerEvent__DelegateSignature");

	UGbxGFxMediaPlayer_GbxGFxMediaPlayerEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxMenuSwitcherNavWidget.OnTabClicked
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UGbxGFxButton*           BUTTON                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxMenuSwitcherNavWidget::OnTabClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenuSwitcherNavWidget.OnTabClicked");

	UGbxGFxMenuSwitcherNavWidget_OnTabClicked_Params params;
	params.BUTTON = BUTTON;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxUI.GbxGFxSlider.GbxGFxSliderUpdateEvent__DelegateSignature
// (Public, Delegate)
// Parameters:
// float                          SliderPercent                  (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGFxSlider::GbxGFxSliderUpdateEvent__DelegateSignature(float SliderPercent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxUI.GbxGFxSlider.GbxGFxSliderUpdateEvent__DelegateSignature");

	UGbxGFxSlider_GbxGFxSliderUpdateEvent__DelegateSignature_Params params;
	params.SliderPercent = SliderPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxSlider.EndSlide
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UGbxGFxButton*           BUTTON                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxSlider::EndSlide(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxSlider.EndSlide");

	UGbxGFxSlider_EndSlide_Params params;
	params.BUTTON = BUTTON;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxSlider.BeginRightSlide
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UGbxGFxButton*           BUTTON                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxSlider::BeginRightSlide(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxSlider.BeginRightSlide");

	UGbxGFxSlider_BeginRightSlide_Params params;
	params.BUTTON = BUTTON;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxGFxSlider.BeginLeftSlide
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UGbxGFxButton*           BUTTON                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxGFxSlider::BeginLeftSlide(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxSlider.BeginLeftSlide");

	UGbxGFxSlider_BeginLeftSlide_Params params;
	params.BUTTON = BUTTON;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHintBarWidgetContainer.HintBarSetVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxHintBarWidgetContainer::HintBarSetVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintBarWidgetContainer.HintBarSetVisible");

	UGbxHintBarWidgetContainer_HintBarSetVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHintBarWidgetContainer.HintBarInitOwnerInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxHintBar*             HintBarOwner                   (Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    PlayerControllerContext        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGbxHintBarWidgetContainer::HintBarInitOwnerInfo(class UGbxHintBar* HintBarOwner, class AGbxPlayerController* PlayerControllerContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintBarWidgetContainer.HintBarInitOwnerInfo");

	UGbxHintBarWidgetContainer_HintBarInitOwnerInfo_Params params;
	params.HintBarOwner = HintBarOwner;
	params.PlayerControllerContext = PlayerControllerContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHintBarWidgetContainer.HintBarClearAllHints
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGbxHintBarWidgetContainer::HintBarClearAllHints()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintBarWidgetContainer.HintBarClearAllHints");

	UGbxHintBarWidgetContainer_HintBarClearAllHints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHintBarWidgetContainer.HintBarAppendHint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGbxHintInfo            HintInfo                       (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxHintBarWidgetContainer::HintBarAppendHint(const struct FGbxHintInfo& HintInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintBarWidgetContainer.HintBarAppendHint");

	UGbxHintBarWidgetContainer_HintBarAppendHint_Params params;
	params.HintInfo = HintInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHintBar.OnHintClicked
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InputAction                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bHeld                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxHintBar::OnHintClicked(const struct FName& InputAction, bool bHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintBar.OnHintClicked");

	UGbxHintBar_OnHintClicked_Params params;
	params.InputAction = InputAction;
	params.bHeld = bHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHintWidget.HintWidgetSetVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxHintWidget::HintWidgetSetVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintWidget.HintWidgetSetVisible");

	UGbxHintWidget_HintWidgetSetVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHintWidget.HintWidgetSetInfo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGbxHintInfo            HintInfo                       (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxHintWidget::HintWidgetSetInfo(const struct FGbxHintInfo& HintInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintWidget.HintWidgetSetInfo");

	UGbxHintWidget_HintWidgetSetInfo_Params params;
	params.HintInfo = HintInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxHintWidget.HintWidgetInitOwnerInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxHintBar*             HintBarOwner                   (Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    PlayerControllerContext        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGbxHintWidget::HintWidgetInitOwnerInfo(class UGbxHintBar* HintBarOwner, class AGbxPlayerController* PlayerControllerContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintWidget.HintWidgetInitOwnerInfo");

	UGbxHintWidget_HintWidgetInitOwnerInfo_Params params;
	params.HintBarOwner = HintBarOwner;
	params.PlayerControllerContext = PlayerControllerContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxList.TryToAcquireMenuFocus
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFromMouse                     (Parm, ZeroConstructor, IsPlainOldData)

void UGbxList::TryToAcquireMenuFocus(bool bFromMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.TryToAcquireMenuFocus");

	UGbxList_TryToAcquireMenuFocus_Params params;
	params.bFromMouse = bFromMouse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxList.SetSelectionChangedDelegate
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InSelectionChangedDelegate     (Parm, ZeroConstructor)

void UGbxList::SetSelectionChangedDelegate(const struct FScriptDelegate& InSelectionChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.SetSelectionChangedDelegate");

	UGbxList_SetSelectionChangedDelegate_Params params;
	params.InSelectionChangedDelegate = InSelectionChangedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxList.SetSelectedItem
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGbxListItem*            Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bScrollIntoView                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAnimateScroll                 (Parm, ZeroConstructor, IsPlainOldData)

void UGbxList::SetSelectedItem(class UGbxListItem* Item, bool bScrollIntoView, bool bAnimateScroll)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.SetSelectedItem");

	UGbxList_SetSelectedItem_Params params;
	params.Item = Item;
	params.bScrollIntoView = bScrollIntoView;
	params.bAnimateScroll = bAnimateScroll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxList.SetSelectedIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            NewSelection                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScrollIntoView                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAnimateScroll                 (Parm, ZeroConstructor, IsPlainOldData)

void UGbxList::SetSelectedIndex(int NewSelection, bool bScrollIntoView, bool bAnimateScroll)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.SetSelectedIndex");

	UGbxList_SetSelectedIndex_Params params;
	params.NewSelection = NewSelection;
	params.bScrollIntoView = bScrollIntoView;
	params.bAnimateScroll = bAnimateScroll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxList.SetItemClickedDelegate
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InItemClickedDelegate          (Parm, ZeroConstructor)

void UGbxList::SetItemClickedDelegate(const struct FScriptDelegate& InItemClickedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.SetItemClickedDelegate");

	UGbxList_SetItemClickedDelegate_Params params;
	params.InItemClickedDelegate = InItemClickedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxList.RemoveListItem
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGbxListItem*            Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxList::RemoveListItem(class UGbxListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.RemoveListItem");

	UGbxList_RemoveListItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxList.RemoveAllListItems
// (Native, Public, BlueprintCallable)

void UGbxList::RemoveAllListItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.RemoveAllListItems");

	UGbxList_RemoveAllListItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxList.OnItemClicked
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGbxListItem*            Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxList::OnItemClicked(class UGbxListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.OnItemClicked");

	UGbxList_OnItemClicked_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxList.MoveSelectionUp
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxList::MoveSelectionUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.MoveSelectionUp");

	UGbxList_MoveSelectionUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxList.MoveSelectionRight
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxList::MoveSelectionRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.MoveSelectionRight");

	UGbxList_MoveSelectionRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxList.MoveSelectionLeft
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxList::MoveSelectionLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.MoveSelectionLeft");

	UGbxList_MoveSelectionLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxList.MoveSelectionDown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxList::MoveSelectionDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.MoveSelectionDown");

	UGbxList_MoveSelectionDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxList.IsListFocused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxList::IsListFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.IsListFocused");

	UGbxList_IsListFocused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxList.IsListEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxList::IsListEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.IsListEnabled");

	UGbxList_IsListEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxList.InsertListItem
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGbxListItem*            Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxList::InsertListItem(class UGbxListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.InsertListItem");

	UGbxList_InsertListItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxList.GetSelectedItem
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxListItem*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItem* UGbxList::GetSelectedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.GetSelectedItem");

	UGbxList_GetSelectedItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxList.GetSelectedIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGbxList::GetSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.GetSelectedIndex");

	UGbxList_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxList.GetNumItemsInList
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGbxList::GetNumItemsInList()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.GetNumItemsInList");

	UGbxList_GetNumItemsInList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxList.GetListItemFactory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxListItemFactory*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxListItemFactory* UGbxList::GetListItemFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.GetListItemFactory");

	UGbxList_GetListItemFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxList.GetItemAtIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxListItem*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItem* UGbxList::GetItemAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.GetItemAtIndex");

	UGbxList_GetItemAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxList.GetDefaultItemClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UGbxList::GetDefaultItemClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.GetDefaultItemClass");

	UGbxList_GetDefaultItemClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxListItemBoolean.SetChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bChecked                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxListItemBoolean::SetChecked(bool bChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemBoolean.SetChecked");

	UGbxListItemBoolean_SetChecked_Params params;
	params.bChecked = bChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxListItemBoolean.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxListItemBoolean::IsChecked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemBoolean.IsChecked");

	UGbxListItemBoolean_IsChecked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxListItemBoolean.HandleFocusableWidgetPressed
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxListItemBoolean::HandleFocusableWidgetPressed(const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemBoolean.HandleFocusableWidgetPressed");

	UGbxListItemBoolean_HandleFocusableWidgetPressed_Params params;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxListItemComboBox.SetSelectedOptionIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxListItemComboBox::SetSelectedOptionIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemComboBox.SetSelectedOptionIndex");

	UGbxListItemComboBox_SetSelectedOptionIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxListItemComboBox.SelectPreviousOption
// (Final, Native, Public, BlueprintCallable)

void UGbxListItemComboBox::SelectPreviousOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemComboBox.SelectPreviousOption");

	UGbxListItemComboBox_SelectPreviousOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxListItemComboBox.SelectNextOption
// (Final, Native, Public, BlueprintCallable)

void UGbxListItemComboBox::SelectNextOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemComboBox.SelectNextOption");

	UGbxListItemComboBox_SelectNextOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxListItemComboBox.OnValueComboBoxChanged
// (Final, Native, Protected)
// Parameters:
// class FString                  SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UGbxListItemComboBox::OnValueComboBoxChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemComboBox.OnValueComboBoxChanged");

	UGbxListItemComboBox_OnValueComboBoxChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxUI.GbxListItemComboBox.ListItemComboBoxSelectionChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            NewSelectedIndex               (Parm, ZeroConstructor, IsPlainOldData)

void UGbxListItemComboBox::ListItemComboBoxSelectionChangedDelegate__DelegateSignature(int NewSelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxUI.GbxListItemComboBox.ListItemComboBoxSelectionChangedDelegate__DelegateSignature");

	UGbxListItemComboBox_ListItemComboBoxSelectionChangedDelegate__DelegateSignature_Params params;
	params.NewSelectedIndex = NewSelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxListItemComboBox.InitializeComboBox
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FText>           Items                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            InitialValue                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGbxListItemComboBox::InitializeComboBox(TArray<struct FText> Items, int InitialValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemComboBox.InitializeComboBox");

	UGbxListItemComboBox_InitializeComboBox_Params params;
	params.Items = Items;
	params.InitialValue = InitialValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxListItemComboBox.GetSelectedOptionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGbxListItemComboBox::GetSelectedOptionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemComboBox.GetSelectedOptionIndex");

	UGbxListItemComboBox_GetSelectedOptionIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxListItemFactory.CreateTextItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UGbxList> Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LabelText                      (Parm)
// struct FScriptDelegate         ClickedDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         SelectedDelegate               (Parm, ZeroConstructor)
// class UGbxListItemText*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItemText* UGbxListItemFactory::CreateTextItem(class APlayerController* Owner, const TScriptInterface<class UGbxList>& Parent, const struct FText& LabelText, const struct FScriptDelegate& ClickedDelegate, const struct FScriptDelegate& SelectedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemFactory.CreateTextItem");

	UGbxListItemFactory_CreateTextItem_Params params;
	params.Owner = Owner;
	params.Parent = Parent;
	params.LabelText = LabelText;
	params.ClickedDelegate = ClickedDelegate;
	params.SelectedDelegate = SelectedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxListItemFactory.CreateNumberItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UGbxList> Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LabelText                      (Parm)
// float                          InitialValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          SliderMin                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          SliderMax                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          SliderStep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ChangedDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         SelectedDelegate               (Parm, ZeroConstructor)
// class UGbxListItemNumber*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItemNumber* UGbxListItemFactory::CreateNumberItem(class APlayerController* Owner, const TScriptInterface<class UGbxList>& Parent, const struct FText& LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, const struct FScriptDelegate& ChangedDelegate, const struct FScriptDelegate& SelectedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemFactory.CreateNumberItem");

	UGbxListItemFactory_CreateNumberItem_Params params;
	params.Owner = Owner;
	params.Parent = Parent;
	params.LabelText = LabelText;
	params.InitialValue = InitialValue;
	params.SliderMin = SliderMin;
	params.SliderMax = SliderMax;
	params.SliderStep = SliderStep;
	params.ChangedDelegate = ChangedDelegate;
	params.SelectedDelegate = SelectedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxListItemFactory.CreateItemWithDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UGbxList> Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ClickedDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         SelectedDelegate               (Parm, ZeroConstructor)
// class UGbxListItem*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItem* UGbxListItemFactory::STATIC_CreateItemWithDelegates(class APlayerController* Owner, const TScriptInterface<class UGbxList>& Parent, class UClass* ItemClass, const struct FScriptDelegate& ClickedDelegate, const struct FScriptDelegate& SelectedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemFactory.CreateItemWithDelegates");

	UGbxListItemFactory_CreateItemWithDelegates_Params params;
	params.Owner = Owner;
	params.Parent = Parent;
	params.ItemClass = ItemClass;
	params.ClickedDelegate = ClickedDelegate;
	params.SelectedDelegate = SelectedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxListItemFactory.CreateItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UGbxList> Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxListItem*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItem* UGbxListItemFactory::STATIC_CreateItem(class APlayerController* Owner, const TScriptInterface<class UGbxList>& Parent, class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemFactory.CreateItem");

	UGbxListItemFactory_CreateItem_Params params;
	params.Owner = Owner;
	params.Parent = Parent;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxListItemFactory.CreateComboBoxItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UGbxList> Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LabelText                      (Parm)
// TArray<struct FText>           Items                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            InitialIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ChangedDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         SelectedDelegate               (Parm, ZeroConstructor)
// class UGbxListItemComboBox*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItemComboBox* UGbxListItemFactory::CreateComboBoxItem(class APlayerController* Owner, const TScriptInterface<class UGbxList>& Parent, const struct FText& LabelText, TArray<struct FText> Items, int InitialIndex, const struct FScriptDelegate& ChangedDelegate, const struct FScriptDelegate& SelectedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemFactory.CreateComboBoxItem");

	UGbxListItemFactory_CreateComboBoxItem_Params params;
	params.Owner = Owner;
	params.Parent = Parent;
	params.LabelText = LabelText;
	params.Items = Items;
	params.InitialIndex = InitialIndex;
	params.ChangedDelegate = ChangedDelegate;
	params.SelectedDelegate = SelectedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxListItemFactory.CreateBooleanItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UGbxList> Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LabelText                      (Parm)
// bool                           InitialValue                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ChangedDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         SelectedDelegate               (Parm, ZeroConstructor)
// class UGbxListItemBoolean*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxListItemBoolean* UGbxListItemFactory::CreateBooleanItem(class APlayerController* Owner, const TScriptInterface<class UGbxList>& Parent, const struct FText& LabelText, bool InitialValue, const struct FScriptDelegate& ChangedDelegate, const struct FScriptDelegate& SelectedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemFactory.CreateBooleanItem");

	UGbxListItemFactory_CreateBooleanItem_Params params;
	params.Owner = Owner;
	params.Parent = Parent;
	params.LabelText = LabelText;
	params.InitialValue = InitialValue;
	params.ChangedDelegate = ChangedDelegate;
	params.SelectedDelegate = SelectedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxListItemNumber.OnSliderValueChanged
// (Final, Native, Protected)
// Parameters:
// float                          NewPosition                    (Parm, ZeroConstructor, IsPlainOldData)

void UGbxListItemNumber::OnSliderValueChanged(float NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemNumber.OnSliderValueChanged");

	UGbxListItemNumber_OnSliderValueChanged_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxListItemNumber.IncrementSlider
// (Final, Native, Public, BlueprintCallable)

void UGbxListItemNumber::IncrementSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemNumber.IncrementSlider");

	UGbxListItemNumber_IncrementSlider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxListItemNumber.GetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxListItemNumber::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemNumber.GetCurrentValue");

	UGbxListItemNumber_GetCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxListItemNumber.DecrementSlider
// (Final, Native, Public, BlueprintCallable)

void UGbxListItemNumber::DecrementSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemNumber.DecrementSlider");

	UGbxListItemNumber_DecrementSlider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxMenuStack.Tick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxMenuStack::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.Tick");

	UGbxMenuStack_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxMenuStack.SwitchTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxMenuData*            MenuData                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGbxMenuStack::SwitchTo(class UGbxMenuData* MenuData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.SwitchTo");

	UGbxMenuStack_SwitchTo_Params params;
	params.MenuData = MenuData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxMenuStack.SetBlockingMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldBlock                   (Parm, ZeroConstructor, IsPlainOldData)

void UGbxMenuStack::SetBlockingMode(bool bShouldBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.SetBlockingMode");

	UGbxMenuStack_SetBlockingMode_Params params;
	params.bShouldBlock = bShouldBlock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxMenuStack.SetBlockAllRawInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldBlock                   (Parm, ZeroConstructor, IsPlainOldData)

void UGbxMenuStack::SetBlockAllRawInput(bool bShouldBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.SetBlockAllRawInput");

	UGbxMenuStack_SetBlockAllRawInput_Params params;
	params.bShouldBlock = bShouldBlock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxMenuStack.Push
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxMenuData*            MenuData                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGbxMenuStack::Push(class UGbxMenuData* MenuData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.Push");

	UGbxMenuStack_Push_Params params;
	params.MenuData = MenuData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxMenuStack.PopToSwitchTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Menu                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxMenuData*            MenuData                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGbxMenuStack::PopToSwitchTo(class UObject* Menu, class UGbxMenuData* MenuData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.PopToSwitchTo");

	UGbxMenuStack_PopToSwitchTo_Params params;
	params.Menu = Menu;
	params.MenuData = MenuData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxMenuStack.PopTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Menu                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGbxMenuStack::PopTo(class UObject* Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.PopTo");

	UGbxMenuStack_PopTo_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxMenuStack.Pop
// (Final, Native, Public, BlueprintCallable)

void UGbxMenuStack::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.Pop");

	UGbxMenuStack_Pop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxMenuStack.Num
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGbxMenuStack::Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.Num");

	UGbxMenuStack_Num_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxMenuStack.HandleRawInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       EVENTTYPE                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ControllerId                   (Parm, ZeroConstructor, IsPlainOldData)

void UGbxMenuStack::HandleRawInput(const struct FKey& Key, TEnumAsByte<EInputEvent> EVENTTYPE, int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.HandleRawInput");

	UGbxMenuStack_HandleRawInput_Params params;
	params.Key = Key;
	params.EVENTTYPE = EVENTTYPE;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxMenuStack.GetTopMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGbxMenuStack::GetTopMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.GetTopMenu");

	UGbxMenuStack_GetTopMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxMenuStack.GetMenuAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGbxMenuStack::GetMenuAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.GetMenuAtIndex");

	UGbxMenuStack_GetMenuAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxMenuStack.GetIndexOfMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Menu                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGbxMenuStack::GetIndexOfMenu(class UObject* Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.GetIndexOfMenu");

	UGbxMenuStack_GetIndexOfMenu_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxMenuStack.GetCurrentInputDevice
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGbxMenuInputDevice            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxMenuInputDevice UGbxMenuStack::GetCurrentInputDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.GetCurrentInputDevice");

	UGbxMenuStack_GetCurrentInputDevice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxMenuStack.Draw
// (Final, Native, Public, BlueprintCallable)

void UGbxMenuStack::Draw()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.Draw");

	UGbxMenuStack_Draw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxMenuStack.Clear
// (Final, Native, Public, BlueprintCallable)

void UGbxMenuStack::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.Clear");

	UGbxMenuStack_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxProgressBar.SetShear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InShear                        (Parm, ZeroConstructor, IsPlainOldData)

void UGbxProgressBar::SetShear(float InShear)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.SetShear");

	UGbxProgressBar_SetShear_Params params;
	params.InShear = InShear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxProgressBar.SetPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxProgressBar::SetPercent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.SetPercent");

	UGbxProgressBar_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxProgressBar.SetMaxValueText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxProgressBar::SetMaxValueText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.SetMaxValueText");

	UGbxProgressBar_SetMaxValueText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxProgressBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (Parm, IsPlainOldData)

void UGbxProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.SetFillColorAndOpacity");

	UGbxProgressBar_SetFillColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxProgressBar.SetCurrentValueText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxProgressBar::SetCurrentValueText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.SetCurrentValueText");

	UGbxProgressBar_SetCurrentValueText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxProgressBar.PassedPercentThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Threshold                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          OldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncreasing                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDecreasing                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxProgressBar::STATIC_PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.PassedPercentThreshold");

	UGbxProgressBar_PassedPercentThreshold_Params params;
	params.Threshold = Threshold;
	params.OldValue = OldValue;
	params.CurrentValue = CurrentValue;
	params.bIncreasing = bIncreasing;
	params.bDecreasing = bDecreasing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxProgressBar.IsInterpolating
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxProgressBar::IsInterpolating()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.IsInterpolating");

	UGbxProgressBar_IsInterpolating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxProgressBar.InterpolateToPercentWithInterpolator
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxProgressBarInterpolator Interpolator                   (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxProgressBar::InterpolateToPercentWithInterpolator(float InPercent, const struct FGbxProgressBarInterpolator& Interpolator)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.InterpolateToPercentWithInterpolator");

	UGbxProgressBar_InterpolateToPercentWithInterpolator_Params params;
	params.InPercent = InPercent;
	params.Interpolator = Interpolator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxProgressBar.InterpolateToPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxProgressBar::InterpolateToPercent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.InterpolateToPercent");

	UGbxProgressBar_InterpolateToPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxProgressBar.HandleShowDeltaEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWidget*                 Effect                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          OldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UGbxProgressBar::HandleShowDeltaEffect(class UWidget* Effect, float OldValue, float CurrentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.HandleShowDeltaEffect");

	UGbxProgressBar_HandleShowDeltaEffect_Params params;
	params.Effect = Effect;
	params.OldValue = OldValue;
	params.CurrentValue = CurrentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxProgressBar.HandlePercentChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          OldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInterpolating               (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxProgressBarInterpolator ActiveInterpolator             (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxProgressBar::HandlePercentChanged(float OldValue, float CurrentValue, bool bIsInterpolating, const struct FGbxProgressBarInterpolator& ActiveInterpolator)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.HandlePercentChanged");

	UGbxProgressBar_HandlePercentChanged_Params params;
	params.OldValue = OldValue;
	params.CurrentValue = CurrentValue;
	params.bIsInterpolating = bIsInterpolating;
	params.ActiveInterpolator = ActiveInterpolator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxProgressBar.HandleEnterPercentRange
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   RangeName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UGbxProgressBar::HandleEnterPercentRange(const struct FName& RangeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.HandleEnterPercentRange");

	UGbxProgressBar_HandleEnterPercentRange_Params params;
	params.RangeName = RangeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxProgressBar.GetShear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxProgressBar::GetShear()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.GetShear");

	UGbxProgressBar_GetShear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxProgressBar.GetPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxProgressBar::GetPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.GetPercent");

	UGbxProgressBar_GetPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarRangeEvent__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// struct FName                   RangeName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UGbxProgressBar::GbxProgressBarRangeEvent__DelegateSignature(const struct FName& RangeName)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarRangeEvent__DelegateSignature");

	UGbxProgressBar_GbxProgressBarRangeEvent__DelegateSignature_Params params;
	params.RangeName = RangeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarEvent__DelegateSignature
// (Public, Delegate)

void UGbxProgressBar::GbxProgressBarEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarEvent__DelegateSignature");

	UGbxProgressBar_GbxProgressBarEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxProgressBar.EnteredPercentRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          RangeMin                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeMax                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          OldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncreasing                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDecreasing                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxProgressBar::STATIC_EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.EnteredPercentRange");

	UGbxProgressBar_EnteredPercentRange_Params params;
	params.RangeMin = RangeMin;
	params.RangeMax = RangeMax;
	params.OldValue = OldValue;
	params.CurrentValue = CurrentValue;
	params.bIncreasing = bIncreasing;
	params.bDecreasing = bDecreasing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxSpinner.SpinRight
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxSpinner::SpinRight(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxSpinner.SpinRight");

	UGbxSpinner_SpinRight_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxUI.GbxSpinner.SpinnerValueUpdatedEvent__DelegateSignature
// (Public, Delegate)

void UGbxSpinner::SpinnerValueUpdatedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxUI.GbxSpinner.SpinnerValueUpdatedEvent__DelegateSignature");

	UGbxSpinner_SpinnerValueUpdatedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxSpinner.SpinLeft
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxSpinner::SpinLeft(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxSpinner.SpinLeft");

	UGbxSpinner_SpinLeft_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxTextField.OnScrollBarPositionUpdated
// (Final, Native, Public)
// Parameters:
// float                          SliderPercentage               (Parm, ZeroConstructor, IsPlainOldData)

void UGbxTextField::OnScrollBarPositionUpdated(float SliderPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxTextField.OnScrollBarPositionUpdated");

	UGbxTextField_OnScrollBarPositionUpdated_Params params;
	params.SliderPercentage = SliderPercentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxUILocalization.PlatformToText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Platform                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGbxUILocalization::STATIC_PlatformToText(const struct FName& Platform, class AGbxPlayerController* pc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.PlatformToText");

	UGbxUILocalization_PlatformToText_Params params;
	params.Platform = Platform;
	params.pc = pc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILocalization.PlatformToRichText
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   Platform                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               GlyphSize                      (Parm, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGbxUILocalization::STATIC_PlatformToRichText(const struct FName& Platform, class AGbxPlayerController* pc, const struct FVector2D& GlyphSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.PlatformToRichText");

	UGbxUILocalization_PlatformToRichText_Params params;
	params.Platform = Platform;
	params.pc = pc;
	params.GlyphSize = GlyphSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILocalization.PlatformToGlyph
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Platform                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UGbxUILocalization::STATIC_PlatformToGlyph(const struct FName& Platform, class AGbxPlayerController* pc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.PlatformToGlyph");

	UGbxUILocalization_PlatformToGlyph_Params params;
	params.Platform = Platform;
	params.pc = pc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILocalization.PlatformToGFxHTMLText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Platform                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          GlyphHeight                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            VSpace                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGbxUILocalization::STATIC_PlatformToGFxHTMLText(const struct FName& Platform, class AGbxPlayerController* pc, float GlyphHeight, int VSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.PlatformToGFxHTMLText");

	UGbxUILocalization_PlatformToGFxHTMLText_Params params;
	params.Platform = Platform;
	params.pc = pc;
	params.GlyphHeight = GlyphHeight;
	params.VSpace = VSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILocalization.IsPlatformGlyphAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Platform                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxUILocalization::STATIC_IsPlatformGlyphAvailable(const struct FName& Platform, class AGbxPlayerController* pc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.IsPlatformGlyphAvailable");

	UGbxUILocalization_IsPlatformGlyphAvailable_Params params;
	params.Platform = Platform;
	params.pc = pc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILocalization.IsInputActionGlyphAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// EGbxActionToTextType           GlyphType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxUILocalization::STATIC_IsInputActionGlyphAvailable(const struct FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.IsInputActionGlyphAvailable");

	UGbxUILocalization_IsInputActionGlyphAvailable_Params params;
	params.ActionName = ActionName;
	params.pc = pc;
	params.GlyphType = GlyphType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILocalization.InputActionToText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// EGbxActionToTextType           GlyphType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGbxUILocalization::STATIC_InputActionToText(const struct FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.InputActionToText");

	UGbxUILocalization_InputActionToText_Params params;
	params.ActionName = ActionName;
	params.pc = pc;
	params.GlyphType = GlyphType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILocalization.InputActionToRichText
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// EGbxActionToTextType           GlyphType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               GlyphSize                      (Parm, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGbxUILocalization::STATIC_InputActionToRichText(const struct FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType, const struct FVector2D& GlyphSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.InputActionToRichText");

	UGbxUILocalization_InputActionToRichText_Params params;
	params.ActionName = ActionName;
	params.pc = pc;
	params.GlyphType = GlyphType;
	params.GlyphSize = GlyphSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILocalization.InputActionToGlyph
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// EGbxActionToTextType           GlyphType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UGbxUILocalization::STATIC_InputActionToGlyph(const struct FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.InputActionToGlyph");

	UGbxUILocalization_InputActionToGlyph_Params params;
	params.ActionName = ActionName;
	params.pc = pc;
	params.GlyphType = GlyphType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILocalization.InputActionToGFxHTMLText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// EGbxActionToTextType           GlyphType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          GlyphHeight                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            VSpace                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGbxUILocalization::STATIC_InputActionToGFxHTMLText(const struct FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType, float GlyphHeight, int VSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.InputActionToGFxHTMLText");

	UGbxUILocalization_InputActionToGFxHTMLText_Params params;
	params.ActionName = ActionName;
	params.pc = pc;
	params.GlyphType = GlyphType;
	params.GlyphHeight = GlyphHeight;
	params.VSpace = VSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUILocalization.FKeyToGFxHTMLText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class AGbxPlayerController*    pc                             (Parm, ZeroConstructor, IsPlainOldData)
// EGbxActionToTextType           GlyphType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          GlyphHeight                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGbxUILocalization::STATIC_FKeyToGFxHTMLText(const struct FKey& Key, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType, float GlyphHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.FKeyToGFxHTMLText");

	UGbxUILocalization_FKeyToGFxHTMLText_Params params;
	params.Key = Key;
	params.pc = pc;
	params.GlyphType = GlyphType;
	params.GlyphHeight = GlyphHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxUISpinnerWidget.MoveToNumber
// (Final, Native, Public)
// Parameters:
// unsigned char                  NewNumber                      (Parm, ZeroConstructor, IsPlainOldData)
// EGbxSpinnerWidgetGoToMethod    GoToMethod                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxUISpinnerWidget::MoveToNumber(unsigned char NewNumber, EGbxSpinnerWidgetGoToMethod GoToMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUISpinnerWidget.MoveToNumber");

	UGbxUISpinnerWidget_MoveToNumber_Params params;
	params.NewNumber = NewNumber;
	params.GoToMethod = GoToMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.GbxWidgetComponent.Setup
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  NewWidgetClass                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AGbxPlayerController*    NewTrackedPlayer               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         ParentComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EWidgetSpace                   WidgetSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewLayerZOrder                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CollisionProfile               (Parm, ZeroConstructor, IsPlainOldData)

void UGbxWidgetComponent::Setup(class UClass* NewWidgetClass, class AGbxPlayerController* NewTrackedPlayer, class USceneComponent* ParentComponent, EWidgetSpace WidgetSpace, int NewLayerZOrder, const struct FName& CollisionProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxWidgetComponent.Setup");

	UGbxWidgetComponent_Setup_Params params;
	params.NewWidgetClass = NewWidgetClass;
	params.NewTrackedPlayer = NewTrackedPlayer;
	params.ParentComponent = ParentComponent;
	params.WidgetSpace = WidgetSpace;
	params.NewLayerZOrder = NewLayerZOrder;
	params.CollisionProfile = CollisionProfile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxWidgetComponent.SetDistanceScaleCurve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCurveFloat*             NewDistanceScaleCurve          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxWidgetComponent::SetDistanceScaleCurve(class UCurveFloat* NewDistanceScaleCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxWidgetComponent.SetDistanceScaleCurve");

	UGbxWidgetComponent_SetDistanceScaleCurve_Params params;
	params.NewDistanceScaleCurve = NewDistanceScaleCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxWidgetComponent.SetDistanceAlphaCurve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCurveFloat*             NewDistanceAlphaCurve          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxWidgetComponent::SetDistanceAlphaCurve(class UCurveFloat* NewDistanceAlphaCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxWidgetComponent.SetDistanceAlphaCurve");

	UGbxWidgetComponent_SetDistanceAlphaCurve_Params params;
	params.NewDistanceAlphaCurve = NewDistanceAlphaCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxWidgetComponent.SetDistanceAlphaBorder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBorder*                 NewDistanceAlphaBorder         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxWidgetComponent::SetDistanceAlphaBorder(class UBorder* NewDistanceAlphaBorder)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxWidgetComponent.SetDistanceAlphaBorder");

	UGbxWidgetComponent_SetDistanceAlphaBorder_Params params;
	params.NewDistanceAlphaBorder = NewDistanceAlphaBorder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.GbxWorldSpaceProxyWidget.GetWorldLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGbxWorldSpaceProxyWidget::GetWorldLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.GbxWorldSpaceProxyWidget.GetWorldLocation");

	UGbxWorldSpaceProxyWidget_GetWorldLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxUI.InWorldDamageNumber.OnWentOffscreen
// (Final, Native, Public)

void UInWorldDamageNumber::OnWentOffscreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.InWorldDamageNumber.OnWentOffscreen");

	UInWorldDamageNumber_OnWentOffscreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxUI.InWorldDamageNumber.ImpulseAnimationCompleted
// (Final, Native, Protected)
// Parameters:
// class UUserWidget*             AssociatedWidget               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInWorldDamageNumber::ImpulseAnimationCompleted(class UUserWidget* AssociatedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxUI.InWorldDamageNumber.ImpulseAnimationCompleted");

	UInWorldDamageNumber_ImpulseAnimationCompleted_Params params;
	params.AssociatedWidget = AssociatedWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
