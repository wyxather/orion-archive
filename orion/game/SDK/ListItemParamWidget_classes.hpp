#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x338 - 0x260)
// WidgetBlueprintGeneratedClass ListItemParamWidget.ListItemParamWidget_C
class UListItemParamWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAcqImage*                             Image;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_182;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListColumnWidget_Col1_C*              ListColumnWidget_Col1_22;                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UParamBeforeAfterWBP_C*                Param_10;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UParamBeforeAfterWBP_C*                Param_01;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UParamBeforeAfterWBP_C*                Param_02;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UParamBeforeAfterWBP_C*                Param_03;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UParamBeforeAfterWBP_C*                Param_04;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UParamBeforeAfterWBP_C*                Param_05;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UParamBeforeAfterWBP_C*                Param_06;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UParamBeforeAfterWBP_C*                Param_07;                                          // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UParamBeforeAfterWBP_C*                Param_08;                                          // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UParamBeforeAfterWBP_C*                Param_09;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<int32>                                BaseParams;                                        // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                EquipParams_Before;                                // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                EquipParams_After;                                 // 0x2F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UParamBeforeAfterWBP_C*>        ParamWidget;                                       // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         IsInitialized;                                     // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_162C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ParamIconNames;                                    // 0x318(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          ParamMaxNames;                                     // 0x328(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UListItemParamWidget_C* GetDefaultObj();

	void ResetBeforeParamColor();
	void SetBeforeParamColor(TArray<int32>& Params);
	void UpdateParamWidgets_ShowSameParams(TArray<bool>& ShowSameParam);
	void SetAfterEquipmentParam(TArray<int32>& AfterEquipParam);
	void SetParams(struct FCharacterParam& CharacterParam, TArray<int32>& CurrentEquipParam);
	void SetAndUpdateCharacterParam(struct FCharacterParam& CharacterParam, TArray<int32>& CurrentEquipParam);
	void UpdateParamWidgets();
	void Init();
	void Construct();
	void ExecuteUbergraph_ListItemParamWidget(int32 EntryPoint);
};

}


