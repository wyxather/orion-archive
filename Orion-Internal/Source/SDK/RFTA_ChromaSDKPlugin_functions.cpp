// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ChromaSDKPlugin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload
// 00007FF6F8393F80
// (Final, Native, Public, BlueprintCallable)

void UChromaSDKPluginAnimation1DObject::Unload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload");

	UChromaSDKPluginAnimation1DObject_Unload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded
// 00007FF6F838DB10
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChromaSDKPluginAnimation1DObject::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded");

	UChromaSDKPluginAnimation1DObject_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload
// 00007FF6F8393F80
// (Final, Native, Public, BlueprintCallable)

void UChromaSDKPluginAnimation2DObject::Unload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload");

	UChromaSDKPluginAnimation2DObject_Unload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded
// 00007FF6F838DB10
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChromaSDKPluginAnimation2DObject::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded");

	UChromaSDKPluginAnimation2DObject_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimationName
// 00007FF6F8394010
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_UnloadAnimationName(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimationName");

	UChromaSDKPluginBPLibrary_UnloadAnimationName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimation
// 00007FF6F8393FA0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_UnloadAnimation(int* AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimation");

	UChromaSDKPluginBPLibrary_UnloadAnimation_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFramesName
// 00007FF6F8393EB0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           numberOfFrames                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_TrimStartFramesName(class FString* animationName, int* numberOfFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFramesName");

	UChromaSDKPluginBPLibrary_TrimStartFramesName_Params params;
	params.animationName = animationName;
	params.numberOfFrames = numberOfFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFrames
// 00007FF6F8393E00
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           numberOfFrames                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_TrimStartFrames(int* AnimationID, int* numberOfFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFrames");

	UChromaSDKPluginBPLibrary_TrimStartFrames_Params params;
	params.AnimationID = AnimationID;
	params.numberOfFrames = numberOfFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrameName
// 00007FF6F8393D30
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_TrimFrameName(class FString* animationName, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrameName");

	UChromaSDKPluginBPLibrary_TrimFrameName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrame
// 00007FF6F8393C80
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_TrimFrame(int* AnimationID, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrame");

	UChromaSDKPluginBPLibrary_TrimFrame_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFramesName
// 00007FF6F8393BB0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           lastFrameId                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_TrimEndFramesName(class FString* animationName, int* lastFrameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFramesName");

	UChromaSDKPluginBPLibrary_TrimEndFramesName_Params params;
	params.animationName = animationName;
	params.lastFrameId = lastFrameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFrames
// 00007FF6F8393B00
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           lastFrameId                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_TrimEndFrames(int* AnimationID, int* lastFrameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFrames");

	UChromaSDKPluginBPLibrary_TrimEndFrames_Params params;
	params.AnimationID = AnimationID;
	params.lastFrameId = lastFrameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToLinearColor
// 00007FF6F8393A70
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           colorParam                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_ToLinearColor(int* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToLinearColor");

	UChromaSDKPluginBPLibrary_ToLinearColor_Params params;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToBGR
// 00007FF6F83939E0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_ToBGR(struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToBGR");

	UChromaSDKPluginBPLibrary_ToBGR_Params params;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffsetName
// 00007FF6F83938C0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroTargetAllKeysAllFramesOffsetName(class FString* sourceAnimationName, class FString* targetAnimationName, int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffsetName");

	UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesOffsetName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffset
// 00007FF6F83937D0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroTargetAllKeysAllFramesOffset(int* sourceAnimationId, int* targetAnimationId, int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffset");

	UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesOffset_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesName
// 00007FF6F83936F0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroTargetAllKeysAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesName");

	UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFrames
// 00007FF6F8393640
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroTargetAllKeysAllFrames(int* sourceAnimationId, int* targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFrames");

	UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysName
// 00007FF6F8393520
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroAllKeysName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysName");

	UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffsetName
// 00007FF6F8393400
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroAllKeysAllFramesOffsetName(class FString* sourceAnimationName, class FString* targetAnimationName, int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffsetName");

	UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesOffsetName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffset
// 00007FF6F8393310
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroAllKeysAllFramesOffset(int* sourceAnimationId, int* targetAnimationId, int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffset");

	UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesOffset_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesName
// 00007FF6F8393230
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroAllKeysAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesName");

	UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFrames
// 00007FF6F8393180
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroAllKeysAllFrames(int* sourceAnimationId, int* targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFrames");

	UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeys
// 00007FF6F8393090
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroAllKeys(int* sourceAnimationId, int* targetAnimationId, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeys");

	UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeys_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationType
// 00007FF6F8392F60
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDeviceEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_StopAnimationType(TEnumAsByte<EChromaSDKDeviceEnum>* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationType");

	UChromaSDKPluginBPLibrary_StopAnimationType_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimations
// 00007FF6F8392FD0
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class FString>*         animationNames                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_StopAnimations(TArray<class FString>* animationNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimations");

	UChromaSDKPluginBPLibrary_StopAnimations_Params params;
	params.animationNames = animationNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationComposite
// 00007FF6F8392ED0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_StopAnimationComposite(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationComposite");

	UChromaSDKPluginBPLibrary_StopAnimationComposite_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimation
// 00007FF6F8392E40
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_StopAnimation(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimation");

	UChromaSDKPluginBPLibrary_StopAnimation_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAll
// 00007FF6F8392E20
// (Final, Native, Static, Public, BlueprintCallable)

void UChromaSDKPluginBPLibrary::STATIC_StopAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAll");

	UChromaSDKPluginBPLibrary_StopAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor
// 00007FF6F8392CD0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKMouseLed>* led                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetMouseLedColor(TEnumAsByte<EChromaSDKMouseLed>* led, struct FLinearColor* colorParam, TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor");

	UChromaSDKPluginBPLibrary_SetMouseLedColor_Params params;
	params.led = led;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorName
// 00007FF6F8392B50
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeysNonZeroColorName(class FString* animationName, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorName");

	UChromaSDKPluginBPLibrary_SetKeysNonZeroColorName_Params params;
	params.animationName = animationName;
	params.frameIndex = frameIndex;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFramesName
// 00007FF6F8392A10
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeysNonZeroColorAllFramesName(class FString* animationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFramesName");

	UChromaSDKPluginBPLibrary_SetKeysNonZeroColorAllFramesName_Params params;
	params.animationName = animationName;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFrames
// 00007FF6F83928E0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeysNonZeroColorAllFrames(int* AnimationID, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFrames");

	UChromaSDKPluginBPLibrary_SetKeysNonZeroColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColor
// 00007FF6F8392770
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeysNonZeroColor(int* AnimationID, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColor");

	UChromaSDKPluginBPLibrary_SetKeysNonZeroColor_Params params;
	params.AnimationID = AnimationID;
	params.frameIndex = frameIndex;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGBName
// 00007FF6F8392590
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorRGBName(class FString* animationName, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGBName");

	UChromaSDKPluginBPLibrary_SetKeysColorRGBName_Params params;
	params.animationName = animationName;
	params.frameIndex = frameIndex;
	params.Keys = Keys;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGB
// 00007FF6F83923D0
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorRGB(int* AnimationID, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGB");

	UChromaSDKPluginBPLibrary_SetKeysColorRGB_Params params;
	params.AnimationID = AnimationID;
	params.frameIndex = frameIndex;
	params.Keys = Keys;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorName
// 00007FF6F8392250
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorName(class FString* animationName, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorName");

	UChromaSDKPluginBPLibrary_SetKeysColorName_Params params;
	params.animationName = animationName;
	params.frameIndex = frameIndex;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGBName
// 00007FF6F83920B0
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorAllFramesRGBName(class FString* animationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGBName");

	UChromaSDKPluginBPLibrary_SetKeysColorAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.Keys = Keys;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGB
// 00007FF6F8391F10
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorAllFramesRGB(int* AnimationID, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGB");

	UChromaSDKPluginBPLibrary_SetKeysColorAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.Keys = Keys;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesName
// 00007FF6F8391DD0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorAllFramesName(class FString* animationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesName");

	UChromaSDKPluginBPLibrary_SetKeysColorAllFramesName_Params params;
	params.animationName = animationName;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFrames
// 00007FF6F8391CA0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorAllFrames(int* AnimationID, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFrames");

	UChromaSDKPluginBPLibrary_SetKeysColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColor
// 00007FF6F8391B30
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeysColor(int* AnimationID, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColor");

	UChromaSDKPluginBPLibrary_SetKeysColor_Params params;
	params.AnimationID = AnimationID;
	params.frameIndex = frameIndex;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorName
// 00007FF6F8391890
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeyNonZeroColorName(class FString* animationName, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorName");

	UChromaSDKPluginBPLibrary_SetKeyNonZeroColorName_Params params;
	params.animationName = animationName;
	params.frameIndex = frameIndex;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFramesName
// 00007FF6F8391780
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeyNonZeroColorAllFramesName(class FString* animationName, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFramesName");

	UChromaSDKPluginBPLibrary_SetKeyNonZeroColorAllFramesName_Params params;
	params.animationName = animationName;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFrames
// 00007FF6F8391680
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeyNonZeroColorAllFrames(int* AnimationID, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFrames");

	UChromaSDKPluginBPLibrary_SetKeyNonZeroColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColor
// 00007FF6F8391540
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeyNonZeroColor(int* AnimationID, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColor");

	UChromaSDKPluginBPLibrary_SetKeyNonZeroColor_Params params;
	params.AnimationID = AnimationID;
	params.frameIndex = frameIndex;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorName
// 00007FF6F83913F0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeyColorName(class FString* animationName, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorName");

	UChromaSDKPluginBPLibrary_SetKeyColorName_Params params;
	params.animationName = animationName;
	params.frameIndex = frameIndex;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFramesName
// 00007FF6F83912E0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeyColorAllFramesName(class FString* animationName, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFramesName");

	UChromaSDKPluginBPLibrary_SetKeyColorAllFramesName_Params params;
	params.animationName = animationName;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFrames
// 00007FF6F83911E0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeyColorAllFrames(int* AnimationID, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFrames");

	UChromaSDKPluginBPLibrary_SetKeyColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColor
// 00007FF6F83910A0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeyColor(int* AnimationID, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColor");

	UChromaSDKPluginBPLibrary_SetKeyColor_Params params;
	params.AnimationID = AnimationID;
	params.frameIndex = frameIndex;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor
// 00007FF6F83919E0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetKeyboardKeyColor(TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam, TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor");

	UChromaSDKPluginBPLibrary_SetKeyboardKeyColor_Params params;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomFlagName
// 00007FF6F8390FD0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool*                          flag                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetChromaCustomFlagName(class FString* animationName, bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomFlagName");

	UChromaSDKPluginBPLibrary_SetChromaCustomFlagName_Params params;
	params.animationName = animationName;
	params.flag = flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomColorAllFramesName
// 00007FF6F8390F40
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_SetChromaCustomColorAllFramesName(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomColorAllFramesName");

	UChromaSDKPluginBPLibrary_SetChromaCustomColorAllFramesName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFramesName
// 00007FF6F8390EB0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_ReverseAllFramesName(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFramesName");

	UChromaSDKPluginBPLibrary_ReverseAllFramesName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFrames
// 00007FF6F8390E40
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_ReverseAllFrames(int* AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFrames");

	UChromaSDKPluginBPLibrary_ReverseAllFrames_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFramesName
// 00007FF6F8390D70
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           N                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_ReduceFramesName(class FString* animationName, int* N)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFramesName");

	UChromaSDKPluginBPLibrary_ReduceFramesName_Params params;
	params.animationName = animationName;
	params.N = N;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFrames
// 00007FF6F8390CC0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           N                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_ReduceFrames(int* AnimationID, int* N)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFrames");

	UChromaSDKPluginBPLibrary_ReduceFrames_Params params;
	params.AnimationID = AnimationID;
	params.N = N;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrameName
// 00007FF6F8390BF0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_PreviewFrameName(class FString* animationName, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrameName");

	UChromaSDKPluginBPLibrary_PreviewFrameName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrame
// 00007FF6F8390B30
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_PreviewFrame(int* AnimationID, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrame");

	UChromaSDKPluginBPLibrary_PreviewFrame_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimations
// 00007FF6F8390A20
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class FString>*         animationNames                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool*                          Loop                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_PlayAnimations(TArray<class FString>* animationNames, bool* Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimations");

	UChromaSDKPluginBPLibrary_PlayAnimations_Params params;
	params.animationNames = animationNames;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationName
// 00007FF6F8390880
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool*                          Loop                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_PlayAnimationName(class FString* animationName, bool* Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationName");

	UChromaSDKPluginBPLibrary_PlayAnimationName_Params params;
	params.animationName = animationName;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationComposite
// 00007FF6F8390950
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool*                          Loop                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_PlayAnimationComposite(class FString* animationName, bool* Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationComposite");

	UChromaSDKPluginBPLibrary_PlayAnimationComposite_Params params;
	params.animationName = animationName;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimation
// 00007FF6F8390880
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool*                          Loop                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_PlayAnimation(class FString* animationName, bool* Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimation");

	UChromaSDKPluginBPLibrary_PlayAnimation_Params params;
	params.animationName = animationName;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OverrideFrameDurationName
// 00007FF6F83907B0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_OverrideFrameDurationName(class FString* animationName, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OverrideFrameDurationName");

	UChromaSDKPluginBPLibrary_OverrideFrameDurationName_Params params;
	params.animationName = animationName;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsName
// 00007FF6F8390630
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_OffsetNonZeroColorsName(class FString* animationName, int* frameId, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsName");

	UChromaSDKPluginBPLibrary_OffsetNonZeroColorsName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFramesName
// 00007FF6F83904F0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_OffsetNonZeroColorsAllFramesName(class FString* animationName, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFramesName");

	UChromaSDKPluginBPLibrary_OffsetNonZeroColorsAllFramesName_Params params;
	params.animationName = animationName;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFrames
// 00007FF6F83903C0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_OffsetNonZeroColorsAllFrames(int* AnimationID, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFrames");

	UChromaSDKPluginBPLibrary_OffsetNonZeroColorsAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColors
// 00007FF6F8390250
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_OffsetNonZeroColors(int* AnimationID, int* frameId, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColors");

	UChromaSDKPluginBPLibrary_OffsetNonZeroColors_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsName
// 00007FF6F83900D0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_OffsetColorsName(class FString* animationName, int* frameId, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsName");

	UChromaSDKPluginBPLibrary_OffsetColorsName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFramesName
// 00007FF6F838FF90
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_OffsetColorsAllFramesName(class FString* animationName, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFramesName");

	UChromaSDKPluginBPLibrary_OffsetColorsAllFramesName_Params params;
	params.animationName = animationName;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFrames
// 00007FF6F838FE60
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_OffsetColorsAllFrames(int* AnimationID, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFrames");

	UChromaSDKPluginBPLibrary_OffsetColorsAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColors
// 00007FF6F838FCF0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_OffsetColors(int* AnimationID, int* frameId, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColors");

	UChromaSDKPluginBPLibrary_OffsetColors_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFramesName
// 00007FF6F838FBC0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam1                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam2                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyTargetColorLerpAllFramesName(class FString* animationName, struct FLinearColor* colorParam1, struct FLinearColor* colorParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFramesName");

	UChromaSDKPluginBPLibrary_MultiplyTargetColorLerpAllFramesName_Params params;
	params.animationName = animationName;
	params.colorParam1 = colorParam1;
	params.colorParam2 = colorParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFrames
// 00007FF6F838FAB0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam1                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam2                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyTargetColorLerpAllFrames(int* AnimationID, struct FLinearColor* colorParam1, struct FLinearColor* colorParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFrames");

	UChromaSDKPluginBPLibrary_MultiplyTargetColorLerpAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.colorParam1 = colorParam1;
	params.colorParam2 = colorParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFramesName
// 00007FF6F838F980
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam1                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam2                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyNonZeroTargetColorLerpAllFramesName(class FString* animationName, struct FLinearColor* colorParam1, struct FLinearColor* colorParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFramesName");

	UChromaSDKPluginBPLibrary_MultiplyNonZeroTargetColorLerpAllFramesName_Params params;
	params.animationName = animationName;
	params.colorParam1 = colorParam1;
	params.colorParam2 = colorParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFrames
// 00007FF6F838F870
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam1                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam2                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyNonZeroTargetColorLerpAllFrames(int* AnimationID, struct FLinearColor* colorParam1, struct FLinearColor* colorParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFrames");

	UChromaSDKPluginBPLibrary_MultiplyNonZeroTargetColorLerpAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.colorParam1 = colorParam1;
	params.colorParam2 = colorParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGBName
// 00007FF6F838F6F0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityRGBName(class FString* animationName, int* frameId, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGBName");

	UChromaSDKPluginBPLibrary_MultiplyIntensityRGBName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGB
// 00007FF6F838F580
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityRGB(int* AnimationID, int* frameId, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGB");

	UChromaSDKPluginBPLibrary_MultiplyIntensityRGB_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityName
// 00007FF6F838F470
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         Intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityName(class FString* animationName, int* frameId, float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityName");

	UChromaSDKPluginBPLibrary_MultiplyIntensityName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorName
// 00007FF6F838F360
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityColorName(class FString* animationName, int* frameId, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorName");

	UChromaSDKPluginBPLibrary_MultiplyIntensityColorName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFramesName
// 00007FF6F838F290
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityColorAllFramesName(class FString* animationName, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFramesName");

	UChromaSDKPluginBPLibrary_MultiplyIntensityColorAllFramesName_Params params;
	params.animationName = animationName;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFrames
// 00007FF6F838F1D0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityColorAllFrames(int* AnimationID, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFrames");

	UChromaSDKPluginBPLibrary_MultiplyIntensityColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColor
// 00007FF6F838F0D0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityColor(int* AnimationID, int* frameId, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColor");

	UChromaSDKPluginBPLibrary_MultiplyIntensityColor_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGBName
// 00007FF6F838EF80
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         redIntensity                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         greenIntensity                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         blueIntensity                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityAllFramesRGBName(class FString* animationName, float* redIntensity, float* greenIntensity, float* blueIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGBName");

	UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.redIntensity = redIntensity;
	params.greenIntensity = greenIntensity;
	params.blueIntensity = blueIntensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGB
// 00007FF6F838EE50
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         redIntensity                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         greenIntensity                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         blueIntensity                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityAllFramesRGB(int* AnimationID, float* redIntensity, float* greenIntensity, float* blueIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGB");

	UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.redIntensity = redIntensity;
	params.greenIntensity = greenIntensity;
	params.blueIntensity = blueIntensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesName
// 00007FF6F838ED80
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         Intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityAllFramesName(class FString* animationName, float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesName");

	UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesName_Params params;
	params.animationName = animationName;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFrames
// 00007FF6F838ECC0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         Intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityAllFrames(int* AnimationID, float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFrames");

	UChromaSDKPluginBPLibrary_MultiplyIntensityAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensity
// 00007FF6F838EBD0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         Intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensity(int* AnimationID, int* frameId, float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensity");

	UChromaSDKPluginBPLibrary_MultiplyIntensity_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFramesName
// 00007FF6F838EAA0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam1                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam2                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyColorLerpAllFramesName(class FString* animationName, struct FLinearColor* colorParam1, struct FLinearColor* colorParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFramesName");

	UChromaSDKPluginBPLibrary_MultiplyColorLerpAllFramesName_Params params;
	params.animationName = animationName;
	params.colorParam1 = colorParam1;
	params.colorParam2 = colorParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFrames
// 00007FF6F838E990
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam1                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam2                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MultiplyColorLerpAllFrames(int* AnimationID, struct FLinearColor* colorParam1, struct FLinearColor* colorParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFrames");

	UChromaSDKPluginBPLibrary_MultiplyColorLerpAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.colorParam1 = colorParam1;
	params.colorParam2 = colorParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGBName
// 00007FF6F838E3D0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFramesRGBName(class FString* animationName, int* frameCount, float* Duration, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGBName");

	UChromaSDKPluginBPLibrary_MakeBlankFramesRGBName_Params params;
	params.animationName = animationName;
	params.frameCount = frameCount;
	params.Duration = Duration;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGB
// 00007FF6F838E220
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFramesRGB(int* AnimationID, int* frameCount, float* Duration, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGB");

	UChromaSDKPluginBPLibrary_MakeBlankFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.frameCount = frameCount;
	params.Duration = Duration;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomName
// 00007FF6F838E880
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFramesRandomName(class FString* animationName, int* frameCount, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomName");

	UChromaSDKPluginBPLibrary_MakeBlankFramesRandomName_Params params;
	params.animationName = animationName;
	params.frameCount = frameCount;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhiteName
// 00007FF6F838E770
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFramesRandomBlackAndWhiteName(class FString* animationName, int* frameCount, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhiteName");

	UChromaSDKPluginBPLibrary_MakeBlankFramesRandomBlackAndWhiteName_Params params;
	params.animationName = animationName;
	params.frameCount = frameCount;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhite
// 00007FF6F838E680
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFramesRandomBlackAndWhite(int* AnimationID, int* frameCount, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhite");

	UChromaSDKPluginBPLibrary_MakeBlankFramesRandomBlackAndWhite_Params params;
	params.AnimationID = AnimationID;
	params.frameCount = frameCount;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandom
// 00007FF6F838E590
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFramesRandom(int* AnimationID, int* frameCount, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandom");

	UChromaSDKPluginBPLibrary_MakeBlankFramesRandom_Params params;
	params.AnimationID = AnimationID;
	params.frameCount = frameCount;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesName
// 00007FF6F838E0D0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFramesName(class FString* animationName, int* frameCount, float* Duration, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesName");

	UChromaSDKPluginBPLibrary_MakeBlankFramesName_Params params;
	params.animationName = animationName;
	params.frameCount = frameCount;
	params.Duration = Duration;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFrames
// 00007FF6F838DF90
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFrames(int* AnimationID, int* frameCount, float* Duration, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFrames");

	UChromaSDKPluginBPLibrary_MakeBlankFrames_Params params;
	params.AnimationID = AnimationID;
	params.frameCount = frameCount;
	params.Duration = Duration;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimationName
// 00007FF6F838DF00
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_LoadAnimationName(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimationName");

	UChromaSDKPluginBPLibrary_LoadAnimationName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimation
// 00007FF6F838DE90
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_LoadAnimation(int* AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimation");

	UChromaSDKPluginBPLibrary_LoadAnimation_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColorBGR
// 00007FF6F838DDA0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           from                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           to                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         T                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_LerpColorBGR(int* from, int* to, float* T)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColorBGR");

	UChromaSDKPluginBPLibrary_LerpColorBGR_Params params;
	params.from = from;
	params.to = to;
	params.T = T;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColor
// 00007FF6F838DC80
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           colorParam1                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam2                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         T                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_LerpColor(struct FLinearColor* colorParam1, struct FLinearColor* colorParam2, float* T)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColor");

	UChromaSDKPluginBPLibrary_LerpColor_Params params;
	params.colorParam1 = colorParam1;
	params.colorParam2 = colorParam2;
	params.T = T;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.Lerp
// 00007FF6F838DB70
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float*                         Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                         amt                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChromaSDKPluginBPLibrary::STATIC_Lerp(float* Start, float* End, float* amt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.Lerp");

	UChromaSDKPluginBPLibrary_Lerp_Params params;
	params.Start = Start;
	params.End = End;
	params.amt = amt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows
// 00007FF6F838DB40
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChromaSDKPluginBPLibrary::STATIC_IsPlatformWindows()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows");

	UChromaSDKPluginBPLibrary_IsPlatformWindows_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized
// 00007FF6F838DAE0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChromaSDKPluginBPLibrary::STATIC_IsInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized");

	UChromaSDKPluginBPLibrary_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationTypePlaying
// 00007FF6F838DA60
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDeviceEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChromaSDKPluginBPLibrary::STATIC_IsAnimationTypePlaying(TEnumAsByte<EChromaSDKDeviceEnum>* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationTypePlaying");

	UChromaSDKPluginBPLibrary_IsAnimationTypePlaying_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationPlaying
// 00007FF6F838D9C0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChromaSDKPluginBPLibrary::STATIC_IsAnimationPlaying(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationPlaying");

	UChromaSDKPluginBPLibrary_IsAnimationPlaying_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFramesName
// 00007FF6F838D930
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_InvertColorsAllFramesName(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFramesName");

	UChromaSDKPluginBPLibrary_InvertColorsAllFramesName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFrames
// 00007FF6F838D8C0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_InvertColorsAllFrames(int* AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFrames");

	UChromaSDKPluginBPLibrary_InvertColorsAllFrames_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrameName
// 00007FF6F838D7C0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           sourceFrame                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetFrame                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_InsertFrameName(class FString* animationName, int* sourceFrame, int* targetFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrameName");

	UChromaSDKPluginBPLibrary_InsertFrameName_Params params;
	params.animationName = animationName;
	params.sourceFrame = sourceFrame;
	params.targetFrame = targetFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrame
// 00007FF6F838D6D0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           sourceFrame                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetFrame                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_InsertFrame(int* AnimationID, int* sourceFrame, int* targetFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrame");

	UChromaSDKPluginBPLibrary_InsertFrame_Params params;
	params.AnimationID = AnimationID;
	params.sourceFrame = sourceFrame;
	params.targetFrame = targetFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelayName
// 00007FF6F838D5D0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Delay                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_InsertDelayName(class FString* animationName, int* frameId, int* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelayName");

	UChromaSDKPluginBPLibrary_InsertDelayName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelay
// 00007FF6F838D4E0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Delay                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_InsertDelay(int* AnimationID, int* frameId, int* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelay");

	UChromaSDKPluginBPLibrary_InsertDelay_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetRGB
// 00007FF6F838D3E0
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_GetRGB(int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetRGB");

	UChromaSDKPluginBPLibrary_GetRGB_Params params;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationId
// 00007FF6F838D360
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_GetPlayingAnimationId(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationId");

	UChromaSDKPluginBPLibrary_GetPlayingAnimationId_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationCount
// 00007FF6F838D330
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_GetPlayingAnimationCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationCount");

	UChromaSDKPluginBPLibrary_GetPlayingAnimationCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMouseLedColor
// 00007FF6F838D210
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKMouseLed>* led                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_GetMouseLedColor(TEnumAsByte<EChromaSDKMouseLed>* led, TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMouseLedColor");

	UChromaSDKPluginBPLibrary_GetMouseLedColor_Params params;
	params.led = led;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow
// 00007FF6F838D190
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice2DEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_GetMaxRow(TEnumAsByte<EChromaSDKDevice2DEnum>* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow");

	UChromaSDKPluginBPLibrary_GetMaxRow_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds
// 00007FF6F838D110
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice1DEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_GetMaxLeds(TEnumAsByte<EChromaSDKDevice1DEnum>* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds");

	UChromaSDKPluginBPLibrary_GetMaxLeds_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn
// 00007FF6F838D090
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice2DEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_GetMaxColumn(TEnumAsByte<EChromaSDKDevice2DEnum>* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn");

	UChromaSDKPluginBPLibrary_GetMaxColumn_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColorName
// 00007FF6F838CD70
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_GetKeyColorName(class FString* animationName, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColorName");

	UChromaSDKPluginBPLibrary_GetKeyColorName_Params params;
	params.animationName = animationName;
	params.frameIndex = frameIndex;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColor
// 00007FF6F838CC70
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_GetKeyColor(int* AnimationID, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColor");

	UChromaSDKPluginBPLibrary_GetKeyColor_Params params;
	params.AnimationID = AnimationID;
	params.frameIndex = frameIndex;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardRazerKey
// 00007FF6F838CFB0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FKey*                   Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TEnumAsByte<EChromaSDKKeyboardKey> UChromaSDKPluginBPLibrary::STATIC_GetKeyboardRazerKey(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardRazerKey");

	UChromaSDKPluginBPLibrary_GetKeyboardRazerKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardKeyColor
// 00007FF6F838CE90
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_GetKeyboardKeyColor(TEnumAsByte<EChromaSDKKeyboardKey>* Key, TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardKeyColor");

	UChromaSDKPluginBPLibrary_GetKeyboardKeyColor_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCountName
// 00007FF6F838CBD0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_GetFrameCountName(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCountName");

	UChromaSDKPluginBPLibrary_GetFrameCountName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCount
// 00007FF6F838CB50
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_GetFrameCount(int* AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCount");

	UChromaSDKPluginBPLibrary_GetFrameCount_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationName
// 00007FF6F838CA90
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UChromaSDKPluginBPLibrary::STATIC_GetAnimationName(int* AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationName");

	UChromaSDKPluginBPLibrary_GetAnimationName_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationIdByIndex
// 00007FF6F838CA10
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_GetAnimationIdByIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationIdByIndex");

	UChromaSDKPluginBPLibrary_GetAnimationIdByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationId
// 00007FF6F838C940
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_GetAnimationId(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationId");

	UChromaSDKPluginBPLibrary_GetAnimationId_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationCount
// 00007FF6F838C9E0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_GetAnimationCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationCount");

	UChromaSDKPluginBPLibrary_GetAnimationCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimation
// 00007FF6F838C940
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_GetAnimation(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimation");

	UChromaSDKPluginBPLibrary_GetAnimation_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGBName
// 00007FF6F838C7C0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillZeroColorRGBName(class FString* animationName, int* frameId, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGBName");

	UChromaSDKPluginBPLibrary_FillZeroColorRGBName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGB
// 00007FF6F838C650
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillZeroColorRGB(int* AnimationID, int* frameId, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGB");

	UChromaSDKPluginBPLibrary_FillZeroColorRGB_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorName
// 00007FF6F838C540
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillZeroColorName(class FString* animationName, int* frameId, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorName");

	UChromaSDKPluginBPLibrary_FillZeroColorName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGBName
// 00007FF6F838C400
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillZeroColorAllFramesRGBName(class FString* animationName, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGBName");

	UChromaSDKPluginBPLibrary_FillZeroColorAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGB
// 00007FF6F838C2D0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillZeroColorAllFramesRGB(int* AnimationID, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGB");

	UChromaSDKPluginBPLibrary_FillZeroColorAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesName
// 00007FF6F838C200
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillZeroColorAllFramesName(class FString* animationName, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesName");

	UChromaSDKPluginBPLibrary_FillZeroColorAllFramesName_Params params;
	params.animationName = animationName;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFrames
// 00007FF6F838C140
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillZeroColorAllFrames(int* AnimationID, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFrames");

	UChromaSDKPluginBPLibrary_FillZeroColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColor
// 00007FF6F838C040
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillZeroColor(int* AnimationID, int* frameId, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColor");

	UChromaSDKPluginBPLibrary_FillZeroColor_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGBName
// 00007FF6F838BE40
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           redThreshold                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           greenThreshold                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blueThreshold                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillThresholdRGBColorsAllFramesRGBName(class FString* animationName, int* redThreshold, int* greenThreshold, int* blueThreshold, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGBName");

	UChromaSDKPluginBPLibrary_FillThresholdRGBColorsAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.redThreshold = redThreshold;
	params.greenThreshold = greenThreshold;
	params.blueThreshold = blueThreshold;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGB
// 00007FF6F838BC60
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           redThreshold                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           greenThreshold                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blueThreshold                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillThresholdRGBColorsAllFramesRGB(int* AnimationID, int* redThreshold, int* greenThreshold, int* blueThreshold, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGB");

	UChromaSDKPluginBPLibrary_FillThresholdRGBColorsAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.redThreshold = redThreshold;
	params.greenThreshold = greenThreshold;
	params.blueThreshold = blueThreshold;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGBName
// 00007FF6F838B9E0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           minThreshold                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           minRed                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           minGreen                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           minBlue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           maxThreshold                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           maxRed                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           maxGreen                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           maxBlue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillThresholdColorsMinMaxAllFramesRGBName(class FString* animationName, int* minThreshold, int* minRed, int* minGreen, int* minBlue, int* maxThreshold, int* maxRed, int* maxGreen, int* maxBlue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGBName");

	UChromaSDKPluginBPLibrary_FillThresholdColorsMinMaxAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.minThreshold = minThreshold;
	params.minRed = minRed;
	params.minGreen = minGreen;
	params.minBlue = minBlue;
	params.maxThreshold = maxThreshold;
	params.maxRed = maxRed;
	params.maxGreen = maxGreen;
	params.maxBlue = maxBlue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGB
// 00007FF6F838B780
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           minThreshold                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           minRed                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           minGreen                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           minBlue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           maxThreshold                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           maxRed                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           maxGreen                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           maxBlue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillThresholdColorsMinMaxAllFramesRGB(int* AnimationID, int* minThreshold, int* minRed, int* minGreen, int* minBlue, int* maxThreshold, int* maxRed, int* maxGreen, int* maxBlue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGB");

	UChromaSDKPluginBPLibrary_FillThresholdColorsMinMaxAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.minThreshold = minThreshold;
	params.minRed = minRed;
	params.minGreen = minGreen;
	params.minBlue = minBlue;
	params.maxThreshold = maxThreshold;
	params.maxRed = maxRed;
	params.maxGreen = maxGreen;
	params.maxBlue = maxBlue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGBName
// 00007FF6F838B600
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Threshold                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillThresholdColorsAllFramesRGBName(class FString* animationName, int* Threshold, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGBName");

	UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.Threshold = Threshold;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGB
// 00007FF6F838B490
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Threshold                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillThresholdColorsAllFramesRGB(int* AnimationID, int* Threshold, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGB");

	UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.Threshold = Threshold;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesName
// 00007FF6F838B380
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Threshold                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillThresholdColorsAllFramesName(class FString* animationName, int* Threshold, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesName");

	UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesName_Params params;
	params.animationName = animationName;
	params.Threshold = Threshold;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFrames
// 00007FF6F838B280
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Threshold                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillThresholdColorsAllFrames(int* AnimationID, int* Threshold, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFrames");

	UChromaSDKPluginBPLibrary_FillThresholdColorsAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.Threshold = Threshold;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsName
// 00007FF6F838B1B0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillRandomColorsName(class FString* animationName, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsName");

	UChromaSDKPluginBPLibrary_FillRandomColorsName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteName
// 00007FF6F838B0E0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillRandomColorsBlackAndWhiteName(class FString* animationName, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteName");

	UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFramesName
// 00007FF6F838B050
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillRandomColorsBlackAndWhiteAllFramesName(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFramesName");

	UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteAllFramesName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFrames
// 00007FF6F838AFE0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillRandomColorsBlackAndWhiteAllFrames(int* AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFrames");

	UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteAllFrames_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhite
// 00007FF6F838AF30
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillRandomColorsBlackAndWhite(int* AnimationID, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhite");

	UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhite_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFramesName
// 00007FF6F838AEA0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillRandomColorsAllFramesName(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFramesName");

	UChromaSDKPluginBPLibrary_FillRandomColorsAllFramesName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFrames
// 00007FF6F838AE30
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillRandomColorsAllFrames(int* AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFrames");

	UChromaSDKPluginBPLibrary_FillRandomColorsAllFrames_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColors
// 00007FF6F838AD80
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillRandomColors(int* AnimationID, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColors");

	UChromaSDKPluginBPLibrary_FillRandomColors_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGBName
// 00007FF6F838AC00
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColorRGBName(class FString* animationName, int* frameId, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGBName");

	UChromaSDKPluginBPLibrary_FillNonZeroColorRGBName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGB
// 00007FF6F838AA90
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColorRGB(int* AnimationID, int* frameId, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGB");

	UChromaSDKPluginBPLibrary_FillNonZeroColorRGB_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorName
// 00007FF6F838A980
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColorName(class FString* animationName, int* frameId, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorName");

	UChromaSDKPluginBPLibrary_FillNonZeroColorName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGBName
// 00007FF6F838A840
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColorAllFramesRGBName(class FString* animationName, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGBName");

	UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGB
// 00007FF6F838A710
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColorAllFramesRGB(int* AnimationID, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGB");

	UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesName
// 00007FF6F838A640
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColorAllFramesName(class FString* animationName, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesName");

	UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesName_Params params;
	params.animationName = animationName;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFrames
// 00007FF6F838A580
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColorAllFrames(int* AnimationID, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFrames");

	UChromaSDKPluginBPLibrary_FillNonZeroColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColor
// 00007FF6F838A480
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColor(int* AnimationID, int* frameId, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColor");

	UChromaSDKPluginBPLibrary_FillNonZeroColor_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGBName
// 00007FF6F838A300
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillColorRGBName(class FString* animationName, int* frameId, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGBName");

	UChromaSDKPluginBPLibrary_FillColorRGBName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGB
// 00007FF6F838A190
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillColorRGB(int* AnimationID, int* frameId, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGB");

	UChromaSDKPluginBPLibrary_FillColorRGB_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorName
// 00007FF6F838A080
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillColorName(class FString* animationName, int* frameId, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorName");

	UChromaSDKPluginBPLibrary_FillColorName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGBName
// 00007FF6F8389F40
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillColorAllFramesRGBName(class FString* animationName, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGBName");

	UChromaSDKPluginBPLibrary_FillColorAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGB
// 00007FF6F8389E10
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillColorAllFramesRGB(int* AnimationID, int* red, int* green, int* blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGB");

	UChromaSDKPluginBPLibrary_FillColorAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesName
// 00007FF6F8389D40
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillColorAllFramesName(class FString* animationName, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesName");

	UChromaSDKPluginBPLibrary_FillColorAllFramesName_Params params;
	params.animationName = animationName;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFrames
// 00007FF6F8389C80
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillColorAllFrames(int* AnimationID, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFrames");

	UChromaSDKPluginBPLibrary_FillColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColor
// 00007FF6F8389B80
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FillColor(int* AnimationID, int* frameId, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColor");

	UChromaSDKPluginBPLibrary_FillColor_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFramesName
// 00007FF6F8389AB0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           fade                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FadeStartFramesName(class FString* animationName, int* fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFramesName");

	UChromaSDKPluginBPLibrary_FadeStartFramesName_Params params;
	params.animationName = animationName;
	params.fade = fade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFrames
// 00007FF6F8389A00
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           fade                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FadeStartFrames(int* AnimationID, int* fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFrames");

	UChromaSDKPluginBPLibrary_FadeStartFrames_Params params;
	params.AnimationID = AnimationID;
	params.fade = fade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFramesName
// 00007FF6F8389930
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           fade                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FadeEndFramesName(class FString* animationName, int* fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFramesName");

	UChromaSDKPluginBPLibrary_FadeEndFramesName_Params params;
	params.animationName = animationName;
	params.fade = fade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFrames
// 00007FF6F8389880
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           fade                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_FadeEndFrames(int* AnimationID, int* fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFrames");

	UChromaSDKPluginBPLibrary_FadeEndFrames_Params params;
	params.AnimationID = AnimationID;
	params.fade = fade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFramesName
// 00007FF6F83897F0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_DuplicateMirrorFramesName(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFramesName");

	UChromaSDKPluginBPLibrary_DuplicateMirrorFramesName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFrames
// 00007FF6F8389780
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_DuplicateMirrorFrames(int* AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFrames");

	UChromaSDKPluginBPLibrary_DuplicateMirrorFrames_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFramesName
// 00007FF6F83896F0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_DuplicateFramesName(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFramesName");

	UChromaSDKPluginBPLibrary_DuplicateFramesName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFrames
// 00007FF6F8389680
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_DuplicateFrames(int* AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFrames");

	UChromaSDKPluginBPLibrary_DuplicateFrames_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrameName
// 00007FF6F83895B0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_DuplicateFirstFrameName(class FString* animationName, int* frameCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrameName");

	UChromaSDKPluginBPLibrary_DuplicateFirstFrameName_Params params;
	params.animationName = animationName;
	params.frameCount = frameCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrame
// 00007FF6F8389500
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_DuplicateFirstFrame(int* AnimationID, int* frameCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrame");

	UChromaSDKPluginBPLibrary_DuplicateFirstFrame_Params params;
	params.AnimationID = AnimationID;
	params.frameCount = frameCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite2D
// 00007FF6F8389440
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice2DEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::STATIC_CreateRandomColorsBlackAndWhite2D(TEnumAsByte<EChromaSDKDevice2DEnum>* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite2D");

	UChromaSDKPluginBPLibrary_CreateRandomColorsBlackAndWhite2D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite1D
// 00007FF6F8389380
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice1DEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::STATIC_CreateRandomColorsBlackAndWhite1D(TEnumAsByte<EChromaSDKDevice1DEnum>* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite1D");

	UChromaSDKPluginBPLibrary_CreateRandomColorsBlackAndWhite1D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D
// 00007FF6F83892C0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice2DEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::STATIC_CreateRandomColors2D(TEnumAsByte<EChromaSDKDevice2DEnum>* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D");

	UChromaSDKPluginBPLibrary_CreateRandomColors2D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D
// 00007FF6F8389200
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice1DEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::STATIC_CreateRandomColors1D(TEnumAsByte<EChromaSDKDevice1DEnum>* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D");

	UChromaSDKPluginBPLibrary_CreateRandomColors1D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D
// 00007FF6F8389140
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice2DEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::STATIC_CreateColors2D(TEnumAsByte<EChromaSDKDevice2DEnum>* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D");

	UChromaSDKPluginBPLibrary_CreateColors2D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D
// 00007FF6F8389080
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice1DEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::STATIC_CreateColors1D(TEnumAsByte<EChromaSDKDevice1DEnum>* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D");

	UChromaSDKPluginBPLibrary_CreateColors1D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysName
// 00007FF6F8388F60
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroTargetAllKeysName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysName");

	UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffsetName
// 00007FF6F8388E40
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroTargetAllKeysAllFramesOffsetName(class FString* sourceAnimationName, class FString* targetAnimationName, int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffsetName");

	UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesOffsetName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffset
// 00007FF6F8388D50
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroTargetAllKeysAllFramesOffset(int* sourceAnimationId, int* targetAnimationId, int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffset");

	UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesOffset_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesName
// 00007FF6F8388C70
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroTargetAllKeysAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesName");

	UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFrames
// 00007FF6F8388BC0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroTargetAllKeysAllFrames(int* sourceAnimationId, int* targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFrames");

	UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeys
// 00007FF6F8388AD0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroTargetAllKeys(int* sourceAnimationId, int* targetAnimationId, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeys");

	UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeys_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorName
// 00007FF6F8388960
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeysColorName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorName");

	UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameIndex = frameIndex;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFramesName
// 00007FF6F8388820
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeysColorAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFramesName");

	UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFrames
// 00007FF6F8388710
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeysColorAllFrames(int* sourceAnimationId, int* targetAnimationId, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFrames");

	UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColor
// 00007FF6F83885C0
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeysColor(int* sourceAnimationId, int* targetAnimationId, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColor");

	UChromaSDKPluginBPLibrary_CopyNonZeroKeysColor_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameIndex = frameIndex;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColorName
// 00007FF6F8388460
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeyColorName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColorName");

	UChromaSDKPluginBPLibrary_CopyNonZeroKeyColorName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameIndex = frameIndex;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColor
// 00007FF6F8388330
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeyColor(int* sourceAnimationId, int* targetAnimationId, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColor");

	UChromaSDKPluginBPLibrary_CopyNonZeroKeyColor_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameIndex = frameIndex;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffsetName
// 00007FF6F83881D0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeysOffsetName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameId, int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffsetName");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysOffsetName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameId = frameId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffset
// 00007FF6F83880A0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeysOffset(int* sourceAnimationId, int* targetAnimationId, int* frameId, int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffset");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysOffset_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameId = frameId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysName
// 00007FF6F8387F80
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeysName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysName");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffsetName
// 00007FF6F8387E60
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeysAllFramesOffsetName(class FString* sourceAnimationName, class FString* targetAnimationName, int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffsetName");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesOffsetName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffset
// 00007FF6F8387D70
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeysAllFramesOffset(int* sourceAnimationId, int* targetAnimationId, int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffset");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesOffset_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesName
// 00007FF6F8387C90
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeysAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesName");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFrames
// 00007FF6F8387BE0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeysAllFrames(int* sourceAnimationId, int* targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFrames");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeys
// 00007FF6F8387AF0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeys(int* sourceAnimationId, int* targetAnimationId, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeys");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeys_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorName
// 00007FF6F8387980
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyKeysColorName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorName");

	UChromaSDKPluginBPLibrary_CopyKeysColorName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameIndex = frameIndex;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFramesName
// 00007FF6F8387840
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyKeysColorAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFramesName");

	UChromaSDKPluginBPLibrary_CopyKeysColorAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFrames
// 00007FF6F8387730
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyKeysColorAllFrames(int* sourceAnimationId, int* targetAnimationId, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFrames");

	UChromaSDKPluginBPLibrary_CopyKeysColorAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColor
// 00007FF6F83875E0
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyKeysColor(int* sourceAnimationId, int* targetAnimationId, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColor");

	UChromaSDKPluginBPLibrary_CopyKeysColor_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameIndex = frameIndex;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColorName
// 00007FF6F8387480
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyKeyColorName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColorName");

	UChromaSDKPluginBPLibrary_CopyKeyColorName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameIndex = frameIndex;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColor
// 00007FF6F8387350
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey>* Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyKeyColor(int* sourceAnimationId, int* targetAnimationId, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColor");

	UChromaSDKPluginBPLibrary_CopyKeyColor_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameIndex = frameIndex;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimationName
// 00007FF6F8387270
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyAnimationName(class FString* sourceAnimationName, class FString* targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimationName");

	UChromaSDKPluginBPLibrary_CopyAnimationName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimation
// 00007FF6F83871A0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyAnimation(int* sourceAnimationId, class FString* targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimation");

	UChromaSDKPluginBPLibrary_CopyAnimation_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysName
// 00007FF6F8387080
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyAllKeysName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysName");

	UChromaSDKPluginBPLibrary_CopyAllKeysName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFramesName
// 00007FF6F8386FA0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyAllKeysAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFramesName");

	UChromaSDKPluginBPLibrary_CopyAllKeysAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFrames
// 00007FF6F8386EF0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyAllKeysAllFrames(int* sourceAnimationId, int* targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFrames");

	UChromaSDKPluginBPLibrary_CopyAllKeysAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeys
// 00007FF6F8386E00
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CopyAllKeys(int* sourceAnimationId, int* targetAnimationId, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeys");

	UChromaSDKPluginBPLibrary_CopyAllKeys_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimationName
// 00007FF6F8386D70
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CloseAnimationName(class FString* animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimationName");

	UChromaSDKPluginBPLibrary_CloseAnimationName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimation
// 00007FF6F8386D00
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           AnimationID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_CloseAnimation(int* AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimation");

	UChromaSDKPluginBPLibrary_CloseAnimation_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAnimationType
// 00007FF6F8386C90
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDeviceEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_ClearAnimationType(TEnumAsByte<EChromaSDKDeviceEnum>* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAnimationType");

	UChromaSDKPluginBPLibrary_ClearAnimationType_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAll
// 00007FF6F8386C70
// (Final, Native, Static, Public, BlueprintCallable)

void UChromaSDKPluginBPLibrary::STATIC_ClearAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAll");

	UChromaSDKPluginBPLibrary_ClearAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit
// 00007FF6F8386C40
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_ChromaSDKUnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit");

	UChromaSDKPluginBPLibrary_ChromaSDKUnInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect
// 00007FF6F8386B90
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FChromaSDKGuid*         EffectId                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_ChromaSDKSetEffect(struct FChromaSDKGuid* EffectId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect");

	UChromaSDKPluginBPLibrary_ChromaSDKSetEffect_Params params;
	params.EffectId = EffectId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit
// 00007FF6F8386B60
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_ChromaSDKInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit");

	UChromaSDKPluginBPLibrary_ChromaSDKInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect
// 00007FF6F8386AB0
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FChromaSDKGuid*         EffectId                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UChromaSDKPluginBPLibrary::STATIC_ChromaSDKDeleteEffect(struct FChromaSDKGuid* EffectId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect");

	UChromaSDKPluginBPLibrary_ChromaSDKDeleteEffect_Params params;
	params.EffectId = EffectId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic
// 00007FF6F83869B0
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDeviceEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor*           colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult  ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectStatic(TEnumAsByte<EChromaSDKDeviceEnum>* Device, struct FLinearColor* colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic");

	UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectStatic_Params params;
	params.Device = Device;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone
// 00007FF6F8386910
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDeviceEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult  ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectNone(TEnumAsByte<EChromaSDKDeviceEnum>* Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone");

	UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectNone_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectKeyboardCustom2D
// 00007FF6F8386810
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FChromaSDKColors>* Colors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult  ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectKeyboardCustom2D(TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectKeyboardCustom2D");

	UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectKeyboardCustom2D_Params params;
	params.Colors = Colors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D
// 00007FF6F83866D0
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice2DEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors>* Colors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult  ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectCustom2D(TEnumAsByte<EChromaSDKDevice2DEnum>* Device, TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D");

	UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom2D_Params params;
	params.Device = Device;
	params.Colors = Colors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D
// 00007FF6F83865C0
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice1DEnum>* Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>*   Colors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult  ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectCustom1D(TEnumAsByte<EChromaSDKDevice1DEnum>* Device, TArray<struct FLinearColor>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D");

	UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom1D_Params params;
	params.Device = Device;
	params.Colors = Colors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFramesName
// 00007FF6F83864E0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_AppendAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFramesName");

	UChromaSDKPluginBPLibrary_AppendAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFrames
// 00007FF6F8386430
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_AppendAllFrames(int* sourceAnimationId, int* targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFrames");

	UChromaSDKPluginBPLibrary_AppendAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffsetName
// 00007FF6F8386310
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroTargetAllKeysAllFramesOffsetName(class FString* sourceAnimationName, class FString* targetAnimationName, int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffsetName");

	UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesOffsetName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffset
// 00007FF6F8386220
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroTargetAllKeysAllFramesOffset(int* sourceAnimationId, int* targetAnimationId, int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffset");

	UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesOffset_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesName
// 00007FF6F8386140
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroTargetAllKeysAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesName");

	UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFrames
// 00007FF6F8386090
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroTargetAllKeysAllFrames(int* sourceAnimationId, int* targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFrames");

	UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysName
// 00007FF6F8385F70
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroAllKeysName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysName");

	UChromaSDKPluginBPLibrary_AddNonZeroAllKeysName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffsetName
// 00007FF6F8385E50
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroAllKeysAllFramesOffsetName(class FString* sourceAnimationName, class FString* targetAnimationName, int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffsetName");

	UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesOffsetName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffset
// 00007FF6F8385D60
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroAllKeysAllFramesOffset(int* sourceAnimationId, int* targetAnimationId, int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffset");

	UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesOffset_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesName
// 00007FF6F8385C80
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroAllKeysAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesName");

	UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFrames
// 00007FF6F8385BD0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroAllKeysAllFrames(int* sourceAnimationId, int* targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFrames");

	UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeys
// 00007FF6F8385AE0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int*                           frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroAllKeys(int* sourceAnimationId, int* targetAnimationId, int* frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeys");

	UChromaSDKPluginBPLibrary_AddNonZeroAllKeys_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
