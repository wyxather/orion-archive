#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x378 - 0x368)
// WidgetBlueprintGeneratedClass EventBackGroundFade.EventBackGroundFade_C
class UEventBackGroundFade_C : public UUIEventBackgroundFadeBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAcqImage*                             Image_6;                                           // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEventBackGroundFade_C* GetDefaultObj();

	bool EndFadeOut();
	bool EndFadeIn();
	void UpdateMaterial();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetFadeMaterialParam(const struct FLinearColor& Color, class FName ResourceLabel);
	void ExecuteUbergraph_EventBackGroundFade(int32 EntryPoint);
};

}


