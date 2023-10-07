#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x64 (0x63C - 0x5D8)
// BlueprintGeneratedClass KSPlayerControllerBP.KSPlayerControllerBP_C
class AKSPlayerControllerBP_C : public AKSPlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidget*                               WidgetHandle;                                      // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               DialogWidgetHandle;                                // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NextLevel;                                         // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FirstDelayTime;                                    // 0x5F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RepeatDelayTime;                                   // 0x5FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       ActionController_Impl;                             // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ListPagingInput;                                   // 0x608(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MouseXAxisPressed;                                 // 0x609(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CD9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MousePressedThreshold;                             // 0x60C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseXAxisPressed_Right;                           // 0x610(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MouseYAxisPressed;                                 // 0x611(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MouseYAxisPressed_Up;                              // 0x612(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CDA[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKeyConfigParamater>           KeyConfigActionList;                               // 0x618(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FKeyConfigParamater>           KeyConfigAxisList;                                 // 0x628(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        R2TriggerThreshold;                                // 0x638(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AKSPlayerControllerBP_C* GetDefaultObj();

	void IsAnyKey(const struct FKey& InputKey, bool* Output);
	bool CheckInputType();
	bool MouseEventY(float Axis);
	bool MouseEventX(float Axis);
	void MouseYEvent(float Axis);
	void Mouse_XEvent(float Axis);
	void SettingOldConfig(bool IsRemove);
	void CanControlDebugMenu(bool* Can_Control);
	void CanControlMainMenu(bool* NewParam);
	void CanControlPlayer(bool* IsControlPlayer);
	void SetControlCharacter(class APawn* ControlCharacter, class APawn** ControledCharacter);
	void SetDialogUI(class UWidget* Dialog);
	void ClearUI();
	void SetUI(class UWidget* Widget);
	void GetWidgetHandler(class UWidget** Widget);
	void InpActEvt_Dash_K2Node_InputActionEvent_76(const struct FKey& Key);
	void InpActEvt_Dash_K2Node_InputActionEvent_75(const struct FKey& Key);
	void InpActEvt_FieldCommand_K2Node_InputActionEvent_74(const struct FKey& Key);
	void InpActEvt_PlayerAction_K2Node_InputActionEvent_73(const struct FKey& Key);
	void InpActEvt_MainMenuOpenClose_K2Node_InputActionEvent_72(const struct FKey& Key);
	void InpActEvt_MenuPlusButton_K2Node_InputActionEvent_71(const struct FKey& Key);
	void InpActEvt_MenuMinusButton_K2Node_InputActionEvent_70(const struct FKey& Key);
	void InpActEvt_BattleSpeedUpButton_K2Node_InputActionEvent_69(const struct FKey& Key);
	void InpActEvt_EventSpeedUpButton_K2Node_InputActionEvent_68(const struct FKey& Key);
	void InpActEvt_EventSpeedDownButton_K2Node_InputActionEvent_67(const struct FKey& Key);
	void InpActEvt_RadarMap_K2Node_InputActionEvent_66(const struct FKey& Key);
	void InpActEvt_ChangeTimeZone_K2Node_InputActionEvent_65(const struct FKey& Key);
	void InpActEvt_MenuUpRepeat_K2Node_InputActionEvent_64(const struct FKey& Key);
	void InpActEvt_MenuUpRepeat_K2Node_InputActionEvent_63(const struct FKey& Key);
	void InpActEvt_MenuDownRepeat_K2Node_InputActionEvent_62(const struct FKey& Key);
	void InpActEvt_MenuDownRepeat_K2Node_InputActionEvent_61(const struct FKey& Key);
	void InpActEvt_MenuRightRepeat_K2Node_InputActionEvent_60(const struct FKey& Key);
	void InpActEvt_MenuRightRepeat_K2Node_InputActionEvent_59(const struct FKey& Key);
	void InpActEvt_MenuLeftRepeat_K2Node_InputActionEvent_58(const struct FKey& Key);
	void InpActEvt_MenuLeftRepeat_K2Node_InputActionEvent_57(const struct FKey& Key);
	void InpActEvt_MenuDecideRepeat_K2Node_InputActionEvent_56(const struct FKey& Key);
	void InpActEvt_MenuDecideRepeat_K2Node_InputActionEvent_55(const struct FKey& Key);
	void InpActEvt_MenuCancelRepeat_K2Node_InputActionEvent_54(const struct FKey& Key);
	void InpActEvt_MenuCancelRepeat_K2Node_InputActionEvent_53(const struct FKey& Key);
	void InpActEvt_MenuButtonXRepeat_K2Node_InputActionEvent_52(const struct FKey& Key);
	void InpActEvt_MenuButtonXRepeat_K2Node_InputActionEvent_51(const struct FKey& Key);
	void InpActEvt_MenuButtonYRepeat_K2Node_InputActionEvent_50(const struct FKey& Key);
	void InpActEvt_MenuButtonYRepeat_K2Node_InputActionEvent_49(const struct FKey& Key);
	void InpActEvt_MenuLBRepeat_K2Node_InputActionEvent_48(const struct FKey& Key);
	void InpActEvt_MenuLBRepeat_K2Node_InputActionEvent_47(const struct FKey& Key);
	void InpActEvt_MenuRBRepeat_K2Node_InputActionEvent_46(const struct FKey& Key);
	void InpActEvt_MenuRBRepeat_K2Node_InputActionEvent_45(const struct FKey& Key);
	void InpActEvt_StartButtonRepeat_K2Node_InputActionEvent_44(const struct FKey& Key);
	void InpActEvt_StartButtonRepeat_K2Node_InputActionEvent_43(const struct FKey& Key);
	void InpActEvt_SelectButtonRepeat_K2Node_InputActionEvent_42(const struct FKey& Key);
	void InpActEvt_SelectButtonRepeat_K2Node_InputActionEvent_41(const struct FKey& Key);
	void InpActEvt_MenuRightUpRepeat_K2Node_InputActionEvent_40(const struct FKey& Key);
	void InpActEvt_MenuRightUpRepeat_K2Node_InputActionEvent_39(const struct FKey& Key);
	void InpActEvt_MenuRightDownRepeat_K2Node_InputActionEvent_38(const struct FKey& Key);
	void InpActEvt_MenuRightDownRepeat_K2Node_InputActionEvent_37(const struct FKey& Key);
	void InpActEvt_HelpScrollup_K2Node_InputActionEvent_36(const struct FKey& Key);
	void InpActEvt_HelpScrollup_K2Node_InputActionEvent_35(const struct FKey& Key);
	void InpActEvt_HelpScrollDown_K2Node_InputActionEvent_34(const struct FKey& Key);
	void InpActEvt_HelpScrollDown_K2Node_InputActionEvent_33(const struct FKey& Key);
	void InpActEvt_MenuUp_K2Node_InputActionEvent_32(const struct FKey& Key);
	void InpActEvt_MenuUp_K2Node_InputActionEvent_31(const struct FKey& Key);
	void InpActEvt_MenuDown_K2Node_InputActionEvent_30(const struct FKey& Key);
	void InpActEvt_MenuDown_K2Node_InputActionEvent_29(const struct FKey& Key);
	void InpActEvt_MenuLeft_K2Node_InputActionEvent_28(const struct FKey& Key);
	void InpActEvt_MenuLeft_K2Node_InputActionEvent_27(const struct FKey& Key);
	void InpActEvt_MenuRight_K2Node_InputActionEvent_26(const struct FKey& Key);
	void InpActEvt_MenuRight_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_MenuDecide_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_MenuCancel_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_MenuButtonX_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_MenuButtonY_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_MenuLB_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_MenuRB_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_MenuRB_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_SelectButton_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_MenuRStickButton_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_MenuLStickButton_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_MenuRightAxisUp_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_MenuRightAxisDown_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_MenuPlusButton_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_MenuMinusButton_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_AnyButton_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_MenuListPagingLeft_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_MenuListPagingRight_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_MenuRTrigger_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_MenuLTrigger_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_ChangeTimeZone_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_StartButton_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_WorldMap_ZoomIn_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_WorldMap_ZoomOut_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_ChangeStatusLeft_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_ChangeStatusRight_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpAxisEvt_Test_Gene7_K2Node_InputAxisEvent_0(float AxisValue);
	void InpAxisEvt_Test_Gene8_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0(float AxisValue);
	void InpAxisEvt_ChangeTimeZone_Axis_K2Node_InputAxisEvent_1(float AxisValue);
	void ResetKeyRepeat();
	void MouseMoveUpRepeat(bool Pressed);
	void MouseMoveDownRepeat(bool Pressed);
	void MouseMoveLeftRepeat(bool NewParam);
	void MouseMoveRightRepeat(bool NewParam);
	void InpAxisEvt_RStickX_K2Node_InputAxisEvent_60(float AxisValue);
	void InpAxisEvt_RStickY_K2Node_InputAxisEvent_70(float AxisValue);
	void InpAxisEvt_LStickX_K2Node_InputAxisEvent_20(float AxisValue);
	void InpAxisEvt_LStickY_K2Node_InputAxisEvent_26(float AxisValue);
	void InpAxisEvt_LGamePadX_K2Node_InputAxisEvent_0(float AxisValue);
	void InpAxisEvt_LGamePadY_K2Node_InputAxisEvent_1(float AxisValue);
	void MouseMoveRight(bool Pressed);
	void MouseMoveLeft(bool Press);
	void MouseMoveUp(bool Pressed);
	void MouseMoveDown(bool Pressed);
	void InpAxisEvt_WorldMap_SlowCursor_X_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_WorldMap_SlowCursor_Y_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_HelpScrollAxis_K2Node_InputAxisEvent_4(float AxisValue);
	void InpAxisEvt_ChangeTimeZone_Axis_K2Node_InputAxisEvent_5(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_253(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void DebugAddOldKeyConfig();
	void DebugRemoveOldKeyConfig();
	void ExecuteUbergraph_KSPlayerControllerBP(int32 EntryPoint);
};

}


