#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_InputComponent_VehicleGunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InputComponent_VehicleGunner.InputComponent_VehicleGunner_C
// 0x02E8 (0x05D8 - 0x02F0)
class UInputComponent_VehicleGunner_C : public UGbxInputComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (Transient, DuplicateTransient)
	class AVehicleSeatPawn*                            VehicleSeat;                                              // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__3;                                         // 0x0300(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__4;                                         // 0x0378(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__1;                                         // 0x03F0(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__5;                                         // 0x0468(0x0078)
	struct FGbxInputEvent_OakLookAxis                  GbxInputEvent__2;                                         // 0x04E0(0x0080)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__6;                                         // 0x0560(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InputComponent_VehicleGunner.InputComponent_VehicleGunner_C");
		return ptr;
	}


	void IsUsePromptEnabled(bool* res);
	void Look(const struct FVector& Val);
	void K2Node_GbxInputEvent_Button_PressRelease_13_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_13_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_17_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_17_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_9_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_9_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_20_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_20_Pressed_exec();
	void K2Node_GbxInputEvent_OakLookAxis_6_def_exec(const struct FVector& Val, bool bGamePad);
	void K2Node_GbxInputEvent_Button_PressRelease_38_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_38_Pressed_exec();
	void ReceiveBeginPlay();
	void GbxInputEvent_3();
	void GbxInputEvent_4();
	void GbxInputEvent_2();
	void GbxInputEvent_5();
	void GbxInputEvent_6(const struct FVector& Val, bool bGamePad);
	void GbxInputEvent_14();
	void ExecuteUbergraph_InputComponent_VehicleGunner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
