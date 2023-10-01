#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VehicleCombat_Outrunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AIAction_VehicleCombat_Outrunner.AIAction_VehicleCombat_Outrunner_C
// 0x0010 (0x0180 - 0x0170)
class UAIAction_VehicleCombat_Outrunner_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      NewVar_1;                                                 // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_VehicleCombat_Outrunner.AIAction_VehicleCombat_Outrunner_C");
		return ptr;
	}


	void BndEvt__VehicleEscortTarget_Multiple_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_VehicleCombat_TechOutr(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__VehicleGiveChase_Outrunner_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_VehicleCombat_Outrunner(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__Priority_15_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_VehicleCombat_Outrunner(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__VehicleApproachAndHalt_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_VehicleCombat_Outrunner(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__Priority_6_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_VehicleCombat_Outrunner(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__Priority_14_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_VehicleCombat_Outrunner(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void ExecuteUbergraph_AIAction_VehicleCombat_Outrunner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
