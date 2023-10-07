#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x371 - 0x330)
// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Hear.WBP_FieldCommandPreviewPanel_Hear_C
class UWBP_FieldCommandPreviewPanel_Hear_C : public UWBP_FIeldCommandPreviewPanelBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_FieldCommandPreviewPanelTemplate_C* ConfirmTemplate;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FieldCommandPreviewPanelTemplate_C* InformationTemplate;                               // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               NPCStatusPartsWidget;                              // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USearchDetailPartsWidget_C*            SearchDetailPartsWidget;                           // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SpecialState;                                      // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpecialFlow;                                       // 0x35C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeltaTime;                                         // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RequestSpecialFlow;                                // 0x364(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveLinearColor*                     TextCurveData;                                     // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCompleteSpecialFlow;                             // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_FieldCommandPreviewPanel_Hear_C* GetDefaultObj();

	class FName GetHearScreenShotResource(bool FristTime);
	void GetCanPlayCloseSe(bool* CanPlay);
	void OnFinishFieldCommand();
	void SetupNpcStatus(class FName NPCLabel);
	void Open(bool IsFast);
	void Close(bool IsFast);
	void Cancel();
	void CanCloseState(enum class EFieldCommandPreviewMenuState* NextState);
	void AddDeltaTime(float TickDelta);
	void UpdateSpecialState(float InDeltaTime);
	void SwapTemplate();
	void Decide(enum class EFieldCommandPreviewPanelDecideAnswer* NewParam);
	void SetupInfomationTemplate();
	void SetupConfirmTemplate();
	void SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Hear(int32 EntryPoint);
};

}


