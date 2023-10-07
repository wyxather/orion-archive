#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x338 - 0x330)
// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Unavailable.WBP_FieldCommandPreviewPanel_Unavailable_C
class UWBP_FieldCommandPreviewPanel_Unavailable_C : public UWBP_FIeldCommandPreviewPanelBase_C
{
public:
	class UKSTextBlock*                          Text;                                              // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_FieldCommandPreviewPanel_Unavailable_C* GetDefaultObj();

	void SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow);
};

}


