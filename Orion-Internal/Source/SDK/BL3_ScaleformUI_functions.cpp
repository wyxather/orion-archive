// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ScaleformUI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScaleformUI.GFxMoviePlayer.Start
// (Native, Public, Const)
// Parameters:
// bool                           bRefresh                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGFxMoviePlayer::Start(bool bRefresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.Start");

	UGFxMoviePlayer_Start_Params params;
	params.bRefresh = bRefresh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.SetVisible
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::SetVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetVisible");

	UGFxMoviePlayer_SetVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetVisibility
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::SetVisibility(const class FString& MovieClipName, bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetVisibility");

	UGFxMoviePlayer_SetVisibility_Params params;
	params.MovieClipName = MovieClipName;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// TEnumAsByte<EGFxScaleMode>     ScaleMode                      (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::SetViewScaleMode(TEnumAsByte<EGFxScaleMode> ScaleMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode");

	UGFxMoviePlayer_SetViewScaleMode_Params params;
	params.ScaleMode = ScaleMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetViewport
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::SetViewport(int X, int Y, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetViewport");

	UGFxMoviePlayer_SetViewport_Params params;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetView3D
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FTransform              ViewTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGFxMoviePlayer::SetView3D(const struct FTransform& ViewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetView3D");

	UGFxMoviePlayer_SetView3D_Params params;
	params.ViewTransform = ViewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// class FString                  MemberName                     (Parm, ZeroConstructor)
// TArray<struct FASValue>        Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGFxMoviePlayer::SetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName, TArray<struct FASValue> Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray");

	UGFxMoviePlayer_SetVariableValueArray_Params params;
	params.MovieClipName = MovieClipName;
	params.MemberName = MemberName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetVariableValue
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// class FString                  MemberName                     (Parm, ZeroConstructor)
// struct FASValue                Value                          (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxMoviePlayer::SetVariableValue(const class FString& MovieClipName, const class FString& MemberName, const struct FASValue& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetVariableValue");

	UGFxMoviePlayer_SetVariableValue_Params params;
	params.MovieClipName = MovieClipName;
	params.MemberName = MemberName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetTimingMode
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// TEnumAsByte<EGFxTimingMode>    TimingMode                     (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::SetTimingMode(TEnumAsByte<EGFxTimingMode> TimingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetTimingMode");

	UGFxMoviePlayer_SetTimingMode_Params params;
	params.TimingMode = TimingMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetScale
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// float                          XScale                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          YScale                         (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::SetScale(const class FString& MovieClipName, float XScale, float YScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetScale");

	UGFxMoviePlayer_SetScale_Params params;
	params.MovieClipName = MovieClipName;
	params.XScale = XScale;
	params.YScale = YScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetPosition
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::SetPosition(const class FString& MovieClipName, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetPosition");

	UGFxMoviePlayer_SetPosition_Params params;
	params.MovieClipName = MovieClipName;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetPerspective3D
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FASPerspectiveTransform PerspectiveTransform           (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxMoviePlayer::SetPerspective3D(const struct FASPerspectiveTransform& PerspectiveTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetPerspective3D");

	UGFxMoviePlayer_SetPerspective3D_Params params;
	params.PerspectiveTransform = PerspectiveTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetPause
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                           bPausePlayback                 (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::SetPause(bool bPausePlayback)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetPause");

	UGFxMoviePlayer_SetPause_Params params;
	params.bPausePlayback = bPausePlayback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                           bCanReceiveInput               (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput");

	UGFxMoviePlayer_SetMovieCanReceiveInput_Params params;
	params.bCanReceiveInput = bCanReceiveInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                           bCanReceiveFocus               (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus");

	UGFxMoviePlayer_SetMovieCanReceiveFocus_Params params;
	params.bCanReceiveFocus = bCanReceiveFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FKey>            Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGFxMoviePlayer::SetFocusIgnoreKeys(TArray<struct FKey> Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys");

	UGFxMoviePlayer_SetFocusIgnoreKeys_Params params;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetExternalTexture
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  Resource                       (Parm, ZeroConstructor)
// class UTexture*                Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::SetExternalTexture(const class FString& Resource, class UTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetExternalTexture");

	UGFxMoviePlayer_SetExternalTexture_Params params;
	params.Resource = Resource;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// struct FTransform              DisplayTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGFxMoviePlayer::SetDisplayTransform(const class FString& MovieClipName, const struct FTransform& DisplayTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform");

	UGFxMoviePlayer_SetDisplayTransform_Params params;
	params.MovieClipName = MovieClipName;
	params.DisplayTransform = DisplayTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// struct FASDisplayInfo          Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxMoviePlayer::SetDisplayInfo(const class FString& MovieClipName, const struct FASDisplayInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo");

	UGFxMoviePlayer_SetDisplayInfo_Params params;
	params.MovieClipName = MovieClipName;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetColorTransform
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// struct FASColorTransform       UnrealColorTransform           (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxMoviePlayer::SetColorTransform(const class FString& MovieClipName, const struct FASColorTransform& UnrealColorTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetColorTransform");

	UGFxMoviePlayer_SetColorTransform_Params params;
	params.MovieClipName = MovieClipName;
	params.UnrealColorTransform = UnrealColorTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FKey>            Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGFxMoviePlayer::SetCaptureKeys(TArray<struct FKey> Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys");

	UGFxMoviePlayer_SetCaptureKeys_Params params;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetAlignment
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// TEnumAsByte<EGFxAlign>         Align                          (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::SetAlignment(TEnumAsByte<EGFxAlign> Align)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetAlignment");

	UGFxMoviePlayer_SetAlignment_Params params;
	params.Align = Align;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand
// (Native, Public, Const)
// Parameters:
// class FString                  Command                        (Parm, ZeroConstructor)
// class FString                  Arguments                      (Parm, ZeroConstructor)

void UGFxMoviePlayer::ReceiveGFxCommand(const class FString& Command, const class FString& Arguments)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand");

	UGFxMoviePlayer_ReceiveGFxCommand_Params params;
	params.Command = Command;
	params.Arguments = Arguments;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.OpenMovie
// (Final, Native, Static, Public, BlueprintCallable, Const)
// Parameters:
// class USwfMovie*               SwfMovie                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ExternalScriptInterface        (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  RenderToTexture                (Parm, ZeroConstructor, IsPlainOldData)
// class UGFxMoviePlayer*         MoviePlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DisplayWithHudOff              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRefresh                       (Parm, ZeroConstructor, IsPlainOldData)
// class UGFxMoviePlayer*         ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGFxMoviePlayer* UGFxMoviePlayer::STATIC_OpenMovie(class USwfMovie* SwfMovie, class UObject* ExternalScriptInterface, class UTextureRenderTarget2D* RenderToTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool bRefresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OpenMovie");

	UGFxMoviePlayer_OpenMovie_Params params;
	params.SwfMovie = SwfMovie;
	params.ExternalScriptInterface = ExternalScriptInterface;
	params.RenderToTexture = RenderToTexture;
	params.MoviePlayer = MoviePlayer;
	params.DisplayWithHudOff = DisplayWithHudOff;
	params.bRefresh = bRefresh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.OnTick
// (Native, Public, Const)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::OnTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnTick");

	UGFxMoviePlayer_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.OnStart
// (Native, Public, Const)

void UGFxMoviePlayer::OnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnStart");

	UGFxMoviePlayer_OnStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.OnGameTick
// (Native, Public, Const)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::OnGameTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnGameTick");

	UGFxMoviePlayer_OnGameTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.OnFocusLost
// (Native, Public, Const)
// Parameters:
// int                            LocalPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::OnFocusLost(int LocalPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnFocusLost");

	UGFxMoviePlayer_OnFocusLost_Params params;
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.OnFocusGained
// (Native, Public, Const)
// Parameters:
// int                            LocalPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::OnFocusGained(int LocalPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnFocusGained");

	UGFxMoviePlayer_OnFocusGained_Params params;
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.OnClose
// (Native, Public, Const)

void UGFxMoviePlayer::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnClose");

	UGFxMoviePlayer_OnClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.IsVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGFxMoviePlayer::IsVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.IsVisible");

	UGFxMoviePlayer_IsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGFxMoviePlayer::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.IsPaused");

	UGFxMoviePlayer_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.Invoke
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// class FString                  FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FASValue>        Params                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASValue UGFxMoviePlayer::Invoke(const class FString& MovieClipName, const class FString& FunctionName, TArray<struct FASValue> Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.Invoke");

	UGFxMoviePlayer_Invoke_Params params;
	params.MovieClipName = MovieClipName;
	params.FunctionName = FunctionName;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GotoAndStopI
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// int                            Frame                          (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::GotoAndStopI(const class FString& MovieClipName, int Frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GotoAndStopI");

	UGFxMoviePlayer_GotoAndStopI_Params params;
	params.MovieClipName = MovieClipName;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.GotoAndStop
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// class FString                  Frame                          (Parm, ZeroConstructor)

void UGFxMoviePlayer::GotoAndStop(const class FString& MovieClipName, const class FString& Frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GotoAndStop");

	UGFxMoviePlayer_GotoAndStop_Params params;
	params.MovieClipName = MovieClipName;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// int                            Frame                          (Parm, ZeroConstructor, IsPlainOldData)

void UGFxMoviePlayer::GotoAndPlayI(const class FString& MovieClipName, int Frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI");

	UGFxMoviePlayer_GotoAndPlayI_Params params;
	params.MovieClipName = MovieClipName;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.GotoAndPlay
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// class FString                  Frame                          (Parm, ZeroConstructor)

void UGFxMoviePlayer::GotoAndPlay(const class FString& MovieClipName, const class FString& Frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GotoAndPlay");

	UGFxMoviePlayer_GotoAndPlay_Params params;
	params.MovieClipName = MovieClipName;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.GetVisibility
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGFxMoviePlayer::GetVisibility(const class FString& MovieClipName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetVisibility");

	UGFxMoviePlayer_GetVisibility_Params params;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetView3D
// (Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGFxMoviePlayer::GetView3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetView3D");

	UGFxMoviePlayer_GetView3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// class FString                  MemberName                     (Parm, ZeroConstructor)
// TArray<struct FASValue>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FASValue> UGFxMoviePlayer::GetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray");

	UGFxMoviePlayer_GetVariableValueArray_Params params;
	params.MovieClipName = MovieClipName;
	params.MemberName = MemberName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetVariableValue
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// class FString                  MemberName                     (Parm, ZeroConstructor)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASValue UGFxMoviePlayer::GetVariableValue(const class FString& MovieClipName, const class FString& MemberName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetVariableValue");

	UGFxMoviePlayer_GetVariableValue_Params params;
	params.MovieClipName = MovieClipName;
	params.MemberName = MemberName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetScale
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// float                          XScale                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          YScale                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGFxMoviePlayer::GetScale(const class FString& MovieClipName, float* XScale, float* YScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetScale");

	UGFxMoviePlayer_GetScale_Params params;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XScale != nullptr)
		*XScale = params.XScale;
	if (YScale != nullptr)
		*YScale = params.YScale;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetPosition
// (Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// float                          X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGFxMoviePlayer::GetPosition(const class FString& MovieClipName, float* X, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetPosition");

	UGFxMoviePlayer_GetPosition_Params params;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetPerspective3D
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FASPerspectiveTransform ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASPerspectiveTransform UGFxMoviePlayer::GetPerspective3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetPerspective3D");

	UGFxMoviePlayer_GetPerspective3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetMovieClip
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGFxObject* UGFxMoviePlayer::GetMovieClip(const class FString& MovieClipName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetMovieClip");

	UGFxMoviePlayer_GetMovieClip_Params params;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform
// (Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGFxMoviePlayer::GetDisplayTransform(const class FString& MovieClipName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform");

	UGFxMoviePlayer_GetDisplayTransform_Params params;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// struct FASDisplayInfo          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASDisplayInfo UGFxMoviePlayer::GetDisplayInfo(const class FString& MovieClipName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo");

	UGFxMoviePlayer_GetDisplayInfo_Params params;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetColorTransform
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// struct FASColorTransform       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASColorTransform UGFxMoviePlayer::GetColorTransform(const class FString& MovieClipName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetColorTransform");

	UGFxMoviePlayer_GetColorTransform_Params params;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.Close
// (Native, Public, BlueprintCallable, Const)

void UGFxMoviePlayer::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.Close");

	UGFxMoviePlayer_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxObject.SetVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UGFxObject::SetVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetVisible");

	UGFxObject_SetVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxObject.SetScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          XScale                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          YScale                         (Parm, ZeroConstructor, IsPlainOldData)

void UGFxObject::SetScale(float XScale, float YScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetScale");

	UGFxObject_SetScale_Params params;
	params.XScale = XScale;
	params.YScale = YScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxObject.SetPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void UGFxObject::SetPosition(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetPosition");

	UGFxObject_SetPosition_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxObject.SetMemberValueArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UGFxMoviePlayer*         MoviePlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  MemberName                     (Parm, ZeroConstructor)
// TArray<struct FASValue>        Input                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGFxObject::SetMemberValueArray(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName, TArray<struct FASValue> Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetMemberValueArray");

	UGFxObject_SetMemberValueArray_Params params;
	params.MoviePlayer = MoviePlayer;
	params.MemberName = MemberName;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxObject.SetMemberValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  MemberName                     (Parm, ZeroConstructor)
// struct FASValue                Input                          (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxObject::SetMemberValue(const class FString& MemberName, const struct FASValue& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetMemberValue");

	UGFxObject_SetMemberValue_Params params;
	params.MemberName = MemberName;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxObject.SetDisplayTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              DisplayTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGFxObject::SetDisplayTransform(const struct FTransform& DisplayTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetDisplayTransform");

	UGFxObject_SetDisplayTransform_Params params;
	params.DisplayTransform = DisplayTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxObject.SetDisplayInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FASDisplayInfo          UnrealDisplayInfo              (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxObject::SetDisplayInfo(const struct FASDisplayInfo& UnrealDisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetDisplayInfo");

	UGFxObject_SetDisplayInfo_Params params;
	params.UnrealDisplayInfo = UnrealDisplayInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxObject.SetColorTransform
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FASColorTransform       UnrealColorTransform           (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxObject::SetColorTransform(const struct FASColorTransform& UnrealColorTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetColorTransform");

	UGFxObject_SetColorTransform_Params params;
	params.UnrealColorTransform = UnrealColorTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxObject.Invoke
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FASValue>        Params                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASValue UGFxObject::Invoke(const class FString& FunctionName, TArray<struct FASValue> Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.Invoke");

	UGFxObject_Invoke_Params params;
	params.FunctionName = FunctionName;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxObject.GotoAndStopI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            FrameNumber                    (Parm, ZeroConstructor, IsPlainOldData)

void UGFxObject::GotoAndStopI(int FrameNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GotoAndStopI");

	UGFxObject_GotoAndStopI_Params params;
	params.FrameNumber = FrameNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxObject.GotoAndStop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  FrameString                    (Parm, ZeroConstructor)

void UGFxObject::GotoAndStop(const class FString& FrameString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GotoAndStop");

	UGFxObject_GotoAndStop_Params params;
	params.FrameString = FrameString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxObject.GotoAndPlayI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            FrameNumber                    (Parm, ZeroConstructor, IsPlainOldData)

void UGFxObject::GotoAndPlayI(int FrameNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GotoAndPlayI");

	UGFxObject_GotoAndPlayI_Params params;
	params.FrameNumber = FrameNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxObject.GotoAndPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  FrameString                    (Parm, ZeroConstructor)

void UGFxObject::GotoAndPlay(const class FString& FrameString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GotoAndPlay");

	UGFxObject_GotoAndPlay_Params params;
	params.FrameString = FrameString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxObject.GetVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGFxObject::GetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetVisible");

	UGFxObject_GetVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxObject.GetScale
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          XScale                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          YScale                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGFxObject::GetScale(float* XScale, float* YScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetScale");

	UGFxObject_GetScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XScale != nullptr)
		*XScale = params.XScale;
	if (YScale != nullptr)
		*YScale = params.YScale;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxObject.GetPosition
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGFxObject::GetPosition(float* X, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetPosition");

	UGFxObject_GetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxObject.GetMemberValueArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  MemberName                     (Parm, ZeroConstructor)
// TArray<struct FASValue>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FASValue> UGFxObject::GetMemberValueArray(const class FString& MemberName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetMemberValueArray");

	UGFxObject_GetMemberValueArray_Params params;
	params.MemberName = MemberName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxObject.GetMemberValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  MemberName                     (Parm, ZeroConstructor)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASValue UGFxObject::GetMemberValue(const class FString& MemberName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetMemberValue");

	UGFxObject_GetMemberValue_Params params;
	params.MemberName = MemberName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxObject.GetDisplayTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGFxObject::GetDisplayTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetDisplayTransform");

	UGFxObject_GetDisplayTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxObject.GetDisplayInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FASDisplayInfo          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASDisplayInfo UGFxObject::GetDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetDisplayInfo");

	UGFxObject_GetDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxObject.GetColorTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FASColorTransform       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASColorTransform UGFxObject::GetColorTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetColorTransform");

	UGFxObject_GetColorTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.ScaleformBlueprintLibrary.OpenMovie
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USwfMovie*               Movie                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ExternalInterface              (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  RenderTexture                  (Parm, ZeroConstructor, IsPlainOldData)
// class UGFxMoviePlayer*         MoviePlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DisplayWithHudOff              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartPaused                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGFxMoviePlayer*         ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGFxMoviePlayer* UScaleformBlueprintLibrary::STATIC_OpenMovie(class USwfMovie* Movie, class UObject* ExternalInterface, class UTextureRenderTarget2D* RenderTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.OpenMovie");

	UScaleformBlueprintLibrary_OpenMovie_Params params;
	params.Movie = Movie;
	params.ExternalInterface = ExternalInterface;
	params.RenderTexture = RenderTexture;
	params.MoviePlayer = MoviePlayer;
	params.DisplayWithHudOff = DisplayWithHudOff;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGFxMoviePlayer*         MoviePlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FunctionName                   (ConstParm, Parm, ZeroConstructor)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASValue UScaleformBlueprintLibrary::STATIC_InvokeNoParams(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams");

	UScaleformBlueprintLibrary_InvokeNoParams_Params params;
	params.MoviePlayer = MoviePlayer;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.ScaleformBlueprintLibrary.Invoke
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UGFxMoviePlayer*         MoviePlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FunctionName                   (ConstParm, Parm, ZeroConstructor)
// TArray<struct FASValue>        Params                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASValue UScaleformBlueprintLibrary::STATIC_Invoke(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName, TArray<struct FASValue> Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.Invoke");

	UScaleformBlueprintLibrary_Invoke_Params params;
	params.MoviePlayer = MoviePlayer;
	params.FunctionName = FunctionName;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.ScaleformBlueprintLibrary.GetVariable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGFxMoviePlayer*         MoviePlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  VariablePath                   (Parm, ZeroConstructor)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGFxObject* UScaleformBlueprintLibrary::STATIC_GetVariable(class UGFxMoviePlayer* MoviePlayer, const class FString& VariablePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.GetVariable");

	UScaleformBlueprintLibrary_GetVariable_Params params;
	params.MoviePlayer = MoviePlayer;
	params.VariablePath = VariablePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGFxMoviePlayer*         MoviePlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  MovieClipName                  (Parm, ZeroConstructor)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGFxObject* UScaleformBlueprintLibrary::STATIC_GetMovieClip(class UGFxMoviePlayer* MoviePlayer, const class FString& MovieClipName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip");

	UScaleformBlueprintLibrary_GetMovieClip_Params params;
	params.MoviePlayer = MoviePlayer;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.ScaleformBlueprintLibrary.GetMember
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGFxMoviePlayer*         MoviePlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  MemberName                     (Parm, ZeroConstructor)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGFxObject* UScaleformBlueprintLibrary::STATIC_GetMember(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.GetMember");

	UScaleformBlueprintLibrary_GetMember_Params params;
	params.MoviePlayer = MoviePlayer;
	params.MemberName = MemberName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.ScaleformBlueprintLibrary.GetAllGFxMoviePlayerOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UGFxMoviePlayer*> FoundGFxMoviePlayer            (ConstParm, Parm, OutParm, ZeroConstructor)
// class UClass*                  GFxMoviePlayerClass            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           VisibleOnly                    (Parm, ZeroConstructor, IsPlainOldData)

void UScaleformBlueprintLibrary::STATIC_GetAllGFxMoviePlayerOfClass(class UObject* WorldContextObject, TArray<class UGFxMoviePlayer*> FoundGFxMoviePlayer, class UClass* GFxMoviePlayerClass, bool VisibleOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.GetAllGFxMoviePlayerOfClass");

	UScaleformBlueprintLibrary_GetAllGFxMoviePlayerOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FoundGFxMoviePlayer = FoundGFxMoviePlayer;
	params.GFxMoviePlayerClass = GFxMoviePlayerClass;
	params.VisibleOnly = VisibleOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.ScaleformBlueprintLibrary.CloseMovie
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGFxMoviePlayer*         MoviePlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UScaleformBlueprintLibrary::STATIC_CloseMovie(class UGFxMoviePlayer* MoviePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.CloseMovie");

	UScaleformBlueprintLibrary_CloseMovie_Params params;
	params.MoviePlayer = MoviePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
