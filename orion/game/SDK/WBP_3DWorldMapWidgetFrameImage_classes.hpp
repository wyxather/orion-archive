#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x2E9 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_3DWorldMapWidgetFrameImage.WBP_3DWorldMapWidgetFrameImage_C
class UWBP_3DWorldMapWidgetFrameImage_C : public UAcqUserWidget
{
public:
	class UWidgetAnimation*                      ClosePlayerSelect;                                 // 0x2C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenPlayerSelect;                                  // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CloseWorldMap;                                     // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenWorldMap;                                      // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             Img_FrameImage_23;                                 // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsOpening;                                         // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_3DWorldMapWidgetFrameImage_C* GetDefaultObj();

	void PlayCloseAnim_PlayerSelect(bool IsFast);
	void PlayOpenAnim_PlayerSelect(bool IsFast);
	void PlayCloseAnim_WorldMap(bool IsFast);
	void PlayOpenAnim_WorldMap(bool IsFast);
};

}


