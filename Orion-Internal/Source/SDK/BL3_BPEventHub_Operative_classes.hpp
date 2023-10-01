#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPEventHub_Operative_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPEventHub_Operative.BPEventHub_Operative_C
// 0x0070 (0x0110 - 0x00A0)
class UBPEventHub_Operative_C : public UOakPlayerAbilityEventHub_Operative
{
public:
	struct FScriptMulticastDelegate                    OnSeeingRedActivated;                                     // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillEvent_OperativeActionSkillActivated;                 // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillEvent_OperativeGadgetModActivated;                   // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillEvent_OperativeActionSkillEnded;                     // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillEvent_OperativeSwappedPlaces;                        // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillEvent_OperativeUsedBarrier;                          // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillEvent_OperativeSetDroneManualTarget;                 // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPEventHub_Operative.BPEventHub_Operative_C");
		return ptr;
	}


	void SkillEvent_OperativeSetDroneManualTarget__DelegateSignature(class AActor* NewTarget);
	void SkillEvent_OperativeUsedBarrier__DelegateSignature(bool PickedUp);
	void SkillEvent_OperativeSwappedPlaces__DelegateSignature();
	void SkillEvent_OperativeActionSkillEnded__DelegateSignature(TEnumAsByte<EOperativeGadgets> ActionSkill);
	void SkillEvent_OperativeGadgetModActivated__DelegateSignature(TEnumAsByte<EOperativeGadgetAugments> ActionSkillMod);
	void SkillEvent_OperativeActionSkillActivated__DelegateSignature(TEnumAsByte<EOperativeGadgets> ActionSkill);
	void OnSeeingRedActivated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
