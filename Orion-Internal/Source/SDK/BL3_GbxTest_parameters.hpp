#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxTest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxTest.AutomationMenuHelper.PrevPage
struct UAutomationMenuHelper_PrevPage_Params
{
};

// Function GbxTest.AutomationMenuHelper.PageName
struct UAutomationMenuHelper_PageName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.AutomationMenuHelper.NumPages
struct UAutomationMenuHelper_NumPages_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.AutomationMenuHelper.NextPage
struct UAutomationMenuHelper_NextPage_Params
{
};

// Function GbxTest.AutomationMenuHelper.NextFocus
struct UAutomationMenuHelper_NextFocus_Params
{
	EAutomationUIDirection                             Direction;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.AutomationMenuHelper.MenuName
struct UAutomationMenuHelper_MenuName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.AutomationMenuHelper.HasOpenMenu
struct UAutomationMenuHelper_HasOpenMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.AutomationMenuHelper.FocusName
struct UAutomationMenuHelper_FocusName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.AutomationMenuHelper.FocusInfo
struct UAutomationMenuHelper_FocusInfo_Params
{
	struct FAutomationMenuFocusInfo                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxTest.AutomationMenuHelper.CurrentDepth
struct UAutomationMenuHelper_CurrentDepth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.AutomationMenuHelper.CreateAutomationMenuHelper
struct UAutomationMenuHelper_CreateAutomationMenuHelper_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SimulateAllInputs;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAutomationMenuHelper*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.AutomationMenuHelper.BackOut
struct UAutomationMenuHelper_BackOut_Params
{
};

// Function GbxTest.AutomationMenuHelper.ActuateFocus
struct UAutomationMenuHelper_ActuateFocus_Params
{
	EAutomationUIAction                                Action;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.AutomationUILibrary.ForceDisableTutorials
struct UAutomationUILibrary_ForceDisableTutorials_Params
{
	bool                                               ForceDisable;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.PerfMapCapture.SavePerfMapCapturesFromConfiguration
struct UPerfMapCapture_SavePerfMapCapturesFromConfiguration_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Path;                                                     // (Parm, ZeroConstructor)
	struct FMapParameters                              Configuration;                                            // (Parm)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GbxTest.PerfMapCapture.SavePerfMapCaptures
struct UPerfMapCapture_SavePerfMapCaptures_Params
{
	class UObject*                                     World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Path;                                                     // (Parm, ZeroConstructor)
	float                                              Density;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLighting;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecular;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gamma;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeZ;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      OutputPattern;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.PerformanceSnapshotCollector.ResetSnapshotProviders
struct UPerformanceSnapshotCollector_ResetSnapshotProviders_Params
{
};

// Function GbxTest.PerformanceSnapshotCollector.CreatePerformanceSnapshotCollector
struct UPerformanceSnapshotCollector_CreatePerformanceSnapshotCollector_Params
{
	class FString                                      StatSection;                                              // (Parm, ZeroConstructor)
	ESnapshotExecOutput                                ExecOut;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPerformanceSnapshotCollector*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.PerformanceSnapshotCollector.CollectSnapshot
struct UPerformanceSnapshotCollector_CollectSnapshot_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReportContext;                                            // (Parm, ZeroConstructor)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GbxTest.PerformanceSnapshotCollector.CollectProbeSnapshot
struct UPerformanceSnapshotCollector_CollectProbeSnapshot_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReportContext;                                            // (Parm, ZeroConstructor)
	struct FGbxProbeId                                 ProbeId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      Test;                                                     // (Parm, ZeroConstructor)
	TArray<struct FGbxProbeExtraData>                  ExtraDataArray;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GbxTest.MatcherFunctionality.Size
struct UMatcherFunctionality_Size_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.MatcherFunctionality.Ready
struct UMatcherFunctionality_Ready_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.MatcherFunctionality.GetSuffix
struct UMatcherFunctionality_GetSuffix_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxTest.MatcherFunctionality.GetPrefix
struct UMatcherFunctionality_GetPrefix_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxTest.MatcherFunctionality.GetPosition
struct UMatcherFunctionality_GetPosition_Params
{
	int                                                Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.MatcherFunctionality.GetMatch
struct UMatcherFunctionality_GetMatch_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxTest.MatcherFunctionality.GetLength
struct UMatcherFunctionality_GetLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.MatcherFunctionality.GetAtIndex
struct UMatcherFunctionality_GetAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxTest.MatcherFunctionality.Empty
struct UMatcherFunctionality_Empty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.RegexFunctionality.RegexSearch
struct URegexFunctionality_RegexSearch_Params
{
	struct FRegex                                      Regex;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UMatcherFunctionality*                       Matcher;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Input;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.RegexFunctionality.RegexRepleace
struct URegexFunctionality_RegexRepleace_Params
{
	struct FRegex                                      Regex;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      Input;                                                    // (Parm, ZeroConstructor)
	class FString                                      Repleacement;                                             // (Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxTest.RegexFunctionality.RegexMatch2
struct URegexFunctionality_RegexMatch2_Params
{
	struct FRegex                                      Regex;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UMatcherFunctionality*                       Matcher;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Input;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.RegexFunctionality.RegexMatch
struct URegexFunctionality_RegexMatch_Params
{
	struct FRegex                                      Regex;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      Input;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.RegexFunctionality.FindAll
struct URegexFunctionality_FindAll_Params
{
	struct FRegex                                      Regex;                                                    // (Parm)
	class FString                                      String;                                                   // (Parm, ZeroConstructor)
	TArray<class FString>                              Return;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function GbxTest.RegexFunctionality.Assign2
struct URegexFunctionality_Assign2_Params
{
	struct FRegex                                      Regex;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      Pattern;                                                  // (Parm, ZeroConstructor)
	ESyntaxOption                                      Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.RegexFunctionality.Assign
struct URegexFunctionality_Assign_Params
{
	struct FRegex                                      Regex;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      Pattern;                                                  // (Parm, ZeroConstructor)
};

// Function GbxTest.TestLibrary.TakeScreenshot
struct UTestLibrary_TakeScreenshot_Params
{
	class FString                                      CustomFilename;                                           // (ConstParm, Parm, ZeroConstructor)
	struct FVector2D                                   OverrideResolution;                                       // (ConstParm, Parm, IsPlainOldData)
	bool                                               ShowUI;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AddUniqueSuffix;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestLibrary.SortStrings
struct UTestLibrary_SortStrings_Params
{
	TArray<class FString>                              Values;                                                   // (Parm, ZeroConstructor)
	bool                                               Descending;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxTest.TestLibrary.SortObjectsByName
struct UTestLibrary_SortObjectsByName_Params
{
	TArray<class UObject*>                             Values;                                                   // (Parm, ZeroConstructor)
	bool                                               Descending;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxTest.TestLibrary.SortIntegers
struct UTestLibrary_SortIntegers_Params
{
	TArray<int>                                        Values;                                                   // (Parm, ZeroConstructor)
	bool                                               Descending;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxTest.TestLibrary.SortFloats
struct UTestLibrary_SortFloats_Params
{
	TArray<float>                                      Values;                                                   // (Parm, ZeroConstructor)
	bool                                               Descending;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxTest.TestLibrary.SimulateInputKey
struct UTestLibrary_SimulateInputKey_Params
{
	class APlayerController*                           PlayerController;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           EVENTTYPE;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AmountDepressed;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestLibrary.SimulateInputAxis
struct UTestLibrary_SimulateInputAxis_Params
{
	class APlayerController*                           PlayerController;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GbxTest.TestLibrary.RemoveItemFromCollection
struct UTestLibrary_RemoveItemFromCollection_Params
{
	class FString                                      CollectionName;                                           // (Parm, ZeroConstructor)
	class FString                                      ObjectName;                                               // (Parm, ZeroConstructor)
};

// Function GbxTest.TestLibrary.RemoveArrayFromCollection
struct UTestLibrary_RemoveArrayFromCollection_Params
{
	class FString                                      CollectionName;                                           // (Parm, ZeroConstructor)
	TArray<class FString>                              objectNames;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxTest.TestLibrary.ReadFromIni
struct UTestLibrary_ReadFromIni_Params
{
	class FString                                      Section;                                                  // (ConstParm, Parm, ZeroConstructor)
	class FString                                      Key;                                                      // (ConstParm, Parm, ZeroConstructor)
	TArray<class FString>                              Values;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrary.MoveItemCollection
struct UTestLibrary_MoveItemCollection_Params
{
	class FString                                      fromCollection;                                           // (Parm, ZeroConstructor)
	class FString                                      toCollection;                                             // (Parm, ZeroConstructor)
	class FString                                      ObjectName;                                               // (Parm, ZeroConstructor)
};

// Function GbxTest.TestLibrary.MoveArrayCollection
struct UTestLibrary_MoveArrayCollection_Params
{
	class FString                                      fromCollection;                                           // (Parm, ZeroConstructor)
	class FString                                      toCollection;                                             // (Parm, ZeroConstructor)
	TArray<class FString>                              objectNames;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxTest.TestLibrary.LoadBlueprintAsset
struct UTestLibrary_LoadBlueprintAsset_Params
{
	class FString                                      Path;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     Object;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestLibrary.LoadAsset
struct UTestLibrary_LoadAsset_Params
{
	class FString                                      Path;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     Object;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestLibrary.IsEditorSession
struct UTestLibrary_IsEditorSession_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrary.IsAssetInCollectionEx
struct UTestLibrary_IsAssetInCollectionEx_Params
{
	class FString                                      CollectionName;                                           // (Parm, ZeroConstructor)
	TEnumAsByte<ECollectionType>                       CollectionType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ObjectName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrary.IsAssetInCollection
struct UTestLibrary_IsAssetInCollection_Params
{
	class FString                                      CollectionName;                                           // (Parm, ZeroConstructor)
	class FString                                      ObjectName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrary.GetWorldForActor
struct UTestLibrary_GetWorldForActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrary.GetTestDriversFromStrings
struct UTestLibrary_GetTestDriversFromStrings_Params
{
	TArray<class FString>                              Strings;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              TestDrivers;                                              // (Parm, OutParm, ZeroConstructor)
	class FString                                      UndiscoveredItems;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function GbxTest.TestLibrary.GetReferencedBlueprintClasses
struct UTestLibrary_GetReferencedBlueprintClasses_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Classes;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function GbxTest.TestLibrary.GetObjectTags
struct UTestLibrary_GetObjectTags_Params
{
	TArray<struct FObjectTag>                          ObjectTags;                                               // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestLibrary.GetAssetPath
struct UTestLibrary_GetAssetPath_Params
{
	class UObject*                                     Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      AssetPath;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GbxTest.TestLibrary.GetAssetName
struct UTestLibrary_GetAssetName_Params
{
	class FString                                      AssetPath;                                                // (Parm, ZeroConstructor)
	class FString                                      AssetName;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GbxTest.TestLibrary.FilterDiscoveredAssets
struct UTestLibrary_FilterDiscoveredAssets_Params
{
	TArray<class FString>                              InPathNames;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class FString>                              InPrettyNames;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class FString>                              OutPathNames;                                             // (Parm, OutParm, ZeroConstructor)
	TArray<class FString>                              OutPrettyNames;                                           // (Parm, OutParm, ZeroConstructor)
	class FString                                      AssetNamePrefix;                                          // (Parm, ZeroConstructor)
	class FString                                      AssetNamePostfix;                                         // (Parm, ZeroConstructor)
	class FString                                      AssetNameContains;                                        // (Parm, ZeroConstructor)
	class FString                                      AssetPathContains;                                        // (Parm, ZeroConstructor)
};

// Function GbxTest.TestLibrary.DiscoverAssets
struct UTestLibrary_DiscoverAssets_Params
{
	TArray<class FString>                              PathNames;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<class FString>                              PrettyNames;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<class FString>                              Directories;                                              // (Parm, ZeroConstructor)
	TArray<class UClass*>                              Classes;                                                  // (Parm, ZeroConstructor)
	TArray<class UClass*>                              ExcludeRecursiveClasses;                                  // (Parm, ZeroConstructor)
	bool                                               bRecursiveDirectories;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRecursiveClasses;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestLibrary.CreateLocalCollection
struct UTestLibrary_CreateLocalCollection_Params
{
	class FString                                      CollectionName;                                           // (Parm, ZeroConstructor)
	class FString                                      ParentName;                                               // (Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxTest.TestLibrary.ContainsSubPath
struct UTestLibrary_ContainsSubPath_Params
{
	class FString                                      Path;                                                     // (Parm, ZeroConstructor)
	class FString                                      SubPath;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrary.ContainsObjectTag
struct UTestLibrary_ContainsObjectTag_Params
{
	TArray<struct FObjectTag>                          ObjectTags;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FString                                      Category;                                                 // (Parm, ZeroConstructor)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	bool                                               bExactCategory;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCaseSensitiveCategory;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExactName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCaseSensitiveName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrary.CollectionExistsEx
struct UTestLibrary_CollectionExistsEx_Params
{
	class FString                                      CollectionName;                                           // (Parm, ZeroConstructor)
	TEnumAsByte<ECollectionType>                       CollectionType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrary.CollectionExists
struct UTestLibrary_CollectionExists_Params
{
	class FString                                      CollectionName;                                           // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrary.AddItemToCollection
struct UTestLibrary_AddItemToCollection_Params
{
	class FString                                      CollectionName;                                           // (Parm, ZeroConstructor)
	class FString                                      ObjectName;                                               // (Parm, ZeroConstructor)
};

// Function GbxTest.TestLibrary.AddArrayToCollection
struct UTestLibrary_AddArrayToCollection_Params
{
	class FString                                      CollectionName;                                           // (Parm, ZeroConstructor)
	TArray<class FString>                              objectNames;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxTest.TestLibraryContent.LoadAssetTexture
struct UTestLibraryContent_LoadAssetTexture_Params
{
	class FString                                      ObjectPath;                                               // (Parm, ZeroConstructor)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibraryContent.LoadAssetStaticMesh
struct UTestLibraryContent_LoadAssetStaticMesh_Params
{
	class FString                                      ObjectPath;                                               // (Parm, ZeroConstructor)
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibraryContent.LoadAssetSkeletalMesh
struct UTestLibraryContent_LoadAssetSkeletalMesh_Params
{
	class FString                                      ObjectPath;                                               // (Parm, ZeroConstructor)
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibraryContent.LoadAssetParticleSystem
struct UTestLibraryContent_LoadAssetParticleSystem_Params
{
	class FString                                      ObjectPath;                                               // (Parm, ZeroConstructor)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibraryContent.LoadAssetMaterial
struct UTestLibraryContent_LoadAssetMaterial_Params
{
	class FString                                      ObjectPath;                                               // (Parm, ZeroConstructor)
	class UMaterial*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibraryContent.GetTestInfoTexture
struct UTestLibraryContent_GetTestInfoTexture_Params
{
	class UTexture*                                    Asset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTestInfoTexture                            Info;                                                     // (Parm, OutParm)
};

// Function GbxTest.TestLibraryContent.GetTestInfoStaticMeshLOD
struct UTestLibraryContent_GetTestInfoStaticMeshLOD_Params
{
	class UStaticMesh*                                 Asset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LODIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTestInfoMeshLOD                            Info;                                                     // (Parm, OutParm)
};

// Function GbxTest.TestLibraryContent.GetTestInfoStaticMesh
struct UTestLibraryContent_GetTestInfoStaticMesh_Params
{
	class UStaticMesh*                                 Asset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTestInfoMeshLODSummary                     LODSummary;                                               // (Parm, OutParm)
	struct FTestInfoMesh                               Mesh;                                                     // (Parm, OutParm)
	struct FTestInfoStaticMesh                         StaticMesh;                                               // (Parm, OutParm)
};

// Function GbxTest.TestLibraryContent.GetTestInfoSkeletalMeshLOD
struct UTestLibraryContent_GetTestInfoSkeletalMeshLOD_Params
{
	class USkeletalMesh*                               Asset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LODIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTestInfoMeshLOD                            Info;                                                     // (Parm, OutParm)
};

// Function GbxTest.TestLibraryContent.GetTestInfoSkeletalMesh
struct UTestLibraryContent_GetTestInfoSkeletalMesh_Params
{
	class USkeletalMesh*                               Asset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTestInfoMeshLODSummary                     LODSummary;                                               // (Parm, OutParm)
	struct FTestInfoMesh                               Mesh;                                                     // (Parm, OutParm)
	struct FTestInfoSkeletalMesh                       SkeletalMesh;                                             // (Parm, OutParm)
};

// Function GbxTest.TestLibraryContent.GetTestInfoParticleSystem
struct UTestLibraryContent_GetTestInfoParticleSystem_Params
{
	class UParticleSystem*                             Asset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTestInfoParticleSystem                     Info;                                                     // (Parm, OutParm)
};

// Function GbxTest.TestLibraryContent.GetTestInfoParticleEmitter
struct UTestLibraryContent_GetTestInfoParticleEmitter_Params
{
	class UParticleSystem*                             Asset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EmitterIndex;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTestInfoParticleEmitter                    Info;                                                     // (Parm, OutParm)
};

// Function GbxTest.TestLibraryContent.GetTestInfoMaterial
struct UTestLibraryContent_GetTestInfoMaterial_Params
{
	class UMaterial*                                   Asset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTestInfoMaterial                           Info;                                                     // (Parm, OutParm)
};

// Function GbxTest.TestLibraryContent.GetAllPersistentGameMaps
struct UTestLibraryContent_GetAllPersistentGameMaps_Params
{
	TArray<class FString>                              OutMapNames;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ShortNamesOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestLibraryContent.ContentAuditSingleObject
struct UTestLibraryContent_ContentAuditSingleObject_Params
{
	class UObject*                                     Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxTest.TestLibraryPerformance.WaitForFrames
struct UTestLibraryPerformance_WaitForFrames_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumFrames;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GbxTest.TestLibraryPerformance.GenerateLevelGrid
struct UTestLibraryPerformance_GenerateLevelGrid_Params
{
	TArray<struct FVector>                             GridLocations;                                            // (Parm, OutParm, ZeroConstructor)
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GridSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWalkableOnly;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestLibrarySimulation.TestIntInRangeFromPlayMap
struct UTestLibrarySimulation_TestIntInRangeFromPlayMap_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	ETestIssueType                                     IssueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
};

// Function GbxTest.TestLibrarySimulation.TestIntCompareFromPlayMap
struct UTestLibrarySimulation_TestIntCompareFromPlayMap_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ECompare                                           Comparison;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ETestIssueType                                     IssueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
};

// Function GbxTest.TestLibrarySimulation.TestFloatInRangeFromPlayMap
struct UTestLibrarySimulation_TestFloatInRangeFromPlayMap_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	ETestIssueType                                     IssueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
};

// Function GbxTest.TestLibrarySimulation.TestFloatCompareFromPlayMap
struct UTestLibrarySimulation_TestFloatCompareFromPlayMap_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ECompare                                           Comparison;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ETestIssueType                                     IssueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestLibrarySimulation.TestBoolIsTrueFromPlayMap
struct UTestLibrarySimulation_TestBoolIsTrueFromPlayMap_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ETestIssueType                                     IssueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
};

// Function GbxTest.TestLibrarySimulation.TestBoolIsFalseFromPlayMap
struct UTestLibrarySimulation_TestBoolIsFalseFromPlayMap_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ETestIssueType                                     IssueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
};

// Function GbxTest.TestLibrarySimulation.StopPlayTest
struct UTestLibrarySimulation_StopPlayTest_Params
{
};

// Function GbxTest.TestLibrarySimulation.SimulatePlayerInput
struct UTestLibrarySimulation_SimulatePlayerInput_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FGbxTestInputAction>                 InputDescription;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              PreDelay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PostDelay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GbxTest.TestLibrarySimulation.SetReportContext
struct UTestLibrarySimulation_SetReportContext_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxProbeId>                         AssetContexts;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxTest.TestLibrarySimulation.SetReceiveBackgroundInput
struct UTestLibrarySimulation_SetReceiveBackgroundInput_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               AllowBackgroundInput;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrarySimulation.ResetTestTimeout
struct UTestLibrarySimulation_ResetTestTimeout_Params
{
};

// Function GbxTest.TestLibrarySimulation.ReportResultFromPlayMap
struct UTestLibrarySimulation_ReportResultFromPlayMap_Params
{
	bool                                               bSucceeded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
	struct FGbxProbeId                                 AssetContext;                                             // (Parm)
	ETestIssueType                                     FailedIssueType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestLibrarySimulation.ReportIssueFromPlayMap
struct UTestLibrarySimulation_ReportIssueFromPlayMap_Params
{
	ETestIssueType                                     IssueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
};

// Function GbxTest.TestLibrarySimulation.PushWorldContext
struct UTestLibrarySimulation_PushWorldContext_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestLibrarySimulation.PushAssetContext
struct UTestLibrarySimulation_PushAssetContext_Params
{
	struct FGbxProbeId                                 ID;                                                       // (Parm)
};

// Function GbxTest.TestLibrarySimulation.PopWorldContext
struct UTestLibrarySimulation_PopWorldContext_Params
{
};

// Function GbxTest.TestLibrarySimulation.PopAssetContext
struct UTestLibrarySimulation_PopAssetContext_Params
{
	struct FGbxProbeId                                 ID;                                                       // (Parm)
};

// Function GbxTest.TestLibrarySimulation.IsPlayMapRunning
struct UTestLibrarySimulation_IsPlayMapRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrarySimulation.IsHLQNoClipEnabled
struct UTestLibrarySimulation_IsHLQNoClipEnabled_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrarySimulation.IsGodEnabled
struct UTestLibrarySimulation_IsGodEnabled_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrarySimulation.IsGhostEnabled
struct UTestLibrarySimulation_IsGhostEnabled_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrarySimulation.IsDemiGodEnabled
struct UTestLibrarySimulation_IsDemiGodEnabled_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrarySimulation.GetPolicyForPlayMap
struct UTestLibrarySimulation_GetPolicyForPlayMap_Params
{
	class UTestPolicySimulation*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestLibrarySimulation.CanReceiveBackgroundInput
struct UTestLibrarySimulation_CanReceiveBackgroundInput_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxTest.TestPolicy.TestIntInRange
struct UTestPolicy_TestIntInRange_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	ETestIssueType                                     IssueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
};

// Function GbxTest.TestPolicy.TestIntCompare
struct UTestPolicy_TestIntCompare_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ECompare                                           Comparison;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ETestIssueType                                     IssueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
};

// Function GbxTest.TestPolicy.TestFloatInRange
struct UTestPolicy_TestFloatInRange_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	ETestIssueType                                     IssueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
};

// Function GbxTest.TestPolicy.TestFloatCompare
struct UTestPolicy_TestFloatCompare_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ECompare                                           Comparison;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ETestIssueType                                     IssueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestPolicy.TestBoolIsTrue
struct UTestPolicy_TestBoolIsTrue_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ETestIssueType                                     IssueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
};

// Function GbxTest.TestPolicy.TestBoolIsFalse
struct UTestPolicy_TestBoolIsFalse_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ETestIssueType                                     IssueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
};

// Function GbxTest.TestPolicy.TestAssetTraits
struct UTestPolicy_TestAssetTraits_Params
{
	class UObject*                                     Asset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestPolicy.TestAssetAudit
struct UTestPolicy_TestAssetAudit_Params
{
	class UObject*                                     Asset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestPolicy.SetReportContext
struct UTestPolicy_SetReportContext_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxProbeId>                         AssetContexts;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxTest.TestPolicy.ReportResult
struct UTestPolicy_ReportResult_Params
{
	bool                                               bSucceeded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
	struct FGbxProbeId                                 AssetContext;                                             // (Parm)
	ETestIssueType                                     FailedIssueType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestPolicy.ReportIssue
struct UTestPolicy_ReportIssue_Params
{
	ETestIssueType                                     IssueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      IssueCategory;                                            // (Parm, ZeroConstructor)
	class FString                                      IssueMessage;                                             // (Parm, ZeroConstructor)
};

// Function GbxTest.TestPolicy.PushAssetContext
struct UTestPolicy_PushAssetContext_Params
{
	struct FGbxProbeId                                 ID;                                                       // (Parm)
};

// Function GbxTest.TestPolicy.PopAssetContext
struct UTestPolicy_PopAssetContext_Params
{
	struct FGbxProbeId                                 ID;                                                       // (Parm)
};

// Function GbxTest.TestPolicy.OnRunTestCommand
struct UTestPolicy_OnRunTestCommand_Params
{
	class FString                                      TestCommand;                                              // (Parm, ZeroConstructor)
};

// Function GbxTest.TestPolicy.OnGetTestCommands
struct UTestPolicy_OnGetTestCommands_Params
{
	TArray<class FString>                              TestCommands;                                             // (Parm, OutParm, ZeroConstructor)
	TArray<class FString>                              PrettyNames;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GbxTest.TestPolicy.ClearSavedTestCommand
struct UTestPolicy_ClearSavedTestCommand_Params
{
};

// Function GbxTest.TestPolicyContent.OnValidForImport
struct UTestPolicyContent_OnValidForImport_Params
{
	class UObject*                                     ImportObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestPolicySimulation.StopPlay
struct UTestPolicySimulation_StopPlay_Params
{
};

// Function GbxTest.TestPolicySimulation.RunTestDrivers
struct UTestPolicySimulation_RunTestDrivers_Params
{
	TArray<class UClass*>                              TestDrivers;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestPolicySimulation.PlayTestMap
struct UTestPolicySimulation_PlayTestMap_Params
{
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
	TArray<class UClass*>                              TestDrivers;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoadMapOnce;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoadMapIfNotLoaded;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestPolicySimulation.PlayMap
struct UTestPolicySimulation_PlayMap_Params
{
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
	TArray<class UClass*>                              TestDrivers;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestPolicySimulation.OnMapTraveled
struct UTestPolicySimulation_OnMapTraveled_Params
{
	class UWorld*                                      NewWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestPolicySimulation.IntendToMapTravel
struct UTestPolicySimulation_IntendToMapTravel_Params
{
	bool                                               WillMapTravel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxTest.TestPolicySimulation.AddTestDriver
struct UTestPolicySimulation_AddTestDriver_Params
{
	class UClass*                                      TestDriver;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
