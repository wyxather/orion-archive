#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ChromaSDKPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject
// 0x0050 (0x0078 - 0x0028)
class UChromaSDKPluginAnimation1DObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TEnumAsByte<EChromaSDKDevice1DEnum>                Device;                                                   // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<struct FChromaSDKColorFrame1D>              Frames;                                                   // 0x0038(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject");
		return ptr;
	}


	void Unload();
	bool IsLoaded();
};


// Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject
// 0x0050 (0x0078 - 0x0028)
class UChromaSDKPluginAnimation2DObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TEnumAsByte<EChromaSDKDevice2DEnum>                Device;                                                   // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<struct FChromaSDKColorFrame2D>              Frames;                                                   // 0x0038(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject");
		return ptr;
	}


	void Unload();
	bool IsLoaded();
};


// Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UChromaSDKPluginBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary");
		return ptr;
	}


	void STATIC_UnloadAnimationName(class FString* animationName);
	void STATIC_UnloadAnimation(int* AnimationID);
	void STATIC_TrimStartFramesName(class FString* animationName, int* numberOfFrames);
	void STATIC_TrimStartFrames(int* AnimationID, int* numberOfFrames);
	void STATIC_TrimFrameName(class FString* animationName, int* frameId);
	void STATIC_TrimFrame(int* AnimationID, int* frameId);
	void STATIC_TrimEndFramesName(class FString* animationName, int* lastFrameId);
	void STATIC_TrimEndFrames(int* AnimationID, int* lastFrameId);
	struct FLinearColor STATIC_ToLinearColor(int* colorParam);
	int STATIC_ToBGR(struct FLinearColor* colorParam);
	void STATIC_SubtractNonZeroTargetAllKeysAllFramesOffsetName(class FString* sourceAnimationName, class FString* targetAnimationName, int* Offset);
	void STATIC_SubtractNonZeroTargetAllKeysAllFramesOffset(int* sourceAnimationId, int* targetAnimationId, int* Offset);
	void STATIC_SubtractNonZeroTargetAllKeysAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName);
	void STATIC_SubtractNonZeroTargetAllKeysAllFrames(int* sourceAnimationId, int* targetAnimationId);
	void STATIC_SubtractNonZeroAllKeysName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameId);
	void STATIC_SubtractNonZeroAllKeysAllFramesOffsetName(class FString* sourceAnimationName, class FString* targetAnimationName, int* Offset);
	void STATIC_SubtractNonZeroAllKeysAllFramesOffset(int* sourceAnimationId, int* targetAnimationId, int* Offset);
	void STATIC_SubtractNonZeroAllKeysAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName);
	void STATIC_SubtractNonZeroAllKeysAllFrames(int* sourceAnimationId, int* targetAnimationId);
	void STATIC_SubtractNonZeroAllKeys(int* sourceAnimationId, int* targetAnimationId, int* frameId);
	void STATIC_StopAnimationType(TEnumAsByte<EChromaSDKDeviceEnum>* Device);
	void STATIC_StopAnimations(TArray<class FString>* animationNames);
	void STATIC_StopAnimationComposite(class FString* animationName);
	void STATIC_StopAnimation(class FString* animationName);
	void STATIC_StopAll();
	void STATIC_SetMouseLedColor(TEnumAsByte<EChromaSDKMouseLed>* led, struct FLinearColor* colorParam, TArray<struct FChromaSDKColors>* Colors);
	void STATIC_SetKeysNonZeroColorName(class FString* animationName, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam);
	void STATIC_SetKeysNonZeroColorAllFramesName(class FString* animationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam);
	void STATIC_SetKeysNonZeroColorAllFrames(int* AnimationID, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam);
	void STATIC_SetKeysNonZeroColor(int* AnimationID, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam);
	void STATIC_SetKeysColorRGBName(class FString* animationName, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, int* red, int* green, int* blue);
	void STATIC_SetKeysColorRGB(int* AnimationID, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, int* red, int* green, int* blue);
	void STATIC_SetKeysColorName(class FString* animationName, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam);
	void STATIC_SetKeysColorAllFramesRGBName(class FString* animationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, int* red, int* green, int* blue);
	void STATIC_SetKeysColorAllFramesRGB(int* AnimationID, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, int* red, int* green, int* blue);
	void STATIC_SetKeysColorAllFramesName(class FString* animationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam);
	void STATIC_SetKeysColorAllFrames(int* AnimationID, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam);
	void STATIC_SetKeysColor(int* AnimationID, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys, struct FLinearColor* colorParam);
	void STATIC_SetKeyNonZeroColorName(class FString* animationName, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam);
	void STATIC_SetKeyNonZeroColorAllFramesName(class FString* animationName, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam);
	void STATIC_SetKeyNonZeroColorAllFrames(int* AnimationID, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam);
	void STATIC_SetKeyNonZeroColor(int* AnimationID, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam);
	void STATIC_SetKeyColorName(class FString* animationName, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam);
	void STATIC_SetKeyColorAllFramesName(class FString* animationName, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam);
	void STATIC_SetKeyColorAllFrames(int* AnimationID, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam);
	void STATIC_SetKeyColor(int* AnimationID, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam);
	void STATIC_SetKeyboardKeyColor(TEnumAsByte<EChromaSDKKeyboardKey>* Key, struct FLinearColor* colorParam, TArray<struct FChromaSDKColors>* Colors);
	void STATIC_SetChromaCustomFlagName(class FString* animationName, bool* flag);
	void STATIC_SetChromaCustomColorAllFramesName(class FString* animationName);
	void STATIC_ReverseAllFramesName(class FString* animationName);
	void STATIC_ReverseAllFrames(int* AnimationID);
	void STATIC_ReduceFramesName(class FString* animationName, int* N);
	void STATIC_ReduceFrames(int* AnimationID, int* N);
	void STATIC_PreviewFrameName(class FString* animationName, int* frameId);
	int STATIC_PreviewFrame(int* AnimationID, int* frameId);
	void STATIC_PlayAnimations(TArray<class FString>* animationNames, bool* Loop);
	void STATIC_PlayAnimationName(class FString* animationName, bool* Loop);
	void STATIC_PlayAnimationComposite(class FString* animationName, bool* Loop);
	void STATIC_PlayAnimation(class FString* animationName, bool* Loop);
	void STATIC_OverrideFrameDurationName(class FString* animationName, float* Duration);
	void STATIC_OffsetNonZeroColorsName(class FString* animationName, int* frameId, int* red, int* green, int* blue);
	void STATIC_OffsetNonZeroColorsAllFramesName(class FString* animationName, int* red, int* green, int* blue);
	void STATIC_OffsetNonZeroColorsAllFrames(int* AnimationID, int* red, int* green, int* blue);
	void STATIC_OffsetNonZeroColors(int* AnimationID, int* frameId, int* red, int* green, int* blue);
	void STATIC_OffsetColorsName(class FString* animationName, int* frameId, int* red, int* green, int* blue);
	void STATIC_OffsetColorsAllFramesName(class FString* animationName, int* red, int* green, int* blue);
	void STATIC_OffsetColorsAllFrames(int* AnimationID, int* red, int* green, int* blue);
	void STATIC_OffsetColors(int* AnimationID, int* frameId, int* red, int* green, int* blue);
	void STATIC_MultiplyTargetColorLerpAllFramesName(class FString* animationName, struct FLinearColor* colorParam1, struct FLinearColor* colorParam2);
	void STATIC_MultiplyTargetColorLerpAllFrames(int* AnimationID, struct FLinearColor* colorParam1, struct FLinearColor* colorParam2);
	void STATIC_MultiplyNonZeroTargetColorLerpAllFramesName(class FString* animationName, struct FLinearColor* colorParam1, struct FLinearColor* colorParam2);
	void STATIC_MultiplyNonZeroTargetColorLerpAllFrames(int* AnimationID, struct FLinearColor* colorParam1, struct FLinearColor* colorParam2);
	void STATIC_MultiplyIntensityRGBName(class FString* animationName, int* frameId, int* red, int* green, int* blue);
	void STATIC_MultiplyIntensityRGB(int* AnimationID, int* frameId, int* red, int* green, int* blue);
	void STATIC_MultiplyIntensityName(class FString* animationName, int* frameId, float* Intensity);
	void STATIC_MultiplyIntensityColorName(class FString* animationName, int* frameId, struct FLinearColor* colorParam);
	void STATIC_MultiplyIntensityColorAllFramesName(class FString* animationName, struct FLinearColor* colorParam);
	void STATIC_MultiplyIntensityColorAllFrames(int* AnimationID, struct FLinearColor* colorParam);
	void STATIC_MultiplyIntensityColor(int* AnimationID, int* frameId, struct FLinearColor* colorParam);
	void STATIC_MultiplyIntensityAllFramesRGBName(class FString* animationName, float* redIntensity, float* greenIntensity, float* blueIntensity);
	void STATIC_MultiplyIntensityAllFramesRGB(int* AnimationID, float* redIntensity, float* greenIntensity, float* blueIntensity);
	void STATIC_MultiplyIntensityAllFramesName(class FString* animationName, float* Intensity);
	void STATIC_MultiplyIntensityAllFrames(int* AnimationID, float* Intensity);
	void STATIC_MultiplyIntensity(int* AnimationID, int* frameId, float* Intensity);
	void STATIC_MultiplyColorLerpAllFramesName(class FString* animationName, struct FLinearColor* colorParam1, struct FLinearColor* colorParam2);
	void STATIC_MultiplyColorLerpAllFrames(int* AnimationID, struct FLinearColor* colorParam1, struct FLinearColor* colorParam2);
	void STATIC_MakeBlankFramesRGBName(class FString* animationName, int* frameCount, float* Duration, int* red, int* green, int* blue);
	void STATIC_MakeBlankFramesRGB(int* AnimationID, int* frameCount, float* Duration, int* red, int* green, int* blue);
	void STATIC_MakeBlankFramesRandomName(class FString* animationName, int* frameCount, float* Duration);
	void STATIC_MakeBlankFramesRandomBlackAndWhiteName(class FString* animationName, int* frameCount, float* Duration);
	void STATIC_MakeBlankFramesRandomBlackAndWhite(int* AnimationID, int* frameCount, float* Duration);
	void STATIC_MakeBlankFramesRandom(int* AnimationID, int* frameCount, float* Duration);
	void STATIC_MakeBlankFramesName(class FString* animationName, int* frameCount, float* Duration, struct FLinearColor* colorParam);
	void STATIC_MakeBlankFrames(int* AnimationID, int* frameCount, float* Duration, struct FLinearColor* colorParam);
	void STATIC_LoadAnimationName(class FString* animationName);
	void STATIC_LoadAnimation(int* AnimationID);
	int STATIC_LerpColorBGR(int* from, int* to, float* T);
	struct FLinearColor STATIC_LerpColor(struct FLinearColor* colorParam1, struct FLinearColor* colorParam2, float* T);
	float STATIC_Lerp(float* Start, float* End, float* amt);
	bool STATIC_IsPlatformWindows();
	bool STATIC_IsInitialized();
	bool STATIC_IsAnimationTypePlaying(TEnumAsByte<EChromaSDKDeviceEnum>* Device);
	bool STATIC_IsAnimationPlaying(class FString* animationName);
	void STATIC_InvertColorsAllFramesName(class FString* animationName);
	void STATIC_InvertColorsAllFrames(int* AnimationID);
	void STATIC_InsertFrameName(class FString* animationName, int* sourceFrame, int* targetFrame);
	void STATIC_InsertFrame(int* AnimationID, int* sourceFrame, int* targetFrame);
	void STATIC_InsertDelayName(class FString* animationName, int* frameId, int* Delay);
	void STATIC_InsertDelay(int* AnimationID, int* frameId, int* Delay);
	struct FLinearColor STATIC_GetRGB(int* red, int* green, int* blue);
	int STATIC_GetPlayingAnimationId(int* Index);
	int STATIC_GetPlayingAnimationCount();
	struct FLinearColor STATIC_GetMouseLedColor(TEnumAsByte<EChromaSDKMouseLed>* led, TArray<struct FChromaSDKColors>* Colors);
	int STATIC_GetMaxRow(TEnumAsByte<EChromaSDKDevice2DEnum>* Device);
	int STATIC_GetMaxLeds(TEnumAsByte<EChromaSDKDevice1DEnum>* Device);
	int STATIC_GetMaxColumn(TEnumAsByte<EChromaSDKDevice2DEnum>* Device);
	struct FLinearColor STATIC_GetKeyColorName(class FString* animationName, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key);
	struct FLinearColor STATIC_GetKeyColor(int* AnimationID, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key);
	TEnumAsByte<EChromaSDKKeyboardKey> STATIC_GetKeyboardRazerKey(struct FKey* Key);
	struct FLinearColor STATIC_GetKeyboardKeyColor(TEnumAsByte<EChromaSDKKeyboardKey>* Key, TArray<struct FChromaSDKColors>* Colors);
	int STATIC_GetFrameCountName(class FString* animationName);
	int STATIC_GetFrameCount(int* AnimationID);
	class FString STATIC_GetAnimationName(int* AnimationID);
	int STATIC_GetAnimationIdByIndex(int* Index);
	int STATIC_GetAnimationId(class FString* animationName);
	int STATIC_GetAnimationCount();
	int STATIC_GetAnimation(class FString* animationName);
	void STATIC_FillZeroColorRGBName(class FString* animationName, int* frameId, int* red, int* green, int* blue);
	void STATIC_FillZeroColorRGB(int* AnimationID, int* frameId, int* red, int* green, int* blue);
	void STATIC_FillZeroColorName(class FString* animationName, int* frameId, struct FLinearColor* colorParam);
	void STATIC_FillZeroColorAllFramesRGBName(class FString* animationName, int* red, int* green, int* blue);
	void STATIC_FillZeroColorAllFramesRGB(int* AnimationID, int* red, int* green, int* blue);
	void STATIC_FillZeroColorAllFramesName(class FString* animationName, struct FLinearColor* colorParam);
	void STATIC_FillZeroColorAllFrames(int* AnimationID, struct FLinearColor* colorParam);
	void STATIC_FillZeroColor(int* AnimationID, int* frameId, struct FLinearColor* colorParam);
	void STATIC_FillThresholdRGBColorsAllFramesRGBName(class FString* animationName, int* redThreshold, int* greenThreshold, int* blueThreshold, int* red, int* green, int* blue);
	void STATIC_FillThresholdRGBColorsAllFramesRGB(int* AnimationID, int* redThreshold, int* greenThreshold, int* blueThreshold, int* red, int* green, int* blue);
	void STATIC_FillThresholdColorsMinMaxAllFramesRGBName(class FString* animationName, int* minThreshold, int* minRed, int* minGreen, int* minBlue, int* maxThreshold, int* maxRed, int* maxGreen, int* maxBlue);
	void STATIC_FillThresholdColorsMinMaxAllFramesRGB(int* AnimationID, int* minThreshold, int* minRed, int* minGreen, int* minBlue, int* maxThreshold, int* maxRed, int* maxGreen, int* maxBlue);
	void STATIC_FillThresholdColorsAllFramesRGBName(class FString* animationName, int* Threshold, int* red, int* green, int* blue);
	void STATIC_FillThresholdColorsAllFramesRGB(int* AnimationID, int* Threshold, int* red, int* green, int* blue);
	void STATIC_FillThresholdColorsAllFramesName(class FString* animationName, int* Threshold, struct FLinearColor* colorParam);
	void STATIC_FillThresholdColorsAllFrames(int* AnimationID, int* Threshold, struct FLinearColor* colorParam);
	void STATIC_FillRandomColorsName(class FString* animationName, int* frameId);
	void STATIC_FillRandomColorsBlackAndWhiteName(class FString* animationName, int* frameId);
	void STATIC_FillRandomColorsBlackAndWhiteAllFramesName(class FString* animationName);
	void STATIC_FillRandomColorsBlackAndWhiteAllFrames(int* AnimationID);
	void STATIC_FillRandomColorsBlackAndWhite(int* AnimationID, int* frameId);
	void STATIC_FillRandomColorsAllFramesName(class FString* animationName);
	void STATIC_FillRandomColorsAllFrames(int* AnimationID);
	void STATIC_FillRandomColors(int* AnimationID, int* frameId);
	void STATIC_FillNonZeroColorRGBName(class FString* animationName, int* frameId, int* red, int* green, int* blue);
	void STATIC_FillNonZeroColorRGB(int* AnimationID, int* frameId, int* red, int* green, int* blue);
	void STATIC_FillNonZeroColorName(class FString* animationName, int* frameId, struct FLinearColor* colorParam);
	void STATIC_FillNonZeroColorAllFramesRGBName(class FString* animationName, int* red, int* green, int* blue);
	void STATIC_FillNonZeroColorAllFramesRGB(int* AnimationID, int* red, int* green, int* blue);
	void STATIC_FillNonZeroColorAllFramesName(class FString* animationName, struct FLinearColor* colorParam);
	void STATIC_FillNonZeroColorAllFrames(int* AnimationID, struct FLinearColor* colorParam);
	void STATIC_FillNonZeroColor(int* AnimationID, int* frameId, struct FLinearColor* colorParam);
	void STATIC_FillColorRGBName(class FString* animationName, int* frameId, int* red, int* green, int* blue);
	void STATIC_FillColorRGB(int* AnimationID, int* frameId, int* red, int* green, int* blue);
	void STATIC_FillColorName(class FString* animationName, int* frameId, struct FLinearColor* colorParam);
	void STATIC_FillColorAllFramesRGBName(class FString* animationName, int* red, int* green, int* blue);
	void STATIC_FillColorAllFramesRGB(int* AnimationID, int* red, int* green, int* blue);
	void STATIC_FillColorAllFramesName(class FString* animationName, struct FLinearColor* colorParam);
	void STATIC_FillColorAllFrames(int* AnimationID, struct FLinearColor* colorParam);
	void STATIC_FillColor(int* AnimationID, int* frameId, struct FLinearColor* colorParam);
	void STATIC_FadeStartFramesName(class FString* animationName, int* fade);
	void STATIC_FadeStartFrames(int* AnimationID, int* fade);
	void STATIC_FadeEndFramesName(class FString* animationName, int* fade);
	void STATIC_FadeEndFrames(int* AnimationID, int* fade);
	void STATIC_DuplicateMirrorFramesName(class FString* animationName);
	void STATIC_DuplicateMirrorFrames(int* AnimationID);
	void STATIC_DuplicateFramesName(class FString* animationName);
	void STATIC_DuplicateFrames(int* AnimationID);
	void STATIC_DuplicateFirstFrameName(class FString* animationName, int* frameCount);
	void STATIC_DuplicateFirstFrame(int* AnimationID, int* frameCount);
	TArray<struct FChromaSDKColors> STATIC_CreateRandomColorsBlackAndWhite2D(TEnumAsByte<EChromaSDKDevice2DEnum>* Device);
	TArray<struct FLinearColor> STATIC_CreateRandomColorsBlackAndWhite1D(TEnumAsByte<EChromaSDKDevice1DEnum>* Device);
	TArray<struct FChromaSDKColors> STATIC_CreateRandomColors2D(TEnumAsByte<EChromaSDKDevice2DEnum>* Device);
	TArray<struct FLinearColor> STATIC_CreateRandomColors1D(TEnumAsByte<EChromaSDKDevice1DEnum>* Device);
	TArray<struct FChromaSDKColors> STATIC_CreateColors2D(TEnumAsByte<EChromaSDKDevice2DEnum>* Device);
	TArray<struct FLinearColor> STATIC_CreateColors1D(TEnumAsByte<EChromaSDKDevice1DEnum>* Device);
	void STATIC_CopyNonZeroTargetAllKeysName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameId);
	void STATIC_CopyNonZeroTargetAllKeysAllFramesOffsetName(class FString* sourceAnimationName, class FString* targetAnimationName, int* Offset);
	void STATIC_CopyNonZeroTargetAllKeysAllFramesOffset(int* sourceAnimationId, int* targetAnimationId, int* Offset);
	void STATIC_CopyNonZeroTargetAllKeysAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName);
	void STATIC_CopyNonZeroTargetAllKeysAllFrames(int* sourceAnimationId, int* targetAnimationId);
	void STATIC_CopyNonZeroTargetAllKeys(int* sourceAnimationId, int* targetAnimationId, int* frameId);
	void STATIC_CopyNonZeroKeysColorName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys);
	void STATIC_CopyNonZeroKeysColorAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys);
	void STATIC_CopyNonZeroKeysColorAllFrames(int* sourceAnimationId, int* targetAnimationId, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys);
	void STATIC_CopyNonZeroKeysColor(int* sourceAnimationId, int* targetAnimationId, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys);
	void STATIC_CopyNonZeroKeyColorName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key);
	void STATIC_CopyNonZeroKeyColor(int* sourceAnimationId, int* targetAnimationId, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key);
	void STATIC_CopyNonZeroAllKeysOffsetName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameId, int* Offset);
	void STATIC_CopyNonZeroAllKeysOffset(int* sourceAnimationId, int* targetAnimationId, int* frameId, int* Offset);
	void STATIC_CopyNonZeroAllKeysName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameId);
	void STATIC_CopyNonZeroAllKeysAllFramesOffsetName(class FString* sourceAnimationName, class FString* targetAnimationName, int* Offset);
	void STATIC_CopyNonZeroAllKeysAllFramesOffset(int* sourceAnimationId, int* targetAnimationId, int* Offset);
	void STATIC_CopyNonZeroAllKeysAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName);
	void STATIC_CopyNonZeroAllKeysAllFrames(int* sourceAnimationId, int* targetAnimationId);
	void STATIC_CopyNonZeroAllKeys(int* sourceAnimationId, int* targetAnimationId, int* frameId);
	void STATIC_CopyKeysColorName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys);
	void STATIC_CopyKeysColorAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys);
	void STATIC_CopyKeysColorAllFrames(int* sourceAnimationId, int* targetAnimationId, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys);
	void STATIC_CopyKeysColor(int* sourceAnimationId, int* targetAnimationId, int* frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>>* Keys);
	void STATIC_CopyKeyColorName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key);
	void STATIC_CopyKeyColor(int* sourceAnimationId, int* targetAnimationId, int* frameIndex, TEnumAsByte<EChromaSDKKeyboardKey>* Key);
	void STATIC_CopyAnimationName(class FString* sourceAnimationName, class FString* targetAnimationName);
	void STATIC_CopyAnimation(int* sourceAnimationId, class FString* targetAnimationName);
	void STATIC_CopyAllKeysName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameId);
	void STATIC_CopyAllKeysAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName);
	void STATIC_CopyAllKeysAllFrames(int* sourceAnimationId, int* targetAnimationId);
	void STATIC_CopyAllKeys(int* sourceAnimationId, int* targetAnimationId, int* frameId);
	void STATIC_CloseAnimationName(class FString* animationName);
	void STATIC_CloseAnimation(int* AnimationID);
	void STATIC_ClearAnimationType(TEnumAsByte<EChromaSDKDeviceEnum>* Device);
	void STATIC_ClearAll();
	int STATIC_ChromaSDKUnInit();
	int STATIC_ChromaSDKSetEffect(struct FChromaSDKGuid* EffectId);
	int STATIC_ChromaSDKInit();
	int STATIC_ChromaSDKDeleteEffect(struct FChromaSDKGuid* EffectId);
	struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectStatic(TEnumAsByte<EChromaSDKDeviceEnum>* Device, struct FLinearColor* colorParam);
	struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectNone(TEnumAsByte<EChromaSDKDeviceEnum>* Device);
	struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectKeyboardCustom2D(TArray<struct FChromaSDKColors>* Colors);
	struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectCustom2D(TEnumAsByte<EChromaSDKDevice2DEnum>* Device, TArray<struct FChromaSDKColors>* Colors);
	struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectCustom1D(TEnumAsByte<EChromaSDKDevice1DEnum>* Device, TArray<struct FLinearColor>* Colors);
	void STATIC_AppendAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName);
	void STATIC_AppendAllFrames(int* sourceAnimationId, int* targetAnimationId);
	void STATIC_AddNonZeroTargetAllKeysAllFramesOffsetName(class FString* sourceAnimationName, class FString* targetAnimationName, int* Offset);
	void STATIC_AddNonZeroTargetAllKeysAllFramesOffset(int* sourceAnimationId, int* targetAnimationId, int* Offset);
	void STATIC_AddNonZeroTargetAllKeysAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName);
	void STATIC_AddNonZeroTargetAllKeysAllFrames(int* sourceAnimationId, int* targetAnimationId);
	void STATIC_AddNonZeroAllKeysName(class FString* sourceAnimationName, class FString* targetAnimationName, int* frameId);
	void STATIC_AddNonZeroAllKeysAllFramesOffsetName(class FString* sourceAnimationName, class FString* targetAnimationName, int* Offset);
	void STATIC_AddNonZeroAllKeysAllFramesOffset(int* sourceAnimationId, int* targetAnimationId, int* Offset);
	void STATIC_AddNonZeroAllKeysAllFramesName(class FString* sourceAnimationName, class FString* targetAnimationName);
	void STATIC_AddNonZeroAllKeysAllFrames(int* sourceAnimationId, int* targetAnimationId);
	void STATIC_AddNonZeroAllKeys(int* sourceAnimationId, int* targetAnimationId, int* frameId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
