// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxProbes_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxProbes.GbxProbesBlueprintLibrary.ResolveGbxProbeId
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 InObj                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            InTag                          (Parm)
// struct FGbxProbeId             OutId                          (Parm, OutParm)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxProbesBlueprintLibrary::STATIC_ResolveGbxProbeId(class UObject* InObj, const struct FGameplayTag& InTag, struct FGbxProbeId* OutId, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.ResolveGbxProbeId");

	UGbxProbesBlueprintLibrary_ResolveGbxProbeId_Params params;
	params.InObj = InObj;
	params.InTag = InTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutId != nullptr)
		*OutId = params.OutId;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function GbxProbes.GbxProbesBlueprintLibrary.MakeProbeId
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  Class                          (Parm, ZeroConstructor)
// class FString                  Type                           (Parm, ZeroConstructor)
// class FString                  SubType                        (Parm, ZeroConstructor)
// struct FGbxProbeId             OutId                          (Parm, OutParm)

void UGbxProbesBlueprintLibrary::STATIC_MakeProbeId(const class FString& Class, const class FString& Type, const class FString& SubType, struct FGbxProbeId* OutId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.MakeProbeId");

	UGbxProbesBlueprintLibrary_MakeProbeId_Params params;
	params.Class = Class;
	params.Type = Type;
	params.SubType = SubType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutId != nullptr)
		*OutId = params.OutId;
}


// Function GbxProbes.GbxProbesBlueprintLibrary.IsValidId
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxProbeId             ProbeId                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxProbesBlueprintLibrary::STATIC_IsValidId(const struct FGbxProbeId& ProbeId, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.IsValidId");

	UGbxProbesBlueprintLibrary_IsValidId_Params params;
	params.ProbeId = ProbeId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function GbxProbes.GbxProbesBlueprintLibrary.IsTestProbeEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxProbeId             ProbeId                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   Test                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxProbesBlueprintLibrary::STATIC_IsTestProbeEnabled(const struct FGbxProbeId& ProbeId, const struct FName& Test, bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.IsTestProbeEnabled");

	UGbxProbesBlueprintLibrary_IsTestProbeEnabled_Params params;
	params.ProbeId = ProbeId;
	params.Test = Test;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
}


// Function GbxProbes.GbxProbesBlueprintLibrary.IsTestEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Test                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxProbesBlueprintLibrary::STATIC_IsTestEnabled(const struct FName& Test, bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.IsTestEnabled");

	UGbxProbesBlueprintLibrary_IsTestEnabled_Params params;
	params.Test = Test;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
}


// Function GbxProbes.GbxProbesBlueprintLibrary.IsClassEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Class                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxProbesBlueprintLibrary::STATIC_IsClassEnabled(const struct FName& Class, bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.IsClassEnabled");

	UGbxProbesBlueprintLibrary_IsClassEnabled_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
}


// Function GbxProbes.GbxProbesBlueprintLibrary.FlushPendingTestProbes
// (Final, Native, Static, Public, BlueprintCallable)

void UGbxProbesBlueprintLibrary::STATIC_FlushPendingTestProbes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.FlushPendingTestProbes");

	UGbxProbesBlueprintLibrary_FlushPendingTestProbes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxProbes.GbxProbesBlueprintLibrary.EmitTestProbeResultWithData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxProbeId             ProbeId                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   Test                           (Parm, ZeroConstructor, IsPlainOldData)
// EGbxProbeResult                Result                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGbxProbeExtraData> ExtraDataArray                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGbxProbesBlueprintLibrary::STATIC_EmitTestProbeResultWithData(const struct FGbxProbeId& ProbeId, const struct FName& Test, EGbxProbeResult Result, TArray<struct FGbxProbeExtraData> ExtraDataArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.EmitTestProbeResultWithData");

	UGbxProbesBlueprintLibrary_EmitTestProbeResultWithData_Params params;
	params.ProbeId = ProbeId;
	params.Test = Test;
	params.Result = Result;
	params.ExtraDataArray = ExtraDataArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxProbes.GbxProbesBlueprintLibrary.EmitTestProbeResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxProbeId             ProbeId                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   Test                           (Parm, ZeroConstructor, IsPlainOldData)
// EGbxProbeResult                Result                         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ExtraData                      (Parm, ZeroConstructor)

void UGbxProbesBlueprintLibrary::STATIC_EmitTestProbeResult(const struct FGbxProbeId& ProbeId, const struct FName& Test, EGbxProbeResult Result, const class FString& ExtraData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.EmitTestProbeResult");

	UGbxProbesBlueprintLibrary_EmitTestProbeResult_Params params;
	params.ProbeId = ProbeId;
	params.Test = Test;
	params.Result = Result;
	params.ExtraData = ExtraData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
