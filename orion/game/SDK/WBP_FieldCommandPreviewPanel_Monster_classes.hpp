#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x348 - 0x330)
// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Monster.WBP_FieldCommandPreviewPanel_Monster_C
class UWBP_FieldCommandPreviewPanel_Monster_C : public UWBP_FIeldCommandPreviewPanelBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNPCStatusPartsWidget_C*               NPCStatusPartsWidget;                              // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FieldCommandPreviewPanelTemplate_C* WBP_FieldCommandPreviewPanelTemplate;              // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_FieldCommandPreviewPanel_Monster_C* GetDefaultObj();

	void SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow);
	void SetupNpcStatus(class FName NPCLabel);
	void SetupTemplate(class ABP_FCv2_FieldCommandFlowBase_C* Flow);
	void Construct();
	void ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Monster(int32 EntryPoint);
};

}


