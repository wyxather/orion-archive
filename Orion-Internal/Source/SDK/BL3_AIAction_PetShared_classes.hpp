#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_PetShared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAction_PetShared.AIAction_PetShared_C
// 0x0008 (0x0178 - 0x0170)
class UAIAction_PetShared_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_PetShared.AIAction_PetShared_C");
		return ptr;
	}


	void BndEvt__PlayGbxAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__PlayGbxAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetShared(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ResetPetInteract(class AGbxCharacter* NewChar);
	void ExecuteUbergraph_AIAction_PetShared(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
