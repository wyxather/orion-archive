#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_TinkLoot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AITree_TinkLoot.AITree_TinkLoot_C
// 0x0008 (0x0178 - 0x0170)
class UAITree_TinkLoot_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AITree_TinkLoot.AITree_TinkLoot_C");
		return ptr;
	}


	void BndEvt__DigAway_0_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkLoot(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__Patrol_0_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkLoot(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__Patrol_0_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkLoot(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__DigAway_0_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkLoot(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__Patrol_1_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkLoot(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__SimpleHide_0_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkLoot(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__SimpleMelee_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkLoot(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AITree_TinkLoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
