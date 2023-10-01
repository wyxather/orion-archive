#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_TakeOff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AIAction_TakeOff.AIAction_TakeOff_C
// 0x0008 (0x0150 - 0x0148)
class UAIAction_TakeOff_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_TakeOff.AIAction_TakeOff_C");
		return ptr;
	}


	void ExecuteUbergraph_AIAction_TakeOff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
