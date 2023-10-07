#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x3E0 - 0x2C8)
// WidgetBlueprintGeneratedClass UILoading.UILoading_C
class UUILoading_C : public UKSLoadingWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Loading;                                           // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OutFocus;                                          // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Focus;                                             // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             Imga_Doading01;                                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class ERESOLUTION_TYPE, TSoftObjectPtr<class UTexture2D>> TextureTable01;                                    // 0x2F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class ERESOLUTION_TYPE, TSoftObjectPtr<class UTexture2D>> TextureTable02;                                    // 0x340(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class ERESOLUTION_TYPE, TSoftObjectPtr<class UTexture2D>> TextureTable03;                                    // 0x390(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUILoading_C* GetDefaultObj();

	void GetLoader(class AKSSimpleLevelLoader** Loader);
	void SetBalloonManager(class UObject* BalloonManager, bool* Result);
	void IsAllManagerReady(bool* Result);
	void SetAllManagerReady(bool Ready, bool* Result);
	void SetManagerReady_DEPRICATED(bool Ready, bool* Result);
	void SetLoadReady(bool Ready, bool* Result);
	void IsManagerReady_DEPRICATED(bool* Result);
	void IsLoadReady(bool* Result);
	void SetTex(class FName ParameterName, class UTexture2D* InputPin);
	void LoadResource();
	bool IsReburnAnyTorch();
	bool IsBurnOutAllTorch();
	bool StartLoading_Inner();
	bool StopLoading_Inner();
	void RemoveTitlePawn();
	void ShowTitle();
	void Construct();
	void WidgetAnimationEvt_Focus_K2Node_WidgetAnimationEvent_0();
	void WidgetAnimationEvt_OutFocus_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_UILoading(int32 EntryPoint);
};

}


