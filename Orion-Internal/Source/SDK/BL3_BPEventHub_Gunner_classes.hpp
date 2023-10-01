#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPEventHub_Gunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPEventHub_Gunner.BPEventHub_Gunner_C
// 0x00C0 (0x0128 - 0x0068)
class UBPEventHub_Gunner_C : public UOakPlayerAbilityEventHub_Gunner
{
public:
	struct FScriptMulticastDelegate                    SkillEvent_IronScience;                                   // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillEvent_HighVoltage;                                   // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillEvent_Capacitation;                                  // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillEvent_BronzeAgeRage_End;                             // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillEvent_BronzeAgeRage_Start;                           // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    IronBear_GundamBear_Used;                                 // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    IronBear_BubbleShield_Depleted;                           // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    IronBear_BubbleShield_StartRecharge;                      // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    IronBear_DakkaTurret_Entered;                             // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    IronBear_DakkaTurret_Emptied;                             // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    IronBear_AutoBear_Started;                                // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    IronBear_AutoBear_Ended;                                  // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPEventHub_Gunner.BPEventHub_Gunner_C");
		return ptr;
	}


	void IronBear_AutoBear_Ended__DelegateSignature(bool HasValidChargeTarget, class AActor* ChargeTarget);
	void IronBear_AutoBear_Started__DelegateSignature();
	void IronBear_DakkaTurret_Emptied__DelegateSignature(class AActor* ExitingActor);
	void IronBear_DakkaTurret_Entered__DelegateSignature(class AActor* EnteredActor);
	void IronBear_BubbleShield_StartRecharge__DelegateSignature();
	void IronBear_BubbleShield_Depleted__DelegateSignature();
	void IronBear_GundamBear_Used__DelegateSignature();
	void SkillEvent_BronzeAgeRage_Start__DelegateSignature();
	void SkillEvent_BronzeAgeRage_End__DelegateSignature();
	void SkillEvent_Capacitation__DelegateSignature();
	void SkillEvent_HighVoltage__DelegateSignature(class AActor* Enemy);
	void SkillEvent_IronScience__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
