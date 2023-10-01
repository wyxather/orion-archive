// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_NVIDIAGfeSDK_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll
// 00007FF6F8336FF0
// (Final, Native, Static, Public, BlueprintCallable)

void UHighlightsFunctionLibrary::STATIC_Poll()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll");

	UHighlightsFunctionLibrary_Poll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable
// 00007FF6F83361D0
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGfeSDKCreateResponse*  InitProperties                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           VideoGranted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ScreenshotsGranted             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EGfeSDKPermission              Video                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EGfeSDKPermission              Screenshots                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHighlightsFunctionLibrary::STATIC_ChekIfHighlightsAvailable(struct FGfeSDKCreateResponse* InitProperties, bool* VideoGranted, bool* ScreenshotsGranted, EGfeSDKPermission* Video, EGfeSDKPermission* Screenshots)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable");

	UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Params params;
	params.InitProperties = InitProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VideoGranted != nullptr)
		*VideoGranted = params.VideoGranted;
	if (ScreenshotsGranted != nullptr)
		*ScreenshotsGranted = params.ScreenshotsGranted;
	if (Video != nullptr)
		*Video = params.Video;
	if (Screenshots != nullptr)
		*Screenshots = params.Screenshots;
}


// Function NVIDIAGfeSDK.InitHighlights.InitHighlights
// 00007FF6F8336E60
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 InGameName                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool*                          Video                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool*                          Screenshots                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInitHighlights*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInitHighlights* UInitHighlights::STATIC_InitHighlights(class UObject** WorldContextObject, class FString* InGameName, bool* Video, bool* Screenshots)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.InitHighlights.InitHighlights");

	UInitHighlights_InitHighlights_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InGameName = InGameName;
	params.Video = Video;
	params.Screenshots = Screenshots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure
// 00007FF6F83366A0
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGfeSDKHighlightConfigParams* ConfigParams                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UHighlightsConfigureAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHighlightsConfigureAsync* UHighlightsConfigureAsync::STATIC_HighlightsConfigure(class UObject** WorldContextObject, struct FGfeSDKHighlightConfigParams* ConfigParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure");

	UHighlightsConfigureAsync_HighlightsConfigure_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ConfigParams = ConfigParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup
// 00007FF6F8336910
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGfeSDKHighlightOpenGroupParams* Params                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UHighlightsOpenGroupAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHighlightsOpenGroupAsync* UHighlightsOpenGroupAsync::STATIC_HighlightsOpenGroup(class UObject** WorldContextObject, struct FGfeSDKHighlightOpenGroupParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup");

	UHighlightsOpenGroupAsync_HighlightsOpenGroup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup
// 00007FF6F8336570
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 GroupId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool*                          DestroyHighlights              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHighlightsCloseGroupAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHighlightsCloseGroupAsync* UHighlightsCloseGroupAsync::STATIC_HighlightsCloseGroup(class UObject** WorldContextObject, class FString* GroupId, bool* DestroyHighlights)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup");

	UHighlightsCloseGroupAsync_HighlightsCloseGroup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.DestroyHighlights = DestroyHighlights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot
// 00007FF6F8336B80
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 GroupId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 HighlightId                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHighlightsSetScreenshotAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHighlightsSetScreenshotAsync* UHighlightsSetScreenshotAsync::STATIC_HighlightsSetScreenshot(class UObject** WorldContextObject, class FString* GroupId, class FString* HighlightId)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot");

	UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.HighlightId = HighlightId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo
// 00007FF6F8336CB0
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 GroupId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 HighlightId                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           StartDelta                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           EndDelta                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHighlightsSetVideoAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHighlightsSetVideoAsync* UHighlightsSetVideoAsync::STATIC_HighlightsSetVideo(class UObject** WorldContextObject, class FString* GroupId, class FString* HighlightId, int* StartDelta, int* EndDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo");

	UHighlightsSetVideoAsync_HighlightsSetVideo_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.HighlightId = HighlightId;
	params.StartDelta = StartDelta;
	params.EndDelta = EndDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary
// 00007FF6F8336A70
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGfeSDKHighlightSummaryParams* Params                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UHighlightsSummaryAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHighlightsSummaryAsync* UHighlightsSummaryAsync::STATIC_HighlightsOpenSummary(class UObject** WorldContextObject, struct FGfeSDKHighlightSummaryParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary");

	UHighlightsSummaryAsync_HighlightsOpenSummary_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights
// 00007FF6F83367A0
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 GroupId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EGfeSDKHighlightType*          TagFilter                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EGfeSDKHighlightSignificance*  SignificanceFilter             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHighlightsGetNumberAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHighlightsGetNumberAsync* UHighlightsGetNumberAsync::STATIC_HighlightsGetNumberOfHighlights(class UObject** WorldContextObject, class FString* GroupId, EGfeSDKHighlightType* TagFilter, EGfeSDKHighlightSignificance* SignificanceFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights");

	UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.TagFilter = TagFilter;
	params.SignificanceFilter = SignificanceFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions
// 00007FF6F8336460
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool*                          Video                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool*                          Screenshots                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URequestPermissionsAsync* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URequestPermissionsAsync* URequestPermissionsAsync::STATIC_GFERequestPermissions(class UObject** WorldContextObject, bool* Video, bool* Screenshots)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions");

	URequestPermissionsAsync_GFERequestPermissions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Video = Video;
	params.Screenshots = Screenshots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
