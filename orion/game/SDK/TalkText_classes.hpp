#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x370 - 0x260)
// WidgetBlueprintGeneratedClass TalkText.TalkText_C
class UTalkText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        TextIndex;                                         // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1585[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OriginText;                                        // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        TextLen;                                           // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TextDrawCounter;                                   // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Animation;                                         // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1586[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        DrawTexts;                                         // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        TextWait;                                          // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1587[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          VoiceLabel;                                        // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  PlayingVoice;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StartTagIndex;                                     // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EndTagIndex;                                       // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TagLen;                                            // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             TextBlockSize;                                     // 0x2CC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1588[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                StartTagIndexes;                                   // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                EndTagIndexes;                                     // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                TagLens;                                           // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        TagIndex;                                          // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1589[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UKSTextBlock*                          RefTextBlock;                                      // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TmpTextWait;                                       // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TmpDoubleTextWait;                                 // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UKSTextBlock*>                  ShadowTextList;                                    // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         Play_Voice;                                        // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_158A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMJRichTextBlock*                      RefRichTextBlock;                                  // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMJRichTextBlock*>              ShadowRichTextList;                                // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FString                                ResoBoldTag;                                       // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                ResoItalicTag;                                     // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTalkText_C* GetDefaultObj();

	void RefreshText();
	void GetBoldResolutionTag(const class FString& Text, class FString* OutText);
	void GetItalicResolutionTag(const class FString& Text, class FString* OutText);
	void ReplaceTextTag(const class FString& Text, class FString* OutText);
	void GetTextWaitTime(float DefaultTime, float* Time);
	void CheckShadowTextBlock(class FText Text);
	void SetTextWait(enum class EKSLanguage Language, int32 BalloonSpeedType, int32 BalloonDoubleSpeedType);
	void GetTextBlockSize(struct FVector2D* Size);
	void UpdateTextCounter(class FString* NewParam, bool* UseTag);
	void InitAnim();
	void InitTextSize(int32 Index, struct FVector2D* OutputPin);
	void ClearText();
	void GetSize(struct FVector2D* Size);
	void PlayVoice(bool* PlayVoice);
	void Next(bool AutoNext, bool* IsEnd, int32* Index, bool* PlayVoice);
	void EndAnimation();
	void IsAnimation(bool* Animation);
	void StartAnimation();
	void SetText(TArray<class FString>& Texts, TArray<class FName>& VoiceLabel);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_TalkText(int32 EntryPoint);
};

}


