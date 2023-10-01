#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_PatrolHigh_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AIAction_PatrolHigh.AIAction_PatrolHigh_C
// 0x0020 (0x0190 - 0x0170)
class UAIAction_PatrolHigh_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      FidgetAction;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGbxBlackboardKeySelector                   FidgetActionKey;                                          // 0x0180(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_PatrolHigh.AIAction_PatrolHigh_C");
		return ptr;
	}


	void BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Patrol(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AIAction_PatrolHigh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
