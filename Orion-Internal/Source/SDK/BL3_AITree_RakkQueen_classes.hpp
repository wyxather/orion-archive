#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_RakkQueen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AITree_RakkQueen.AITree_RakkQueen_C
// 0x0010 (0x0180 - 0x0170)
class UAITree_RakkQueen_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)
	class UGbxAction*                                  AttackLoopAction;                                         // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AITree_RakkQueen.AITree_RakkQueen_C");
		return ptr;
	}


	void BndEvt__Swoop_MoveNearAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_RakkQueen(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__MeleeSwoop_MoveNearAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_RakkQueen(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__EggThrow_Close_MoveNearAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_RakkQueen(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__MeleeSwoop_MoveNearAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_RakkQueen(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__EggThrow_Close_MoveNearAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_RakkQueen(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__EggThrow_MoveNearAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_RakkQueen(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AITree_RakkQueen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
