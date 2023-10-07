#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5A (0x31A - 0x2C0)
// WidgetBlueprintGeneratedClass NarrationMessageWidget.NarrationMessageWidget_C
class UNarrationMessageWidget_C : public UNarrationMessageWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeInAnimation;                                   // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CloseMessageNarration;                             // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UKSTextBlock*                          Message;                                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_0;                                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Timer;                                             // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Alpha;                                             // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnd;                                             // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FinishTime;                                        // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	enum class ENARRATION_MESSAGE_STATE          State;                                             // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              FontMaterial;                                      // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartRate;                                         // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TalkLabel;                                         // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayingVoice;                                    // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AlreadyCalling;                                    // 0x319(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UNarrationMessageWidget_C* GetDefaultObj();

	void CheckNewLineRemove(class FText Body, class FText* RetText);
	void UpdateState(float DeltaTime);
	void PlayFadeAnimation();
	void GetTextEndOffset(enum class ETextJustify Justification, const struct FVector2D& TextSize, struct FVector2D* TmpOffset1);
	void GetTextStartOffset(enum class ETextJustify Justification, const struct FVector2D& TextSize, struct FVector2D* TmpOffset1);
	void SettingText(class FText Body, float DrawTime, enum class ETextJustify Justification);
	void PlayVoice(const struct FTalkVoice& VoiceData);
	void SetTime(float DefaultTime);
	bool PlayMessage(class FText& Text, int32 TextJustification, bool DisableAnimation, float DrawTime, const struct FTalkVoice& VoiceData);
	void SetAnimTime(float Value);
	void UpdateFadeOut();
	void UpdateAnim();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SkipDraw();
	void PlayFadeOut();
	void Reset();
	void SetNottingLine();
	void SetBlankLine();
	void Debug_Localization(bool IsDebug);
	void WidgetAnimationEvt_FadeInAnimation_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_NarrationMessageWidget(int32 EntryPoint);
};

}


