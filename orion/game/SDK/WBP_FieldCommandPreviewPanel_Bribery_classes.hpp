#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x358 - 0x330)
// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Bribery.WBP_FieldCommandPreviewPanel_Bribery_C
class UWBP_FieldCommandPreviewPanel_Bribery_C : public UWBP_FIeldCommandPreviewPanelBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_FieldCommandPreviewPanelTemplate_C* ConfirmTemplate;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FieldCommandPreviewPanelTemplate_C* InformationTemplate;                               // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               NPCStatusPartsWidget;                              // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USearchDetailPartsWidget_C*            SearchDetailPartsWidget;                           // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_FieldCommandPreviewPanel_Bribery_C* GetDefaultObj();

	void SetupNpcStatus(class FName NPCLabel);
	void Open(bool IsFast);
	void SetupInfomationTemplate();
	void SetupConfirmTemplate();
	void SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow);
	void Construct();
	void ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Bribery(int32 EntryPoint);
};

}


