#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x320 - 0x2D0)
// WidgetBlueprintGeneratedClass WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C
class UWBP_3DWorldMapStoryInfoDisplay_C : public UWorldMapStoryInfoDisplayBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ForceUnHidden;                                     // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ForceHidden;                                       // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CursorOutFocus;                                    // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CursorFocus;                                       // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             CharacterIcon1;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             CharacterIcon2;                                    // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            IconGroup;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_Sub;                                           // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_3DWorldMapStoryInfoText_C*        WorldMapStoryInfoText;                             // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_3DWorldMapStoryInfoDisplay_C* GetDefaultObj();

	void SetForceHidden(bool IsHidden);
	void InitIsFocus(enum class EWorldMapZoomType ZoomType);
	void ChangeUIFocus(bool IsFocus, bool IsFast);
	void GetCharacterIcon(enum class EPlayableCharacterID CharacterID, class UTexture2D** IconImage);
	void SetSubIcon(class UTexture2D* Texture);
	void SetCharacterIcon2(class UTexture2D* Texture);
	void SetCharacterIcon1(class UTexture2D* Texture);
	void SetOneLineText(class FName InText);
	void SetupVisibility(bool NameAndChapter, bool RecommendLevel, bool OneLineText, bool CharacterIcon1, bool CharacterIcon2, bool SubIcon);
	void SetupEpilogueStory();
	void SetupMerchantStory(const struct FWorldMapDestinationData& WorldMapDestinationData);
	void SetupOverAllFinalStory();
	void SetupCouplingStory(struct FWorldMapDestinationData& WorldMapDestinationData);
	void SetupExtraStory();
	void SetupMainStory(struct FWorldMapDestinationData& WorldMapDestinationData);
	void Setup(struct FWorldMapDestinationData& StoryInfo);
	void StopLoopAnimation();
	void StartLoopAnimation();
	void SetRecommendationLevel(int32 Level);
	void SetCapter(class FName InText);
	void SetCharacterName(class FName CharacterText);
	void Construct();
	void ExecuteUbergraph_WBP_3DWorldMapStoryInfoDisplay(int32 EntryPoint);
};

}


