#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Ping_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dialog_Ping.Dialog_Ping_C
// 0x000D (0x03EA - 0x03DD)
class ADialog_Ping_C : public ADialog_InGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               BeganPlay;                                                // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InEmoteMenu;                                              // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Ping.Dialog_Ping_C");
		return ptr;
	}


	void PingOnRelease(bool* OnRelease);
	void MakePingSelection();
	void FireEmote();
	void ValidateAimInput();
	void ShowEmotesScreen(int* Index);
	void AddPingContext(struct FActionPing* PingContext);
	void InpActEvt_Ping_K2Node_InputActionEvent_14(struct FKey* Key);
	void InpActEvt_Ping_K2Node_InputActionEvent_13(struct FKey* Key);
	void InpActEvt_Melee_K2Node_InputActionEvent_12(struct FKey* Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_11(struct FKey* Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_10(struct FKey* Key);
	void InpActEvt_Aim_K2Node_InputActionEvent_9(struct FKey* Key);
	void InpActEvt_UI_Back_K2Node_InputActionEvent_8(struct FKey* Key);
	void InpActEvt_ToggleWeapon_K2Node_InputActionEvent_7(struct FKey* Key);
	void InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_6(struct FKey* Key);
	void InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_5(struct FKey* Key);
	void InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_4(struct FKey* Key);
	void InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_DragonHeart_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_AltFire_K2Node_InputActionEvent_1(struct FKey* Key);
	void InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_4(struct FKey* Key);
	void InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_3(struct FKey* Key);
	void InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_2(struct FKey* Key);
	void InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_1(struct FKey* Key);
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_1(float* AxisValue);
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_2(float* AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_3(float* AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_4(float* AxisValue);
	void OnBeginDialog();
	void OnEvent(struct FName* EventName);
	void OnEndDialog();
	void ExecuteUbergraph_Dialog_Ping(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
