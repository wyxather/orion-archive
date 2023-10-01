#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VarkidScriptedLand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AIAction_VarkidScriptedLand.AIAction_VarkidScriptedLand_C
// 0x0008 (0x0178 - 0x0170)
class UAIAction_VarkidScriptedLand_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_VarkidScriptedLand.AIAction_VarkidScriptedLand_C");
		return ptr;
	}


	void ExecuteUbergraph_AIAction_VarkidScriptedLand(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
