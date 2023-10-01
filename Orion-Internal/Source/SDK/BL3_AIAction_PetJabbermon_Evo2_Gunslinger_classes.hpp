#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_PetJabbermon_Evo2_Gunslinger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AIAction_PetJabbermon_Evo2_Gunslinger.AIAction_PetJabbermon_Evo2_Gunslinger_C
// 0x0008 (0x0178 - 0x0170)
class UAIAction_PetJabbermon_Evo2_Gunslinger_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_PetJabbermon_Evo2_Gunslinger.AIAction_PetJabbermon_Evo2_Gunslinger_C");
		return ptr;
	}


	void BndEvt__SimpleRangedAttack_Rocket_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon_Evo2_Gunslinger(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__SimpleWeapon_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon_Evo2_Gunslinger(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AIAction_PetJabbermon_Evo2_Gunslinger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
