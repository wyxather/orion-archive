#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x3C8 - 0x2C0)
// WidgetBlueprintGeneratedClass MainMenuMissionRecordGaugeBase.MainMenuMissionRecordGaugeBase_C
class UMainMenuMissionRecordGaugeBase_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        MaxGaugePercent;                                   // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UpdateFlipBook;                                    // 0x2CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsUnEnable;                                        // 0x2CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10D7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFBImage*                              BaseGaugeFlipbook;                                 // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             BaseEmbrem;                                        // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BaseProgressUnSelect;                              // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BaseProgressSelect;                                // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BaseProgressUnEnable;                              // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BaseProgressOutFocus;                              // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BaseProgressFocus;                                 // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSTextBlock*                          BaseTextBlock;                                     // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayGaugeAnime;                                  // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           GaugeCurve;                                        // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimTime;                                          // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAcqImage*                             BaseFlagScale;                                     // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             BaseFlagBase;                                      // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFBImage*                              BaseGaugeFlipbookPair;                             // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFBImage*>                      FBCharaList;                                       // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMaterialInstanceDynamic*>      GaugeMaterialList;                                 // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_FBPart_C*                         FBCharaPart;                                       // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_FBPart_C*                         FBCharaPart_Pair;                                  // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             DrawSize;                                          // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_FBPart_C*>                 FBCharaPartList;                                   // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMaterialInstanceDynamic*>      EmblemMaterialList;                                // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsExtra;                                           // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CursorRoot;                                        // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Phase;                                             // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PhaseCount;                                        // 0x3AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URetainerBox*                          BaseGaugeRetainerBox;                              // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CONST_FOCUS_PHASE_COUNT;                           // 0x3B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CONST_FOCUS_PHASE;                                 // 0x3BC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x3C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMainMenuMissionRecordGaugeBase_C* GetDefaultObj();

	void ResetRenderPhase();
	void SetRenderPhase(int32 RenderPhase, int32 TotalPhases);
	void Set_Sub_Mission_OutFocus_Font_Size_by_Area();
	void Set_Sub_Mission_Focus_Font_Size_by_Area();
	void SetCursorVisibility(bool IsVisible);
	void GetExtraMode(bool* IsExtra);
	void SetGaugeTextureByAreaId(int32 AreaID);
	void SetEmblemTextureByAreaId(int32 AreaID);
	void SetupMaterial();
	void SetupReference();
	void SetCouplingCharaNameText(class FName OnestChara, class FName TwobdChara);
	void SetGaugeTextureFromExtraStoryCategory(enum class EEXTRA_STORY_CATEGORY Type);
	void SetGaugeTextureByPlayerId(enum class EPlayableCharacterID PlayerID);
	void SetAllCharaFlipbook();
	void SetFlipbookWithPair(class FName FlipbookName, class FName FlipbookNamePair, bool AnimationLoop, enum class EEXTRA_STORY_CATEGORY ExtraStory);
	void SetFlipbook(class FName FlipbookName, bool AnimationLoop, enum class EPlayableCharacterID CharaID);
	void SetGaugePercent(float GaugePercent);
	void SetText(class FName TextLabel);
	void TickUpdate(float InputPin);
	void SetFlipbookEnable(bool IsEnable);
	void SetSelectMode(bool IsSelect, bool IsFast);
	void UnEnable();
	void SetupGauge(float GaugePercent, bool UseAnime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OutFocus(bool IsFast);
	void Focus(bool IsFast);
	void CustomEvent_0();
	void ExecuteUbergraph_MainMenuMissionRecordGaugeBase(int32 EntryPoint);
};

}


