#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_TinkShotgun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AITree_TinkShotgun.AITree_TinkShotgun_C
// 0x0008 (0x0178 - 0x0170)
class UAITree_TinkShotgun_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AITree_TinkShotgun.AITree_TinkShotgun_C");
		return ptr;
	}


	void BndEvt__Patrol_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkShotgun(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AITree_TinkShotgun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
