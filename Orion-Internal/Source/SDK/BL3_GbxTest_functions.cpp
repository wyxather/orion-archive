// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxTest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxTest.AutomationMenuHelper.PrevPage
// (Final, Native, Public, BlueprintCallable)

void UAutomationMenuHelper::PrevPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.PrevPage");

	UAutomationMenuHelper_PrevPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.AutomationMenuHelper.PageName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAutomationMenuHelper::PageName()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.PageName");

	UAutomationMenuHelper_PageName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.AutomationMenuHelper.NumPages
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAutomationMenuHelper::NumPages()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.NumPages");

	UAutomationMenuHelper_NumPages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.AutomationMenuHelper.NextPage
// (Final, Native, Public, BlueprintCallable)

void UAutomationMenuHelper::NextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.NextPage");

	UAutomationMenuHelper_NextPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.AutomationMenuHelper.NextFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EAutomationUIDirection         Direction                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationMenuHelper::NextFocus(EAutomationUIDirection Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.NextFocus");

	UAutomationMenuHelper_NextFocus_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.AutomationMenuHelper.MenuName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAutomationMenuHelper::MenuName()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.MenuName");

	UAutomationMenuHelper_MenuName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.AutomationMenuHelper.HasOpenMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAutomationMenuHelper::HasOpenMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.HasOpenMenu");

	UAutomationMenuHelper_HasOpenMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.AutomationMenuHelper.FocusName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAutomationMenuHelper::FocusName()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.FocusName");

	UAutomationMenuHelper_FocusName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.AutomationMenuHelper.FocusInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FAutomationMenuFocusInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAutomationMenuFocusInfo UAutomationMenuHelper::FocusInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.FocusInfo");

	UAutomationMenuHelper_FocusInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.AutomationMenuHelper.CurrentDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAutomationMenuHelper::CurrentDepth()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.CurrentDepth");

	UAutomationMenuHelper_CurrentDepth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.AutomationMenuHelper.CreateAutomationMenuHelper
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AGbxPlayerController*    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SimulateAllInputs              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAutomationMenuHelper*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAutomationMenuHelper* UAutomationMenuHelper::STATIC_CreateAutomationMenuHelper(class AGbxPlayerController* PlayerController, bool SimulateAllInputs)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.CreateAutomationMenuHelper");

	UAutomationMenuHelper_CreateAutomationMenuHelper_Params params;
	params.PlayerController = PlayerController;
	params.SimulateAllInputs = SimulateAllInputs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.AutomationMenuHelper.BackOut
// (Final, Native, Public, BlueprintCallable)

void UAutomationMenuHelper::BackOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.BackOut");

	UAutomationMenuHelper_BackOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.AutomationMenuHelper.ActuateFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EAutomationUIAction            Action                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationMenuHelper::ActuateFocus(EAutomationUIAction Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationMenuHelper.ActuateFocus");

	UAutomationMenuHelper_ActuateFocus_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.AutomationUILibrary.ForceDisableTutorials
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ForceDisable                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAutomationUILibrary::STATIC_ForceDisableTutorials(bool ForceDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.AutomationUILibrary.ForceDisableTutorials");

	UAutomationUILibrary_ForceDisableTutorials_Params params;
	params.ForceDisable = ForceDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.PerfMapCapture.SavePerfMapCapturesFromConfiguration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Path                           (Parm, ZeroConstructor)
// struct FMapParameters          Configuration                  (Parm)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UPerfMapCapture::STATIC_SavePerfMapCapturesFromConfiguration(class UWorld* World, const class FString& Path, const struct FMapParameters& Configuration, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.PerfMapCapture.SavePerfMapCapturesFromConfiguration");

	UPerfMapCapture_SavePerfMapCapturesFromConfiguration_Params params;
	params.World = World;
	params.Path = Path;
	params.Configuration = Configuration;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.PerfMapCapture.SavePerfMapCaptures
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 World                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Path                           (Parm, ZeroConstructor)
// float                          Density                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLighting                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSpecular                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Gamma                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeX                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeY                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeZ                        (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  OutputPattern                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPerfMapCapture::STATIC_SavePerfMapCaptures(class UObject* World, const class FString& Path, float Density, bool bLighting, bool bSpecular, float Gamma, int Width, int Height, float VolumeX, float VolumeY, float VolumeZ, const class FString& OutputPattern)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.PerfMapCapture.SavePerfMapCaptures");

	UPerfMapCapture_SavePerfMapCaptures_Params params;
	params.World = World;
	params.Path = Path;
	params.Density = Density;
	params.bLighting = bLighting;
	params.bSpecular = bSpecular;
	params.Gamma = Gamma;
	params.Width = Width;
	params.Height = Height;
	params.VolumeX = VolumeX;
	params.VolumeY = VolumeY;
	params.VolumeZ = VolumeZ;
	params.OutputPattern = OutputPattern;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.PerformanceSnapshotCollector.ResetSnapshotProviders
// (Final, Native, Public, BlueprintCallable)

void UPerformanceSnapshotCollector::ResetSnapshotProviders()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.PerformanceSnapshotCollector.ResetSnapshotProviders");

	UPerformanceSnapshotCollector_ResetSnapshotProviders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.PerformanceSnapshotCollector.CreatePerformanceSnapshotCollector
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  StatSection                    (Parm, ZeroConstructor)
// ESnapshotExecOutput            ExecOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPerformanceSnapshotCollector* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPerformanceSnapshotCollector* UPerformanceSnapshotCollector::STATIC_CreatePerformanceSnapshotCollector(const class FString& StatSection, ESnapshotExecOutput* ExecOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.PerformanceSnapshotCollector.CreatePerformanceSnapshotCollector");

	UPerformanceSnapshotCollector_CreatePerformanceSnapshotCollector_Params params;
	params.StatSection = StatSection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecOut != nullptr)
		*ExecOut = params.ExecOut;

	return params.ReturnValue;
}


// Function GbxTest.PerformanceSnapshotCollector.CollectSnapshot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReportContext                  (Parm, ZeroConstructor)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UPerformanceSnapshotCollector::CollectSnapshot(class UObject* WorldContextObject, const class FString& ReportContext, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.PerformanceSnapshotCollector.CollectSnapshot");

	UPerformanceSnapshotCollector_CollectSnapshot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ReportContext = ReportContext;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.PerformanceSnapshotCollector.CollectProbeSnapshot
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReportContext                  (Parm, ZeroConstructor)
// struct FGbxProbeId             ProbeId                        (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  Test                           (Parm, ZeroConstructor)
// TArray<struct FGbxProbeExtraData> ExtraDataArray                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UPerformanceSnapshotCollector::CollectProbeSnapshot(class UObject* WorldContextObject, const class FString& ReportContext, const struct FGbxProbeId& ProbeId, const class FString& Test, TArray<struct FGbxProbeExtraData> ExtraDataArray, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.PerformanceSnapshotCollector.CollectProbeSnapshot");

	UPerformanceSnapshotCollector_CollectProbeSnapshot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ReportContext = ReportContext;
	params.ProbeId = ProbeId;
	params.Test = Test;
	params.ExtraDataArray = ExtraDataArray;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.MatcherFunctionality.Size
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMatcherFunctionality::Size()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.Size");

	UMatcherFunctionality_Size_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.MatcherFunctionality.Ready
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMatcherFunctionality::Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.Ready");

	UMatcherFunctionality_Ready_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.MatcherFunctionality.GetSuffix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UMatcherFunctionality::GetSuffix()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.GetSuffix");

	UMatcherFunctionality_GetSuffix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.MatcherFunctionality.GetPrefix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UMatcherFunctionality::GetPrefix()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.GetPrefix");

	UMatcherFunctionality_GetPrefix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.MatcherFunctionality.GetPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Start                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMatcherFunctionality::GetPosition(int Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.GetPosition");

	UMatcherFunctionality_GetPosition_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.MatcherFunctionality.GetMatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UMatcherFunctionality::GetMatch(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.GetMatch");

	UMatcherFunctionality_GetMatch_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.MatcherFunctionality.GetLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMatcherFunctionality::GetLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.GetLength");

	UMatcherFunctionality_GetLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.MatcherFunctionality.GetAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UMatcherFunctionality::GetAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.GetAtIndex");

	UMatcherFunctionality_GetAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.MatcherFunctionality.Empty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMatcherFunctionality::Empty()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.MatcherFunctionality.Empty");

	UMatcherFunctionality_Empty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.RegexFunctionality.RegexSearch
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRegex                  Regex                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UMatcherFunctionality*   Matcher                        (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Input                          (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URegexFunctionality::STATIC_RegexSearch(const struct FRegex& Regex, class UMatcherFunctionality* Matcher, const class FString& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.RegexFunctionality.RegexSearch");

	URegexFunctionality_RegexSearch_Params params;
	params.Regex = Regex;
	params.Matcher = Matcher;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.RegexFunctionality.RegexRepleace
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRegex                  Regex                          (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  Input                          (Parm, ZeroConstructor)
// class FString                  Repleacement                   (Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString URegexFunctionality::STATIC_RegexRepleace(const struct FRegex& Regex, const class FString& Input, const class FString& Repleacement)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.RegexFunctionality.RegexRepleace");

	URegexFunctionality_RegexRepleace_Params params;
	params.Regex = Regex;
	params.Input = Input;
	params.Repleacement = Repleacement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.RegexFunctionality.RegexMatch2
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRegex                  Regex                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UMatcherFunctionality*   Matcher                        (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Input                          (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URegexFunctionality::STATIC_RegexMatch2(const struct FRegex& Regex, class UMatcherFunctionality* Matcher, const class FString& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.RegexFunctionality.RegexMatch2");

	URegexFunctionality_RegexMatch2_Params params;
	params.Regex = Regex;
	params.Matcher = Matcher;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.RegexFunctionality.RegexMatch
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRegex                  Regex                          (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  Input                          (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URegexFunctionality::STATIC_RegexMatch(const struct FRegex& Regex, const class FString& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.RegexFunctionality.RegexMatch");

	URegexFunctionality_RegexMatch_Params params;
	params.Regex = Regex;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.RegexFunctionality.FindAll
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRegex                  Regex                          (Parm)
// class FString                  String                         (Parm, ZeroConstructor)
// TArray<class FString>          Return                         (Parm, OutParm, ZeroConstructor)

void URegexFunctionality::STATIC_FindAll(const struct FRegex& Regex, const class FString& String, TArray<class FString>* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.RegexFunctionality.FindAll");

	URegexFunctionality_FindAll_Params params;
	params.Regex = Regex;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function GbxTest.RegexFunctionality.Assign2
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRegex                  Regex                          (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  Pattern                        (Parm, ZeroConstructor)
// ESyntaxOption                  Flags                          (Parm, ZeroConstructor, IsPlainOldData)

void URegexFunctionality::STATIC_Assign2(const struct FRegex& Regex, const class FString& Pattern, ESyntaxOption Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.RegexFunctionality.Assign2");

	URegexFunctionality_Assign2_Params params;
	params.Regex = Regex;
	params.Pattern = Pattern;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.RegexFunctionality.Assign
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRegex                  Regex                          (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  Pattern                        (Parm, ZeroConstructor)

void URegexFunctionality::STATIC_Assign(const struct FRegex& Regex, const class FString& Pattern)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.RegexFunctionality.Assign");

	URegexFunctionality_Assign_Params params;
	params.Regex = Regex;
	params.Pattern = Pattern;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrary.TakeScreenshot
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                  CustomFilename                 (ConstParm, Parm, ZeroConstructor)
// struct FVector2D               OverrideResolution             (ConstParm, Parm, IsPlainOldData)
// bool                           ShowUI                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AddUniqueSuffix                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTestLibrary::STATIC_TakeScreenshot(const class FString& CustomFilename, const struct FVector2D& OverrideResolution, bool ShowUI, bool AddUniqueSuffix)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.TakeScreenshot");

	UTestLibrary_TakeScreenshot_Params params;
	params.CustomFilename = CustomFilename;
	params.OverrideResolution = OverrideResolution;
	params.ShowUI = ShowUI;
	params.AddUniqueSuffix = AddUniqueSuffix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrary.SortStrings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>          Values                         (Parm, ZeroConstructor)
// bool                           Descending                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UTestLibrary::STATIC_SortStrings(TArray<class FString> Values, bool Descending)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.SortStrings");

	UTestLibrary_SortStrings_Params params;
	params.Values = Values;
	params.Descending = Descending;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrary.SortObjectsByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UObject*>         Values                         (Parm, ZeroConstructor)
// bool                           Descending                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UTestLibrary::STATIC_SortObjectsByName(TArray<class UObject*> Values, bool Descending)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.SortObjectsByName");

	UTestLibrary_SortObjectsByName_Params params;
	params.Values = Values;
	params.Descending = Descending;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrary.SortIntegers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<int>                    Values                         (Parm, ZeroConstructor)
// bool                           Descending                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UTestLibrary::STATIC_SortIntegers(TArray<int> Values, bool Descending)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.SortIntegers");

	UTestLibrary_SortIntegers_Params params;
	params.Values = Values;
	params.Descending = Descending;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrary.SortFloats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<float>                  Values                         (Parm, ZeroConstructor)
// bool                           Descending                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<float> UTestLibrary::STATIC_SortFloats(TArray<float> Values, bool Descending)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.SortFloats");

	UTestLibrary_SortFloats_Params params;
	params.Values = Values;
	params.Descending = Descending;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrary.SimulateInputKey
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       EVENTTYPE                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          AmountDepressed                (Parm, ZeroConstructor, IsPlainOldData)

void UTestLibrary::STATIC_SimulateInputKey(class APlayerController* PlayerController, const struct FKey& Key, TEnumAsByte<EInputEvent> EVENTTYPE, float AmountDepressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.SimulateInputKey");

	UTestLibrary_SimulateInputKey_Params params;
	params.PlayerController = PlayerController;
	params.Key = Key;
	params.EVENTTYPE = EVENTTYPE;
	params.AmountDepressed = AmountDepressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrary.SimulateInputAxis
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FKey                    Key                            (Parm)
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpTime                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UTestLibrary::STATIC_SimulateInputAxis(class APlayerController* PlayerController, const struct FKey& Key, float Delta, float InterpTime, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.SimulateInputAxis");

	UTestLibrary_SimulateInputAxis_Params params;
	params.PlayerController = PlayerController;
	params.Key = Key;
	params.Delta = Delta;
	params.InterpTime = InterpTime;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrary.RemoveItemFromCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  CollectionName                 (Parm, ZeroConstructor)
// class FString                  ObjectName                     (Parm, ZeroConstructor)

void UTestLibrary::STATIC_RemoveItemFromCollection(const class FString& CollectionName, const class FString& ObjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.RemoveItemFromCollection");

	UTestLibrary_RemoveItemFromCollection_Params params;
	params.CollectionName = CollectionName;
	params.ObjectName = ObjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrary.RemoveArrayFromCollection
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  CollectionName                 (Parm, ZeroConstructor)
// TArray<class FString>          objectNames                    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTestLibrary::STATIC_RemoveArrayFromCollection(const class FString& CollectionName, TArray<class FString>* objectNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.RemoveArrayFromCollection");

	UTestLibrary_RemoveArrayFromCollection_Params params;
	params.CollectionName = CollectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (objectNames != nullptr)
		*objectNames = params.objectNames;
}


// Function GbxTest.TestLibrary.ReadFromIni
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  Section                        (ConstParm, Parm, ZeroConstructor)
// class FString                  Key                            (ConstParm, Parm, ZeroConstructor)
// TArray<class FString>          Values                         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrary::STATIC_ReadFromIni(const class FString& Section, const class FString& Key, TArray<class FString>* Values)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.ReadFromIni");

	UTestLibrary_ReadFromIni_Params params;
	params.Section = Section;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrary.MoveItemCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  fromCollection                 (Parm, ZeroConstructor)
// class FString                  toCollection                   (Parm, ZeroConstructor)
// class FString                  ObjectName                     (Parm, ZeroConstructor)

void UTestLibrary::STATIC_MoveItemCollection(const class FString& fromCollection, const class FString& toCollection, const class FString& ObjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.MoveItemCollection");

	UTestLibrary_MoveItemCollection_Params params;
	params.fromCollection = fromCollection;
	params.toCollection = toCollection;
	params.ObjectName = ObjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrary.MoveArrayCollection
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  fromCollection                 (Parm, ZeroConstructor)
// class FString                  toCollection                   (Parm, ZeroConstructor)
// TArray<class FString>          objectNames                    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTestLibrary::STATIC_MoveArrayCollection(const class FString& fromCollection, const class FString& toCollection, TArray<class FString>* objectNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.MoveArrayCollection");

	UTestLibrary_MoveArrayCollection_Params params;
	params.fromCollection = fromCollection;
	params.toCollection = toCollection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (objectNames != nullptr)
		*objectNames = params.objectNames;
}


// Function GbxTest.TestLibrary.LoadBlueprintAsset
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  Path                           (Parm, ZeroConstructor)
// class UObject*                 Object                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTestLibrary::STATIC_LoadBlueprintAsset(const class FString& Path, class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.LoadBlueprintAsset");

	UTestLibrary_LoadBlueprintAsset_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Object != nullptr)
		*Object = params.Object;
}


// Function GbxTest.TestLibrary.LoadAsset
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  Path                           (Parm, ZeroConstructor)
// class UObject*                 Object                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTestLibrary::STATIC_LoadAsset(const class FString& Path, class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.LoadAsset");

	UTestLibrary_LoadAsset_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Object != nullptr)
		*Object = params.Object;
}


// Function GbxTest.TestLibrary.IsEditorSession
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrary::STATIC_IsEditorSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.IsEditorSession");

	UTestLibrary_IsEditorSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrary.IsAssetInCollectionEx
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  CollectionName                 (Parm, ZeroConstructor)
// TEnumAsByte<ECollectionType>   CollectionType                 (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ObjectName                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrary::STATIC_IsAssetInCollectionEx(const class FString& CollectionName, TEnumAsByte<ECollectionType> CollectionType, const class FString& ObjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.IsAssetInCollectionEx");

	UTestLibrary_IsAssetInCollectionEx_Params params;
	params.CollectionName = CollectionName;
	params.CollectionType = CollectionType;
	params.ObjectName = ObjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrary.IsAssetInCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  CollectionName                 (Parm, ZeroConstructor)
// class FString                  ObjectName                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrary::STATIC_IsAssetInCollection(const class FString& CollectionName, const class FString& ObjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.IsAssetInCollection");

	UTestLibrary_IsAssetInCollection_Params params;
	params.CollectionName = CollectionName;
	params.ObjectName = ObjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrary.GetWorldForActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UTestLibrary::STATIC_GetWorldForActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.GetWorldForActor");

	UTestLibrary_GetWorldForActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrary.GetTestDriversFromStrings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>          Strings                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          TestDrivers                    (Parm, OutParm, ZeroConstructor)
// class FString                  UndiscoveredItems              (Parm, OutParm, ZeroConstructor)

void UTestLibrary::STATIC_GetTestDriversFromStrings(TArray<class FString> Strings, TArray<class UClass*>* TestDrivers, class FString* UndiscoveredItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.GetTestDriversFromStrings");

	UTestLibrary_GetTestDriversFromStrings_Params params;
	params.Strings = Strings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TestDrivers != nullptr)
		*TestDrivers = params.TestDrivers;
	if (UndiscoveredItems != nullptr)
		*UndiscoveredItems = params.UndiscoveredItems;
}


// Function GbxTest.TestLibrary.GetReferencedBlueprintClasses
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          Classes                        (Parm, OutParm, ZeroConstructor)

void UTestLibrary::STATIC_GetReferencedBlueprintClasses(class UObject* Object, class UClass* Class, TArray<class UClass*>* Classes)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.GetReferencedBlueprintClasses");

	UTestLibrary_GetReferencedBlueprintClasses_Params params;
	params.Object = Object;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Classes != nullptr)
		*Classes = params.Classes;
}


// Function GbxTest.TestLibrary.GetObjectTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FObjectTag>      ObjectTags                     (Parm, OutParm, ZeroConstructor)
// class UObject*                 Asset                          (Parm, ZeroConstructor, IsPlainOldData)

void UTestLibrary::STATIC_GetObjectTags(class UObject* Asset, TArray<struct FObjectTag>* ObjectTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.GetObjectTags");

	UTestLibrary_GetObjectTags_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectTags != nullptr)
		*ObjectTags = params.ObjectTags;
}


// Function GbxTest.TestLibrary.GetAssetPath
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  AssetPath                      (Parm, OutParm, ZeroConstructor)

void UTestLibrary::STATIC_GetAssetPath(class UObject* Asset, class FString* AssetPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.GetAssetPath");

	UTestLibrary_GetAssetPath_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AssetPath != nullptr)
		*AssetPath = params.AssetPath;
}


// Function GbxTest.TestLibrary.GetAssetName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  AssetPath                      (Parm, ZeroConstructor)
// class FString                  AssetName                      (Parm, OutParm, ZeroConstructor)

void UTestLibrary::STATIC_GetAssetName(const class FString& AssetPath, class FString* AssetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.GetAssetName");

	UTestLibrary_GetAssetName_Params params;
	params.AssetPath = AssetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AssetName != nullptr)
		*AssetName = params.AssetName;
}


// Function GbxTest.TestLibrary.FilterDiscoveredAssets
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>          InPathNames                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class FString>          InPrettyNames                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class FString>          OutPathNames                   (Parm, OutParm, ZeroConstructor)
// TArray<class FString>          OutPrettyNames                 (Parm, OutParm, ZeroConstructor)
// class FString                  AssetNamePrefix                (Parm, ZeroConstructor)
// class FString                  AssetNamePostfix               (Parm, ZeroConstructor)
// class FString                  AssetNameContains              (Parm, ZeroConstructor)
// class FString                  AssetPathContains              (Parm, ZeroConstructor)

void UTestLibrary::STATIC_FilterDiscoveredAssets(const class FString& AssetNamePrefix, const class FString& AssetNamePostfix, const class FString& AssetNameContains, const class FString& AssetPathContains, TArray<class FString>* InPathNames, TArray<class FString>* InPrettyNames, TArray<class FString>* OutPathNames, TArray<class FString>* OutPrettyNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.FilterDiscoveredAssets");

	UTestLibrary_FilterDiscoveredAssets_Params params;
	params.AssetNamePrefix = AssetNamePrefix;
	params.AssetNamePostfix = AssetNamePostfix;
	params.AssetNameContains = AssetNameContains;
	params.AssetPathContains = AssetPathContains;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InPathNames != nullptr)
		*InPathNames = params.InPathNames;
	if (InPrettyNames != nullptr)
		*InPrettyNames = params.InPrettyNames;
	if (OutPathNames != nullptr)
		*OutPathNames = params.OutPathNames;
	if (OutPrettyNames != nullptr)
		*OutPrettyNames = params.OutPrettyNames;
}


// Function GbxTest.TestLibrary.DiscoverAssets
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>          PathNames                      (Parm, OutParm, ZeroConstructor)
// TArray<class FString>          PrettyNames                    (Parm, OutParm, ZeroConstructor)
// TArray<class FString>          Directories                    (Parm, ZeroConstructor)
// TArray<class UClass*>          Classes                        (Parm, ZeroConstructor)
// TArray<class UClass*>          ExcludeRecursiveClasses        (Parm, ZeroConstructor)
// bool                           bRecursiveDirectories          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRecursiveClasses              (Parm, ZeroConstructor, IsPlainOldData)

void UTestLibrary::STATIC_DiscoverAssets(TArray<class FString> Directories, TArray<class UClass*> Classes, TArray<class UClass*> ExcludeRecursiveClasses, bool bRecursiveDirectories, bool bRecursiveClasses, TArray<class FString>* PathNames, TArray<class FString>* PrettyNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.DiscoverAssets");

	UTestLibrary_DiscoverAssets_Params params;
	params.Directories = Directories;
	params.Classes = Classes;
	params.ExcludeRecursiveClasses = ExcludeRecursiveClasses;
	params.bRecursiveDirectories = bRecursiveDirectories;
	params.bRecursiveClasses = bRecursiveClasses;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathNames != nullptr)
		*PathNames = params.PathNames;
	if (PrettyNames != nullptr)
		*PrettyNames = params.PrettyNames;
}


// Function GbxTest.TestLibrary.CreateLocalCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  CollectionName                 (Parm, ZeroConstructor)
// class FString                  ParentName                     (Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UTestLibrary::STATIC_CreateLocalCollection(const class FString& CollectionName, const class FString& ParentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.CreateLocalCollection");

	UTestLibrary_CreateLocalCollection_Params params;
	params.CollectionName = CollectionName;
	params.ParentName = ParentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrary.ContainsSubPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  Path                           (Parm, ZeroConstructor)
// class FString                  SubPath                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrary::STATIC_ContainsSubPath(const class FString& Path, const class FString& SubPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.ContainsSubPath");

	UTestLibrary_ContainsSubPath_Params params;
	params.Path = Path;
	params.SubPath = SubPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrary.ContainsObjectTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FObjectTag>      ObjectTags                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FString                  Category                       (Parm, ZeroConstructor)
// class FString                  Name                           (Parm, ZeroConstructor)
// bool                           bExactCategory                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCaseSensitiveCategory         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bExactName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCaseSensitiveName             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrary::STATIC_ContainsObjectTag(const class FString& Category, const class FString& Name, bool bExactCategory, bool bCaseSensitiveCategory, bool bExactName, bool bCaseSensitiveName, TArray<struct FObjectTag>* ObjectTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.ContainsObjectTag");

	UTestLibrary_ContainsObjectTag_Params params;
	params.Category = Category;
	params.Name = Name;
	params.bExactCategory = bExactCategory;
	params.bCaseSensitiveCategory = bCaseSensitiveCategory;
	params.bExactName = bExactName;
	params.bCaseSensitiveName = bCaseSensitiveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectTags != nullptr)
		*ObjectTags = params.ObjectTags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrary.CollectionExistsEx
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  CollectionName                 (Parm, ZeroConstructor)
// TEnumAsByte<ECollectionType>   CollectionType                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrary::STATIC_CollectionExistsEx(const class FString& CollectionName, TEnumAsByte<ECollectionType> CollectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.CollectionExistsEx");

	UTestLibrary_CollectionExistsEx_Params params;
	params.CollectionName = CollectionName;
	params.CollectionType = CollectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrary.CollectionExists
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  CollectionName                 (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrary::STATIC_CollectionExists(const class FString& CollectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.CollectionExists");

	UTestLibrary_CollectionExists_Params params;
	params.CollectionName = CollectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrary.AddItemToCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  CollectionName                 (Parm, ZeroConstructor)
// class FString                  ObjectName                     (Parm, ZeroConstructor)

void UTestLibrary::STATIC_AddItemToCollection(const class FString& CollectionName, const class FString& ObjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.AddItemToCollection");

	UTestLibrary_AddItemToCollection_Params params;
	params.CollectionName = CollectionName;
	params.ObjectName = ObjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrary.AddArrayToCollection
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  CollectionName                 (Parm, ZeroConstructor)
// TArray<class FString>          objectNames                    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTestLibrary::STATIC_AddArrayToCollection(const class FString& CollectionName, TArray<class FString>* objectNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrary.AddArrayToCollection");

	UTestLibrary_AddArrayToCollection_Params params;
	params.CollectionName = CollectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (objectNames != nullptr)
		*objectNames = params.objectNames;
}


// Function GbxTest.TestLibraryContent.LoadAssetTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ObjectPath                     (Parm, ZeroConstructor)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* UTestLibraryContent::STATIC_LoadAssetTexture(const class FString& ObjectPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.LoadAssetTexture");

	UTestLibraryContent_LoadAssetTexture_Params params;
	params.ObjectPath = ObjectPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibraryContent.LoadAssetStaticMesh
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ObjectPath                     (Parm, ZeroConstructor)
// class UStaticMesh*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMesh* UTestLibraryContent::STATIC_LoadAssetStaticMesh(const class FString& ObjectPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.LoadAssetStaticMesh");

	UTestLibraryContent_LoadAssetStaticMesh_Params params;
	params.ObjectPath = ObjectPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibraryContent.LoadAssetSkeletalMesh
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ObjectPath                     (Parm, ZeroConstructor)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* UTestLibraryContent::STATIC_LoadAssetSkeletalMesh(const class FString& ObjectPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.LoadAssetSkeletalMesh");

	UTestLibraryContent_LoadAssetSkeletalMesh_Params params;
	params.ObjectPath = ObjectPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibraryContent.LoadAssetParticleSystem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ObjectPath                     (Parm, ZeroConstructor)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* UTestLibraryContent::STATIC_LoadAssetParticleSystem(const class FString& ObjectPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.LoadAssetParticleSystem");

	UTestLibraryContent_LoadAssetParticleSystem_Params params;
	params.ObjectPath = ObjectPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibraryContent.LoadAssetMaterial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ObjectPath                     (Parm, ZeroConstructor)
// class UMaterial*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterial* UTestLibraryContent::STATIC_LoadAssetMaterial(const class FString& ObjectPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.LoadAssetMaterial");

	UTestLibraryContent_LoadAssetMaterial_Params params;
	params.ObjectPath = ObjectPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibraryContent.GetTestInfoTexture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture*                Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTestInfoTexture        Info                           (Parm, OutParm)

void UTestLibraryContent::STATIC_GetTestInfoTexture(class UTexture* Asset, struct FTestInfoTexture* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoTexture");

	UTestLibraryContent_GetTestInfoTexture_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
}


// Function GbxTest.TestLibraryContent.GetTestInfoStaticMeshLOD
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStaticMesh*             Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            LODIndex                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTestInfoMeshLOD        Info                           (Parm, OutParm)

void UTestLibraryContent::STATIC_GetTestInfoStaticMeshLOD(class UStaticMesh* Asset, int LODIndex, struct FTestInfoMeshLOD* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoStaticMeshLOD");

	UTestLibraryContent_GetTestInfoStaticMeshLOD_Params params;
	params.Asset = Asset;
	params.LODIndex = LODIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
}


// Function GbxTest.TestLibraryContent.GetTestInfoStaticMesh
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStaticMesh*             Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTestInfoMeshLODSummary LODSummary                     (Parm, OutParm)
// struct FTestInfoMesh           Mesh                           (Parm, OutParm)
// struct FTestInfoStaticMesh     StaticMesh                     (Parm, OutParm)

void UTestLibraryContent::STATIC_GetTestInfoStaticMesh(class UStaticMesh* Asset, struct FTestInfoMeshLODSummary* LODSummary, struct FTestInfoMesh* Mesh, struct FTestInfoStaticMesh* StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoStaticMesh");

	UTestLibraryContent_GetTestInfoStaticMesh_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LODSummary != nullptr)
		*LODSummary = params.LODSummary;
	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;
}


// Function GbxTest.TestLibraryContent.GetTestInfoSkeletalMeshLOD
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMesh*           Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            LODIndex                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTestInfoMeshLOD        Info                           (Parm, OutParm)

void UTestLibraryContent::STATIC_GetTestInfoSkeletalMeshLOD(class USkeletalMesh* Asset, int LODIndex, struct FTestInfoMeshLOD* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoSkeletalMeshLOD");

	UTestLibraryContent_GetTestInfoSkeletalMeshLOD_Params params;
	params.Asset = Asset;
	params.LODIndex = LODIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
}


// Function GbxTest.TestLibraryContent.GetTestInfoSkeletalMesh
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMesh*           Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTestInfoMeshLODSummary LODSummary                     (Parm, OutParm)
// struct FTestInfoMesh           Mesh                           (Parm, OutParm)
// struct FTestInfoSkeletalMesh   SkeletalMesh                   (Parm, OutParm)

void UTestLibraryContent::STATIC_GetTestInfoSkeletalMesh(class USkeletalMesh* Asset, struct FTestInfoMeshLODSummary* LODSummary, struct FTestInfoMesh* Mesh, struct FTestInfoSkeletalMesh* SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoSkeletalMesh");

	UTestLibraryContent_GetTestInfoSkeletalMesh_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LODSummary != nullptr)
		*LODSummary = params.LODSummary;
	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
}


// Function GbxTest.TestLibraryContent.GetTestInfoParticleSystem
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UParticleSystem*         Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTestInfoParticleSystem Info                           (Parm, OutParm)

void UTestLibraryContent::STATIC_GetTestInfoParticleSystem(class UParticleSystem* Asset, struct FTestInfoParticleSystem* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoParticleSystem");

	UTestLibraryContent_GetTestInfoParticleSystem_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
}


// Function GbxTest.TestLibraryContent.GetTestInfoParticleEmitter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UParticleSystem*         Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            EmitterIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTestInfoParticleEmitter Info                           (Parm, OutParm)

void UTestLibraryContent::STATIC_GetTestInfoParticleEmitter(class UParticleSystem* Asset, int EmitterIndex, struct FTestInfoParticleEmitter* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoParticleEmitter");

	UTestLibraryContent_GetTestInfoParticleEmitter_Params params;
	params.Asset = Asset;
	params.EmitterIndex = EmitterIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
}


// Function GbxTest.TestLibraryContent.GetTestInfoMaterial
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterial*               Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTestInfoMaterial       Info                           (Parm, OutParm)

void UTestLibraryContent::STATIC_GetTestInfoMaterial(class UMaterial* Asset, struct FTestInfoMaterial* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetTestInfoMaterial");

	UTestLibraryContent_GetTestInfoMaterial_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
}


// Function GbxTest.TestLibraryContent.GetAllPersistentGameMaps
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>          OutMapNames                    (Parm, OutParm, ZeroConstructor)
// bool                           ShortNamesOnly                 (Parm, ZeroConstructor, IsPlainOldData)

void UTestLibraryContent::STATIC_GetAllPersistentGameMaps(bool ShortNamesOnly, TArray<class FString>* OutMapNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.GetAllPersistentGameMaps");

	UTestLibraryContent_GetAllPersistentGameMaps_Params params;
	params.ShortNamesOnly = ShortNamesOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMapNames != nullptr)
		*OutMapNames = params.OutMapNames;
}


// Function GbxTest.TestLibraryContent.ContentAuditSingleObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UTestLibraryContent::STATIC_ContentAuditSingleObject(class UObject* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryContent.ContentAuditSingleObject");

	UTestLibraryContent_ContentAuditSingleObject_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibraryPerformance.WaitForFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumFrames                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UTestLibraryPerformance::STATIC_WaitForFrames(class UObject* WorldContextObject, int NumFrames, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryPerformance.WaitForFrames");

	UTestLibraryPerformance_WaitForFrames_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NumFrames = NumFrames;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibraryPerformance.GenerateLevelGrid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         GridLocations                  (Parm, OutParm, ZeroConstructor)
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          GridSize                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWalkableOnly                  (Parm, ZeroConstructor, IsPlainOldData)

void UTestLibraryPerformance::STATIC_GenerateLevelGrid(class APawn* Pawn, float GridSize, bool bWalkableOnly, TArray<struct FVector>* GridLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibraryPerformance.GenerateLevelGrid");

	UTestLibraryPerformance_GenerateLevelGrid_Params params;
	params.Pawn = Pawn;
	params.GridSize = GridSize;
	params.bWalkableOnly = bWalkableOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GridLocations != nullptr)
		*GridLocations = params.GridLocations;
}


// Function GbxTest.TestLibrarySimulation.TestIntInRangeFromPlayMap
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Min                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (Parm, ZeroConstructor, IsPlainOldData)
// ETestIssueType                 IssueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)

void UTestLibrarySimulation::STATIC_TestIntInRangeFromPlayMap(int Value, int Min, int Max, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.TestIntInRangeFromPlayMap");

	UTestLibrarySimulation_TestIntInRangeFromPlayMap_Params params;
	params.Value = Value;
	params.Min = Min;
	params.Max = Max;
	params.IssueType = IssueType;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.TestIntCompareFromPlayMap
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Other                          (Parm, ZeroConstructor, IsPlainOldData)
// ECompare                       Comparison                     (Parm, ZeroConstructor, IsPlainOldData)
// ETestIssueType                 IssueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)

void UTestLibrarySimulation::STATIC_TestIntCompareFromPlayMap(int Value, int Other, ECompare Comparison, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.TestIntCompareFromPlayMap");

	UTestLibrarySimulation_TestIntCompareFromPlayMap_Params params;
	params.Value = Value;
	params.Other = Other;
	params.Comparison = Comparison;
	params.IssueType = IssueType;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.TestFloatInRangeFromPlayMap
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Min                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData)
// ETestIssueType                 IssueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)

void UTestLibrarySimulation::STATIC_TestFloatInRangeFromPlayMap(float Value, float Min, float Max, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.TestFloatInRangeFromPlayMap");

	UTestLibrarySimulation_TestFloatInRangeFromPlayMap_Params params;
	params.Value = Value;
	params.Min = Min;
	params.Max = Max;
	params.IssueType = IssueType;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.TestFloatCompareFromPlayMap
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Other                          (Parm, ZeroConstructor, IsPlainOldData)
// ECompare                       Comparison                     (Parm, ZeroConstructor, IsPlainOldData)
// ETestIssueType                 IssueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)

void UTestLibrarySimulation::STATIC_TestFloatCompareFromPlayMap(float Value, float Other, ECompare Comparison, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage, float Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.TestFloatCompareFromPlayMap");

	UTestLibrarySimulation_TestFloatCompareFromPlayMap_Params params;
	params.Value = Value;
	params.Other = Other;
	params.Comparison = Comparison;
	params.IssueType = IssueType;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.TestBoolIsTrueFromPlayMap
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ETestIssueType                 IssueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)

void UTestLibrarySimulation::STATIC_TestBoolIsTrueFromPlayMap(bool Value, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.TestBoolIsTrueFromPlayMap");

	UTestLibrarySimulation_TestBoolIsTrueFromPlayMap_Params params;
	params.Value = Value;
	params.IssueType = IssueType;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.TestBoolIsFalseFromPlayMap
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ETestIssueType                 IssueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)

void UTestLibrarySimulation::STATIC_TestBoolIsFalseFromPlayMap(bool Value, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.TestBoolIsFalseFromPlayMap");

	UTestLibrarySimulation_TestBoolIsFalseFromPlayMap_Params params;
	params.Value = Value;
	params.IssueType = IssueType;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.StopPlayTest
// (Final, Native, Static, Public, BlueprintCallable)

void UTestLibrarySimulation::STATIC_StopPlayTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.StopPlayTest");

	UTestLibrarySimulation_StopPlayTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.SimulatePlayerInput
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FGbxTestInputAction> InputDescription               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          PreDelay                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PostDelay                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UTestLibrarySimulation::STATIC_SimulatePlayerInput(class UObject* WorldContextObject, TArray<struct FGbxTestInputAction> InputDescription, float PreDelay, float PostDelay, const struct FLatentActionInfo& LatentInfo, class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.SimulatePlayerInput");

	UTestLibrarySimulation_SimulatePlayerInput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InputDescription = InputDescription;
	params.PreDelay = PreDelay;
	params.PostDelay = PostDelay;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;
}


// Function GbxTest.TestLibrarySimulation.SetReportContext
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGbxProbeId>     AssetContexts                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTestLibrarySimulation::STATIC_SetReportContext(class UObject* WorldContextObject, TArray<struct FGbxProbeId> AssetContexts)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.SetReportContext");

	UTestLibrarySimulation_SetReportContext_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AssetContexts = AssetContexts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.SetReceiveBackgroundInput
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           AllowBackgroundInput           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrarySimulation::STATIC_SetReceiveBackgroundInput(bool AllowBackgroundInput, class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.SetReceiveBackgroundInput");

	UTestLibrarySimulation_SetReceiveBackgroundInput_Params params;
	params.AllowBackgroundInput = AllowBackgroundInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrarySimulation.ResetTestTimeout
// (Final, Native, Static, Public, BlueprintCallable)

void UTestLibrarySimulation::STATIC_ResetTestTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.ResetTestTimeout");

	UTestLibrarySimulation_ResetTestTimeout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.ReportResultFromPlayMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bSucceeded                     (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)
// struct FGbxProbeId             AssetContext                   (Parm)
// ETestIssueType                 FailedIssueType                (Parm, ZeroConstructor, IsPlainOldData)

void UTestLibrarySimulation::STATIC_ReportResultFromPlayMap(bool bSucceeded, const class FString& IssueCategory, const class FString& IssueMessage, const struct FGbxProbeId& AssetContext, ETestIssueType FailedIssueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.ReportResultFromPlayMap");

	UTestLibrarySimulation_ReportResultFromPlayMap_Params params;
	params.bSucceeded = bSucceeded;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;
	params.AssetContext = AssetContext;
	params.FailedIssueType = FailedIssueType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.ReportIssueFromPlayMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ETestIssueType                 IssueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)

void UTestLibrarySimulation::STATIC_ReportIssueFromPlayMap(ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.ReportIssueFromPlayMap");

	UTestLibrarySimulation_ReportIssueFromPlayMap_Params params;
	params.IssueType = IssueType;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.PushWorldContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UTestLibrarySimulation::STATIC_PushWorldContext(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.PushWorldContext");

	UTestLibrarySimulation_PushWorldContext_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.PushAssetContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGbxProbeId             ID                             (Parm)

void UTestLibrarySimulation::STATIC_PushAssetContext(const struct FGbxProbeId& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.PushAssetContext");

	UTestLibrarySimulation_PushAssetContext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.PopWorldContext
// (Final, Native, Static, Public, BlueprintCallable)

void UTestLibrarySimulation::STATIC_PopWorldContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.PopWorldContext");

	UTestLibrarySimulation_PopWorldContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.PopAssetContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGbxProbeId             ID                             (Parm)

void UTestLibrarySimulation::STATIC_PopAssetContext(const struct FGbxProbeId& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.PopAssetContext");

	UTestLibrarySimulation_PopAssetContext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestLibrarySimulation.IsPlayMapRunning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrarySimulation::STATIC_IsPlayMapRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.IsPlayMapRunning");

	UTestLibrarySimulation_IsPlayMapRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrarySimulation.IsHLQNoClipEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrarySimulation::STATIC_IsHLQNoClipEnabled(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.IsHLQNoClipEnabled");

	UTestLibrarySimulation_IsHLQNoClipEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrarySimulation.IsGodEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrarySimulation::STATIC_IsGodEnabled(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.IsGodEnabled");

	UTestLibrarySimulation_IsGodEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrarySimulation.IsGhostEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrarySimulation::STATIC_IsGhostEnabled(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.IsGhostEnabled");

	UTestLibrarySimulation_IsGhostEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrarySimulation.IsDemiGodEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrarySimulation::STATIC_IsDemiGodEnabled(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.IsDemiGodEnabled");

	UTestLibrarySimulation_IsDemiGodEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrarySimulation.GetPolicyForPlayMap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTestPolicySimulation*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTestPolicySimulation* UTestLibrarySimulation::STATIC_GetPolicyForPlayMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.GetPolicyForPlayMap");

	UTestLibrarySimulation_GetPolicyForPlayMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxTest.TestLibrarySimulation.CanReceiveBackgroundInput
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestLibrarySimulation::STATIC_CanReceiveBackgroundInput(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestLibrarySimulation.CanReceiveBackgroundInput");

	UTestLibrarySimulation_CanReceiveBackgroundInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;

	return params.ReturnValue;
}


// Function GbxTest.TestPolicy.TestIntInRange
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Min                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (Parm, ZeroConstructor, IsPlainOldData)
// ETestIssueType                 IssueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)

void UTestPolicy::TestIntInRange(int Value, int Min, int Max, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestIntInRange");

	UTestPolicy_TestIntInRange_Params params;
	params.Value = Value;
	params.Min = Min;
	params.Max = Max;
	params.IssueType = IssueType;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicy.TestIntCompare
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Other                          (Parm, ZeroConstructor, IsPlainOldData)
// ECompare                       Comparison                     (Parm, ZeroConstructor, IsPlainOldData)
// ETestIssueType                 IssueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)

void UTestPolicy::TestIntCompare(int Value, int Other, ECompare Comparison, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestIntCompare");

	UTestPolicy_TestIntCompare_Params params;
	params.Value = Value;
	params.Other = Other;
	params.Comparison = Comparison;
	params.IssueType = IssueType;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicy.TestFloatInRange
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Min                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData)
// ETestIssueType                 IssueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)

void UTestPolicy::TestFloatInRange(float Value, float Min, float Max, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestFloatInRange");

	UTestPolicy_TestFloatInRange_Params params;
	params.Value = Value;
	params.Min = Min;
	params.Max = Max;
	params.IssueType = IssueType;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicy.TestFloatCompare
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Other                          (Parm, ZeroConstructor, IsPlainOldData)
// ECompare                       Comparison                     (Parm, ZeroConstructor, IsPlainOldData)
// ETestIssueType                 IssueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)

void UTestPolicy::TestFloatCompare(float Value, float Other, ECompare Comparison, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage, float Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestFloatCompare");

	UTestPolicy_TestFloatCompare_Params params;
	params.Value = Value;
	params.Other = Other;
	params.Comparison = Comparison;
	params.IssueType = IssueType;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicy.TestBoolIsTrue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ETestIssueType                 IssueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)

void UTestPolicy::TestBoolIsTrue(bool Value, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestBoolIsTrue");

	UTestPolicy_TestBoolIsTrue_Params params;
	params.Value = Value;
	params.IssueType = IssueType;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicy.TestBoolIsFalse
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ETestIssueType                 IssueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)

void UTestPolicy::TestBoolIsFalse(bool Value, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestBoolIsFalse");

	UTestPolicy_TestBoolIsFalse_Params params;
	params.Value = Value;
	params.IssueType = IssueType;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicy.TestAssetTraits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTestPolicy::TestAssetTraits(class UObject* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestAssetTraits");

	UTestPolicy_TestAssetTraits_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicy.TestAssetAudit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTestPolicy::TestAssetAudit(class UObject* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.TestAssetAudit");

	UTestPolicy_TestAssetAudit_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicy.SetReportContext
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGbxProbeId>     AssetContexts                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTestPolicy::SetReportContext(class UObject* WorldContextObject, TArray<struct FGbxProbeId> AssetContexts)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.SetReportContext");

	UTestPolicy_SetReportContext_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AssetContexts = AssetContexts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicy.ReportResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSucceeded                     (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)
// struct FGbxProbeId             AssetContext                   (Parm)
// ETestIssueType                 FailedIssueType                (Parm, ZeroConstructor, IsPlainOldData)

void UTestPolicy::ReportResult(bool bSucceeded, const class FString& IssueCategory, const class FString& IssueMessage, const struct FGbxProbeId& AssetContext, ETestIssueType FailedIssueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.ReportResult");

	UTestPolicy_ReportResult_Params params;
	params.bSucceeded = bSucceeded;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;
	params.AssetContext = AssetContext;
	params.FailedIssueType = FailedIssueType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicy.ReportIssue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ETestIssueType                 IssueType                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  IssueCategory                  (Parm, ZeroConstructor)
// class FString                  IssueMessage                   (Parm, ZeroConstructor)

void UTestPolicy::ReportIssue(ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.ReportIssue");

	UTestPolicy_ReportIssue_Params params;
	params.IssueType = IssueType;
	params.IssueCategory = IssueCategory;
	params.IssueMessage = IssueMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicy.PushAssetContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGbxProbeId             ID                             (Parm)

void UTestPolicy::PushAssetContext(const struct FGbxProbeId& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.PushAssetContext");

	UTestPolicy_PushAssetContext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicy.PopAssetContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGbxProbeId             ID                             (Parm)

void UTestPolicy::PopAssetContext(const struct FGbxProbeId& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.PopAssetContext");

	UTestPolicy_PopAssetContext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicy.OnRunTestCommand
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class FString                  TestCommand                    (Parm, ZeroConstructor)

void UTestPolicy::OnRunTestCommand(const class FString& TestCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.OnRunTestCommand");

	UTestPolicy_OnRunTestCommand_Params params;
	params.TestCommand = TestCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicy.OnGetTestCommands
// (Native, Event, Protected, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TArray<class FString>          TestCommands                   (Parm, OutParm, ZeroConstructor)
// TArray<class FString>          PrettyNames                    (Parm, OutParm, ZeroConstructor)

void UTestPolicy::OnGetTestCommands(TArray<class FString>* TestCommands, TArray<class FString>* PrettyNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.OnGetTestCommands");

	UTestPolicy_OnGetTestCommands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TestCommands != nullptr)
		*TestCommands = params.TestCommands;
	if (PrettyNames != nullptr)
		*PrettyNames = params.PrettyNames;
}


// Function GbxTest.TestPolicy.ClearSavedTestCommand
// (Final, Native, Public, BlueprintCallable)

void UTestPolicy::ClearSavedTestCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicy.ClearSavedTestCommand");

	UTestPolicy_ClearSavedTestCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicyContent.OnValidForImport
// (Native, Event, Protected, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UObject*                 ImportObject                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTestPolicyContent::OnValidForImport(class UObject* ImportObject, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicyContent.OnValidForImport");

	UTestPolicyContent_OnValidForImport_Params params;
	params.ImportObject = ImportObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GbxTest.TestPolicySimulation.StopPlay
// (Final, Native, Public, BlueprintCallable)

void UTestPolicySimulation::StopPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicySimulation.StopPlay");

	UTestPolicySimulation_StopPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicySimulation.RunTestDrivers
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UClass*>          TestDrivers                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Timeout                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeLimit                      (Parm, ZeroConstructor, IsPlainOldData)

void UTestPolicySimulation::RunTestDrivers(TArray<class UClass*> TestDrivers, float Timeout, float TimeLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicySimulation.RunTestDrivers");

	UTestPolicySimulation_RunTestDrivers_Params params;
	params.TestDrivers = TestDrivers;
	params.Timeout = Timeout;
	params.TimeLimit = TimeLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicySimulation.PlayTestMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  MapName                        (Parm, ZeroConstructor)
// TArray<class UClass*>          TestDrivers                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Timeout                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeLimit                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoadMapOnce                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoadMapIfNotLoaded            (Parm, ZeroConstructor, IsPlainOldData)

void UTestPolicySimulation::PlayTestMap(const class FString& MapName, TArray<class UClass*> TestDrivers, float Timeout, float TimeLimit, bool bLoadMapOnce, bool bLoadMapIfNotLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicySimulation.PlayTestMap");

	UTestPolicySimulation_PlayTestMap_Params params;
	params.MapName = MapName;
	params.TestDrivers = TestDrivers;
	params.Timeout = Timeout;
	params.TimeLimit = TimeLimit;
	params.bLoadMapOnce = bLoadMapOnce;
	params.bLoadMapIfNotLoaded = bLoadMapIfNotLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicySimulation.PlayMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  MapName                        (Parm, ZeroConstructor)
// TArray<class UClass*>          TestDrivers                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Timeout                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeLimit                      (Parm, ZeroConstructor, IsPlainOldData)

void UTestPolicySimulation::PlayMap(const class FString& MapName, TArray<class UClass*> TestDrivers, float Timeout, float TimeLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicySimulation.PlayMap");

	UTestPolicySimulation_PlayMap_Params params;
	params.MapName = MapName;
	params.TestDrivers = TestDrivers;
	params.Timeout = Timeout;
	params.TimeLimit = TimeLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicySimulation.OnMapTraveled
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWorld*                  NewWorld                       (Parm, ZeroConstructor, IsPlainOldData)

void UTestPolicySimulation::OnMapTraveled(class UWorld* NewWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicySimulation.OnMapTraveled");

	UTestPolicySimulation_OnMapTraveled_Params params;
	params.NewWorld = NewWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicySimulation.IntendToMapTravel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           WillMapTravel                  (Parm, ZeroConstructor, IsPlainOldData)

void UTestPolicySimulation::IntendToMapTravel(bool WillMapTravel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicySimulation.IntendToMapTravel");

	UTestPolicySimulation_IntendToMapTravel_Params params;
	params.WillMapTravel = WillMapTravel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTest.TestPolicySimulation.AddTestDriver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  TestDriver                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTestPolicySimulation::AddTestDriver(class UClass* TestDriver)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTest.TestPolicySimulation.AddTestDriver");

	UTestPolicySimulation_AddTestDriver_Params params;
	params.TestDriver = TestDriver;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
