#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x398 - 0x378)
// WidgetBlueprintGeneratedClass Flashback.Flashback_C
class UFlashback_C : public UUIFlashbackBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAcqImage*                             Image_6;                                           // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FName>                          NewVar_0;                                          // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UFlashback_C* GetDefaultObj();

	void GetFlashBackSequence(enum class EFlashbackSequence* NewParam);
	bool InitFlashback(float Alpha, class UTexture2D* Texture, const struct FLinearColor& BackColor);
	void UpdateMaterial();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_Flashback(int32 EntryPoint);
};

}


