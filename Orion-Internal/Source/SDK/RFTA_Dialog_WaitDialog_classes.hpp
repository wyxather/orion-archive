#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_WaitDialog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dialog_WaitDialog.Dialog_WaitDialog_C
// 0x0008 (0x03C8 - 0x03C0)
class ADialog_WaitDialog_C : public ADialog_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_WaitDialog.Dialog_WaitDialog_C");
		return ptr;
	}


	void UpdateWidgetCaption(struct FText* NewCaption);
	void EndDialogWithFade();
	void EndDialog();
	void OnBeginDialog();
	void ExecuteUbergraph_Dialog_WaitDialog(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
