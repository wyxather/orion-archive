#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Punk_Anointed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Punk_Anointed.BPChar_Punk_Anointed_C
// 0x0044 (0x23F0 - 0x23AC)
class ABPChar_Punk_Anointed_C : public ABPChar_PunkShared_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x23AC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x23B0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_Anointed_Flame_Ambient;                                // 0x23B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    HandGlow_R;                                               // 0x23C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   Switch_HandGlow_R;                                        // 0x23C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    HandGlow_L;                                               // 0x23D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   Switch_HandGlow_L;                                        // 0x23D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TeleportTrail;                                            // 0x23E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAICloakComponent*                           AICloak;                                                  // 0x23E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Punk_Anointed.BPChar_Punk_Anointed_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__AICloak_K2Node_ComponentBoundEvent_0_AICloakEvent__DelegateSignature_BPChar_PsychoAnointed();
	void BndEvt__AICloak_K2Node_ComponentBoundEvent_1_AICloakEvent__DelegateSignature_BPChar_PsychoAnointed();
	void ReceiveBeginPlay();
	void AnointedFakeDeath(class AActor* Instigator);
	void BndEvt__AIBalanceState_K2Node_ComponentBoundEvent_1_AnointedDeathStateEvent__DelegateSignature_BPChar_PsychoAnointed(EAnointedDeathState DeathState);
	void BPI_Punk_Anointed_Death();
	void ExecuteUbergraph_BPChar_Punk_Anointed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
