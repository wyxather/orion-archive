#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_InputComponent_GunnersNest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InputComponent_GunnersNest.InputComponent_GunnersNest_C
// 0x02E8 (0x05D8 - 0x02F0)
class UInputComponent_GunnersNest_C : public UGbxInputComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (Transient, DuplicateTransient)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__7;                                         // 0x02F8(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__9;                                         // 0x0370(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__10;                                        // 0x03E8(0x0078)
	class ASeatPawn*                                   Seat_Pawn;                                                // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxInputEvent_OakLookAxis                  GbxInputEvent__1;                                         // 0x0468(0x0080)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__2;                                         // 0x04E8(0x0078)
	struct FGbxInputEvent_Button_PressRelease          GbxInputEvent__3;                                         // 0x0560(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InputComponent_GunnersNest.InputComponent_GunnersNest_C");
		return ptr;
	}


	void Look(const struct FVector& Val);
	void K2Node_GbxInputEvent_Button_PressRelease_17_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_17_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_9_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_9_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_20_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_20_Pressed_exec();
	void K2Node_GbxInputEvent_OakLookAxis_6_def_exec(const struct FVector& Val, bool bGamePad);
	void K2Node_GbxInputEvent_Button_PressRelease_4_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_4_Pressed_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_6_Released_exec();
	void K2Node_GbxInputEvent_Button_PressRelease_6_Pressed_exec();
	void ReceiveBeginPlay();
	void GbxInputEvent_4();
	void GbxInputEvent_2();
	void GbxInputEvent_5();
	void GbxInputEvent_6(const struct FVector& Val, bool bGamePad);
	void K2Node_GbxInputEvent_Button_PressRelease1();
	void K2Node_GbxInputEvent_Button_PressRelease();
	void ExecuteUbergraph_InputComponent_GunnersNest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
