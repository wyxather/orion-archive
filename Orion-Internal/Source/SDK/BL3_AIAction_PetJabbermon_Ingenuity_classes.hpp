#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_PetJabbermon_Ingenuity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAction_PetJabbermon_Ingenuity.AIAction_PetJabbermon_Ingenuity_C
// 0x0008 (0x0178 - 0x0170)
class UAIAction_PetJabbermon_Ingenuity_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_PetJabbermon_Ingenuity.AIAction_PetJabbermon_Ingenuity_C");
		return ptr;
	}


	void BndEvt__IngenuityBarrelToss_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon_Ingenuity(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void ExecuteUbergraph_AIAction_PetJabbermon_Ingenuity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
