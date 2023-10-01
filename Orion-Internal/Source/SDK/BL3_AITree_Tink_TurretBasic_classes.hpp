#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_Tink_TurretBasic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AITree_Tink_TurretBasic.AITree_Tink_TurretBasic_C
// 0x0008 (0x0178 - 0x0170)
class UAITree_Tink_TurretBasic_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AITree_Tink_TurretBasic.AITree_Tink_TurretBasic_C");
		return ptr;
	}


	void BndEvt__Idle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_Tink_TurretBasic(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AITree_Tink_TurretBasic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
