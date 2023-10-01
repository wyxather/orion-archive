#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_QuestDebug_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dialog_QuestDebug.Dialog_QuestDebug_C
// 0x000B (0x03E8 - 0x03DD)
class ADialog_QuestDebug_C : public ADialog_InGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_QuestDebug.Dialog_QuestDebug_C");
		return ptr;
	}


	void InpActEvt_Menu_K2Node_InputActionEvent_1(struct FKey* Key);
	void InpActEvt_Shift_F12_K2Node_InputKeyEvent_1(struct FKey* Key);
	void ExecuteUbergraph_Dialog_QuestDebug(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
