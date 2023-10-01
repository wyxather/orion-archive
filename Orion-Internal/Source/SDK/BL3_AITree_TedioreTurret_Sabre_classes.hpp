#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_TedioreTurret_Sabre_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AITree_TedioreTurret_Sabre.AITree_TedioreTurret_Sabre_C
// 0x0010 (0x0180 - 0x0170)
class UAITree_TedioreTurret_Sabre_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)
	class UWwiseEvent*                                 Audio_TargetFound;                                        // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AITree_TedioreTurret_Sabre.AITree_TedioreTurret_Sabre_C");
		return ptr;
	}


	void BndEvt__Priority_Shoot_or_Walk_BlackboardKey_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TedioreTurret(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__Priority_Shoot_or_Walk_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void ExecuteUbergraph_AITree_TedioreTurret_Sabre(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
