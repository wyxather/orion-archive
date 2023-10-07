#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2D8 - 0x2C0)
// WidgetBlueprintGeneratedClass RadarMapDayNightWidget.RadarMapDayNightWidget_C
class URadarMapDayNightWidget_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      DayToNightAnim;                                    // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NightToDayAnim;                                    // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URadarMapDayNightWidget_C* GetDefaultObj();

	void InitWidget();
	void OnStartTimeZoneChange(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void Construct();
	void ExecuteUbergraph_RadarMapDayNightWidget(int32 EntryPoint);
};

}


