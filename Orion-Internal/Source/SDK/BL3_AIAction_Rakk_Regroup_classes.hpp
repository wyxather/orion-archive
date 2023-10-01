#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_Rakk_Regroup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C
// 0x000C (0x017C - 0x0170)
class UAIAction_Rakk_Regroup_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)
	float                                              MinTurnRadius;                                            // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C");
		return ptr;
	}


	void BndEvt__SetRallyPoint_OnArrivedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_Rakk_Regroup(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__SetRallyPoint_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_Rakk_Regroup(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AIAction_Rakk_Regroup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
