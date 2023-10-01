#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ScriptedLook_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AIAction_ScriptedLook.AIAction_ScriptedLook_C
// 0x0038 (0x0180 - 0x0148)
class UAIAction_ScriptedLook_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (Transient, DuplicateTransient)
	struct FGbxBlackboardKeySelector                   LookAtTarget;                                             // 0x0150(0x0010) (Edit, BlueprintVisible)
	struct FGbxBlackboardKeySelector                   LookAtUseAim;                                             // 0x0160(0x0010) (Edit, BlueprintVisible)
	struct FGbxBlackboardKeySelector                   LookAtFireWeapon;                                         // 0x0170(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_ScriptedLook.AIAction_ScriptedLook_C");
		return ptr;
	}


	void ExecuteUbergraph_AIAction_ScriptedLook(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
