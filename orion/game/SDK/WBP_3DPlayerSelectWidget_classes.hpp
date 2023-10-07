#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x671 - 0x650)
// WidgetBlueprintGeneratedClass WBP_3DPlayerSelectWidget.WBP_3DPlayerSelectWidget_C
class UWBP_3DPlayerSelectWidget_C : public UWBP_3DWorldMapWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x650(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsEndPlayerSelect;                                 // 0x658(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1411[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentNormalizedTIme;                             // 0x65C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDecidePlayer;                                    // 0x660(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class ETimeZoneType                     CurrentTimeZone;                                   // 0x670(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_3DPlayerSelectWidget_C* GetDefaultObj();

	void UpdateGlobe(float InDeltaTime);
	bool IsClosing();
	bool IsOpening();
	void UpdateTimeZone(enum class ETimeZoneType TimeZone);
	void OnClosedConfrimDialog(int32 SelectIndex);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void GetIconByPlayerSwitchOrder(int32 Index, class UWorldMapIconBase** Array_Element);
	void GetAutoRotateSpeed(float* Param);
	void CloseWorldMapInternal();
	void OpenWorldMapInternal();
	void GetCursorSnapDuration(float* Param);
	void GetCursorSnapDistance(float* Param);
	void FastCloseWorldMap();
	void OnEndFadeOut();
	void OnClosed();
	float Get_Current_Normalized_TIme();
	void SetCurrentNormalizedTime(float CurrentNormalizedTIme);
	void GetFastRotateGlobeLine(struct FVector2D* Param);
	void SwitchSelectCharacter(bool IsUp);
	void OnDeselectIcon();
	void OnSelectIcon();
	void CloseWorldMap();
	void CancelMenu(bool* ReturnState);
	void GetIsEndPlayerSelect(bool* GetIsFinishedPlayerSelect);
	void GetSelectedPlayer(enum class EPlayableCharacterID* Player_Chara_Id);
	void DecideIcon();
	void CreateMapIconInstance();
	void Construct();
	void RBMenu();
	void LBMenu();
	void ExecuteUbergraph_WBP_3DPlayerSelectWidget(int32 EntryPoint);
	void OnDecidePlayer__DelegateSignature();
};

}


