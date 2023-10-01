#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_Wait_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAction_Wait.AIAction_Wait_C
// 0x0008 (0x0150 - 0x0148)
class UAIAction_Wait_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_Wait.AIAction_Wait_C");
		return ptr;
	}


	void ExecuteUbergraph_AIAction_Wait(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
