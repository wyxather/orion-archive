#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VehicleScriptedLeadCombat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AITree_VehicleScriptedLeadCombat.AITree_VehicleScriptedLeadCombat_C
// 0x0008 (0x0178 - 0x0170)
class UAITree_VehicleScriptedLeadCombat_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AITree_VehicleScriptedLeadCombat.AITree_VehicleScriptedLeadCombat_C");
		return ptr;
	}


	void BndEvt__LeadVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehicleScriptedLeadCombat(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AITree_VehicleScriptedLeadCombat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
