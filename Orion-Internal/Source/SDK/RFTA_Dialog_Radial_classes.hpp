#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Radial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dialog_Radial.Dialog_Radial_C
// 0x000B (0x03E8 - 0x03DD)
class ADialog_Radial_C : public ADialog_InGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Radial.Dialog_Radial_C");
		return ptr;
	}


	void Init(struct FName* Radial, class UClass** EquipItemBP);
	void SetContext(class UObject** Context);
	void InpActEvt_QuickSelect1_K2Node_InputActionEvent_4(struct FKey* Key);
	void InpActEvt_QuickSelect2_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_QuickSelect3_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_QuickSelect4_K2Node_InputActionEvent_1(struct FKey* Key);
	void InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1(float* AxisValue);
	void InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2(float* AxisValue);
	void ExecuteUbergraph_Dialog_Radial(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
