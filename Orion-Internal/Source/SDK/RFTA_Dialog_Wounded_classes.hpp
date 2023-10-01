#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Wounded_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dialog_Wounded.Dialog_Wounded_C
// 0x000B (0x03E8 - 0x03DD)
class ADialog_Wounded_C : public ADialog_InGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Wounded.Dialog_Wounded_C");
		return ptr;
	}


	void OnBeginDialog();
	void OnWoundedState_Event_1(class UWoundedComponent** WoundedComponent, EWoundedState* State);
	void OnEndDialog();
	void ExecuteUbergraph_Dialog_Wounded(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
