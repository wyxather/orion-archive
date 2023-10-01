#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_OkDialog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dialog_OkDialog.Dialog_OkDialog_C
// 0x0008 (0x03C8 - 0x03C0)
class ADialog_OkDialog_C : public ADialog_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_OkDialog.Dialog_OkDialog_C");
		return ptr;
	}


	void OnBeginDialog();
	void OnEndDialog();
	void ExecuteUbergraph_Dialog_OkDialog(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
