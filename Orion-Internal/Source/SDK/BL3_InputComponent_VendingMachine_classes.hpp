#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_InputComponent_VendingMachine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InputComponent_VendingMachine.InputComponent_VendingMachine_C
// 0x0230 (0x0520 - 0x02F0)
class UInputComponent_VendingMachine_C : public UGbxInputComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (Transient, DuplicateTransient)
	class AVendingMachineProxy*                        VendingMachineProxy;                                      // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxInputEvent_Button_PressPulse            GbxInputEvent__1;                                         // 0x0300(0x0098)
	struct FGbxInputEvent_Button_PressPulse            GbxInputEvent__2;                                         // 0x0398(0x0098)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__3;                                         // 0x0430(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__4;                                         // 0x04A8(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InputComponent_VendingMachine.InputComponent_VendingMachine_C");
		return ptr;
	}


	void K2Node_GbxInputEvent_Button_PressPulse_0_Released_exec(float NextPulseDelay);
	void K2Node_GbxInputEvent_Button_PressPulse_0_Pulse_exec(float NextPulseDelay);
	void K2Node_GbxInputEvent_Button_PressPulse_0_InitialPulse_exec(float NextPulseDelay);
	void K2Node_GbxInputEvent_Button_PressPulse_0_Pressed_exec(float NextPulseDelay);
	void K2Node_GbxInputEvent_Button_PressPulse_11_Released_exec(float NextPulseDelay);
	void K2Node_GbxInputEvent_Button_PressPulse_11_Pulse_exec(float NextPulseDelay);
	void K2Node_GbxInputEvent_Button_PressPulse_11_InitialPulse_exec(float NextPulseDelay);
	void K2Node_GbxInputEvent_Button_PressPulse_11_Pressed_exec(float NextPulseDelay);
	void K2Node_GbxInputEvent_Button_PressRelease_1_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_1_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_2_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_2_Pressed_exec();
	void ReceiveBeginPlay();
	void GbxInputEvent_1(float NextPulseDelay);
	void GbxInputEvent_2(float NextPulseDelay);
	void K2Node_GbxInputEvent_Button_PressRelease1();
	void K2Node_GbxInputEvent_Button_PressRelease();
	void ExecuteUbergraph_InputComponent_VendingMachine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
