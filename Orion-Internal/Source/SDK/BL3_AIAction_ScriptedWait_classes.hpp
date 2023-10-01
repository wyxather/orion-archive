#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ScriptedWait_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAction_ScriptedWait.AIAction_ScriptedWait_C
// 0x0008 (0x0150 - 0x0148)
class UAIAction_ScriptedWait_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_ScriptedWait.AIAction_ScriptedWait_C");
		return ptr;
	}


	void ExecuteUbergraph_AIAction_ScriptedWait(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
