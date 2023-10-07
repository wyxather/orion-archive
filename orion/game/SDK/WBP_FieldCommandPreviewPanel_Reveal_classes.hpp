#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x358 - 0x330)
// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Reveal.WBP_FieldCommandPreviewPanel_Reveal_C
class UWBP_FieldCommandPreviewPanel_Reveal_C : public UWBP_FIeldCommandPreviewPanelBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_FieldCommandPreviewPanelTemplate_C* ConfirmTemplate;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FieldCommandPreviewPanelTemplate_C* InformationTemplate;                               // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               NPCStatusPartsWidget;                              // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USearchDetailPartsWidget_C*            SearchDetailPartsWidget;                           // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_FieldCommandPreviewPanel_Reveal_C* GetDefaultObj();

	void Open(bool IsFast);
	void SetupInfomationTemplate();
	void SetupConfirmTemplate();
	void SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow);
	void Construct();
	void ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Reveal(int32 EntryPoint);
};

}


