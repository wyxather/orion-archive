#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_NonPlayerCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AIAction_NonPlayerCharacter.AIAction_NonPlayerCharacter_C
// 0x0008 (0x0178 - 0x0170)
class UAIAction_NonPlayerCharacter_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_NonPlayerCharacter.AIAction_NonPlayerCharacter_C");
		return ptr;
	}


	void BndEvt__ReviveSequence_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_NonPlayerCharacter(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AIAction_NonPlayerCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
