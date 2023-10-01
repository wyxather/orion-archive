#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxProbes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxProbes.GbxProbesBlueprintLibrary.ResolveGbxProbeId
struct UGbxProbesBlueprintLibrary_ResolveGbxProbeId_Params
{
	class UObject*                                     InObj;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                InTag;                                                    // (Parm)
	struct FGbxProbeId                                 OutId;                                                    // (Parm, OutParm)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxProbes.GbxProbesBlueprintLibrary.MakeProbeId
struct UGbxProbesBlueprintLibrary_MakeProbeId_Params
{
	class FString                                      Class;                                                    // (Parm, ZeroConstructor)
	class FString                                      Type;                                                     // (Parm, ZeroConstructor)
	class FString                                      SubType;                                                  // (Parm, ZeroConstructor)
	struct FGbxProbeId                                 OutId;                                                    // (Parm, OutParm)
};

// Function GbxProbes.GbxProbesBlueprintLibrary.IsValidId
struct UGbxProbesBlueprintLibrary_IsValidId_Params
{
	struct FGbxProbeId                                 ProbeId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxProbes.GbxProbesBlueprintLibrary.IsTestProbeEnabled
struct UGbxProbesBlueprintLibrary_IsTestProbeEnabled_Params
{
	struct FGbxProbeId                                 ProbeId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Test;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnabled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxProbes.GbxProbesBlueprintLibrary.IsTestEnabled
struct UGbxProbesBlueprintLibrary_IsTestEnabled_Params
{
	struct FName                                       Test;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnabled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxProbes.GbxProbesBlueprintLibrary.IsClassEnabled
struct UGbxProbesBlueprintLibrary_IsClassEnabled_Params
{
	struct FName                                       Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnabled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxProbes.GbxProbesBlueprintLibrary.FlushPendingTestProbes
struct UGbxProbesBlueprintLibrary_FlushPendingTestProbes_Params
{
};

// Function GbxProbes.GbxProbesBlueprintLibrary.EmitTestProbeResultWithData
struct UGbxProbesBlueprintLibrary_EmitTestProbeResultWithData_Params
{
	struct FGbxProbeId                                 ProbeId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Test;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxProbeResult                                    Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxProbeExtraData>                  ExtraDataArray;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxProbes.GbxProbesBlueprintLibrary.EmitTestProbeResult
struct UGbxProbesBlueprintLibrary_EmitTestProbeResult_Params
{
	struct FGbxProbeId                                 ProbeId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Test;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxProbeResult                                    Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ExtraData;                                                // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
