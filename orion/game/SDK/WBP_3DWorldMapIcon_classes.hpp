#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x420 - 0x3B0)
// WidgetBlueprintGeneratedClass WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C
class UWBP_3DWorldMapIcon_C : public UWorldMapIconBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAcqImage*                             IconImage;                                         // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_Sub;                                           // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StoryInfoList;                                     // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_3DWorldMapStoryInfoDisplay_C*> StorylInfoWidgetList;                              // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FLinearColor                          StoryColor;                                        // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CurrentLocationColor;                              // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DefaultColor;                                      // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DesitinationColor;                                 // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_3DWorldMapIcon_C* GetDefaultObj();

	struct FVector2D GetOverlapArea();
	void InitIsFocusOfStoryInfoDisplays(enum class EWorldMapZoomType ZoomType);
	void StartStoryInfoDisplayAnimIfNeeded(enum class EWorldMapZoomType ZoomType, bool IsFast);
	void SetupStoryInfoDisplays(TArray<struct FWorldMapDestinationData>& StoryList);
	void HideAllStoryInfoWidget();
	bool InitVisibility(enum class EWorldMapZoomType ZoomType);
	void StartIcconVisibilityTransitionByZoomType(enum class EWorldMapZoomType ZoomType);
	void SetupIconColor();
	void SetupIconImage();
	void Construct();
	void ExecuteUbergraph_WBP_3DWorldMapIcon(int32 EntryPoint);
};

}


