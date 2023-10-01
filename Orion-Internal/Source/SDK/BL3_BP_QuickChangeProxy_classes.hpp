#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_QuickChangeProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_QuickChangeProxy.BP_QuickChangeProxy_C
// 0x0038 (0x0520 - 0x04E8)
class ABP_QuickChangeProxy_C : public AQuickChangeProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_QuickChange_Projector;                                 // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Quick_Change_Anim;                                        // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_QuickChangeMachine;                                    // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    NearbyPlayerFX_Deactivate;                                // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    NearbyPlayerFX_StartAndLoop;                              // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_QuickChangeProxy.BP_QuickChangeProxy_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnOwningPlayerExitedInteractRange();
	void OnOwningPlayerStartedInteraction();
	void OnOwningPlayerEnteredInteractRange();
	void OnFinalizeStopInteraction();
	void ExecuteUbergraph_BP_QuickChangeProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
