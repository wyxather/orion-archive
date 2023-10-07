#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2C8 - 0x2B8)
// WidgetBlueprintGeneratedClass Fade.Fade_C
class UFade_C : public UKSFade
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAcqImage*                             Image_27;                                          // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFade_C* GetDefaultObj();

	bool FadeIn(struct FLinearColor& InColor, float InEndTime);
	bool FadeOut(struct FLinearColor& InColor, float InEndTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_Fade(int32 EntryPoint);
};

}


