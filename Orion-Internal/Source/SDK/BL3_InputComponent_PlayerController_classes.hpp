#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_InputComponent_PlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InputComponent_PlayerController.InputComponent_PlayerController_C
// 0x0CD0 (0x0FC0 - 0x02F0)
class UInputComponent_PlayerController_C : public UGbxInputComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (Transient, DuplicateTransient)
	class AOakPlayerController*                        OakPlayerController;                                      // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxInputEvent_Button_PressHoldRelease      GbxInputEvent__7;                                         // 0x0300(0x0080)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__5;                                         // 0x0380(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__1;                                         // 0x03F8(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__11;                                        // 0x0470(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__2;                                         // 0x04E8(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__3;                                         // 0x0560(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__8;                                         // 0x05D8(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__12;                                        // 0x0650(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__13;                                        // 0x06C8(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__15;                                        // 0x0740(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__17;                                        // 0x07B8(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__18;                                        // 0x0830(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__19;                                        // 0x08A8(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__20;                                        // 0x0920(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__21;                                        // 0x0998(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__22;                                        // 0x0A10(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__23;                                        // 0x0A88(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__24;                                        // 0x0B00(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__26;                                        // 0x0B78(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__27;                                        // 0x0BF0(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__28;                                        // 0x0C68(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__29;                                        // 0x0CE0(0x0078)
	struct FGbxInputEvent_Button_PressHoldRelease      GbxInputEvent__16;                                        // 0x0D58(0x0080)
	struct FGbxInputEvent_Button_PressHoldRelease      GbxInputEvent__32;                                        // 0x0DD8(0x0080)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__4;                                         // 0x0E58(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__10;                                        // 0x0ED0(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__14;                                        // 0x0F48(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InputComponent_PlayerController.InputComponent_PlayerController_C");
		return ptr;
	}


	void GbxInpActEvt_InputAction_Discrete_OpenMissionLog_K2Node_GbxInputActionEvent_Discrete_52(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_OpenStatusMenu_K2Node_GbxInputActionEvent_Discrete_51(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_TriggerContextualPrompt_K2Node_GbxInputActionEvent_Discrete_50(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_TextChat_K2Node_GbxInputActionEvent_Discrete_49(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_OpenInventoryMenu_K2Node_GbxInputActionEvent_Discrete_48(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_PauseGame_K2Node_GbxInputActionEvent_Discrete_47(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_HandleNotification_K2Node_GbxInputActionEvent_Discrete_46(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_OpenCharacterSkillsMenu_K2Node_GbxInputActionEvent_Discrete_45(class UGbxInputActionData_Discrete* Action);
	void K2Node_GbxInputEvent_Button_PressRelease_4_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_4_Pressed_exec();
	void GbxInpActEvt_InputAction_Discrete_Chat_K2Node_GbxInputActionEvent_Discrete_44(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Chat_K2Node_GbxInputActionEvent_Discrete_43(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Trade_K2Node_GbxInputActionEvent_Discrete_42(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Emote_1_K2Node_GbxInputActionEvent_Discrete_41(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Emote_2_K2Node_GbxInputActionEvent_Discrete_40(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Emote_3_K2Node_GbxInputActionEvent_Discrete_39(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Emote_4_K2Node_GbxInputActionEvent_Discrete_38(class UGbxInputActionData_Discrete* Action);
	void K2Node_GbxInputEvent_Button_PressRelease_223_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_223_Pressed_exec();
	void GbxInpActEvt_InputAction_Discrete_Shift_K2Node_GbxInputActionEvent_Discrete_37(class UGbxInputActionData_Discrete* Action);
	void K2Node_GbxInputEvent_Button_PressRelease_35_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_35_Pressed_exec();
	void GbxInpActEvt_InputAction_Discrete_PhotoMode_K2Node_GbxInputActionEvent_Discrete_36(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_StartDuel_K2Node_GbxInputActionEvent_Discrete_35(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_AskForHelp_K2Node_GbxInputActionEvent_Discrete_34(class UGbxInputActionData_Discrete* Action);
	void K2Node_GbxInputEvent_Button_PressRelease_56_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_56_Pressed_exec();
	void GbxInpActEvt_InputAction_Discrete_OpenMap_K2Node_GbxInputActionEvent_Discrete_33(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_GuardianRank_K2Node_GbxInputActionEvent_Discrete_32(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Roster_K2Node_GbxInputActionEvent_Discrete_31(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Matchmaking_K2Node_GbxInputActionEvent_Discrete_30(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Mail_K2Node_GbxInputActionEvent_Discrete_29(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_OpenQuickMenu_K2Node_GbxInputActionEvent_Discrete_28(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_LANBrowser_K2Node_GbxInputActionEvent_Discrete_27(class UGbxInputActionData_Discrete* Action);
	void K2Node_GbxInputEvent_Button_PressHoldRelease_4_Released_exec();
	void K2Node_GbxInputEvent_Button_PressHoldRelease_4_Held_exec();
	void K2Node_GbxInputEvent_Button_PressHoldRelease_4_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_16_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_16_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_38_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_38_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_9_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_9_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_304_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_304_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_323_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_323_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_387_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_387_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressHoldRelease_3_Released_exec();
	void K2Node_GbxInputEvent_Button_PressHoldRelease_3_Held_exec();
	void K2Node_GbxInputEvent_Button_PressHoldRelease_3_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_475_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_475_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressHoldRelease_2_Released_exec();
	void K2Node_GbxInputEvent_Button_PressHoldRelease_2_Held_exec();
	void K2Node_GbxInputEvent_Button_PressHoldRelease_2_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_490_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_490_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_505_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_505_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_553_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_553_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_113_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_113_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_185_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_185_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_264_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_264_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_306_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_306_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_485_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_485_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_581_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_581_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_630_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_630_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_681_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_681_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_2_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_2_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_0_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_0_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease18();
	void K2Node_GbxInputEvent_Button_PressRelease17();
	void GbxInputEvent_1();
	void GbxInputEvent_4();
	void GbxInputEvent_7();
	void GbxInputEvent_2();
	void GbxInputEvent_8();
	void GbxInputEvent_3();
	void K2Node_GbxInputEvent_Button_PressRelease16();
	void K2Node_GbxInputEvent_Button_PressRelease15();
	void K2Node_GbxInputEvent_Button_PressRelease14();
	void K2Node_GbxInputEvent_Button_PressHoldRelease1();
	void K2Node_GbxInputEvent_Button_PressRelease13();
	void K2Node_GbxInputEvent_Button_PressHoldRelease();
	void K2Node_GbxInputEvent_Button_PressRelease12();
	void K2Node_GbxInputEvent_Button_PressRelease11();
	void K2Node_GbxInputEvent_Button_PressRelease10();
	void K2Node_GbxInputEvent_Button_PressRelease9();
	void K2Node_GbxInputEvent_Button_PressRelease8();
	void K2Node_GbxInputEvent_Button_PressRelease7();
	void K2Node_GbxInputEvent_Button_PressRelease6();
	void K2Node_GbxInputEvent_Button_PressRelease5();
	void K2Node_GbxInputEvent_Button_PressRelease4();
	void K2Node_GbxInputEvent_Button_PressRelease3();
	void K2Node_GbxInputEvent_Button_PressRelease2();
	void K2Node_GbxInputEvent_Button_PressRelease1();
	void K2Node_GbxInputEvent_Button_PressRelease();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_InputComponent_PlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
