#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ReviveAlly_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAction_ReviveAlly.AIAction_ReviveAlly_C
// 0x0008 (0x0B98 - 0x0B90)
class UAIAction_ReviveAlly_C : public UAIAction_ReviveActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B90(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_ReviveAlly.AIAction_ReviveAlly_C");
		return ptr;
	}


	void ExecuteUbergraph_AIAction_ReviveAlly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
