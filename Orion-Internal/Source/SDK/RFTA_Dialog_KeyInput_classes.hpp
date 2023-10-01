#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_KeyInput_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dialog_KeyInput.Dialog_KeyInput_C
// 0x0030 (0x03F0 - 0x03C0)
class ADialog_KeyInput_C : public ADialog_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CooldownTime;                                             // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ShiftRefCount;                                            // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ControlRefCount;                                          // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AltRefCount;                                              // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CommandRefCount;                                          // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    KeyInput;                                                 // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_KeyInput.Dialog_KeyInput_C");
		return ptr;
	}


	void IsInvalidInput(struct FKey* Key, bool* Out);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_17(struct FKey* Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_16(struct FKey* Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_15(struct FKey* Key);
	void InpActEvt_RightShift_K2Node_InputKeyEvent_14(struct FKey* Key);
	void InpActEvt_RightShift_K2Node_InputKeyEvent_13(struct FKey* Key);
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_12(struct FKey* Key);
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_11(struct FKey* Key);
	void InpActEvt_RightAlt_K2Node_InputKeyEvent_10(struct FKey* Key);
	void InpActEvt_RightAlt_K2Node_InputKeyEvent_9(struct FKey* Key);
	void InpActEvt_RightCommand_K2Node_InputKeyEvent_8(struct FKey* Key);
	void InpActEvt_RightCommand_K2Node_InputKeyEvent_7(struct FKey* Key);
	void InpActEvt_LeftCommand_K2Node_InputKeyEvent_6(struct FKey* Key);
	void InpActEvt_LeftCommand_K2Node_InputKeyEvent_5(struct FKey* Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_4(struct FKey* Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_3(struct FKey* Key);
	void InpActEvt_RightControl_K2Node_InputKeyEvent_2(struct FKey* Key);
	void InpActEvt_RightControl_K2Node_InputKeyEvent_1(struct FKey* Key);
	void OnBeginDialog();
	void ExecuteUbergraph_Dialog_KeyInput(int* EntryPoint);
	void KeyInput__DelegateSignature(struct FKey* Key, bool* InvalidInput, bool* Shift, bool* Ctrl, bool* Alt, bool* Cmd);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
