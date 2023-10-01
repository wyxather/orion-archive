#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_InputComponent_VehiclePassenger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C
// 0x0100 (0x03F0 - 0x02F0)
class UInputComponent_VehiclePassenger_C : public UGbxInputComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (Transient, DuplicateTransient)
	class AVehicleSeatPawn*                            VehicleSeat;                                              // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__6;                                         // 0x0300(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__7;                                         // 0x0378(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InputComponent_VehiclePassenger.InputComponent_VehiclePassenger_C");
		return ptr;
	}


	void IsUsePromptEnabled(bool* res);
	void Look(const struct FVector& Val);
	void K2Node_GbxInputEvent_Button_PressRelease_13_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_13_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_17_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_17_Pressed_exec();
	void ReceiveBeginPlay();
	void GbxInputEvent_3();
	void GbxInputEvent_4();
	void ExecuteUbergraph_InputComponent_VehiclePassenger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
