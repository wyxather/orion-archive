#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_TinkAnointed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AITree_TinkAnointed.AITree_TinkAnointed_C
// 0x0008 (0x0178 - 0x0170)
class UAITree_TinkAnointed_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AITree_TinkAnointed.AITree_TinkAnointed_C");
		return ptr;
	}


	void BndEvt__TeleportShoot_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__TeleportShoot_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__Sequence_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__Sequence_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__Retreat_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__Retreat_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__LeapDirect_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__SimpleMelee_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__SimpleMelee_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__VehTeleportGunner_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__VehTeleportGunner_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void ExecuteUbergraph_AITree_TinkAnointed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
