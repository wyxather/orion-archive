#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ScriptedMoveSpline_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AIAction_ScriptedMoveSpline.AIAction_ScriptedMoveSpline_C
// 0x0008 (0x0178 - 0x0170)
class UAIAction_ScriptedMoveSpline_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_ScriptedMoveSpline.AIAction_ScriptedMoveSpline_C");
		return ptr;
	}


	void ExecuteUbergraph_AIAction_ScriptedMoveSpline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
