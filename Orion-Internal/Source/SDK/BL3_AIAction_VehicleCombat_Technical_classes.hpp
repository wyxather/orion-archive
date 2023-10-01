#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VehicleCombat_Technical_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AIAction_VehicleCombat_Technical.AIAction_VehicleCombat_Technical_C
// 0x0011 (0x0181 - 0x0170)
class UAIAction_VehicleCombat_Technical_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      NewVar_1;                                                 // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ProtectChase;                                             // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_VehicleCombat_Technical.AIAction_VehicleCombat_Technical_C");
		return ptr;
	}


	void BndEvt__Priority_12_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_VehicleCombat_Technical(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__VehicleGiveChase_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_VehicleCombat_Technical(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__VehicleEscortTarget_Multiple_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_VehicleCombat_TechOutr(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__VehicleApproachAndHalt_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_VehicleCombat_Technical(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__Priority_6_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_VehicleCombat_Technical(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AIAction_VehicleCombat_Technical(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
