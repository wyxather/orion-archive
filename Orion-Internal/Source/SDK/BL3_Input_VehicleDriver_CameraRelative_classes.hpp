#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Input_VehicleDriver_CameraRelative_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Input_VehicleDriver_CameraRelative.Input_VehicleDriver_CameraRelative_C
// 0x0690 (0x0A48 - 0x03B8)
class UInput_VehicleDriver_CameraRelative_C : public UOakVehicleInputComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__1;                                         // 0x03C0(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__2;                                         // 0x0438(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__3;                                         // 0x04B0(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__4;                                         // 0x0528(0x0078)
	struct FGbxInputEvent_OakLookAxis                  GbxInputEvent__5;                                         // 0x05A0(0x0080)
	struct FGbxInputEvent_OakMoveAxis                  GbxInputEvent__6;                                         // 0x0620(0x0070)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__7;                                         // 0x0690(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__8;                                         // 0x0708(0x0078)
	struct FGbxInputEvent_OakMoveAxis                  GbxInputEvent__9;                                         // 0x0780(0x0070)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__10;                                        // 0x07F0(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__12;                                        // 0x0868(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__11;                                        // 0x08E0(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__13;                                        // 0x0958(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__14;                                        // 0x09D0(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Input_VehicleDriver_CameraRelative.Input_VehicleDriver_CameraRelative_C");
		return ptr;
	}


	void IsUsePromptEnabled(bool* res);
	void IsHovering(bool* IsHovering);
	void EBrakeReleased();
	void EBrakePressed();
	void K2Node_GbxInputEvent_Button_PressRelease_83_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_83_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_17_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_17_Pressed_exec();
	void K2Node_GbxInputEvent_OakLookAxis_0_def_exec(const struct FVector& Val, bool bGamePad);
	void K2Node_GbxInputEvent_OakMoveAxis_2_def_exec(const struct FVector& Val, bool bGamePad);
	void K2Node_GbxInputEvent_Button_PressRelease_12_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_12_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_32_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_32_Pressed_exec();
	void K2Node_GbxInputEvent_OakMoveAxis_31_def_exec(const struct FVector& Val, bool bGamePad);
	void K2Node_GbxInputEvent_Button_PressRelease_21_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_21_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_10_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_10_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_23_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_23_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_6_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_6_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_0_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_0_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_1_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_1_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_2_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_2_Pressed_exec();
	void GbxInputEvent_3();
	void GbxInputEvent_4();
	void GbxInputEvent_5(const struct FVector& Val, bool bGamePad);
	void GbxInputEvent_7(const struct FVector& Val, bool bGamePad);
	void GbxInputEvent_8();
	void GbxInputEvent_9();
	void GbxInputEvent_10(const struct FVector& Val, bool bGamePad);
	void GbxInputEvent_12();
	void GbxInputEvent_2();
	void GbxInputEvent_13();
	void GbxInputEvent_1();
	void K2Node_GbxInputEvent_Button_PressRelease2();
	void K2Node_GbxInputEvent_Button_PressRelease1();
	void K2Node_GbxInputEvent_Button_PressRelease();
	void ExecuteUbergraph_Input_VehicleDriver_CameraRelative(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
