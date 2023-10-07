#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x358 - 0x2C0)
// WidgetBlueprintGeneratedClass RadarMapIconWidgets.RadarMapIconWidgets_C
class URadarMapIconWidgets_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ToOutside;                                         // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ToInside;                                          // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_1;                                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             MapIcon;                                           // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadarMapRippleWidgets_C*              RadarMapRippleWidgets;                             // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ERADARMAP_ICONANIMATION_STATE     AnimationState;                                    // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGreen;                                           // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_165E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRadarMapIconParam                    IconParam;                                         // 0x2FC(0x48)(Edit, BlueprintVisible, NoDestructor)
	bool                                         IsFirstAnim;                                       // 0x344(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_165F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             OutSideScale;                                      // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             InSideScale;                                       // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URadarMapIconWidgets_C* GetDefaultObj();

	void OutsideFinishCallback();
	void SetIconSize();
	void SetLevelTriggerIcon(enum class EGameColor IconColor);
	void GetObjectType(enum class ERADARMAP_ICON_OBJ_TYPE* Obj_Type);
	void GetIconType(enum class ERADARMAP_ICON_TYPE* IconType);
	void ResetIconParam();
	void SetIconColor();
	void ResetAnimIcon();
	void Initialization();
	void IsEndLoopAnimation(class UWidgetAnimation* Animation, bool* Return);
	void GetCurrentTime(class UWidgetAnimation* Animation, float* Time);
	void SetAnimationIcon(bool IsInAnima);
	void SetupIcon(class UTexture2D* Texture, const struct FRadarMapIconParam& IconParam, class UWidget** Widget);
	void Construct();
	void ExecuteUbergraph_RadarMapIconWidgets(int32 EntryPoint);
};

}


