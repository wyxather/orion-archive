#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ScriptedFollow_Combat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAction_ScriptedFollow_Combat.AIAction_ScriptedFollow_Combat_C
// 0x0008 (0x0178 - 0x0170)
class UAIAction_ScriptedFollow_Combat_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_ScriptedFollow_Combat.AIAction_ScriptedFollow_Combat_C");
		return ptr;
	}


	void ExecuteUbergraph_AIAction_ScriptedFollow_Combat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
