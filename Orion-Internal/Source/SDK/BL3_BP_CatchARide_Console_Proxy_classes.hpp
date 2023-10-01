#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CatchARide_Console_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CatchARide_Console_Proxy.BP_CatchARide_Console_Proxy_C
// 0x0059 (0x0549 - 0x04F0)
class ABP_CatchARide_Console_Proxy_C : public ACatchARideProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    AntenaGlow;                                               // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_CatchARide_Console_V3;                                 // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    NearbyPlayerFX_Deactivate;                                // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    NearbyPlayerFX_StartAndLoop;                              // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatInstanceScreen;                                        // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TimerHandleIN;                                            // 0x0528(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                TimerHandleLightScreen;                                   // 0x0530(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              EmissiveIntensity;                                        // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandleOUT;                                           // 0x0540(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bNearbyFXActive;                                          // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CatchARide_Console_Proxy.BP_CatchARide_Console_Proxy_C");
		return ptr;
	}


	void UserConstructionScript();
	void TurnScreenOn();
	void TurnScreenOff();
	void AfterFlickerOUT();
	void LightUpScreen();
	void AfterFlickerIN();
	void OnTurnedOn();
	void OnTurnedOff();
	void OnInteractionPossible();
	void OnInteractionNotPossible();
	void OnOwningPlayerStartedInteraction();
	void OnOwningPlayerStoppedInteraction();
	void ExecuteUbergraph_BP_CatchARide_Console_Proxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
